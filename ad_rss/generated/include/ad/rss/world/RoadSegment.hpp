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
#include "ad/rss/world/LaneSegmentVector.hpp"
#include "ad/rss/world/RoadSegmentType.hpp"
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
 * \brief DataType RoadSegment
 *
 * A RoadSegment is defined by lateral neighboring lane segments, a type and some intersection
 * correction metrics.
 * The lane segments within a road segment have to be ordered from left to right in
 * respect to the driving direction defined by the road area.
 */
struct RoadSegment
{
  /*!
   * \brief Smart pointer on RoadSegment
   */
  typedef std::shared_ptr<RoadSegment> Ptr;

  /*!
   * \brief Smart pointer on constant RoadSegment
   */
  typedef std::shared_ptr<RoadSegment const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RoadSegment() = default;

  /*!
   * \brief standard destructor
   */
  ~RoadSegment() = default;

  /*!
   * \brief standard copy constructor
   */
  RoadSegment(const RoadSegment &other) = default;

  /*!
   * \brief standard move constructor
   */
  RoadSegment(RoadSegment &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RoadSegment
   *
   * \returns Reference to this RoadSegment.
   */
  RoadSegment &operator=(const RoadSegment &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RoadSegment
   *
   * \returns Reference to this RoadSegment.
   */
  RoadSegment &operator=(RoadSegment &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RoadSegment
   *
   * \returns \c true if both RoadSegment are equal
   */
  bool operator==(const RoadSegment &other) const
  {
    return (type == other.type) && (lane_segments == other.lane_segments)
      && (minimum_length_after_intersecting_area == other.minimum_length_after_intersecting_area)
      && (minimum_length_before_intersecting_area == other.minimum_length_before_intersecting_area);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RoadSegment.
   *
   * \returns \c true if both RoadSegment are different
   */
  bool operator!=(const RoadSegment &other) const
  {
    return !operator==(other);
  }

  /*!
   * The type of this road segment in context of the RssArea it belongs to.
   */
  ::ad::rss::world::RoadSegmentType type{::ad::rss::world::RoadSegmentType::Normal};
  ::ad::rss::world::LaneSegmentVector lane_segments;

  /*!
   * The mimum length after the actual intersecting area of an intersection type road
   * segment.
   * If > 0 the actual area intersecting with the other vehicles route within an intersection
   * segment ends that distance before this road segment ends.
   */
  ::ad::physics::Distance minimum_length_after_intersecting_area{0.0};

  /*!
   * The mimum length before the actual intersecting area of an intersection type road
   * segment.
   * If > 0 the actual area intersecting with the other vehicles route within an intersection
   * segment starts that distance after this road segment starts.
   */
  ::ad::physics::Distance minimum_length_before_intersecting_area{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_ROADSEGMENT
#define GEN_GUARD_AD_RSS_WORLD_ROADSEGMENT
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
 * \param[in] _value RoadSegment value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RoadSegment const &_value)
{
  os << "RoadSegment(";
  os << "type:";
  os << _value.type;
  os << ",";
  os << "lane_segments:";
  os << _value.lane_segments;
  os << ",";
  os << "minimum_length_after_intersecting_area:";
  os << _value.minimum_length_after_intersecting_area;
  os << ",";
  os << "minimum_length_before_intersecting_area:";
  os << _value.minimum_length_before_intersecting_area;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RoadSegment
 */
inline std::string to_string(::ad::rss::world::RoadSegment const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::RoadSegment> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::RoadSegment const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_ROADSEGMENT
