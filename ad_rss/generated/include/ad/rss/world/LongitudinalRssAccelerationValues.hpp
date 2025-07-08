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
 * \brief DataType LongitudinalRssAccelerationValues
 *
 * Collection of the RSS acceleration values in longitudinal direction.
 */
struct LongitudinalRssAccelerationValues
{
  /*!
   * \brief Smart pointer on LongitudinalRssAccelerationValues
   */
  typedef std::shared_ptr<LongitudinalRssAccelerationValues> Ptr;

  /*!
   * \brief Smart pointer on constant LongitudinalRssAccelerationValues
   */
  typedef std::shared_ptr<LongitudinalRssAccelerationValues const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  LongitudinalRssAccelerationValues() = default;

  /*!
   * \brief standard destructor
   */
  ~LongitudinalRssAccelerationValues() = default;

  /*!
   * \brief standard copy constructor
   */
  LongitudinalRssAccelerationValues(const LongitudinalRssAccelerationValues &other) = default;

  /*!
   * \brief standard move constructor
   */
  LongitudinalRssAccelerationValues(LongitudinalRssAccelerationValues &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns Reference to this LongitudinalRssAccelerationValues.
   */
  LongitudinalRssAccelerationValues &operator=(const LongitudinalRssAccelerationValues &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns Reference to this LongitudinalRssAccelerationValues.
   */
  LongitudinalRssAccelerationValues &operator=(LongitudinalRssAccelerationValues &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns \c true if both LongitudinalRssAccelerationValues are equal
   */
  bool operator==(const LongitudinalRssAccelerationValues &other) const
  {
    return (accel_max == other.accel_max) && (brake_max == other.brake_max) && (brake_min == other.brake_min)
      && (brake_min_correct == other.brake_min_correct);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues.
   *
   * \returns \c true if both LongitudinalRssAccelerationValues are different
   */
  bool operator!=(const LongitudinalRssAccelerationValues &other) const
  {
    return !operator==(other);
  }

  /*!
   * Absolute amount of the maximum allowed acceleration.  This value has always to be positive, zero is allowed.
   */
  ::ad::physics::Acceleration accel_max{0.0};

  /*!
   * Absolute amount of the maximum allowed braking deceleration.  This value has always to be positive and not smaller
   * than brake_min.
   */
  ::ad::physics::Acceleration brake_max{0.0};

  /*!
   * Absolute amount of the minimum allowed braking deceleration.  This value has always to be positive and not smaller
   * than brake_min_correct.
   */
  ::ad::physics::Acceleration brake_min{0.0};

  /*!
   * Absolute amount of the minimum allowed braking deceleration when driving on the correct lane.  This value has
   * always to be positive.
   */
  ::ad::physics::Acceleration brake_min_correct{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
#define GEN_GUARD_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
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
 * \param[in] _value LongitudinalRssAccelerationValues value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRssAccelerationValues const &_value)
{
  os << "LongitudinalRssAccelerationValues(";
  os << "accel_max:";
  os << _value.accel_max;
  os << ",";
  os << "brake_max:";
  os << _value.brake_max;
  os << ",";
  os << "brake_min:";
  os << _value.brake_min;
  os << ",";
  os << "brake_min_correct:";
  os << _value.brake_min_correct;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LongitudinalRssAccelerationValues
 */
inline std::string to_string(::ad::rss::world::LongitudinalRssAccelerationValues const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::LongitudinalRssAccelerationValues> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::world::LongitudinalRssAccelerationValues const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
