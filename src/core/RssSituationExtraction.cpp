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

#include "ad_rss/core/RssSituationExtraction.hpp"
#include "ad_rss/world/WorldModelValidInputRange.hpp"

#include "world/RssSituationCoordinateSystemConversion.hpp"

namespace ad_rss {

namespace core {
namespace RssSituationExtraction {

using physics::Distance;
using physics::MetricRange;

void calcluateRelativeLongitudinalPosition(MetricRange const &egoMetricRange,
                                           MetricRange const &otherMetricRange,
                                           situation::LongitudinalRelativePosition &longitudinalPosition,
                                           Distance &longitudinalDistance)
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    longitudinalDistance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::AtBack;
    longitudinalDistance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    longitudinalDistance = Distance(0.);
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
    }
  }
}

void calcluateRelativeLongitudinalPositionIntersection(MetricRange const &egoMetricRange,
                                                       MetricRange const &otherMetricRange,
                                                       situation::LongitudinalRelativePosition &longitudinalPosition,
                                                       Distance &longitudinalDistance)
{
  if (egoMetricRange.maximum < otherMetricRange.minimum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    longitudinalDistance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else if (otherMetricRange.maximum < egoMetricRange.minimum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::AtBack;
    longitudinalDistance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else
  {
    longitudinalDistance = Distance(0.);
    if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
    }
  }
}

void calcluateRelativeLateralPosition(MetricRange const &egoMetricRange,
                                      MetricRange const &otherMetricRange,
                                      situation::LateralRelativePosition &lateralPosition,
                                      Distance &lateralDistance)
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtRight;
    lateralDistance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtLeft;
    lateralDistance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    lateralDistance = Distance(0.);
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapRight;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapLeft;
    }
    else
    {
      lateralPosition = situation::LateralRelativePosition::Overlap;
    }
  }
}

bool convertObjectsNonIntersection(world::Object const &egoVehicle,
                                   world::Scene const &currentScene,
                                   situation::Situation &situation)
{
  if (!currentScene.intersectingRoad.empty())
  {
    return false;
  }

  bool result = true;

  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectToBeCheckedDimension;
  result = calculateObjectDimensions(egoVehicle, currentScene, egoVehicleDimension, objectToBeCheckedDimension);

  situation::LongitudinalRelativePosition longitudinalPosition;
  Distance longitudinalDistance;
  calcluateRelativeLongitudinalPosition(egoVehicleDimension.longitudinalDimensions,
                                        objectToBeCheckedDimension.longitudinalDimensions,
                                        longitudinalPosition,
                                        longitudinalDistance);

  situation.relativePosition.longitudinalPosition = longitudinalPosition;
  situation.relativePosition.longitudinalDistance = longitudinalDistance;

  situation.egoVehicleState.isInCorrectLane = !egoVehicleDimension.onNegativeLane;

  if (currentScene.situationType == ::ad_rss::situation::SituationType::OppositeDirection)
  {
    situation.otherVehicleState.isInCorrectLane = !objectToBeCheckedDimension.onPositiveLane;
  }
  else
  {
    situation.otherVehicleState.isInCorrectLane = !objectToBeCheckedDimension.onNegativeLane;
  }

  /**
   * Set lateral restrictions
   */
  if (result)
  {
    situation::LateralRelativePosition lateralPosition;
    Distance lateralDistance;
    calcluateRelativeLateralPosition(egoVehicleDimension.lateralDimensions,
                                     objectToBeCheckedDimension.lateralDimensions,
                                     lateralPosition,
                                     lateralDistance);

    situation.relativePosition.lateralPosition = lateralPosition;
    situation.relativePosition.lateralDistance = lateralDistance;
  }
  return result;
}

void convertToIntersectionCentric(MetricRange const &objectDimension,
                                  MetricRange const &intersectionPosition,
                                  MetricRange &dimensionsIntersection)
{
  dimensionsIntersection.maximum = intersectionPosition.minimum - objectDimension.minimum;
  dimensionsIntersection.minimum = intersectionPosition.minimum - objectDimension.maximum;
}

bool convertObjectsIntersection(world::Object const &egoVehicle,
                                world::Scene const &currentScene,
                                situation::Situation &situation)
{
  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectDimension;

  bool result = calculateObjectDimensions(egoVehicle, currentScene.egoVehicleRoad, egoVehicleDimension);

  result = result && calculateObjectDimensions(currentScene.object, currentScene.intersectingRoad, objectDimension);

  if (result)
  {
    situation.egoVehicleState.isInCorrectLane = !egoVehicleDimension.onNegativeLane;
    situation.otherVehicleState.isInCorrectLane = !objectDimension.onNegativeLane;

    // For intersection the lanes don't have the same origin so the positions cannot be directly compared
    // Intersection entry should be the common point so convert the positions to this reference point
    MetricRange egoDimensionsIntersection;
    convertToIntersectionCentric(
      egoVehicleDimension.longitudinalDimensions, egoVehicleDimension.intersectionPosition, egoDimensionsIntersection);

    MetricRange objectDimensionsIntersection;

    convertToIntersectionCentric(
      objectDimension.longitudinalDimensions, objectDimension.intersectionPosition, objectDimensionsIntersection);

    situation.egoVehicleState.distanceToEnterIntersection = std::max(Distance(0.), egoDimensionsIntersection.minimum);
    situation.egoVehicleState.distanceToLeaveIntersection
      = egoVehicleDimension.intersectionPosition.maximum - egoVehicleDimension.longitudinalDimensions.minimum;

    situation.otherVehicleState.distanceToEnterIntersection
      = std::max(Distance(0.), objectDimensionsIntersection.minimum);
    situation.otherVehicleState.distanceToLeaveIntersection
      = objectDimension.intersectionPosition.maximum - objectDimension.longitudinalDimensions.minimum;

    situation::LongitudinalRelativePosition longitudinalPosition;
    Distance longitudinalDistance;
    calcluateRelativeLongitudinalPositionIntersection(
      egoDimensionsIntersection, objectDimensionsIntersection, longitudinalPosition, longitudinalDistance);

    situation.relativePosition.longitudinalPosition = longitudinalPosition;
    situation.relativePosition.longitudinalDistance = longitudinalDistance;

    situation.relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
    situation.relativePosition.lateralDistance = Distance(0.);
  }

  if (currentScene.situationType == situation::SituationType::IntersectionEgoHasPriority)
  {
    situation.egoVehicleState.hasPriority = true;
    situation.otherVehicleState.hasPriority = false;
  }
  else if (currentScene.situationType == situation::SituationType::IntersectionObjectHasPriority)
  {
    situation.egoVehicleState.hasPriority = false;
    situation.otherVehicleState.hasPriority = true;
  }
  else if (currentScene.situationType == situation::SituationType::IntersectionSamePriority)
  {
    situation.egoVehicleState.hasPriority = false;
    situation.otherVehicleState.hasPriority = false;
  }
  else
  {
    // This function should never be called if we are not in intersection situation
    result = false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
  }

  return result;
}

bool extractSituationInputRangeChecked(physics::TimeIndex const &timeIndex,
                                       world::Object const &egoVehicle,
                                       world::Scene const &currentScene,
                                       situation::Situation &situation)
{
  // ensure the object types are semantically correct
  // toDo: add this restriction to the data type model
  //       and extend generated withinValidInputRange by these
  if (((currentScene.object.objectType != world::ObjectType::OtherVehicle)
       && (currentScene.object.objectType != world::ObjectType::ArtificialObject))
      || (egoVehicle.objectType != world::ObjectType::EgoVehicle))
  {
    return false;
  }

  bool result = false;

  try
  {
    situation.timeIndex = timeIndex;
    situation.situationId = situation::SituationId(currentScene.object.objectId);
    situation.situationType = currentScene.situationType;

    situation.egoVehicleState.hasPriority = false;
    situation.otherVehicleState.hasPriority = false;

    situation.egoVehicleState.isInCorrectLane = true;
    situation.otherVehicleState.isInCorrectLane = true;

    situation.egoVehicleState.distanceToEnterIntersection = Distance(0.);
    situation.egoVehicleState.distanceToLeaveIntersection = Distance(1000.);

    situation.otherVehicleState.distanceToEnterIntersection = Distance(0.);
    situation.otherVehicleState.distanceToLeaveIntersection = Distance(1000.);

    convertVehicleStateDynamics(egoVehicle, situation.egoVehicleState);
    convertVehicleStateDynamics(currentScene.object, situation.otherVehicleState);

    switch (currentScene.situationType)
    {
      case ad_rss::situation::SituationType::SameDirection:
      case ad_rss::situation::SituationType::OppositeDirection:
      {
        result = convertObjectsNonIntersection(egoVehicle, currentScene, situation);

        break;
      }
      case ad_rss::situation::SituationType::IntersectionEgoHasPriority:
      case ad_rss::situation::SituationType::IntersectionObjectHasPriority:
      case ad_rss::situation::SituationType::IntersectionSamePriority:
      {
        result = convertObjectsIntersection(egoVehicle, currentScene, situation);
        break;
      }
      case ad_rss::situation::SituationType::NotRelevant:
      {
        result = true;
        break;
      }
      default:
      {
        result = false;
        break;
      }
    }
  }
  catch (...)
  {
    result = false;
  }

  return result;
}

bool extractSituation(physics::TimeIndex const &timeIndex,
                      world::Object const &egoVehicle,
                      world::Scene const &currentScene,
                      situation::Situation &situation)
{
  if (!withinValidInputRange(egoVehicle) || !withinValidInputRange(currentScene))
  {
    return false;
  }

  return extractSituationInputRangeChecked(timeIndex, egoVehicle, currentScene, situation);
}

bool extractSituations(world::WorldModel const &worldModel, situation::SituationVector &situationVector)
{
  if (!withinValidInputRange(worldModel))
  {
    return false;
  }

  bool result = true;
  try
  {
    for (auto const &scene : worldModel.scenes)
    {
      situation::Situation situation;
      bool const extractResult
        = extractSituationInputRangeChecked(worldModel.timeIndex, worldModel.egoVehicle, scene, situation);

      // if the situation is relevant, add it to situationVector
      if (scene.situationType != ad_rss::situation::SituationType::NotRelevant)
      {
        if (extractResult)
        {
          situationVector.push_back(situation);
        }
        else
        {
          result = false;
        }
      }
    }
  }
  catch (...)
  {
    result = false;
  }
  return result;
}

} // namespace RssSituationExtraction
} // namespace core
} // namespace ad_rss
