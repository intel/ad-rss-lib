/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1878
 */

#pragma once

#include <iostream>
#include <memory>
#include "ad/physics/SpeedRange.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType VelocityRange
 *
 * Defines the velocity range of an object within its current lane. The velocity range consists of a longitudinal and a
 * lateral component.
 */
struct VelocityRange
{
  using Ptr = std::shared_ptr<VelocityRange>;
  using ConstPtr = std::shared_ptr<VelocityRange const>;

  /*!
   * \brief standard constructor
   */
  VelocityRange() = default;

  /*!
   * \brief standard destructor
   */
  ~VelocityRange() = default;

  /*!
   * \brief standard copy constructor
   */
  VelocityRange(const VelocityRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  VelocityRange(VelocityRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(const VelocityRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(VelocityRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns \c true if both VelocityRange are equal
   */
  bool operator==(const VelocityRange &other) const
  {
    return (speedLon == other.speedLon) && (speedLat == other.speedLat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange.
   *
   * \returns \c true if both VelocityRange are different
   */
  bool operator!=(const VelocityRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::SpeedRange speedLon;

  /*!
   * The lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::SpeedRange speedLat;
};

} // namespace situation
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_VELOCITYRANGE
#define OSTREAM_AD_RSS_SITUATION_VELOCITYRANGE
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value VelocityRange value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, VelocityRange const &_value)
{
  os << "VelocityRange(";
  os << "speedLon:";
  os << _value.speedLon;
  os << ",";
  os << "speedLat:";
  os << _value.speedLat;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_VELOCITYRANGE
