// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <limits>
#include "ad/rss/world/LaneSegment.hpp"
#include "ad/rss/world/Object.hpp"

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
} // namespace rss
} // namespace ad
