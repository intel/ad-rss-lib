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

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Angle.hpp"
#include "ad/rss/state/UnstructuredTrajectorySet.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType UnstructuredConstellationStateInformation
 *
 * Structure holding additional information on the reason for the unstructured constellation response.
 */
struct UnstructuredConstellationStateInformation
{
  /*!
   * \brief Smart pointer on UnstructuredConstellationStateInformation
   */
  typedef std::shared_ptr<UnstructuredConstellationStateInformation> Ptr;

  /*!
   * \brief Smart pointer on constant UnstructuredConstellationStateInformation
   */
  typedef std::shared_ptr<UnstructuredConstellationStateInformation const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  UnstructuredConstellationStateInformation() = default;

  /*!
   * \brief standard destructor
   */
  ~UnstructuredConstellationStateInformation() = default;

  /*!
   * \brief standard copy constructor
   */
  UnstructuredConstellationStateInformation(const UnstructuredConstellationStateInformation &other) = default;

  /*!
   * \brief standard move constructor
   */
  UnstructuredConstellationStateInformation(UnstructuredConstellationStateInformation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other UnstructuredConstellationStateInformation
   *
   * \returns Reference to this UnstructuredConstellationStateInformation.
   */
  UnstructuredConstellationStateInformation &operator=(const UnstructuredConstellationStateInformation &other)
    = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other UnstructuredConstellationStateInformation
   *
   * \returns Reference to this UnstructuredConstellationStateInformation.
   */
  UnstructuredConstellationStateInformation &operator=(UnstructuredConstellationStateInformation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredConstellationStateInformation
   *
   * \returns \c true if both UnstructuredConstellationStateInformation are equal
   */
  bool operator==(const UnstructuredConstellationStateInformation &other) const
  {
    return (brake_trajectory_set == other.brake_trajectory_set)
      && (continue_forward_trajectory_set == other.continue_forward_trajectory_set)
      && (considered_drive_away_steering_angle == other.considered_drive_away_steering_angle);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredConstellationStateInformation.
   *
   * \returns \c true if both UnstructuredConstellationStateInformation are different
   */
  bool operator!=(const UnstructuredConstellationStateInformation &other) const
  {
    return !operator==(other);
  }

  /*!
   * The set of brake trajectories considered on calculation of the RSS state.
   */
  ::ad::rss::state::UnstructuredTrajectorySet brake_trajectory_set;

  /*!
   * The set of continue forward trajectories considered on calculation of the RSS state.
   */
  ::ad::rss::state::UnstructuredTrajectorySet continue_forward_trajectory_set;

  /*!
   * The considered current drive away steering angle in case of DriveAway state
   */
  ::ad::physics::Angle considered_drive_away_steering_angle{0.};
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONSTATEINFORMATION
#define GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONSTATEINFORMATION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value UnstructuredConstellationStateInformation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredConstellationStateInformation const &_value)
{
  os << "UnstructuredConstellationStateInformation(";
  os << "brake_trajectory_set:";
  os << _value.brake_trajectory_set;
  os << ",";
  os << "continue_forward_trajectory_set:";
  os << _value.continue_forward_trajectory_set;
  os << ",";
  os << "considered_drive_away_steering_angle:";
  os << _value.considered_drive_away_steering_angle;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredConstellationStateInformation
 */
inline std::string to_string(::ad::rss::state::UnstructuredConstellationStateInformation const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::UnstructuredConstellationStateInformation> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::state::UnstructuredConstellationStateInformation const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONSTATEINFORMATION
