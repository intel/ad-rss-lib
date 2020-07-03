// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#include "RssSituationCoordinateSystemConversion.hpp"

#include <algorithm>
#include <limits>
#include <vector>

namespace ad {
namespace rss {
namespace world {

using physics::Distance;
using physics::MetricRange;

bool calculateLateralDimensions(RoadArea const &roadArea, std::vector<MetricRange> &lateralRanges)
{
  bool result = true;
  if (roadArea.empty())
  {
    spdlog::error("RssSituationCoordinateSystemConversion::calculateLateralDimensions>> road area empty");
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
        if (roadSegment.empty())
        {
          spdlog::error("RssSituationCoordinateSystemConversion::calculateLateralDimensions>> road segment empty");
          return false;
        }
        if (roadSegment.size() > currentLateralIndex)
        {
          roadSegmentFound = true;
          lateralDistanceMax = std::max(lateralDistanceMax, roadSegment[currentLateralIndex].width.maximum);
          lateralDistanceMin = std::min(lateralDistanceMin, roadSegment[currentLateralIndex].width.minimum);
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
 * The RoadArea describes the relation between object and egoVehicle.
 * The RoadArea can be regarded as as matrix.
 * Each cell of the matrix is a laneSegment.
 * The rows of a cell are combined to a roadSegment.
 *
 * The objects are defined by occupiedRegions. These are the cells that are overlapped by the objects (marked with x and
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
 * previous roadSegments
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

bool calculateObjectDimensions(std::vector<Object> const &objects,
                               RoadArea const &roadArea,
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
        if (object.occupiedRegions.empty())
        {
          spdlog::error(
            "RssSituationCoordinateSystemConversion::calculateObjectDimensions>> occupied region of object {} empty",
            object.objectId);
          return false;
        }
        extractors.push_back(RssObjectPositionExtractor(object.occupiedRegions));
      }

      for (auto roadSegment = roadArea.cbegin(); roadSegment != roadArea.cend() && result; roadSegment++)
      {
        Distance longitudinalDistanceMax = Distance(0.);
        Distance longitudinalDistanceMin = Distance(0.);
        for (auto &extractor : extractors)
        {
          result = result && extractor.newRoadSegment(longitudinalDimensions.minimum, longitudinalDimensions.maximum);
        }

        // This is needed, because we want to look for the minimum
        longitudinalDistanceMin = std::numeric_limits<Distance>::max();

        for (std::size_t i = 0u; i < roadSegment->size() && result; i++)
        {
          if (i < lateralRanges.size())
          {
            for (auto &extractor : extractors)
            {
              result = result && extractor.newLaneSegment(lateralRanges[i], (*roadSegment)[i]);
            }
          }
          else
          {
            result = false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
          }

          longitudinalDistanceMax = std::max(longitudinalDistanceMax, (*roadSegment)[i].length.maximum);
          longitudinalDistanceMin = std::min(longitudinalDistanceMin, (*roadSegment)[i].length.minimum);
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
      spdlog::error("RssSituationCoordinateSystemConversion::calculateObjectDimensions>> calculateLateralDimensions of "
                    "object {} failed",
                    objects.front().objectId);
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

bool calculateObjectDimensions(Scene const &currentScene,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition)
{
  bool result = true;

  try
  {
    std::vector<Object> objects;
    objects.push_back(currentScene.egoVehicle);
    objects.push_back(currentScene.object);

    std::vector<ObjectDimensions> objectDimensions;
    result = calculateObjectDimensions(objects, currentScene.egoVehicleRoad, objectDimensions);

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

bool calculateObjectDimensions(Object const &object, RoadArea const &roadArea, ObjectDimensions &objectPosition)
{
  bool result = true;

  try
  {
    std::vector<Object> objects;
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

void convertVehicleStateDynamics(Object const &object,
                                 RssDynamics const &rssDynamics,
                                 ::ad::rss::situation::VehicleState &vehicleState)
{
  vehicleState.dynamics = rssDynamics;
  vehicleState.velocity.speedLon.minimum = object.velocity.speedLonMin;
  vehicleState.velocity.speedLon.maximum = object.velocity.speedLonMax;
  vehicleState.velocity.speedLat.minimum = object.velocity.speedLatMin;
  vehicleState.velocity.speedLat.maximum = object.velocity.speedLatMax;
}

} // namespace world
} // namespace rss
} // namespace ad
