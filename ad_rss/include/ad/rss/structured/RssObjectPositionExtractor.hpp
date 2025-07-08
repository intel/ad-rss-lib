// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <limits>
#include "ad/rss/world/Object.hpp"
#include "ad/rss/world/RoadSegment.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace structured
 */
namespace structured {

/**
 * @brief class to store information of object position dimensions
 */
class ObjectDimensions
{
public:
  ObjectDimensions()
  {
    longitudinalDimensions.maximum = std::numeric_limits<physics::Distance>::lowest();
    longitudinalDimensions.minimum = std::numeric_limits<physics::Distance>::max();

    lateralDimensions.maximum = std::numeric_limits<physics::Distance>::lowest();
    lateralDimensions.minimum = std::numeric_limits<physics::Distance>::max();
  }

  /**
   * @brief range of longitudinal object position
   */
  physics::MetricRange longitudinalDimensions;

  /**
   * @brief range of lateral object position
   */
  physics::MetricRange lateralDimensions;

  /**
   * @brief flag to indicate if the object is on the positive driving lane
   */
  bool onPositiveLane{false};

  /**
   * @brief flag to indicate if the object is on the negative driving lane
   */
  bool onNegativeLane{false};

  /**
   * @brief range of intersection position
   *
   * minimum: minimal distance to intersection entry
   * maximum: maximum distance to intersection exit
   */
  physics::MetricRange intersectionPosition;
};

/**
 * @brief class to calculate object positions
 *
 * class will receive road and lane segments in consecutive order and will :
 *   - calculate the position of the object specified by the occupied_regions in the constellation coordinate system
 *   - calculate the position to intersection if laneSegments are part of an intersection
 *   - determine whether the object is on lanes in positive or negative driving direction
 */
class RssObjectPositionExtractor
{
public:
  /**
   * @brief Constructor
   *
   * @param occupied_regions representing the object
   */
  explicit RssObjectPositionExtractor(world::OccupiedRegionVector const &occupied_regions);

  /**
   * @brief Indicate that there is a new road segment
   *
   * @param[in] longitudinalStart metric range in the constellation based coordinate system to the start of the
   *   road segment
   * @param[in] roadSegment the new road segment
   *
   * @returns return false if an error occurred, true otherwise.
   */
  bool newRoadSegment(physics::MetricRange const &longitudinalStart, world::RoadSegment const &roadSegment);

  /**
   * @brief Add information of the next adjacent laneSegement
   *
   * @param[in] lateral_distance minimal and maximal lateral distance to the begin of the segment
   * @param[in] laneSegment the information about the laneSegment
   *
   * @returns false if an error occurred, true otherwise.
   */
  bool newLaneSegment(physics::MetricRange lateral_distance, world::LaneSegment const &laneSegment);

  /**
   * @brief Retrieve the objectDimension information back from the class
   *
   * @param[out] objectDimensions
   *
   * @returns true if calculation is complete, false if not all occupied_regions are processed yet
   */
  bool getObjectDimensions(ObjectDimensions &objectDimensions);

private:
  world::OccupiedRegionVector mOccupiedRegions;

  physics::MetricRange mCurrentLongitudinalRoadSegmentStart;
  physics::Distance mRoadSegmentMinLengthAfterIntersectingArea{0.};

  enum class IntersectionState
  {
    BeforeIntersection,
    WithinIntersection,
    AfterIntersection
  };
  IntersectionState mIntersectionState{IntersectionState::BeforeIntersection};

  ObjectDimensions mObjectDimensions;
};

} // namespace structured
} // namespace rss
} // namespace ad
