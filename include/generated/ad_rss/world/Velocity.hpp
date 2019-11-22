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
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType Velocity
 *
 * Defines the velocity of an object within its current lane. The velocity consists of a longitudinal and a lateral
 * component.
 */
struct Velocity
{
  /*!
   * \brief standard constructor
   */
  Velocity() = default;

  /*!
   * \brief standard destructor
   */
  ~Velocity() = default;

  /*!
   * \brief standard copy constructor
   */
  Velocity(const Velocity &other) = default;

  /*!
   * \brief standard move constructor
   */
  Velocity(Velocity &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Velocity
   *
   * \returns Reference to this Velocity.
   */
  Velocity &operator=(const Velocity &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Velocity
   *
   * \returns Reference to this Velocity.
   */
  Velocity &operator=(Velocity &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Velocity
   *
   * \returns \c true if both Velocity are equal
   */
  bool operator==(const Velocity &other) const
  {
    return (speedLon == other.speedLon) && (speedLat == other.speedLat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Velocity.
   *
   * \returns \c true if both Velocity are different
   */
  bool operator!=(const Velocity &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad_rss::physics::Speed speedLon{0.0};

  /*!
   * The lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad_rss::physics::Speed speedLat{0.0};
};

} // namespace world
} // namespace ad_rss
