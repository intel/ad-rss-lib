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
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief DataType AccelerationRange
 *
 * An acceleration range described by its borders: [minimum, maximum].
 */
struct AccelerationRange
{
  /*!
   * \brief standard constructor
   */
  AccelerationRange() = default;

  /*!
   * \brief standard destructor
   */
  ~AccelerationRange() = default;

  /*!
   * \brief standard copy constructor
   */
  AccelerationRange(const AccelerationRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  AccelerationRange(AccelerationRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other AccelerationRange
   *
   * \returns Reference to this AccelerationRange.
   */
  AccelerationRange &operator=(const AccelerationRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other AccelerationRange
   *
   * \returns Reference to this AccelerationRange.
   */
  AccelerationRange &operator=(AccelerationRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other AccelerationRange
   *
   * \returns \c true if both AccelerationRange are equal
   */
  bool operator==(const AccelerationRange &other) const
  {
    return (minimum == other.minimum) && (maximum == other.maximum);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other AccelerationRange.
   *
   * \returns \c true if both AccelerationRange are different
   */
  bool operator!=(const AccelerationRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The minimum value of the acceleration range.
   */
  ::ad_rss::physics::Acceleration minimum{std::numeric_limits<Acceleration>::lowest()};

  /*!
   * The maximum value of the acceleration range.
   */
  ::ad_rss::physics::Acceleration maximum{std::numeric_limits<Acceleration>::max()};
};

} // namespace physics
} // namespace ad_rss
