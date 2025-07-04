/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/map/route/FullRoute.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Probability.hpp"
#include "ad/rss/map/RssEgoVehicleDynamicsOnRoute.hpp"
#include "ad/rss/map/RssObjectDataOnRoute.hpp"
#include "ad/rss/map/RssRouteId.hpp"
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

/*!
 * \brief DataType RssRoute
 *
 * The route used for RSS analysis
 */
struct RssRoute
{
  /*!
   * \brief Smart pointer on RssRoute
   */
  typedef std::shared_ptr<RssRoute> Ptr;

  /*!
   * \brief Smart pointer on constant RssRoute
   */
  typedef std::shared_ptr<RssRoute const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssRoute() = default;

  /*!
   * \brief standard destructor
   */
  ~RssRoute() = default;

  /*!
   * \brief standard copy constructor
   */
  RssRoute(const RssRoute &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssRoute(RssRoute &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssRoute
   *
   * \returns Reference to this RssRoute.
   */
  RssRoute &operator=(const RssRoute &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssRoute
   *
   * \returns Reference to this RssRoute.
   */
  RssRoute &operator=(RssRoute &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRoute
   *
   * \returns \c true if both RssRoute are equal
   */
  bool operator==(const RssRoute &other) const
  {
    return (route_id == other.route_id) && (route == other.route) && (likelihood == other.likelihood)
      && (vehicle_dynamics_on_route == other.vehicle_dynamics_on_route) && (parent_route_id == other.parent_route_id)
      && (progress_on_route == other.progress_on_route) && (object_data_on_route == other.object_data_on_route);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRoute.
   *
   * \returns \c true if both RssRoute are different
   */
  bool operator!=(const RssRoute &other) const
  {
    return !operator==(other);
  }

  /*!
   * The id of the route. Unique for a specific vehicle.
   */
  ::ad::rss::map::RssRouteId route_id{0};

  /*!
   * The actual route.
   */
  ::ad::map::route::FullRoute route;

  /*!
   * The likelihood of a route.
   */
  ::ad::physics::Probability likelihood{0.0};

  /*!
   * The vehicle dynamics on the route. This entry is only present for vehicles that are handeled as ego vehicle.
   */
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute vehicle_dynamics_on_route;

  /*!
   * In cases this route was created based on the extension of another route, that parent route id is stored here to be
   * able to track route progress.
   */
  ::ad::rss::map::RssRouteId parent_route_id{0};

  /*!
   * To keep track of the progress of the vehicle within the route.
   */
  ::ad::physics::Distance progress_on_route;

  /*!
   * The object data in respect to the route
   */
  ::ad::rss::map::RssObjectDataOnRoute object_data_on_route;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSROUTE
#define GEN_GUARD_AD_RSS_MAP_RSSROUTE
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

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssRoute value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssRoute const &_value)
{
  os << "RssRoute(";
  os << "route_id:";
  os << _value.route_id;
  os << ",";
  os << "route:";
  os << _value.route;
  os << ",";
  os << "likelihood:";
  os << _value.likelihood;
  os << ",";
  os << "vehicle_dynamics_on_route:";
  os << _value.vehicle_dynamics_on_route;
  os << ",";
  os << "parent_route_id:";
  os << _value.parent_route_id;
  os << ",";
  os << "progress_on_route:";
  os << _value.progress_on_route;
  os << ",";
  os << "object_data_on_route:";
  os << _value.object_data_on_route;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssRoute
 */
inline std::string to_string(::ad::rss::map::RssRoute const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssRoute> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssRoute const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSROUTE
