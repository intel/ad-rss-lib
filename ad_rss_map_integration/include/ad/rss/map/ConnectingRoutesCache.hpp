// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/route/ConnectingRouteList.hpp>
#include <ad/rss/world/ObjectId.hpp>
#include <map>
#include <mutex>

/*!
 * @brief namespace rss
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

/*!
 * @brief class to cache ConnectingRouteList between vehicles to speed up world model creation
 */
class ConnectingRoutesCache
{
public:
  ConnectingRoutesCache() = default;

  ~ConnectingRoutesCache() = default;

  /*!
   * @brief clear the cache
   */
  void clear();

  /*!
   * @brief add a ConnectingRouteList of two vehicles
   */
  void addConnectingRoutes(ad::rss::world::ObjectId const &object_a,
                           ad::rss::world::ObjectId const &object_b,
                           ad::map::route::ConnectingRouteList const &connecting_route_list,
                           ad::physics::Distance const &max_connecting_route_length);

  bool getConnectingRoutes(ad::rss::world::ObjectId const &object_a,
                           ad::rss::world::ObjectId const &object_b,
                           ad::physics::Distance const &max_connecting_route_length,
                           ad::map::route::ConnectingRouteList &connecting_route_list);

private:
  bool findEntry(ad::rss::world::ObjectId const &object_a,
                 ad::rss::world::ObjectId const &object_b,
                 ad::physics::Distance const &max_connecting_route_length,
                 ad::map::route::ConnectingRouteList &connecting_route_list);

  std::mutex m_lock;

  struct ConnectingRouteStorage
  {
    ConnectingRouteStorage(ad::map::route::ConnectingRouteList const &i_connecting_route_list,
                           ad::physics::Distance const &i_max_connecting_route_length)
      : connecting_route_list(i_connecting_route_list)
      , max_connecting_route_length(i_max_connecting_route_length)
    {
    }
    ad::map::route::ConnectingRouteList connecting_route_list;
    ad::physics::Distance max_connecting_route_length;
  };
  std::map<ad::rss::world::ObjectId, std::map<ad::rss::world::ObjectId, ConnectingRouteStorage>> m_cache;
};

} // namespace map
} // namespace rss
} // namespace ad
