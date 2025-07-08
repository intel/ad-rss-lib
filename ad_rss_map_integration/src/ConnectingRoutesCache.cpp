// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/ConnectingRoutesCache.hpp"
#include <ad/map/route/RouteOperation.hpp>

namespace ad {
namespace rss {
namespace map {

void ConnectingRoutesCache::clear()
{
  const std::lock_guard<std::mutex> lock(m_lock);
  m_cache.clear();
}

void ConnectingRoutesCache::addConnectingRoutes(ad::rss::world::ObjectId const &object_a,
                                                ad::rss::world::ObjectId const &object_b,
                                                ad::map::route::ConnectingRouteList const &connecting_route_list,
                                                ad::physics::Distance const &max_connecting_route_length)
{
  const std::lock_guard<std::mutex> lock(m_lock);
  auto insert_a_result
    = m_cache.insert(std::make_pair(object_a, std::map<ad::rss::world::ObjectId, ConnectingRouteStorage>()));
  insert_a_result.first->second.insert(
    std::make_pair(object_b, ConnectingRouteStorage(connecting_route_list, max_connecting_route_length)));
}

bool ConnectingRoutesCache::getConnectingRoutes(ad::rss::world::ObjectId const &object_a,
                                                ad::rss::world::ObjectId const &object_b,
                                                ad::physics::Distance const &max_connecting_route_length,
                                                ad::map::route::ConnectingRouteList &connecting_route_list)
{
  const std::lock_guard<std::mutex> lock(m_lock);

  auto find_result = findEntry(object_a, object_b, max_connecting_route_length, connecting_route_list);
  if (!find_result)
  {
    find_result = findEntry(object_b, object_a, max_connecting_route_length, connecting_route_list);
    if (find_result)
    {
      // invert the objects in the result
      for (auto &connecting_route : connecting_route_list)
      {
        connecting_route = ad::map::route::swapConnectingRouteObjects(connecting_route);
      }
    }
  }
  return find_result;
}

bool ConnectingRoutesCache::findEntry(ad::rss::world::ObjectId const &object_a,
                                      ad::rss::world::ObjectId const &object_b,
                                      ad::physics::Distance const &max_connecting_route_length,
                                      ad::map::route::ConnectingRouteList &connecting_route_list)
{
  auto find_a_result = m_cache.find(object_a);
  if (find_a_result != m_cache.end())
  {
    auto find_b_result = find_a_result->second.find(object_b);
    if (find_b_result != find_a_result->second.end())
    {
      connecting_route_list = find_b_result->second.connecting_route_list;
      if (connecting_route_list.empty())
      {
        // we can consider the entry only as found without connecting route existing if the desired length was searched
        // for on creation time of the cached one
        return max_connecting_route_length <= find_b_result->second.max_connecting_route_length;
      }
      return true;
    }
  }
  return false;
}

} // namespace map
} // namespace rss
} // namespace ad
