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

#include "world/RssSituationCoordinateSystemConversion.hpp"
#include <algorithm>
#include <limits>
#include <vector>
#include "ad_rss/core/RssLogging.hpp"
#include "world/RssObjectPositionExtractor.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

using physics::Distance;
using physics::MetricRange;

bool calculateLateralDimensions(RoadArea const &roadArea, std::vector<MetricRange> &lateralRanges)
{
  bool result = true;

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
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationCoordinateSystemConversion::calculateLateralDimensions>> Exception catched",
                roadArea);
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
  }
  catch (...)
  {
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationCoordinateSystemConversion::calculateObjectDimensions>> Exception catched",
                objects,
                roadArea);
    return false;
  }

  return result;
}

bool calculateObjectDimensions(Object const &egoVehicle,
                               Scene const &currentScene,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition)
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
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationCoordinateSystemConversion::calculateObjectDimensions>> Exception catched",
                egoVehicle,
                currentScene);
    return false;
  }

  return result;
}

bool calculateObjectDimensions(Object const &object,
                               ::ad_rss::world::RoadArea const &roadArea,
                               ObjectDimensions &objectPosition)
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
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationCoordinateSystemConversion::calculateObjectDimensions>> Exception catched",
                object,
                roadArea);
    return false;
  }

  return result;
}

void convertVehicleStateDynamics(Object const &object, ::ad_rss::situation::VehicleState &vehicleState)
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
} // namespace ad_rss
