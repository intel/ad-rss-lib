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
#include "ad/map/point/ENUPoint.hpp"
#include "ad/physics/Angle.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Speed.hpp"
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
 * \brief DataType RssObjectDataOnRoute
 *
 * Object Data in respect to the respective route.
 * Especially the speed of the object is split into lateral and longitudinal components
 * according to the objects projection onto the route
 */
struct RssObjectDataOnRoute
{
  /*!
   * \brief Smart pointer on RssObjectDataOnRoute
   */
  typedef std::shared_ptr<RssObjectDataOnRoute> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectDataOnRoute
   */
  typedef std::shared_ptr<RssObjectDataOnRoute const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssObjectDataOnRoute() = default;

  /*!
   * \brief standard destructor
   */
  ~RssObjectDataOnRoute() = default;

  /*!
   * \brief standard copy constructor
   */
  RssObjectDataOnRoute(const RssObjectDataOnRoute &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssObjectDataOnRoute(RssObjectDataOnRoute &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssObjectDataOnRoute
   *
   * \returns Reference to this RssObjectDataOnRoute.
   */
  RssObjectDataOnRoute &operator=(const RssObjectDataOnRoute &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssObjectDataOnRoute
   *
   * \returns Reference to this RssObjectDataOnRoute.
   */
  RssObjectDataOnRoute &operator=(RssObjectDataOnRoute &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectDataOnRoute
   *
   * \returns \c true if both RssObjectDataOnRoute are equal
   */
  bool operator==(const RssObjectDataOnRoute &other) const
  {
    return (route_heading == other.route_heading) && (route_radius == other.route_radius)
      && (route_heading_delta == other.route_heading_delta) && (route_speed_lat == other.route_speed_lat)
      && (route_speed_lon == other.route_speed_lon) && (object_center_within_route == other.object_center_within_route)
      && (object_within_route == other.object_within_route)
      && (object_center_position_projected_on_route == other.object_center_position_projected_on_route)
      && (is_valid == other.is_valid) && (object_center_distance_to_route == other.object_center_distance_to_route)
      && (object_center_position_projected_on_lane_in_nominal_route_direction
          == other.object_center_position_projected_on_lane_in_nominal_route_direction)
      && (object_center_distance_along_route == other.object_center_distance_along_route)
      && (nominal_center_position_of_lane_in_nominal_route_direction
          == other.nominal_center_position_of_lane_in_nominal_route_direction)
      && (object_route_section_front_left == other.object_route_section_front_left)
      && (object_route_section_front_right == other.object_route_section_front_right)
      && (object_route_section_back_left == other.object_route_section_back_left)
      && (object_route_section_back_right == other.object_route_section_back_right)
      && (object_turning_center == other.object_turning_center);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectDataOnRoute.
   *
   * \returns \c true if both RssObjectDataOnRoute are different
   */
  bool operator!=(const RssObjectDataOnRoute &other) const
  {
    return !operator==(other);
  }

  /*!
   * the considered heading of the route
   */
  ::ad::map::point::ENUHeading route_heading{6.28318530718};

  /*!
   * The considered radius of the route.
   */
  ::ad::physics::Distance route_radius;

  /*!
   * the considered heading delta of the object in respect to the route
   */
  ::ad::physics::Angle route_heading_delta{0.0};

  /*!
   * The signed speed component in lateral route direction.
   */
  ::ad::physics::Speed route_speed_lat;

  /*!
   * The signed speed component in longitudinal route direction.
   * The speed component is negative if the object moves in counter direction of the
   * route.
   */
  ::ad::physics::Speed route_speed_lon;

  /*!
   * flag indicating if the object center is within the bounds of the route
   */
  bool object_center_within_route{false};

  /*!
   * flag indicating if the object is within the bounds of the route
   */
  bool object_within_route{false};

  /*!
   * The objects projected position onto the route.
   */
  ::ad::map::point::ENUPoint object_center_position_projected_on_route;

  /*!
   * Is the data valid
   */
  bool is_valid{false};

  /*!
   * The distance of the object center towards the route. This is zero if the object center is within the route.
   */
  ::ad::physics::Distance object_center_distance_to_route{0.0};

  /*!
   * The objects center position projected onto a lane in nominal route direction of
   * the route.
   * If object_center_position_projected_on_route is on a lane in nominal route direction
   * these two are equal.
   */
  ::ad::map::point::ENUPoint object_center_position_projected_on_lane_in_nominal_route_direction;

  /*!
   * The distance along the route towards the projected object center position.
   * Remark: This distance doesn't provide the actual distance along the route from an
   * ego vehicle route towards an object:
   * 1. The ego route ususally starts at the back of the ego vehicle
   * 2. The object's center position is taken into account
   */
  ::ad::physics::Distance object_center_distance_along_route{0.0};

  /*!
   * The nominal center point of the  lane  in nominal route direction of the route the objects center position is
   * projected onto.
   */
  ::ad::map::point::ENUPoint nominal_center_position_of_lane_in_nominal_route_direction;

  /*!
   * The front left point of the route section around the vehicle.
   */
  ::ad::map::point::ENUPoint object_route_section_front_left;

  /*!
   * The front right point of the route section around the vehicle.
   */
  ::ad::map::point::ENUPoint object_route_section_front_right;

  /*!
   * The back left point of the route section around the vehicle.
   */
  ::ad::map::point::ENUPoint object_route_section_back_left;

  /*!
   * The back right point of the route section around the vehicle.
   */
  ::ad::map::point::ENUPoint object_route_section_back_right;

  /*!
   * The center point of the virtual circle the object is driving
   */
  ::ad::map::point::ENUPoint object_turning_center;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATAONROUTE
#define GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATAONROUTE
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
 * \param[in] _value RssObjectDataOnRoute value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssObjectDataOnRoute const &_value)
{
  os << "RssObjectDataOnRoute(";
  os << "route_heading:";
  os << _value.route_heading;
  os << ",";
  os << "route_radius:";
  os << _value.route_radius;
  os << ",";
  os << "route_heading_delta:";
  os << _value.route_heading_delta;
  os << ",";
  os << "route_speed_lat:";
  os << _value.route_speed_lat;
  os << ",";
  os << "route_speed_lon:";
  os << _value.route_speed_lon;
  os << ",";
  os << "object_center_within_route:";
  os << _value.object_center_within_route;
  os << ",";
  os << "object_within_route:";
  os << _value.object_within_route;
  os << ",";
  os << "object_center_position_projected_on_route:";
  os << _value.object_center_position_projected_on_route;
  os << ",";
  os << "is_valid:";
  os << _value.is_valid;
  os << ",";
  os << "object_center_distance_to_route:";
  os << _value.object_center_distance_to_route;
  os << ",";
  os << "object_center_position_projected_on_lane_in_nominal_route_direction:";
  os << _value.object_center_position_projected_on_lane_in_nominal_route_direction;
  os << ",";
  os << "object_center_distance_along_route:";
  os << _value.object_center_distance_along_route;
  os << ",";
  os << "nominal_center_position_of_lane_in_nominal_route_direction:";
  os << _value.nominal_center_position_of_lane_in_nominal_route_direction;
  os << ",";
  os << "object_route_section_front_left:";
  os << _value.object_route_section_front_left;
  os << ",";
  os << "object_route_section_front_right:";
  os << _value.object_route_section_front_right;
  os << ",";
  os << "object_route_section_back_left:";
  os << _value.object_route_section_back_left;
  os << ",";
  os << "object_route_section_back_right:";
  os << _value.object_route_section_back_right;
  os << ",";
  os << "object_turning_center:";
  os << _value.object_turning_center;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssObjectDataOnRoute
 */
inline std::string to_string(::ad::rss::map::RssObjectDataOnRoute const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssObjectDataOnRoute> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssObjectDataOnRoute const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATAONROUTE
