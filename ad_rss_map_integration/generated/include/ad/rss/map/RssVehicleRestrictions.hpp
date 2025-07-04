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
#include <memory>
#include <sstream>
#include "ad/rss/map/RouteAccelerations.hpp"
#include "ad/rss/map/RssVehicleAccelerationRestrictions.hpp"
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
 * \brief DataType RssVehicleRestrictions
 *
 * The RSS restrictions transformed back from lane based coordinate frame into vehicle frame.
 */
struct RssVehicleRestrictions
{
  /*!
   * \brief Smart pointer on RssVehicleRestrictions
   */
  typedef std::shared_ptr<RssVehicleRestrictions> Ptr;

  /*!
   * \brief Smart pointer on constant RssVehicleRestrictions
   */
  typedef std::shared_ptr<RssVehicleRestrictions const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssVehicleRestrictions() = default;

  /*!
   * \brief standard destructor
   */
  ~RssVehicleRestrictions() = default;

  /*!
   * \brief standard copy constructor
   */
  RssVehicleRestrictions(const RssVehicleRestrictions &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssVehicleRestrictions(RssVehicleRestrictions &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssVehicleRestrictions
   *
   * \returns Reference to this RssVehicleRestrictions.
   */
  RssVehicleRestrictions &operator=(const RssVehicleRestrictions &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssVehicleRestrictions
   *
   * \returns Reference to this RssVehicleRestrictions.
   */
  RssVehicleRestrictions &operator=(RssVehicleRestrictions &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssVehicleRestrictions
   *
   * \returns \c true if both RssVehicleRestrictions are equal
   */
  bool operator==(const RssVehicleRestrictions &other) const
  {
    return (route_accelerations == other.route_accelerations)
      && (vehicle_acceleration_restrictions == other.vehicle_acceleration_restrictions);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssVehicleRestrictions.
   *
   * \returns \c true if both RssVehicleRestrictions are different
   */
  bool operator!=(const RssVehicleRestrictions &other) const
  {
    return !operator==(other);
  }

  /*!
   * Accelerations introduced by the route to be considered by the vehicle.
   */
  ::ad::rss::map::RouteAccelerations route_accelerations;

  /*!
   * The vehicle acceleration restriction with lateral combined range.
   */
  ::ad::rss::map::RssVehicleAccelerationRestrictions vehicle_acceleration_restrictions;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSVEHICLERESTRICTIONS
#define GEN_GUARD_AD_RSS_MAP_RSSVEHICLERESTRICTIONS
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
 * \param[in] _value RssVehicleRestrictions value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssVehicleRestrictions const &_value)
{
  os << "RssVehicleRestrictions(";
  os << "route_accelerations:";
  os << _value.route_accelerations;
  os << ",";
  os << "vehicle_acceleration_restrictions:";
  os << _value.vehicle_acceleration_restrictions;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssVehicleRestrictions
 */
inline std::string to_string(::ad::rss::map::RssVehicleRestrictions const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssVehicleRestrictions> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssVehicleRestrictions const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSVEHICLERESTRICTIONS
