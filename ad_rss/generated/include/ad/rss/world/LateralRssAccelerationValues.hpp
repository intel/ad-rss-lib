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
#include "ad/physics/Acceleration.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType LateralRssAccelerationValues
 *
 * Collection of the RSS acceleration values in lateral direction.
 */
struct LateralRssAccelerationValues
{
  /*!
   * \brief Smart pointer on LateralRssAccelerationValues
   */
  typedef std::shared_ptr<LateralRssAccelerationValues> Ptr;

  /*!
   * \brief Smart pointer on constant LateralRssAccelerationValues
   */
  typedef std::shared_ptr<LateralRssAccelerationValues const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  LateralRssAccelerationValues() = default;

  /*!
   * \brief standard destructor
   */
  ~LateralRssAccelerationValues() = default;

  /*!
   * \brief standard copy constructor
   */
  LateralRssAccelerationValues(const LateralRssAccelerationValues &other) = default;

  /*!
   * \brief standard move constructor
   */
  LateralRssAccelerationValues(LateralRssAccelerationValues &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns Reference to this LateralRssAccelerationValues.
   */
  LateralRssAccelerationValues &operator=(const LateralRssAccelerationValues &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns Reference to this LateralRssAccelerationValues.
   */
  LateralRssAccelerationValues &operator=(LateralRssAccelerationValues &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns \c true if both LateralRssAccelerationValues are equal
   */
  bool operator==(const LateralRssAccelerationValues &other) const
  {
    return (accel_max == other.accel_max) && (brake_min == other.brake_min);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssAccelerationValues.
   *
   * \returns \c true if both LateralRssAccelerationValues are different
   */
  bool operator!=(const LateralRssAccelerationValues &other) const
  {
    return !operator==(other);
  }

  /*!
   * Absolute amount of the maximum allowed acceleration. This value has always to be positive, zero is allowed.
   */
  ::ad::physics::Acceleration accel_max{0.0};

  /*!
   * Absolute amount of the minimum allowed braking deceleration. This value has always to be positive.
   */
  ::ad::physics::Acceleration brake_min{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_LATERALRSSACCELERATIONVALUES
#define GEN_GUARD_AD_RSS_WORLD_LATERALRSSACCELERATIONVALUES
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value LateralRssAccelerationValues value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LateralRssAccelerationValues const &_value)
{
  os << "LateralRssAccelerationValues(";
  os << "accel_max:";
  os << _value.accel_max;
  os << ",";
  os << "brake_min:";
  os << _value.brake_min;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LateralRssAccelerationValues
 */
inline std::string to_string(::ad::rss::world::LateralRssAccelerationValues const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::LateralRssAccelerationValues> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::world::LateralRssAccelerationValues const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_LATERALRSSACCELERATIONVALUES
