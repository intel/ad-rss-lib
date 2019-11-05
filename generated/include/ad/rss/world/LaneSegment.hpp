/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/physics/MetricRange.hpp"
#include "ad/rss/world/LaneDrivingDirection.hpp"
#include "ad/rss/world/LaneSegmentId.hpp"
#include "ad/rss/world/LaneSegmentType.hpp"
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
  using Ptr = std::shared_ptr<LaneSegment>;
  using ConstPtr = std::shared_ptr<LaneSegment const>;

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
    return (id == other.id) && (type == other.type) && (drivingDirection == other.drivingDirection)
      && (length == other.length) && (width == other.width);
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
   * The type of this lane segment in context of the RssArea it belongs to.
   */
  ::ad::rss::world::LaneSegmentType type{::ad::rss::world::LaneSegmentType::Normal};

  /*!
   * The nominal direction of the traffic flow of this lane segment in context of the RssArea it belongs to.
   */
  ::ad::rss::world::LaneDrivingDirection drivingDirection{::ad::rss::world::LaneDrivingDirection::Bidirectional};

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

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_WORLD_LANESEGMENT
#define OSTREAM_AD_RSS_WORLD_LANESEGMENT
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
 * \param[in] stream The output stream to write to
 * \param[in] value LaneSegment value
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
  os << "type:";
  os << _value.type;
  os << ",";
  os << "drivingDirection:";
  os << _value.drivingDirection;
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
#endif // OSTREAM_AD_RSS_WORLD_LANESEGMENT
