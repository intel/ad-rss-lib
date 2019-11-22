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
#include "ad_rss/physics/Speed.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief DataType SpeedRange
 *
 * A speed range described by its borders: [minimum, maximum].
 */
struct SpeedRange
{
  /*!
   * \brief standard constructor
   */
  SpeedRange() = default;

  /*!
   * \brief standard destructor
   */
  ~SpeedRange() = default;

  /*!
   * \brief standard copy constructor
   */
  SpeedRange(const SpeedRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  SpeedRange(SpeedRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other SpeedRange
   *
   * \returns Reference to this SpeedRange.
   */
  SpeedRange &operator=(const SpeedRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other SpeedRange
   *
   * \returns Reference to this SpeedRange.
   */
  SpeedRange &operator=(SpeedRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedRange
   *
   * \returns \c true if both SpeedRange are equal
   */
  bool operator==(const SpeedRange &other) const
  {
    return (minimum == other.minimum) && (maximum == other.maximum);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedRange.
   *
   * \returns \c true if both SpeedRange are different
   */
  bool operator!=(const SpeedRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The minimum value of the speed range.
   */
  ::ad_rss::physics::Speed minimum{std::numeric_limits<Speed>::lowest()};

  /*!
   * The maximum value of the speed range.
   */
  ::ad_rss::physics::Speed maximum{std::numeric_limits<Speed>::max()};
};

} // namespace physics
} // namespace ad_rss
