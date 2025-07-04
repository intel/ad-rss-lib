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
#include "ad/physics/AccelerationRange.hpp"
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
 * \brief DataType RssVehicleAccelerationRestrictions
 */
struct RssVehicleAccelerationRestrictions
{
  /*!
   * \brief Smart pointer on RssVehicleAccelerationRestrictions
   */
  typedef std::shared_ptr<RssVehicleAccelerationRestrictions> Ptr;

  /*!
   * \brief Smart pointer on constant RssVehicleAccelerationRestrictions
   */
  typedef std::shared_ptr<RssVehicleAccelerationRestrictions const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssVehicleAccelerationRestrictions() = default;

  /*!
   * \brief standard destructor
   */
  ~RssVehicleAccelerationRestrictions() = default;

  /*!
   * \brief standard copy constructor
   */
  RssVehicleAccelerationRestrictions(const RssVehicleAccelerationRestrictions &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssVehicleAccelerationRestrictions(RssVehicleAccelerationRestrictions &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssVehicleAccelerationRestrictions
   *
   * \returns Reference to this RssVehicleAccelerationRestrictions.
   */
  RssVehicleAccelerationRestrictions &operator=(const RssVehicleAccelerationRestrictions &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssVehicleAccelerationRestrictions
   *
   * \returns Reference to this RssVehicleAccelerationRestrictions.
   */
  RssVehicleAccelerationRestrictions &operator=(RssVehicleAccelerationRestrictions &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssVehicleAccelerationRestrictions
   *
   * \returns \c true if both RssVehicleAccelerationRestrictions are equal
   */
  bool operator==(const RssVehicleAccelerationRestrictions &other) const
  {
    return (longitudinal_range == other.longitudinal_range) && (lateral_combined_range == other.lateral_combined_range);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssVehicleAccelerationRestrictions.
   *
   * \returns \c true if both RssVehicleAccelerationRestrictions are different
   */
  bool operator!=(const RssVehicleAccelerationRestrictions &other) const
  {
    return !operator==(other);
  }

  /*!
   * The range of the acceleration restriction in longitudinal direction.
   */
  ::ad::physics::AccelerationRange longitudinal_range;

  /*!
   * The range of the acceleration restriction in lateral vehicle direction. This is a merged representation of the
   * ad::rss::state::AccelerationRestrictions left and right lateral component based on the actual vehicle lateral
   * velocity within the lane to identify which of the restrictions is active.
   */
  ::ad::physics::AccelerationRange lateral_combined_range;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSVEHICLEACCELERATIONRESTRICTIONS
#define GEN_GUARD_AD_RSS_MAP_RSSVEHICLEACCELERATIONRESTRICTIONS
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
 * \param[in] _value RssVehicleAccelerationRestrictions value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssVehicleAccelerationRestrictions const &_value)
{
  os << "RssVehicleAccelerationRestrictions(";
  os << "longitudinal_range:";
  os << _value.longitudinal_range;
  os << ",";
  os << "lateral_combined_range:";
  os << _value.lateral_combined_range;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssVehicleAccelerationRestrictions
 */
inline std::string to_string(::ad::rss::map::RssVehicleAccelerationRestrictions const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssVehicleAccelerationRestrictions> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssVehicleAccelerationRestrictions const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSVEHICLEACCELERATIONRESTRICTIONS
