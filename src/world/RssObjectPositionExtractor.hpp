// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "rss/world/Distance.hpp"
#include "rss/world/LaneSegment.hpp"
#include "rss/world/Object.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
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
    longitudinalDimensions.maximum = std::numeric_limits<Distance>::lowest();
    longitudinalDimensions.minimum = std::numeric_limits<Distance>::max();

    lateralDimensions.maximum = std::numeric_limits<Distance>::lowest();
    lateralDimensions.minimum = std::numeric_limits<Distance>::max();
  }

  /**
   * @brief range of longitudinal object position
   */
  MetricRange longitudinalDimensions;

  /**
    * @brief range of lateral object position
    */
  MetricRange lateralDimensions;

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
  MetricRange intersectionPosition;
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
  bool newRoadSegment(Distance const &longitudinalStartMin, Distance const &longitudinalStartMax);

  /**
   * @brief Add information of the next adjacent laneSegement
   *
   * @param[in] lateralDistance minimal and maximal lateral distance to the begin of the segment
   * @param[in] laneSegment the information about the laneSegment
   *
   * @returns false if an error occurred, true otherwise.
   */
  bool newLaneSegment(world::MetricRange lateralDistance, LaneSegment const &laneSegment);

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

  Distance mCurrentLongitudinalMax{0};
  Distance mCurrentLongitudinalMin{0};

  bool mIntersectionReached{false};
  bool mIntersectionEndReached{false};

  ObjectDimensions mObjectDimensions;
};

} // namespace world
} // namespace rss
