// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
#include "ad/rss/map/RssObjectResultListAnalyzer.hpp"
#include "ad/rss/map/Logging.hpp"

namespace ad {
namespace rss {
namespace map {

std::set<ad::rss::world::ObjectId> RssObjectResultListAnalyzer::getAvailableObjects() const
{
  return available_objects_;
}

ad::rss::map::RssObjectData::ConstPtr
RssObjectResultListAnalyzer::getObjectData(ad::rss::world::ObjectId const &object_id) const
{
  auto find_result = object_data_map_.find(object_id);
  if (find_result != object_data_map_.end())
  {
    return find_result->second;
  }
  return nullptr;
}

std::set<ad::rss::world::ObjectId> RssObjectResultListAnalyzer::getAvailableEgoObjects() const
{
  return available_ego_objects_;
}

ad::rss::map::RssRouteCheckResult::ConstPtr
RssObjectResultListAnalyzer::getSelectedRouteCheckResult(ad::rss::world::ObjectId const &ego_object_id) const
{
  auto find_result = selected_route_map_.find(ego_object_id);
  if (find_result != selected_route_map_.end())
  {
    return find_result->second;
  }
  return nullptr;
}

ad::rss::map::RssRouteId
RssObjectResultListAnalyzer::getCurrentRouteId(ad::rss::world::ObjectId const &ego_object_id) const
{
  auto route_check_result = getSelectedRouteCheckResult(ego_object_id);
  if (route_check_result)
  {
    return route_check_result->rss_route.route_id;
  }
  return 0;
}

std::set<ad::rss::map::RssRouteId>
RssObjectResultListAnalyzer::getAvailableRoutes(ad::rss::world::ObjectId const &ego_object_id) const
{
  std::set<ad::rss::map::RssRouteId> route_ids;
  auto find_result = is_safe_map_.find(ego_object_id);
  if (find_result != is_safe_map_.end())
  {
    for (auto const &route_safe_pair : find_result->second)
    {
      route_ids.insert(route_safe_pair.first);
    }
  }
  return route_ids;
}

bool RssObjectResultListAnalyzer::isRouteAvailable(ad::rss::world::ObjectId const &ego_object_id,
                                                   ad::rss::map::RssRouteId const &route_id) const
{
  auto find_result = is_safe_map_.find(ego_object_id);
  if (find_result != is_safe_map_.end())
  {
    auto find_route_result = find_result->second.find(route_id);
    return find_route_result != find_result->second.end();
  }
  return false;
}

void RssObjectResultListAnalyzer::updateRssObjectResultList(
  std::shared_ptr<ad::rss::map::RssObjectResultList> rss_object_result_list)
{
  rss_object_result_list_ = rss_object_result_list;

  std::map<ad::rss::world::ObjectId, std::map<ad::rss::map::RssRouteId, bool>> new_is_safe_map;
  std::map<ad::rss::world::ObjectId, ad::rss::map::RssRouteCheckResult::ConstPtr> new_selected_route_map;
  std::map<ad::rss::world::ObjectId, ad::rss::map::RssObjectData::ConstPtr> new_object_data_map;
  std::set<ad::rss::world::ObjectId> new_available_objects;
  std::set<ad::rss::world::ObjectId> new_available_ego_objects;

  if (bool(rss_object_result_list_))
  {
    for (auto const &object_check_result : *rss_object_result_list_)
    {
      auto const object_id = object_check_result.object_data.id;
      new_available_objects.insert(object_id);
      new_object_data_map[object_id]
        = ad::rss::map::RssObjectData::ConstPtr(rss_object_result_list_, &object_check_result.object_data);

      if (object_check_result.situation_check_results.size() > 0u)
      {
        new_available_ego_objects.insert(object_id);
        ad::rss::map::RssRouteId last_selected_route = getCurrentRouteId(object_id);
        ad::rss::map::RssRouteCheckResult const *selected_route = nullptr;
        ad::rss::map::RssRouteId selected_route_id = 0;
        bool first_unsafe_route_found = false;
        bool first_safe_route_found = false;
        for (auto const &route_check_result : object_check_result.situation_check_results)
        {
          auto const route_id = route_check_result.rss_route.route_id;
          if (route_id == last_selected_route)
          {
            selected_route = &route_check_result;
            selected_route_id = route_id;
          }
          new_is_safe_map[object_id][route_id] = route_check_result.proper_response.is_safe;

          if ((!first_unsafe_route_found) && (!route_check_result.proper_response.is_safe))
          {
            first_unsafe_route_found = true;
            if (route_selection_mode_ == RouteSelectionMode::FirstUnsafeRoute)
            {
              selected_route = &route_check_result;
              selected_route_id = route_id;
              last_selected_route = selected_route_id;
            }
          }
          if ((!first_safe_route_found) && (route_check_result.proper_response.is_safe))
          {
            first_safe_route_found = true;
            if (route_selection_mode_ == RouteSelectionMode::LastUnsafeRoute)
            {
              selected_route = &route_check_result;
              selected_route_id = route_id;
              last_selected_route = selected_route_id;
            }
          }

          bool route_id_is_new = false;
          auto find_result = is_safe_map_[object_id].find(route_id);
          if (find_result == is_safe_map_[object_id].end())
          {
            // route not in previous results, try parent route
            find_result = is_safe_map_[object_id].find(route_check_result.rss_route.parent_route_id);
            route_id_is_new = true;
          }
          if (find_result != is_safe_map_[object_id].end())
          {
            if (route_check_result.proper_response.is_safe != find_result->second)
            {
              getLogger()->info("rss_check_result[{}:{}]{} rss safe CHANGED {} -> {}",
                                object_id,
                                route_id,
                                route_id_is_new ? "EXT ROUTE" : "",
                                find_result->second,
                                route_check_result.proper_response.is_safe);
            }
            else
            {
              /*
                getLogger()->info("rss_check_result[{}:{}]{} rss safe: {}", object_id, route_id,
                route_id_is_new?"EXT ROUTE":"", route_check_result.proper_response.is_safe);
              */
            }
          }
          else
          {
            getLogger()->info("rss_check_result[{}:{}] NEW ROUTE: rss safe: {}",
                              object_id,
                              route_id,
                              route_check_result.proper_response.is_safe);
          }
        }

        if ((!first_unsafe_route_found) && (route_selection_mode_ == RouteSelectionMode::FirstUnsafeRoute))
        {
          if (!object_check_result.situation_check_results.empty())
          {
            selected_route = &object_check_result.situation_check_results[0];
            selected_route_id = object_check_result.situation_check_results[0].rss_route.route_id;
            last_selected_route = selected_route_id;
          }
        }

        if (last_selected_route != selected_route_id)
        {
          // search if a child route to follow is available
          for (auto const &route_check_result : object_check_result.situation_check_results)
          {
            if (route_check_result.rss_route.parent_route_id == last_selected_route)
            {
              selected_route = &route_check_result;
              selected_route_id = route_check_result.rss_route.route_id;
              last_selected_route = selected_route_id;
              break;
            }
          }
          if (last_selected_route != selected_route_id)
          {
            // fallback to the first route
            if (!object_check_result.situation_check_results.empty())
            {
              selected_route = &object_check_result.situation_check_results[0];
              selected_route_id = object_check_result.situation_check_results[0].rss_route.route_id;
              last_selected_route = selected_route_id;
            }
          }
        }
        new_selected_route_map[object_id]
          = ad::rss::map::RssRouteCheckResult::ConstPtr(rss_object_result_list_, selected_route);

        /*
          RCLCPP_INFO(get_logger(), "rss_check_result[{}] selected route: {}", object_id, selected_route_id);
        */
      }
    }
  }

  available_ego_objects_.swap(new_available_ego_objects);
  available_objects_.swap(new_available_objects);
  selected_route_map_.swap(new_selected_route_map);
  object_data_map_.swap(new_object_data_map);
  is_safe_map_.swap(new_is_safe_map);
}

} // namespace map
} // namespace rss
} // namespace ad
