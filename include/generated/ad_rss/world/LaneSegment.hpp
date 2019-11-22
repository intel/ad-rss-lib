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

#include <cstdint>
#include <limits>
#include <memory>
#include "ad_rss/physics/MetricRange.hpp"
#include "ad_rss/world/LaneDrivingDirection.hpp"
#include "ad_rss/world/LaneSegmentId.hpp"
#include "ad_rss/world/LaneSegmentType.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
  ::ad_rss::world::LaneSegmentId id;

  /*!
   * The type of this lane segment in context of the RssArea it belongs to.
   */
  ::ad_rss::world::LaneSegmentType type{::ad_rss::world::LaneSegmentType::Normal};

  /*!
   * The nominal direction of the traffic flow of this lane segment in context of the RssArea it belongs to.
   */
  ::ad_rss::world::LaneDrivingDirection drivingDirection{::ad_rss::world::LaneDrivingDirection::Bidirectional};

  /*!
   * The metric range of the lane segments length.
   */
  ::ad_rss::physics::MetricRange length;

  /*!
   * The metric range of the lane segments width.
   */
  ::ad_rss::physics::MetricRange width;
};

} // namespace world
} // namespace ad_rss
