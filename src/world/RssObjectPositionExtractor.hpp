// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <limits>
#include "ad_rss/world/LaneSegment.hpp"
#include "ad_rss/world/Object.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

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
 *   - calculate the position of the object specified by the occupiedRegions in the situation coordinate system
 *   - calculate the position to intersection if laneSegments are part of an intersection
 *   - determine whether the object is on lanes in positive or negative driving direction
 */
class RssObjectPositionExtractor
{
public:
  /**
   * @brief Constructor
   *
   * @param occupiedRegions representing the object
   */
  explicit RssObjectPositionExtractor(OccupiedRegionVector const &occupiedRegions);

  /**
   * @brief Indicate that there is a new road segment
   *
   * @param[in] longitudinalStartMin minimal distance in the situation based coordinate system to the start of the road
   * segment
   * @param[in] longitudinalStartMax maximum distance in the situation based coordinate system to the start of the road
   * segment
   *
   * @returns return false if an error occurred, true otherwise.
   */
  bool newRoadSegment(physics::Distance const &longitudinalStartMin, physics::Distance const &longitudinalStartMax);

  /**
   * @brief Add information of the next adjacent laneSegement
   *
   * @param[in] lateralDistance minimal and maximal lateral distance to the begin of the segment
   * @param[in] laneSegment the information about the laneSegment
   *
   * @returns false if an error occurred, true otherwise.
   */
  bool newLaneSegment(physics::MetricRange lateralDistance, LaneSegment const &laneSegment);

  /**
   * @brief Retrieve the objectDimension information back from the class
   *
   * @param[out] objectDimensions
   *
   * @returns true if calculation is complete, false if not all occupiedRegions are processed yet
   */
  bool getObjectDimensions(ObjectDimensions &objectDimensions);

private:
  OccupiedRegionVector mOccupiedRegions;

  physics::Distance mCurrentLongitudinalMax{0};
  physics::Distance mCurrentLongitudinalMin{0};

  bool mIntersectionReached{false};
  bool mIntersectionEndReached{false};

  ObjectDimensions mObjectDimensions;
};

} // namespace world
} // namespace ad_rss
