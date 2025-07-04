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

#include <chrono>
#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Acceleration.hpp"
#include "ad/rss/map/TimePointOstream.hpp"
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
 * \brief DataType RssEgoVehicleDynamicsOnRoute
 *
 * Struct defining the vehicles current dynamics in respect to the respective route
 */
struct RssEgoVehicleDynamicsOnRoute
{
  /*!
   * \brief Smart pointer on RssEgoVehicleDynamicsOnRoute
   */
  typedef std::shared_ptr<RssEgoVehicleDynamicsOnRoute> Ptr;

  /*!
   * \brief Smart pointer on constant RssEgoVehicleDynamicsOnRoute
   */
  typedef std::shared_ptr<RssEgoVehicleDynamicsOnRoute const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssEgoVehicleDynamicsOnRoute() = default;

  /*!
   * \brief standard destructor
   */
  ~RssEgoVehicleDynamicsOnRoute() = default;

  /*!
   * \brief standard copy constructor
   */
  RssEgoVehicleDynamicsOnRoute(const RssEgoVehicleDynamicsOnRoute &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssEgoVehicleDynamicsOnRoute(RssEgoVehicleDynamicsOnRoute &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssEgoVehicleDynamicsOnRoute
   *
   * \returns Reference to this RssEgoVehicleDynamicsOnRoute.
   */
  RssEgoVehicleDynamicsOnRoute &operator=(const RssEgoVehicleDynamicsOnRoute &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssEgoVehicleDynamicsOnRoute
   *
   * \returns Reference to this RssEgoVehicleDynamicsOnRoute.
   */
  RssEgoVehicleDynamicsOnRoute &operator=(RssEgoVehicleDynamicsOnRoute &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssEgoVehicleDynamicsOnRoute
   *
   * \returns \c true if both RssEgoVehicleDynamicsOnRoute are equal
   */
  bool operator==(const RssEgoVehicleDynamicsOnRoute &other) const
  {
    return (last_update == other.last_update) && (route_accel_lon == other.route_accel_lon)
      && (route_accel_lat == other.route_accel_lat) && (avg_route_accel_lon == other.avg_route_accel_lon)
      && (avg_route_accel_lat == other.avg_route_accel_lat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssEgoVehicleDynamicsOnRoute.
   *
   * \returns \c true if both RssEgoVehicleDynamicsOnRoute are different
   */
  bool operator!=(const RssEgoVehicleDynamicsOnRoute &other) const
  {
    return !operator==(other);
  }

  /*!
   * The point in time of the last update of this.
   */
  std::chrono::system_clock::time_point last_update;

  /*!
   * the ego acceleration component in longitudinal route direction
   */
  ::ad::physics::Acceleration route_accel_lon{0.};

  /*!
   * the ego acceleration component in lateral route direction
   */
  ::ad::physics::Acceleration route_accel_lat{0.};

  /*!
   * the ego acceleration component in longitudinal route direction, smoothened by an average filter
   */
  ::ad::physics::Acceleration avg_route_accel_lon{0.};

  /*!
   * the ego acceleration component in lateral route direction, smoothened by an average filter
   */
  ::ad::physics::Acceleration avg_route_accel_lat{0.};
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSEGOVEHICLEDYNAMICSONROUTE
#define GEN_GUARD_AD_RSS_MAP_RSSEGOVEHICLEDYNAMICSONROUTE
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
 * \param[in] _value RssEgoVehicleDynamicsOnRoute value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssEgoVehicleDynamicsOnRoute const &_value)
{
  os << "RssEgoVehicleDynamicsOnRoute(";
  os << "last_update:";
  os << _value.last_update;
  os << ",";
  os << "route_accel_lon:";
  os << _value.route_accel_lon;
  os << ",";
  os << "route_accel_lat:";
  os << _value.route_accel_lat;
  os << ",";
  os << "avg_route_accel_lon:";
  os << _value.avg_route_accel_lon;
  os << ",";
  os << "avg_route_accel_lat:";
  os << _value.avg_route_accel_lat;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssEgoVehicleDynamicsOnRoute
 */
inline std::string to_string(::ad::rss::map::RssEgoVehicleDynamicsOnRoute const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssEgoVehicleDynamicsOnRoute> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssEgoVehicleDynamicsOnRoute const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSEGOVEHICLEDYNAMICSONROUTE
