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
#include "ad_rss/situation/VelocityRange.hpp"
#include "ad_rss/world/RssDynamics.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType VehicleState
 *
 * The state of an object in a RSS situation.
 * The state consists of the following components in respect to the situation coordinate
 * system: the velocity, the distance to the intersection (if applicable), the dynamics,
 * the response time, a Right-of-Way priority flag as well as a flag stating if the
 * vehicle is driving in its correct lane.
 */
struct VehicleState
{
  /*!
   * \brief standard constructor
   */
  VehicleState() = default;

  /*!
   * \brief standard destructor
   */
  ~VehicleState() = default;

  /*!
   * \brief standard copy constructor
   */
  VehicleState(const VehicleState &other) = default;

  /*!
   * \brief standard move constructor
   */
  VehicleState(VehicleState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other VehicleState
   *
   * \returns Reference to this VehicleState.
   */
  VehicleState &operator=(const VehicleState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other VehicleState
   *
   * \returns Reference to this VehicleState.
   */
  VehicleState &operator=(VehicleState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VehicleState
   *
   * \returns \c true if both VehicleState are equal
   */
  bool operator==(const VehicleState &other) const
  {
    return (velocity == other.velocity) && (dynamics == other.dynamics) && (hasPriority == other.hasPriority)
      && (isInCorrectLane == other.isInCorrectLane)
      && (distanceToEnterIntersection == other.distanceToEnterIntersection)
      && (distanceToLeaveIntersection == other.distanceToLeaveIntersection);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VehicleState.
   *
   * \returns \c true if both VehicleState are different
   */
  bool operator!=(const VehicleState &other) const
  {
    return !operator==(other);
  }

  /*!
   * The situation specific velocity range. Especially due to merge of different scenes into one situation the
   * velocities might become a real range.
   */
  ::ad_rss::situation::VelocityRange velocity;

  /*!
   * The situation specific dynamics.
   */
  ::ad_rss::world::RssDynamics dynamics;

  /*!
   * Flag indicating if the situation specific Right-of-Way relation.
   */
  bool hasPriority{false};

  /*!
   * Flag indicating if the vehicle driving in the correct lane
   */
  bool isInCorrectLane{false};

  /*!
   * The minimum distance to be covered by the vehicle to enter the intersection.
   */
  ::ad_rss::physics::Distance distanceToEnterIntersection{std::numeric_limits<::ad_rss::physics::Distance>::max()};

  /*!
   * The maximum distance to cover by the vehicle to leave the intersection completely.
   */
  ::ad_rss::physics::Distance distanceToLeaveIntersection{std::numeric_limits<::ad_rss::physics::Distance>::max()};
};

} // namespace situation
} // namespace ad_rss
