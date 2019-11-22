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
 * \brief DataType LateralRssAccelerationValues
 *
 * Collection of the RSS acceleration values in lateral direction.
 */
struct LateralRssAccelerationValues
{
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
  ::ad_rss::physics::Acceleration accelMax{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration. This value has always to be positive.
   */
  ::ad_rss::physics::Acceleration brakeMin{0.0};
};

} // namespace world
} // namespace ad_rss
