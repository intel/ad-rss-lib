/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Angle.hpp"
#include "ad/physics/AngularAcceleration.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Duration.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType UnstructuredSettings
 *
 * Parameter settings to be used for unstructured scene handling.
 */
struct UnstructuredSettings
{
  /*!
   * \brief Smart pointer on UnstructuredSettings
   */
  typedef std::shared_ptr<UnstructuredSettings> Ptr;

  /*!
   * \brief Smart pointer on constant UnstructuredSettings
   */
  typedef std::shared_ptr<UnstructuredSettings const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  UnstructuredSettings() = default;

  /*!
   * \brief standard destructor
   */
  ~UnstructuredSettings() = default;

  /*!
   * \brief standard copy constructor
   */
  UnstructuredSettings(const UnstructuredSettings &other) = default;

  /*!
   * \brief standard move constructor
   */
  UnstructuredSettings(UnstructuredSettings &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other UnstructuredSettings
   *
   * \returns Reference to this UnstructuredSettings.
   */
  UnstructuredSettings &operator=(const UnstructuredSettings &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other UnstructuredSettings
   *
   * \returns Reference to this UnstructuredSettings.
   */
  UnstructuredSettings &operator=(UnstructuredSettings &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSettings
   *
   * \returns \c true if both UnstructuredSettings are equal
   */
  bool operator==(const UnstructuredSettings &other) const
  {
    return (pedestrianTurningRadius == other.pedestrianTurningRadius) && (driveAwayMaxAngle == other.driveAwayMaxAngle)
      && (vehicleYawRateChange == other.vehicleYawRateChange) && (vehicleMinRadius == other.vehicleMinRadius)
      && (vehicleTrajectoryCalculationStep == other.vehicleTrajectoryCalculationStep);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSettings.
   *
   * \returns \c true if both UnstructuredSettings are different
   */
  bool operator!=(const UnstructuredSettings &other) const
  {
    return !operator==(other);
  }

  /*!
   * The change of heading |h'(t)| is limited.
   * That means, the maximum trajectory is defined by a circle until response time.
   * This parameter specifies the radius of that circle.
   */
  ::ad::physics::Distance pedestrianTurningRadius;

  /*!
   * In certain situations the ego vehicle might be allowed to drive away from a dangerous
   * object using a given heading range.
   * This parameter defines the maximum possible angle the vehicle is able to drive away.
   */
  ::ad::physics::Angle driveAwayMaxAngle;

  /*!
   * The change of the heading h'(t) is limited while the response time.
   * This specifies the maximum change of the yaw rate during response time.
   */
  ::ad::physics::AngularAcceleration vehicleYawRateChange;

  /*!
   * Defines the minimal radius a vehicle is able to drive on.
   */
  ::ad::physics::Distance vehicleMinRadius;

  /*!
   * The current unstructured implementation calculates the location and heading based
   * on time increments.
   * That might lead to an increasing error the farer the point is.
   * This parameter defines the time interval for this incremental calculation.
   */
  ::ad::physics::Duration vehicleTrajectoryCalculationStep;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_UNSTRUCTUREDSETTINGS
#define GEN_GUARD_AD_RSS_WORLD_UNSTRUCTUREDSETTINGS
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value UnstructuredSettings value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredSettings const &_value)
{
  os << "UnstructuredSettings(";
  os << "pedestrianTurningRadius:";
  os << _value.pedestrianTurningRadius;
  os << ",";
  os << "driveAwayMaxAngle:";
  os << _value.driveAwayMaxAngle;
  os << ",";
  os << "vehicleYawRateChange:";
  os << _value.vehicleYawRateChange;
  os << ",";
  os << "vehicleMinRadius:";
  os << _value.vehicleMinRadius;
  os << ",";
  os << "vehicleTrajectoryCalculationStep:";
  os << _value.vehicleTrajectoryCalculationStep;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredSettings
 */
inline std::string to_string(::ad::rss::world::UnstructuredSettings const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_UNSTRUCTUREDSETTINGS
