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
#include "ad/map/point/ENUHeading.hpp"
#include "ad/physics/Acceleration.hpp"
#include "ad/physics/Angle.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Speed.hpp"
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
 * \brief DataType RouteAccelerations
 *
 * Additional accelerations to be considered by the vehicle in respect to the current route.
 */
struct RouteAccelerations
{
  /*!
   * \brief Smart pointer on RouteAccelerations
   */
  typedef std::shared_ptr<RouteAccelerations> Ptr;

  /*!
   * \brief Smart pointer on constant RouteAccelerations
   */
  typedef std::shared_ptr<RouteAccelerations const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RouteAccelerations() = default;

  /*!
   * \brief standard destructor
   */
  ~RouteAccelerations() = default;

  /*!
   * \brief standard copy constructor
   */
  RouteAccelerations(const RouteAccelerations &other) = default;

  /*!
   * \brief standard move constructor
   */
  RouteAccelerations(RouteAccelerations &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RouteAccelerations
   *
   * \returns Reference to this RouteAccelerations.
   */
  RouteAccelerations &operator=(const RouteAccelerations &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RouteAccelerations
   *
   * \returns Reference to this RouteAccelerations.
   */
  RouteAccelerations &operator=(RouteAccelerations &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RouteAccelerations
   *
   * \returns \c true if both RouteAccelerations are equal
   */
  bool operator==(const RouteAccelerations &other) const
  {
    return (route_id == other.route_id) && (route_heading == other.route_heading)
      && (route_radius == other.route_radius) && (route_speed_lon == other.route_speed_lon)
      && (route_speed_lat == other.route_speed_lat) && (route_heading_delta == other.route_heading_delta)
      && (route_centripetal_acceleration == other.route_centripetal_acceleration);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RouteAccelerations.
   *
   * \returns \c true if both RouteAccelerations are different
   */
  bool operator!=(const RouteAccelerations &other) const
  {
    return !operator==(other);
  }

  /*!
   * The route id the vehicle restrictions are based on.
   */
  ::ad::rss::map::RssRouteId route_id;

  /*!
   * the considered heading of the route
   */
  ::ad::map::point::ENUHeading route_heading{6.28318530718};

  /*!
   * The considered radius of the route.
   */
  ::ad::physics::Distance route_radius;

  /*!
   * The signed speed component in longitudinal route direction.
   * The speed component is negative if the object moves in counter direction of the
   * route.
   */
  ::ad::physics::Speed route_speed_lon;

  /*!
   * The signed speed component in lateral route direction.
   */
  ::ad::physics::Speed route_speed_lat;

  /*!
   * the considered heading delta of the object in respect to the route
   */
  ::ad::physics::Angle route_heading_delta{0.0};

  /*!
   * The centripetal acceleration of the vehicle when following the current route curvature.
   */
  ::ad::physics::Acceleration route_centripetal_acceleration;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_ROUTEACCELERATIONS
#define GEN_GUARD_AD_RSS_MAP_ROUTEACCELERATIONS
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
 * \param[in] _value RouteAccelerations value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RouteAccelerations const &_value)
{
  os << "RouteAccelerations(";
  os << "route_id:";
  os << _value.route_id;
  os << ",";
  os << "route_heading:";
  os << _value.route_heading;
  os << ",";
  os << "route_radius:";
  os << _value.route_radius;
  os << ",";
  os << "route_speed_lon:";
  os << _value.route_speed_lon;
  os << ",";
  os << "route_speed_lat:";
  os << _value.route_speed_lat;
  os << ",";
  os << "route_heading_delta:";
  os << _value.route_heading_delta;
  os << ",";
  os << "route_centripetal_acceleration:";
  os << _value.route_centripetal_acceleration;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RouteAccelerations
 */
inline std::string to_string(::ad::rss::map::RouteAccelerations const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RouteAccelerations> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RouteAccelerations const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_ROUTEACCELERATIONS
