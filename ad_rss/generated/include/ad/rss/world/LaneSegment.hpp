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
#include "ad/physics/MetricRange.hpp"
#include "ad/rss/world/LaneDrivingDirection.hpp"
#include "ad/rss/world/LaneSegmentId.hpp"
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
 * \brief DataType LaneSegment
 *
 * Defines a lane segment.
 */
struct LaneSegment
{
  /*!
   * \brief Smart pointer on LaneSegment
   */
  typedef std::shared_ptr<LaneSegment> Ptr;

  /*!
   * \brief Smart pointer on constant LaneSegment
   */
  typedef std::shared_ptr<LaneSegment const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  LaneSegment() = default;

  /*!
   * \brief standard destructor
   */
  ~LaneSegment() = default;

  /*!
   * \brief standard copy constructor
   */
  LaneSegment(const LaneSegment &other) = default;

  /*!
   * \brief standard move constructor
   */
  LaneSegment(LaneSegment &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LaneSegment
   *
   * \returns Reference to this LaneSegment.
   */
  LaneSegment &operator=(const LaneSegment &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LaneSegment
   *
   * \returns Reference to this LaneSegment.
   */
  LaneSegment &operator=(LaneSegment &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LaneSegment
   *
   * \returns \c true if both LaneSegment are equal
   */
  bool operator==(const LaneSegment &other) const
  {
    return (id == other.id) && (driving_direction == other.driving_direction) && (length == other.length)
      && (width == other.width);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LaneSegment.
   *
   * \returns \c true if both LaneSegment are different
   */
  bool operator!=(const LaneSegment &other) const
  {
    return !operator==(other);
  }

  /*!
   * The id of the lane segment.
   */
  ::ad::rss::world::LaneSegmentId id;

  /*!
   * The nominal direction of the traffic flow of this lane segment in context of the RssArea it belongs to.
   */
  ::ad::rss::world::LaneDrivingDirection driving_direction{::ad::rss::world::LaneDrivingDirection::Bidirectional};

  /*!
   * The metric range of the lane segments length.
   */
  ::ad::physics::MetricRange length;

  /*!
   * The metric range of the lane segments width.
   */
  ::ad::physics::MetricRange width;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_LANESEGMENT
#define GEN_GUARD_AD_RSS_WORLD_LANESEGMENT
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
 * \param[in] _value LaneSegment value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LaneSegment const &_value)
{
  os << "LaneSegment(";
  os << "id:";
  os << _value.id;
  os << ",";
  os << "driving_direction:";
  os << _value.driving_direction;
  os << ",";
  os << "length:";
  os << _value.length;
  os << ",";
  os << "width:";
  os << _value.width;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LaneSegment
 */
inline std::string to_string(::ad::rss::world::LaneSegment const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::LaneSegment> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::LaneSegment const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_LANESEGMENT
