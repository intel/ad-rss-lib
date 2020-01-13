/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1911
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
  using Ptr = std::shared_ptr<LateralRssAccelerationValues>;

  /*!
   * \brief Smart pointer on constant LateralRssAccelerationValues
   */
  using ConstPtr = std::shared_ptr<LateralRssAccelerationValues const>;

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
    return (accelMax == other.accelMax) && (brakeMin == other.brakeMin);
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
  ::ad::physics::Acceleration accelMax{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration. This value has always to be positive.
   */
  ::ad::physics::Acceleration brakeMin{0.0};
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
  os << "accelMax:";
  os << _value.accelMax;
  os << ",";
  os << "brakeMin:";
  os << _value.brakeMin;
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
#endif // GEN_GUARD_AD_RSS_WORLD_LATERALRSSACCELERATIONVALUES
