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
#include "ad_rss/physics/Distance.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief DataType MetricRange
 *
 * A metric range described by its borders: [minimum, maximum].
 */
struct MetricRange
{
  /*!
   * \brief standard constructor
   */
  MetricRange() = default;

  /*!
   * \brief standard destructor
   */
  ~MetricRange() = default;

  /*!
   * \brief standard copy constructor
   */
  MetricRange(const MetricRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  MetricRange(MetricRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns Reference to this MetricRange.
   */
  MetricRange &operator=(const MetricRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns Reference to this MetricRange.
   */
  MetricRange &operator=(MetricRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns \c true if both MetricRange are equal
   */
  bool operator==(const MetricRange &other) const
  {
    return (minimum == other.minimum) && (maximum == other.maximum);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other MetricRange.
   *
   * \returns \c true if both MetricRange are different
   */
  bool operator!=(const MetricRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The minimum value of the metric range.
   */
  ::ad_rss::physics::Distance minimum{std::numeric_limits<Distance>::lowest()};

  /*!
   * The maximum value of the metric range.
   */
  ::ad_rss::physics::Distance maximum{std::numeric_limits<Distance>::max()};
};

} // namespace physics
} // namespace ad_rss
