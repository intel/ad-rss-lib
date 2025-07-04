// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/RssObjectResultList.hpp>
#include <map>
#include <set>

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

class RssObjectResultListAnalyzer
{
public:
  RssObjectResultListAnalyzer() = default;

  enum class RouteSelectionMode
  {
    FirstUnsafeRoute,
    LastUnsafeRoute
  };
  void setRouteSelectionMode(RouteSelectionMode route_selection_mode)
  {
    route_selection_mode_ = route_selection_mode;
  }
  RouteSelectionMode getRouteSelectionMode()
  {
    return route_selection_mode_;
  }

  std::set<ad::rss::world::ObjectId> getAvailableObjects() const;
  std::set<ad::rss::world::ObjectId> getAvailableEgoObjects() const;

  void updateRssObjectResultList(std::shared_ptr<ad::rss::map::RssObjectResultList> rss_object_result_list);

  ad::rss::map::RssObjectData::ConstPtr getObjectData(ad::rss::world::ObjectId const &object_id) const;

  ad::rss::map::RssRouteCheckResult::ConstPtr
  getSelectedRouteCheckResult(ad::rss::world::ObjectId const &ego_object_id) const;

  ad::rss::map::RssRouteId getCurrentRouteId(ad::rss::world::ObjectId const &ego_object_id) const;
  std::set<ad::rss::map::RssRouteId> getAvailableRoutes(ad::rss::world::ObjectId const &ego_object_id) const;
  bool isRouteAvailable(ad::rss::world::ObjectId const &ego_object_id, ad::rss::map::RssRouteId const &route_id) const;

private:
  std::shared_ptr<ad::rss::map::RssObjectResultList> rss_object_result_list_;

  RouteSelectionMode route_selection_mode_{RouteSelectionMode::FirstUnsafeRoute};

  std::set<ad::rss::world::ObjectId> available_ego_objects_;
  std::set<ad::rss::world::ObjectId> available_objects_;
  std::map<ad::rss::world::ObjectId, std::map<ad::rss::map::RssRouteId, bool>> is_safe_map_;
  std::map<ad::rss::world::ObjectId, ad::rss::map::RssRouteCheckResult::ConstPtr> selected_route_map_;
  std::map<ad::rss::world::ObjectId, ad::rss::map::RssObjectData::ConstPtr> object_data_map_;
};

} // namespace map
} // namespace rss
} // namespace ad
