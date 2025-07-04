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
#include "ad/physics/Distance.hpp"
#include "ad/rss/world/Velocity.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/*!
 * \brief DataType StructuredObjectState
 *
 * The state of an object within the constellation specific lane coordinate system.
 * The state consists of the following components in respect to the constellation lane
 * coordinate system: the velocity, the distance to the intersection (if applicable
 * ), a Right-of-Way priority flag as well as a flag stating if the vehicle is driving
 * in its correct lane.
 */
struct StructuredObjectState
{
  /*!
   * \brief Smart pointer on StructuredObjectState
   */
  typedef std::shared_ptr<StructuredObjectState> Ptr;

  /*!
   * \brief Smart pointer on constant StructuredObjectState
   */
  typedef std::shared_ptr<StructuredObjectState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  StructuredObjectState() = default;

  /*!
   * \brief standard destructor
   */
  ~StructuredObjectState() = default;

  /*!
   * \brief standard copy constructor
   */
  StructuredObjectState(const StructuredObjectState &other) = default;

  /*!
   * \brief standard move constructor
   */
  StructuredObjectState(StructuredObjectState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other StructuredObjectState
   *
   * \returns Reference to this StructuredObjectState.
   */
  StructuredObjectState &operator=(const StructuredObjectState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other StructuredObjectState
   *
   * \returns Reference to this StructuredObjectState.
   */
  StructuredObjectState &operator=(StructuredObjectState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other StructuredObjectState
   *
   * \returns \c true if both StructuredObjectState are equal
   */
  bool operator==(const StructuredObjectState &other) const
  {
    return (velocity == other.velocity) && (has_priority == other.has_priority)
      && (is_in_correct_lane == other.is_in_correct_lane)
      && (distance_to_enter_intersection == other.distance_to_enter_intersection)
      && (distance_to_leave_intersection == other.distance_to_leave_intersection);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other StructuredObjectState.
   *
   * \returns \c true if both StructuredObjectState are different
   */
  bool operator!=(const StructuredObjectState &other) const
  {
    return !operator==(other);
  }

  /*!
   * The constellation specific velocity range.
   */
  ::ad::rss::world::Velocity velocity;

  /*!
   * Flag indicating if the constellation specific Right-of-Way relation.
   */
  bool has_priority{false};

  /*!
   * Flag indicating if the vehicle driving in the correct lane
   */
  bool is_in_correct_lane{false};

  /*!
   * The minimum distance to be covered by the vehicle to enter the intersection.
   */
  ::ad::physics::Distance distance_to_enter_intersection{std::numeric_limits<::ad::physics::Distance>::max()};

  /*!
   * The maximum distance to cover by the vehicle to leave the intersection completely.
   */
  ::ad::physics::Distance distance_to_leave_intersection{std::numeric_limits<::ad::physics::Distance>::max()};
};

} // namespace core
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_STRUCTUREDOBJECTSTATE
#define GEN_GUARD_AD_RSS_CORE_STRUCTUREDOBJECTSTATE
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value StructuredObjectState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, StructuredObjectState const &_value)
{
  os << "StructuredObjectState(";
  os << "velocity:";
  os << _value.velocity;
  os << ",";
  os << "has_priority:";
  os << _value.has_priority;
  os << ",";
  os << "is_in_correct_lane:";
  os << _value.is_in_correct_lane;
  os << ",";
  os << "distance_to_enter_intersection:";
  os << _value.distance_to_enter_intersection;
  os << ",";
  os << "distance_to_leave_intersection:";
  os << _value.distance_to_leave_intersection;
  os << ")";
  return os;
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for StructuredObjectState
 */
inline std::string to_string(::ad::rss::core::StructuredObjectState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::StructuredObjectState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::core::StructuredObjectState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_STRUCTUREDOBJECTSTATE
