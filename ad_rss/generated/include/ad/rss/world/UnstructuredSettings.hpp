/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <cstdint>
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
 * Parameter settings to be used for unstructured constellation handling.
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
    return (pedestrian_turning_radius == other.pedestrian_turning_radius)
      && (drive_away_max_angle == other.drive_away_max_angle)
      && (vehicle_yaw_rate_change == other.vehicle_yaw_rate_change) && (vehicle_min_radius == other.vehicle_min_radius)
      && (vehicle_trajectory_calculation_step == other.vehicle_trajectory_calculation_step)
      && (vehicle_front_intermediate_yaw_rate_change_ratio_steps
          == other.vehicle_front_intermediate_yaw_rate_change_ratio_steps)
      && (vehicle_back_intermediate_yaw_rate_change_ratio_steps
          == other.vehicle_back_intermediate_yaw_rate_change_ratio_steps)
      && (vehicle_brake_intermediate_acceleration_steps == other.vehicle_brake_intermediate_acceleration_steps)
      && (vehicle_continue_forward_intermediate_acceleration_steps
          == other.vehicle_continue_forward_intermediate_acceleration_steps)
      && (vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
          == other.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps)
      && (pedestrian_continue_forward_intermediate_heading_change_ratio_steps
          == other.pedestrian_continue_forward_intermediate_heading_change_ratio_steps)
      && (pedestrian_continue_forward_intermediate_acceleration_steps
          == other.pedestrian_continue_forward_intermediate_acceleration_steps)
      && (pedestrian_brake_intermediate_acceleration_steps == other.pedestrian_brake_intermediate_acceleration_steps)
      && (pedestrian_front_intermediate_heading_change_ratio_steps
          == other.pedestrian_front_intermediate_heading_change_ratio_steps)
      && (pedestrian_back_intermediate_heading_change_ratio_steps
          == other.pedestrian_back_intermediate_heading_change_ratio_steps);
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
  ::ad::physics::Distance pedestrian_turning_radius;

  /*!
   * In certain constellations the ego vehicle might be allowed to drive away from a
   * dangerous object using a given heading range.
   * This parameter defines the maximum possible angle the vehicle is able to drive away.
   */
  ::ad::physics::Angle drive_away_max_angle;

  /*!
   * The change of the heading h'(t) is limited while the response time.
   * This specifies the maximum change of the yaw rate during response time.
   */
  ::ad::physics::AngularAcceleration vehicle_yaw_rate_change;

  /*!
   * Defines the minimal radius a vehicle is able to drive on.
   */
  ::ad::physics::Distance vehicle_min_radius;

  /*!
   * The current unstructured implementation calculates the location and heading based
   * on time increments.
   * That might lead to an increasing error the farer the point is.
   * This parameter defines the time interval for this incremental calculation.
   */
  ::ad::physics::Duration vehicle_trajectory_calculation_step;

  /*!
   * During calculation of the trajectory set, multiple yaw rate ratios are used. The default is max left, max right and
   * no yaw rate change. By specifying a value larger than zero more intermediate steps are used. The value is
   * specifying the steps on one side, therefore the resulting intermedate steps are twice this value. This value is
   * used for the front of the trajectory set.
   */
  uint32_t vehicle_front_intermediate_yaw_rate_change_ratio_steps{0};

  /*!
   * During calculation of the trajectory set, multiple yaw rate ratios are used. The default is max left, max right and
   * no yaw rate change. By specifying a value larger than zero more intermediate steps are used. The value is
   * specifying the steps on one side, therefore the resulting intermedate steps are twice this value. This value is
   * used for the back of the trajectory set.
   */
  uint32_t vehicle_back_intermediate_yaw_rate_change_ratio_steps{0};

  /*!
   * Specifies the intermediate acceleration steps (between brake_max and brake_min) used while calculating the cbrake
   * trajectory set.
   */
  uint32_t vehicle_brake_intermediate_acceleration_steps{0};

  /*!
   * Specifies the intermediate acceleration steps (between brake_min and accel_max) used while calculating the continue
   * forward trajectory set.
   */
  uint32_t vehicle_continue_forward_intermediate_acceleration_steps{0};

  /*!
   * Specifies the intermediate yaw rate change ratio steps used while calculating the continue forward trajectory set.
   */
  uint32_t vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{0};

  /*!
   * Specifies the intermediate heading change ratio steps used while calculating the continue forward trajectory set.
   */
  uint32_t pedestrian_continue_forward_intermediate_heading_change_ratio_steps{0};

  /*!
   * Specifies the intermediate steps used while calculating the continue forward trajectory set.
   */
  uint32_t pedestrian_continue_forward_intermediate_acceleration_steps{0};

  /*!
   * Specifies the intermediate steps used while calculating the brake trajectory set.
   */
  uint32_t pedestrian_brake_intermediate_acceleration_steps{0};

  /*!
   * During calculation of the trajectory set, multiple heading change ratios are used. The default is max left, max
   * right and no heading change. By specifying a value larger than zero more intermediate steps are used. The value is
   * specifying the steps on one side, therefore the resulting intermedate steps are twice this value. This value is
   * used for the front of the trajectory set.
   */
  uint32_t pedestrian_front_intermediate_heading_change_ratio_steps{0};

  /*!
   * During calculation of the trajectory set, multiple heading change ratios are used. The default is max left, max
   * right and no yaw rate change. By specifying a value larger than zero more intermediate steps are used. The value is
   * specifying the steps on one side, therefore the resulting intermedate steps are twice this value. This value is
   * used for the back of the trajectory set.
   */
  uint32_t pedestrian_back_intermediate_heading_change_ratio_steps{0};
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
  os << "pedestrian_turning_radius:";
  os << _value.pedestrian_turning_radius;
  os << ",";
  os << "drive_away_max_angle:";
  os << _value.drive_away_max_angle;
  os << ",";
  os << "vehicle_yaw_rate_change:";
  os << _value.vehicle_yaw_rate_change;
  os << ",";
  os << "vehicle_min_radius:";
  os << _value.vehicle_min_radius;
  os << ",";
  os << "vehicle_trajectory_calculation_step:";
  os << _value.vehicle_trajectory_calculation_step;
  os << ",";
  os << "vehicle_front_intermediate_yaw_rate_change_ratio_steps:";
  os << _value.vehicle_front_intermediate_yaw_rate_change_ratio_steps;
  os << ",";
  os << "vehicle_back_intermediate_yaw_rate_change_ratio_steps:";
  os << _value.vehicle_back_intermediate_yaw_rate_change_ratio_steps;
  os << ",";
  os << "vehicle_brake_intermediate_acceleration_steps:";
  os << _value.vehicle_brake_intermediate_acceleration_steps;
  os << ",";
  os << "vehicle_continue_forward_intermediate_acceleration_steps:";
  os << _value.vehicle_continue_forward_intermediate_acceleration_steps;
  os << ",";
  os << "vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps:";
  os << _value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  os << ",";
  os << "pedestrian_continue_forward_intermediate_heading_change_ratio_steps:";
  os << _value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  os << ",";
  os << "pedestrian_continue_forward_intermediate_acceleration_steps:";
  os << _value.pedestrian_continue_forward_intermediate_acceleration_steps;
  os << ",";
  os << "pedestrian_brake_intermediate_acceleration_steps:";
  os << _value.pedestrian_brake_intermediate_acceleration_steps;
  os << ",";
  os << "pedestrian_front_intermediate_heading_change_ratio_steps:";
  os << _value.pedestrian_front_intermediate_heading_change_ratio_steps;
  os << ",";
  os << "pedestrian_back_intermediate_heading_change_ratio_steps:";
  os << _value.pedestrian_back_intermediate_heading_change_ratio_steps;
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

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::UnstructuredSettings> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::UnstructuredSettings const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_UNSTRUCTUREDSETTINGS
