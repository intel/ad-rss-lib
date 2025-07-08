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
#include "ad/physics/AngularVelocity.hpp"
#include "ad/physics/Dimension2D.hpp"
#include "ad/physics/Distance2D.hpp"
#include "ad/physics/SpeedRange.hpp"
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
 * \brief DataType ObjectState
 *
 * State of an object in the reference coordinate system (e.g. ENU).
 * As the evaluation results of multiple constellation have to be merged, this reference
 * system has to be the same for all entries at a specific time.
 * The proper response, i.e. the heading_ranges of the unstructured constellation response,
 * refers to this reference coodinate system.
 */
struct ObjectState
{
  /*!
   * \brief Smart pointer on ObjectState
   */
  typedef std::shared_ptr<ObjectState> Ptr;

  /*!
   * \brief Smart pointer on constant ObjectState
   */
  typedef std::shared_ptr<ObjectState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  ObjectState() = default;

  /*!
   * \brief standard destructor
   */
  ~ObjectState() = default;

  /*!
   * \brief standard copy constructor
   */
  ObjectState(const ObjectState &other) = default;

  /*!
   * \brief standard move constructor
   */
  ObjectState(ObjectState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns Reference to this ObjectState.
   */
  ObjectState &operator=(const ObjectState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns Reference to this ObjectState.
   */
  ObjectState &operator=(ObjectState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns \c true if both ObjectState are equal
   */
  bool operator==(const ObjectState &other) const
  {
    return (yaw == other.yaw) && (dimension == other.dimension) && (yaw_rate == other.yaw_rate)
      && (center_point == other.center_point) && (speed_range == other.speed_range)
      && (steering_angle == other.steering_angle);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ObjectState.
   *
   * \returns \c true if both ObjectState are different
   */
  bool operator!=(const ObjectState &other) const
  {
    return !operator==(other);
  }

  /*!
   * The heading angle of the object in the reference coordinate system (e.g. ENU).
   */
  ::ad::physics::Angle yaw;

  /*!
   * The dimension of the object in the reference coordinate system (e.g. ENU).
   */
  ::ad::physics::Dimension2D dimension;

  /*!
   * The angular velocity of the object in the reference coordinate system (e.g. ENU).
   */
  ::ad::physics::AngularVelocity yaw_rate;

  /*!
   * The center point of the object in the reference coordinate system (e.g. ENU).
   */
  ::ad::physics::Distance2D center_point;

  /*!
   * The speed of the object in the reference coordinate system (e.g. ENU) with its range.
   */
  ::ad::physics::SpeedRange speed_range;

  /*!
   * The steering angle of the object in the object frame.
   */
  ::ad::physics::Angle steering_angle;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE
#define GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE
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
 * \param[in] _value ObjectState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, ObjectState const &_value)
{
  os << "ObjectState(";
  os << "yaw:";
  os << _value.yaw;
  os << ",";
  os << "dimension:";
  os << _value.dimension;
  os << ",";
  os << "yaw_rate:";
  os << _value.yaw_rate;
  os << ",";
  os << "center_point:";
  os << _value.center_point;
  os << ",";
  os << "speed_range:";
  os << _value.speed_range;
  os << ",";
  os << "steering_angle:";
  os << _value.steering_angle;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for ObjectState
 */
inline std::string to_string(::ad::rss::world::ObjectState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::ObjectState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::ObjectState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE
