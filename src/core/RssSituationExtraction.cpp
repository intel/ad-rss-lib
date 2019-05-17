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
#include <algorithm>
#include "ad_rss/world/WorldModelValidInputRange.hpp"
#include "world/RssSituationCoordinateSystemConversion.hpp"
#include "world/RssSituationIdProvider.hpp"

namespace ad_rss {
namespace core {

using physics::Distance;
using physics::MetricRange;

RssSituationExtraction::RssSituationExtraction()
{
  try
  {
    mSituationIdProvider = std::unique_ptr<world::RssSituationIdProvider>(new world::RssSituationIdProvider());
  }
  catch (...)
  {
    mSituationIdProvider = nullptr;
  }
}

RssSituationExtraction::~RssSituationExtraction()
{
}

void RssSituationExtraction::calcluateRelativeLongitudinalPosition(
  MetricRange const &egoMetricRange,
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

void RssSituationExtraction::calcluateRelativeLongitudinalPositionIntersection(
  MetricRange const &egoMetricRange,
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

void RssSituationExtraction::calcluateRelativeLateralPosition(MetricRange const &egoMetricRange,
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

bool RssSituationExtraction::convertObjectsNonIntersection(world::Scene const &currentScene,
                                                           situation::Situation &situation)
{
  if (!currentScene.intersectingRoad.empty())
  {
    return false;
  }

  bool result = true;

  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectToBeCheckedDimension;
  result = calculateObjectDimensions(currentScene, egoVehicleDimension, objectToBeCheckedDimension);

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

void RssSituationExtraction::convertToIntersectionCentric(MetricRange const &objectDimension,
                                                          MetricRange const &intersectionPosition,
                                                          MetricRange &dimensionsIntersection)
{
  dimensionsIntersection.maximum = intersectionPosition.minimum - objectDimension.minimum;
  dimensionsIntersection.minimum = intersectionPosition.minimum - objectDimension.maximum;
}

bool RssSituationExtraction::convertObjectsIntersection(world::Scene const &currentScene,
                                                        situation::Situation &situation)
{
  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectDimension;

  bool result = calculateObjectDimensions(currentScene.egoVehicle, currentScene.egoVehicleRoad, egoVehicleDimension);

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

bool RssSituationExtraction::extractSituationInputRangeChecked(physics::TimeIndex const &timeIndex,
                                                               world::RssDynamics const &egoVehicleRssDynamics,
                                                               world::Scene const &currentScene,
                                                               situation::Situation &situation)
{
  // ensure the object types are semantically correct
  // @toDo: add this restriction to the data type model
  //       and extend generated withinValidInputRange by these
  if (((currentScene.object.objectType != world::ObjectType::OtherVehicle)
       && (currentScene.object.objectType != world::ObjectType::ArtificialObject))
      || (currentScene.egoVehicle.objectType != world::ObjectType::EgoVehicle))
  {
    return false;
  }
  if (currentScene.object.objectId == currentScene.egoVehicle.objectId)
  {
    return false;
  }
  if (!static_cast<bool>(mSituationIdProvider))
  {
    return false;
  }

  bool result = false;

  try
  {
    situation.situationId = mSituationIdProvider->getSituationId(timeIndex, currentScene);
    situation.objectId = currentScene.object.objectId;
    situation.situationType = currentScene.situationType;

    situation.egoVehicleState.hasPriority = false;
    situation.otherVehicleState.hasPriority = false;

    situation.egoVehicleState.isInCorrectLane = true;
    situation.otherVehicleState.isInCorrectLane = true;

    situation.egoVehicleState.distanceToEnterIntersection = Distance(0.);
    situation.egoVehicleState.distanceToLeaveIntersection = Distance(1000.);

    situation.otherVehicleState.distanceToEnterIntersection = Distance(0.);
    situation.otherVehicleState.distanceToLeaveIntersection = Distance(1000.);

    convertVehicleStateDynamics(currentScene.egoVehicle, egoVehicleRssDynamics, situation.egoVehicleState);
    convertVehicleStateDynamics(currentScene.object, currentScene.objectRssDynamics, situation.otherVehicleState);

    switch (currentScene.situationType)
    {
      case ad_rss::situation::SituationType::SameDirection:
      case ad_rss::situation::SituationType::OppositeDirection:
      {
        result = convertObjectsNonIntersection(currentScene, situation);

        break;
      }
      case ad_rss::situation::SituationType::IntersectionEgoHasPriority:
      case ad_rss::situation::SituationType::IntersectionObjectHasPriority:
      case ad_rss::situation::SituationType::IntersectionSamePriority:
      {
        result = convertObjectsIntersection(currentScene, situation);
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

bool RssSituationExtraction::mergeVehicleStates(MergeMode const &mergeMode,
                                                situation::VehicleState const &otherVehicleState,
                                                situation::VehicleState &mergedVehicleState)
{
  // on vehicle states there are only differences in intersection distances allowed due to different road definitions
  if ((otherVehicleState.dynamics.alphaLat.accelMax != mergedVehicleState.dynamics.alphaLat.accelMax)
      || (otherVehicleState.dynamics.alphaLat.brakeMin != mergedVehicleState.dynamics.alphaLat.brakeMin)
      || (otherVehicleState.dynamics.alphaLon.accelMax != mergedVehicleState.dynamics.alphaLon.accelMax)
      || (otherVehicleState.dynamics.alphaLon.brakeMinCorrect != mergedVehicleState.dynamics.alphaLon.brakeMinCorrect)
      || (otherVehicleState.dynamics.alphaLon.brakeMin != mergedVehicleState.dynamics.alphaLon.brakeMin)
      || (otherVehicleState.dynamics.alphaLon.brakeMax != mergedVehicleState.dynamics.alphaLon.brakeMax)
      || (otherVehicleState.dynamics.lateralFluctuationMargin != mergedVehicleState.dynamics.lateralFluctuationMargin)
      || (otherVehicleState.dynamics.responseTime != mergedVehicleState.dynamics.responseTime)
      || (otherVehicleState.hasPriority != mergedVehicleState.hasPriority))
  {
    return false;
  }
  // consider the worst cases
  if (mergeMode == MergeMode::EgoVehicle)
  {
    // worst case for ego vehicle is not driving in correct lane
    mergedVehicleState.isInCorrectLane = mergedVehicleState.isInCorrectLane && otherVehicleState.isInCorrectLane;
  }
  else
  {
    // worst case for other vehicle is driving in correct lane
    mergedVehicleState.isInCorrectLane = mergedVehicleState.isInCorrectLane || otherVehicleState.isInCorrectLane;
  }

  mergedVehicleState.distanceToEnterIntersection
    = std::min(mergedVehicleState.distanceToEnterIntersection, otherVehicleState.distanceToEnterIntersection);
  mergedVehicleState.distanceToLeaveIntersection
    = std::max(mergedVehicleState.distanceToLeaveIntersection, otherVehicleState.distanceToLeaveIntersection);
  mergedVehicleState.velocity.speedLon.minimum
    = std::min(mergedVehicleState.velocity.speedLon.minimum, otherVehicleState.velocity.speedLon.minimum);
  mergedVehicleState.velocity.speedLon.maximum
    = std::max(mergedVehicleState.velocity.speedLon.maximum, otherVehicleState.velocity.speedLon.maximum);
  mergedVehicleState.velocity.speedLat.minimum
    = std::min(mergedVehicleState.velocity.speedLat.minimum, otherVehicleState.velocity.speedLat.minimum);
  mergedVehicleState.velocity.speedLat.maximum
    = std::max(mergedVehicleState.velocity.speedLat.maximum, otherVehicleState.velocity.speedLat.maximum);

  return true;
}

bool RssSituationExtraction::mergeSituations(situation::Situation const &otherSituation,
                                             situation::Situation &mergedSituation)
{
  if ( // basic data has to match
    (otherSituation.situationId != mergedSituation.situationId) || (otherSituation.objectId != mergedSituation.objectId)
    || (otherSituation.situationType != mergedSituation.situationType)
    || !mergeVehicleStates(MergeMode::EgoVehicle, otherSituation.egoVehicleState, mergedSituation.egoVehicleState)
    || !mergeVehicleStates(
         MergeMode::OtherVehicle, otherSituation.otherVehicleState, mergedSituation.otherVehicleState))
  {
    return false;
  }

  // worst case
  mergedSituation.relativePosition.longitudinalDistance = std::min(
    mergedSituation.relativePosition.longitudinalDistance, otherSituation.relativePosition.longitudinalDistance);
  if (otherSituation.relativePosition.longitudinalPosition != mergedSituation.relativePosition.longitudinalPosition)
  {
    if ((mergedSituation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::Overlap)
        || (otherSituation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::Overlap)
        || ((mergedSituation.relativePosition.longitudinalPosition < situation::LongitudinalRelativePosition::Overlap)
            && (otherSituation.relativePosition.longitudinalPosition
                > situation::LongitudinalRelativePosition::Overlap))
        || ((mergedSituation.relativePosition.longitudinalPosition > situation::LongitudinalRelativePosition::Overlap)
            && (otherSituation.relativePosition.longitudinalPosition
                < situation::LongitudinalRelativePosition::Overlap)))
    {
      // overlap is also worst case for contradicting input, ensure the longitudinal distance becomes 0.
      mergedSituation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
      mergedSituation.relativePosition.longitudinalDistance = Distance(0.);
    }
    else if ((mergedSituation.relativePosition.longitudinalPosition
              == situation::LongitudinalRelativePosition::OverlapFront)
             || (otherSituation.relativePosition.longitudinalPosition
                 == situation::LongitudinalRelativePosition::OverlapFront))
    {
      // one of the both is overlap font (the other then only can be InFront in here)
      mergedSituation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::OverlapFront;
    }
    else if ((mergedSituation.relativePosition.longitudinalPosition
              == situation::LongitudinalRelativePosition::OverlapBack)
             || (otherSituation.relativePosition.longitudinalPosition
                 == situation::LongitudinalRelativePosition::OverlapBack))
    {
      // one of the both is overlap back (the other then only can be AtBack in here)
      mergedSituation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      // this is impossible to reach, set to overlap having longitudinal distance to 0. to be on the safe side
      mergedSituation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
      mergedSituation.relativePosition.longitudinalDistance = Distance(0.);
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
    }
  }

  mergedSituation.relativePosition.lateralDistance
    = std::min(mergedSituation.relativePosition.lateralDistance, otherSituation.relativePosition.lateralDistance);
  if (otherSituation.relativePosition.lateralPosition != mergedSituation.relativePosition.lateralPosition)
  {
    if ((mergedSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::Overlap)
        || (otherSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::Overlap)
        || ((mergedSituation.relativePosition.lateralPosition < situation::LateralRelativePosition::Overlap)
            && (otherSituation.relativePosition.lateralPosition > situation::LateralRelativePosition::Overlap))
        || ((mergedSituation.relativePosition.lateralPosition > situation::LateralRelativePosition::Overlap)
            && (otherSituation.relativePosition.lateralPosition < situation::LateralRelativePosition::Overlap)))
    {
      // overlap is also worst case for contradicting input, ensure the lateral distance becomes 0.
      mergedSituation.relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
      mergedSituation.relativePosition.lateralDistance = Distance(0.);
    }
    else if ((mergedSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::OverlapLeft)
             || (otherSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::OverlapLeft))
    {
      // one of the both is overlap left (the other then only can be AtLeft in here)
      mergedSituation.relativePosition.lateralPosition = situation::LateralRelativePosition::OverlapLeft;
    }
    else if ((mergedSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::OverlapRight)
             || (otherSituation.relativePosition.lateralPosition == situation::LateralRelativePosition::OverlapRight))
    {
      // one of the both is overlap right (the other then only can be AtRight in here)
      mergedSituation.relativePosition.lateralPosition = situation::LateralRelativePosition::OverlapRight;
    }
    else
    {
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      // this is impossible to reach, set to overlap having lateral distance to 0. to be on the safe side
      mergedSituation.relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
      mergedSituation.relativePosition.lateralDistance = Distance(0.);
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
    }
  }

  return true;
}

bool RssSituationExtraction::extractSituations(world::WorldModel const &worldModel,
                                               situation::SituationSnapshot &situationSnapshot)
{
  if (!withinValidInputRange(worldModel))
  {
    return false;
  }

  bool result = true;
  try
  {
    situationSnapshot.timeIndex = worldModel.timeIndex;
    situationSnapshot.situations.clear();
    for (auto const &scene : worldModel.scenes)
    {
      situation::Situation situation;
      bool const extractResult
        = extractSituationInputRangeChecked(worldModel.timeIndex, worldModel.egoVehicleRssDynamics, scene, situation);

      // if the situation is relevant, add it to situationSnapshot
      if (scene.situationType != ad_rss::situation::SituationType::NotRelevant)
      {
        if (extractResult)
        {
          // situation id creation might detect that different scenes are representing identical situations
          // ensure the situationSnapshot is unique while containing the worst-case situation
          auto findResult = std::find_if(situationSnapshot.situations.begin(),
                                         situationSnapshot.situations.end(),
                                         [&situation](ad_rss::situation::Situation const &checkSituation) {
                                           return checkSituation.situationId == situation.situationId;
                                         });
          if (findResult == situationSnapshot.situations.end())
          {
            situationSnapshot.situations.push_back(situation);
          }
          else if (!mergeSituations(situation, *findResult))
          {
            result = false;
          }
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

} // namespace core
} // namespace ad_rss
