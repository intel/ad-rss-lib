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

#include "ad/rss/structured/RssLaneCoordinateSystemConversion.hpp"
#include <algorithm>
#include <limits>
#include <vector>
#include "ad/rss/core/Logging.hpp"

namespace ad {
namespace rss {
namespace structured {

using physics::Distance;
using physics::MetricRange;

bool calculateLateralDimensions(world::RoadArea const &roadArea, std::vector<MetricRange> &lateralRanges)
{
  bool result = true;
  if (roadArea.empty())
  {
    core::getLogger()->error(
      "RssLaneCoordinateSystemConversion::calculateLateralDimensions>> road area empty");
    return false;
  }

  try
  {
    MetricRange currentLateralPosition;

    currentLateralPosition.maximum = Distance(0.);
    currentLateralPosition.minimum = Distance(0.);

    std::size_t currentLateralIndex = 0u;
    bool roadSegmentFound = true;
    while (roadSegmentFound)
    {
      roadSegmentFound = false;
      lateralRanges.push_back(currentLateralPosition);

      Distance lateralDistanceMax = Distance(0.);
      Distance lateralDistanceMin = std::numeric_limits<Distance>::max();
      for (const auto &roadSegment : roadArea)
      {
        if (roadSegment.lane_segments.empty())
        {
          core::getLogger()->error(
            "RssLaneCoordinateSystemConversion::calculateLateralDimensions>> road segment empty");
          return false;
        }
        if (roadSegment.lane_segments.size() > currentLateralIndex)
        {
          roadSegmentFound = true;
          lateralDistanceMax
            = std::max(lateralDistanceMax, roadSegment.lane_segments[currentLateralIndex].width.maximum);
          lateralDistanceMin
            = std::min(lateralDistanceMin, roadSegment.lane_segments[currentLateralIndex].width.minimum);
        }
      }

      if (roadSegmentFound)
      {
        currentLateralPosition.maximum += lateralDistanceMax;
        currentLateralPosition.minimum += lateralDistanceMin;
        currentLateralIndex++;
      }
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

/**
 * The RoadArea describes the relation between object and ego_vehicle.
 * The RoadArea can be regarded as as matrix.
 * Each cell of the matrix is a laneSegment.
 * The rows of a cell are combined to a roadSegment.
 *
 * The objects are defined by occupied_regions. These are the cells that are overlapped by the objects (marked with x
 * and
 * o in the following sketch).
 *
 *                 ___________________________
 *                |         |       _|_       |
 *                |         |      |o|o|      |
 *                ----------------------------
 *                |        _|_     |o|o|      |
 *                |       |x|x|     -|-       |
 *                 ---------------------------
 *                |       |x|x|      |        |
 *                |        -|-       |        |   roadSegment
 *                |         |        |        |
 *               0 ----------------------------
 *                 0
 *
 *
 *  Each laneSegment has a minimum and maximum length and width.
 *  In order to determine the dimension of the objects it is required to calculate the minimum and maximum
 *  length and width towards the object borders.
 *  For the longitudinal case:
 *    for each roadSegment the maximum and minimum length are extracted.
 *    The starting minimum and maximum length of a roadSegment is the sum of the minimum or maximum length of all the
 * previous road_segments
 *  This happens on the fly in calculateObjectDimensions.
 *
 *  For lateral case (calculateLateralDimensions):
 *   for each column of the matrix minimum and maximum width needs to be determined
 *   For the first column this is the minimum and maximum of all the first laneSegments within every roadSegment.
 *   For the next column this is the minimum and maximum of all the second laneSegmetns within every roadSegment plus
 * the minimum / maximum value of the first column
 *   and so on...
 *
 *  These values needs to be determined in a separate processing step (calculateLateralDimensions)
 *
 *  The minimum and maximum distances to the begin of each laneSegment are then passed together with the laneSegement to
 * the RssObjectPostionExtractor.
 *  The RssObjectPostionExtractor checks whether the laneSegment is occupied by the object and if so minimum and maximum
 * object dimensions
 *  of the object area in the laneSegment are calculated and combined to a global dimension of the object.
 *
 */

bool calculateObjectDimensions(std::vector<world::Object> const &objects,
                               world::RoadArea const &roadArea,
                               std::vector<ObjectDimensions> &objectDimensions)
{
  bool result = true;

  try
  {
    std::vector<MetricRange> lateralRanges;
    result = calculateLateralDimensions(roadArea, lateralRanges);
    if (result)
    {
      MetricRange longitudinalDimensions;

      longitudinalDimensions.maximum = Distance(0.);
      longitudinalDimensions.minimum = Distance(0.);

      std::vector<RssObjectPositionExtractor> extractors;
      for (const auto &object : objects)
      {
        if (object.occupied_regions.empty())
        {
          core::getLogger()->error(
            "RssLaneCoordinateSystemConversion::calculateObjectDimensions>> occupied region of "
            "object {} empty",
            object.object_id);
          return false;
        }
        extractors.push_back(RssObjectPositionExtractor(object.occupied_regions));
      }

      for (auto const &roadSegment : roadArea)
      {
        for (auto &extractor : extractors)
        {
          result = result && extractor.newRoadSegment(longitudinalDimensions, roadSegment);
        }

        // This is needed, because we want to look for the minimum
        Distance longitudinalDistanceMax = Distance(0.);
        Distance longitudinalDistanceMin = std::numeric_limits<Distance>::max();

        for (std::size_t i = 0u; i < roadSegment.lane_segments.size() && result; i++)
        {
          if (i < lateralRanges.size())
          {
            for (auto &extractor : extractors)
            {
              result = result && extractor.newLaneSegment(lateralRanges[i], roadSegment.lane_segments[i]);
            }
          }
          else
          {
            result = false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
          }

          longitudinalDistanceMax = std::max(longitudinalDistanceMax, roadSegment.lane_segments[i].length.maximum);
          longitudinalDistanceMin = std::min(longitudinalDistanceMin, roadSegment.lane_segments[i].length.minimum);
        }

        if (result)
        {
          longitudinalDimensions.maximum += longitudinalDistanceMax;
          longitudinalDimensions.minimum += longitudinalDistanceMin;
        }
      }

      if (result)
      {
        for (auto &extractor : extractors)
        {
          ObjectDimensions extractedDimensions;
          result = result && extractor.getObjectDimensions(extractedDimensions);
          objectDimensions.push_back(extractedDimensions);
        }
      }
    }
    else
    {
      core::getLogger()->error(
        "RssLaneCoordinateSystemConversion::calculateObjectDimensions>> calculateLateralDimensions of "
        "object {} failed",
        objects.front().object_id);
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

bool calculateObjectDimensions(world::Constellation const &currentConstellation,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition)
{
  bool result = true;

  try
  {
    std::vector<world::Object> objects;
    objects.push_back(currentConstellation.ego_vehicle);
    objects.push_back(currentConstellation.object);

    std::vector<ObjectDimensions> objectDimensions;
    result = calculateObjectDimensions(objects, currentConstellation.ego_vehicle_road, objectDimensions);

    if (result && (objectDimensions.size() == 2))
    {
      egoVehiclePosition = objectDimensions[0];
      objectPosition = objectDimensions[1];
    }
    else
    {
      result = false;
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

bool calculateObjectDimensions(world::Object const &object,
                               world::RoadArea const &roadArea,
                               ObjectDimensions &objectPosition)
{
  bool result = true;

  try
  {
    std::vector<world::Object> objects;
    objects.push_back(object);

    std::vector<ObjectDimensions> objectDimensions;
    result = calculateObjectDimensions(objects, roadArea, objectDimensions);

    if (result && (objectDimensions.size() == 1))
    {
      objectPosition = objectDimensions[0];
    }
    else
    {
      result = false;
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

void convertVehicleStateDynamics(world::Object const &object,
                                 world::RssDynamics const &rssDynamics,
                                 core::RelativeObjectState &vehicleState)
{
  vehicleState.dynamics = rssDynamics;
  vehicleState.structured_object_state.velocity = object.velocity;
}

} // namespace structured
} // namespace rss
} // namespace ad
