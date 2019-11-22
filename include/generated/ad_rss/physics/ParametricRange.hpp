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
#include "ad_rss/physics/ParametricValue.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief DataType ParametricRange
 *
 * A parametric range within a lane segment described by its borders: [minimum, maximum].
 */
struct ParametricRange
{
  /*!
   * \brief standard constructor
   */
  ParametricRange() = default;

  /*!
   * \brief standard destructor
   */
  ~ParametricRange() = default;

  /*!
   * \brief standard copy constructor
   */
  ParametricRange(const ParametricRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  ParametricRange(ParametricRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ParametricRange
   *
   * \returns Reference to this ParametricRange.
   */
  ParametricRange &operator=(const ParametricRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ParametricRange
   *
   * \returns Reference to this ParametricRange.
   */
  ParametricRange &operator=(ParametricRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricRange
   *
   * \returns \c true if both ParametricRange are equal
   */
  bool operator==(const ParametricRange &other) const
  {
    return (minimum == other.minimum) && (maximum == other.maximum);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricRange.
   *
   * \returns \c true if both ParametricRange are different
   */
  bool operator!=(const ParametricRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The minimum value of the parametric range.
   */
  ::ad_rss::physics::ParametricValue minimum{0.0};

  /*!
   * The maximum value of the parametric range.
   */
  ::ad_rss::physics::ParametricValue maximum{1.0};
};

} // namespace physics
} // namespace ad_rss
