/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <limits>
#include <memory>
#include "ad_rss/physics/Acceleration.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
    return (accelMax == other.accelMax) && (brakeMax == other.brakeMax) && (brakeMin == other.brakeMin)
      && (brakeMinCorrect == other.brakeMinCorrect);
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
  ::ad_rss::physics::Acceleration accelMax{0.0};

  /*!
   * Absolute amount of the maximum allowed braking deceleration.  This value has always to be positive and not smaller
   * than brakeMin.
   */
  ::ad_rss::physics::Acceleration brakeMax{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration.  This value has always to be positive and not smaller
   * than brakeMinCorrect.
   */
  ::ad_rss::physics::Acceleration brakeMin{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration when driving on the correct lane.  This value has
   * always to be positive.
   */
  ::ad_rss::physics::Acceleration brakeMinCorrect{0.0};
};

} // namespace world
} // namespace ad_rss
