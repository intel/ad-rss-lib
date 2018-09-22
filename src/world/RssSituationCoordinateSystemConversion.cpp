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

#include <algorithm>

#include "RssObjectPositionExtractor.hpp"
#include "RssSituationCoordinateSystemConversion.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

bool calculateLateralDimensions(::rss::world::RoadArea const &roadArea,
                                std::vector<world::MetricRange> &lateralRanges) noexcept
{
  bool result = true;

  bool notFinished = true;
  uint32_t currentLateralIndex = 0;

  world::MetricRange currentLateralPosition;

  currentLateralPosition.maximum = 0;
  currentLateralPosition.minimum = 0;

  try
  {
    while (notFinished)
    {
      notFinished = false;
      lateralRanges.push_back(currentLateralPosition);

      Distance lateralDistanceMax = 0.;
      Distance lateralDistanceMin = std::numeric_limits<double>::infinity();
      for (const auto &roadSegment : roadArea)
      {
        if (roadSegment.size() > currentLateralIndex)
        {
          notFinished = true;
          lateralDistanceMax = std::max(lateralDistanceMax, roadSegment[currentLateralIndex].width.maximum);
          lateralDistanceMin = std::min(lateralDistanceMin, roadSegment[currentLateralIndex].width.minimum);
        }
      }

      currentLateralPosition.maximum += lateralDistanceMax;
      currentLateralPosition.minimum += lateralDistanceMin;
      currentLateralIndex++;
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
                               ::rss::world::RoadArea const &roadArea,
                               std::vector<ObjectDimensions> &objectDimensions) noexcept
{
  bool result = true;

  try
  {
    std::vector<world::MetricRange> lateralRanges;
    calculateLateralDimensions(roadArea, lateralRanges);

    world::MetricRange longitudinalDimensions;

    longitudinalDimensions.maximum = 0.;
    longitudinalDimensions.minimum = 0.;

    std::vector<RssObjectPositionExtractor> extractors;
    for (const auto &object : objects)
    {
      if (object.occupiedRegions.empty())
      {
        return false;
      }
      extractors.push_back(RssObjectPositionExtractor(object.occupiedRegions));
    }

    for (auto roadSegment = roadArea.begin(); roadSegment != roadArea.end() && result; roadSegment++)
    {
      Distance longitudinalDistanceMax = 0.;
      Distance longitudinalDistanceMin = 0.;
      for (auto &extractor : extractors)
      {
        result &= extractor.newRoadSegment(longitudinalDimensions.minimum, longitudinalDimensions.maximum);
      }

      // This is needed, because we want to look for the minimum
      longitudinalDistanceMin = std::numeric_limits<double>::infinity();

      for (auto i = 0u; i < roadSegment->size() && result; i++)
      {
        if (i < lateralRanges.size())
        {
          for (auto &extractor : extractors)
          {
            result &= extractor.newLaneSegment(lateralRanges[i], (*roadSegment)[i]);
          }
        }
        else
        {
          result = false;
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
      for (auto extractor : extractors)
      {
        ObjectDimensions extractedDimensions;
        result &= extractor.getObjectDimensions(extractedDimensions);
        objectDimensions.push_back(extractedDimensions);
      }
    }
  }
  catch (...)
  {
    return false;
  }

  return result;
}

bool calculateObjectDimensions(Object const &egoVehicle,
                               Scene const &currentScene,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition) noexcept
{
  bool result = true;

  try
  {
    std::vector<Object> objects;
    objects.push_back(egoVehicle);
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

bool calculateObjectDimensions(Object const &object,
                               ::rss::world::RoadArea const &roadArea,
                               ObjectDimensions &objectPosition) noexcept
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

void convertVehicleStateDynamics(Object const &object, ::rss::situation::VehicleState &vehicleState)
{
  vehicleState.dynamics.alphaLon.accelMax = object.dynamics.alphaLon.accelMax;
  vehicleState.dynamics.alphaLon.brakeMin = object.dynamics.alphaLon.brakeMin;
  vehicleState.dynamics.alphaLon.brakeMinCorrect = object.dynamics.alphaLon.brakeMinCorrect;
  vehicleState.dynamics.alphaLon.brakeMax = object.dynamics.alphaLon.brakeMax;

  vehicleState.dynamics.alphaLat.accelMax = object.dynamics.alphaLat.accelMax;
  vehicleState.dynamics.alphaLat.brakeMin = object.dynamics.alphaLat.brakeMin;

  vehicleState.velocity.speedLon = object.velocity.speedLon;
  vehicleState.velocity.speedLat = object.velocity.speedLat;

  vehicleState.responseTime = object.responseTime;
}

} // namespace world
} // namespace rss
