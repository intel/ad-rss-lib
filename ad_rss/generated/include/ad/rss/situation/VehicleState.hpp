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
 * Generator Version : 10.6.1-1904
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Distance.hpp"
#include "ad/rss/situation/VelocityRange.hpp"
#include "ad/rss/world/RssDynamics.hpp"
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
   * \brief Smart pointer on VehicleState
   */
  using Ptr = std::shared_ptr<VehicleState>;

  /*!
   * \brief Smart pointer on constant VehicleState
   */
  using ConstPtr = std::shared_ptr<VehicleState const>;

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
  ::ad::rss::situation::VelocityRange velocity;

  /*!
   * The situation specific dynamics.
   */
  ::ad::rss::world::RssDynamics dynamics;

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
  ::ad::physics::Distance distanceToEnterIntersection{std::numeric_limits<::ad::physics::Distance>::max()};

  /*!
   * The maximum distance to cover by the vehicle to leave the intersection completely.
   */
  ::ad::physics::Distance distanceToLeaveIntersection{std::numeric_limits<::ad::physics::Distance>::max()};
};

} // namespace situation
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_SITUATION_VEHICLESTATE
#define GEN_GUARD_AD_RSS_SITUATION_VEHICLESTATE
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
 * \param[in] os The output stream to write to
 * \param[in] _value VehicleState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, VehicleState const &_value)
{
  os << "VehicleState(";
  os << "velocity:";
  os << _value.velocity;
  os << ",";
  os << "dynamics:";
  os << _value.dynamics;
  os << ",";
  os << "hasPriority:";
  os << _value.hasPriority;
  os << ",";
  os << "isInCorrectLane:";
  os << _value.isInCorrectLane;
  os << ",";
  os << "distanceToEnterIntersection:";
  os << _value.distanceToEnterIntersection;
  os << ",";
  os << "distanceToLeaveIntersection:";
  os << _value.distanceToLeaveIntersection;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for VehicleState
 */
inline std::string to_string(::ad::rss::situation::VehicleState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_SITUATION_VEHICLESTATE
