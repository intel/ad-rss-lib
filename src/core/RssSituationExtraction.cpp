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

#include "rss/core/RssSituationExtraction.hpp"

#include "world/RssSituationCoordinateSystemConversion.hpp"

namespace rss {

namespace core {
namespace RssSituationExtraction {

void calcluateRelativeLongitudinalPosition(world::MetricRange const &egoMetricRange,
                                           world::MetricRange const &otherMetricRange,
                                           situation::LongitudinalRelativePosition &longitudinalPosition,
                                           situation::Distance &longitudinalDistance) noexcept
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
    longitudinalDistance = 0.;
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

void calcluateRelativeLongitudinalPositionIntersection(world::MetricRange const &egoMetricRange,
                                                       world::MetricRange const &otherMetricRange,
                                                       situation::LongitudinalRelativePosition &longitudinalPosition,
                                                       situation::Distance &longitudinalDistance) noexcept
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
    longitudinalDistance = 0.;
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

void calcluateRelativeLateralPosition(world::MetricRange const &egoMetricRange,
                                      world::MetricRange const &otherMetricRange,
                                      situation::LateralRelativePosition &lateralPosition,
                                      situation::Distance &lateralDistance) noexcept
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
    lateralDistance = 0.;
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
  bool result = true;

  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectToBeCheckedDimension;
  result = calculateObjectDimensions(egoVehicle, currentScene, egoVehicleDimension, objectToBeCheckedDimension);

  situation::LongitudinalRelativePosition longitudinalPosition;
  situation::Distance longitudinalDistance;
  calcluateRelativeLongitudinalPosition(egoVehicleDimension.longitudinalDimensions,
                                        objectToBeCheckedDimension.longitudinalDimensions,
                                        longitudinalPosition,
                                        longitudinalDistance);

  situation.relativePosition.setLongitudinalPosition(longitudinalPosition);
  situation.relativePosition.longitudinalDistance = longitudinalDistance;

  situation.egoVehicleState.isInCorrectLane = !egoVehicleDimension.onNegativeLane;

  if (currentScene.situationType == ::rss::situation::SituationType::OppositeDirection)
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
    situation::Distance lateralDistance;
    calcluateRelativeLateralPosition(egoVehicleDimension.lateralDimensions,
                                     objectToBeCheckedDimension.lateralDimensions,
                                     lateralPosition,
                                     lateralDistance);

    situation.relativePosition.setLateralPosition(lateralPosition);
    situation.relativePosition.lateralDistance = lateralDistance;
  }
  return result;
}

void convertToIntersectionCentric(world::MetricRange const &objectDimension,
                                  world::MetricRange const &intersectionPosition,
                                  world::MetricRange &dimensionsIntersection)
{
  dimensionsIntersection.maximum = intersectionPosition.minimum - objectDimension.minimum;
  dimensionsIntersection.minimum = intersectionPosition.minimum - objectDimension.maximum;
}

bool convertObjectsIntersection(world::Object const &egoVehicle,
                                world::Scene const &currentScene,
                                situation::Situation &situation)
{
  bool result = true;

  world::ObjectDimensions egoVehicleDimension;
  world::ObjectDimensions objectDimension;

  result &= calculateObjectDimensions(egoVehicle, currentScene.egoVehicleRoad, egoVehicleDimension);

  result &= calculateObjectDimensions(currentScene.object, currentScene.intersectingRoad, objectDimension);

  if (result)
  {
    situation.egoVehicleState.isInCorrectLane = !egoVehicleDimension.onNegativeLane;
    situation.otherVehicleState.isInCorrectLane = !objectDimension.onNegativeLane;

    // For intersection the lanes don't have the same origin so the positions cannot be directly compared
    // Intersection entry should be the common point so convert the positions to this reference point
    world::MetricRange egoDimensionsIntersection;
    convertToIntersectionCentric(
      egoVehicleDimension.longitudinalDimensions, egoVehicleDimension.intersectionPosition, egoDimensionsIntersection);

    world::MetricRange objectDimensionsIntersection;

    convertToIntersectionCentric(
      objectDimension.longitudinalDimensions, objectDimension.intersectionPosition, objectDimensionsIntersection);

    situation.egoVehicleState.distanceToEnterIntersection = std::max(0., egoDimensionsIntersection.minimum);
    situation.egoVehicleState.distanceToLeaveIntersection
      = egoVehicleDimension.intersectionPosition.maximum - egoVehicleDimension.longitudinalDimensions.minimum;

    situation.otherVehicleState.distanceToEnterIntersection = std::max(0., objectDimensionsIntersection.minimum);
    situation.otherVehicleState.distanceToLeaveIntersection
      = objectDimension.intersectionPosition.maximum - objectDimension.longitudinalDimensions.minimum;

    situation::LongitudinalRelativePosition longitudinalPosition;
    situation::Distance longitudinalDistance;
    calcluateRelativeLongitudinalPositionIntersection(
      egoDimensionsIntersection, objectDimensionsIntersection, longitudinalPosition, longitudinalDistance);

    situation.relativePosition.setLongitudinalPosition(longitudinalPosition);
    situation.relativePosition.longitudinalDistance = longitudinalDistance;

    situation.relativePosition.setLateralPosition(situation::LateralRelativePosition::Overlap);
    situation.relativePosition.lateralDistance = 0.;
  }

  if (currentScene.getSituationType() == situation::SituationType::IntersectionEgoHasPriority)
  {
    situation.egoVehicleState.hasPriority = true;
    situation.otherVehicleState.hasPriority = false;
  }
  else if (currentScene.getSituationType() == situation::SituationType::IntersectionObjectHasPriority)
  {
    situation.egoVehicleState.hasPriority = false;
    situation.otherVehicleState.hasPriority = true;
  }
  else if (currentScene.getSituationType() == situation::SituationType::IntersectionSamePriority)
  {
    situation.egoVehicleState.hasPriority = true;
    situation.otherVehicleState.hasPriority = true;
  }
  else
  {
    // This function should never be called if we are not in intersection situation
    result = false;
  }

  return result;
}

bool extractSituation(world::Object const &egoVehicle,
                      world::Scene const &currentScene,
                      situation::Situation &situation) noexcept
{
  bool result = false;

  situation.situationId = currentScene.object.objectId;
  situation.setSituationType(currentScene.getSituationType());

  situation.egoVehicleState.hasPriority = false;
  situation.otherVehicleState.hasPriority = false;

  situation.egoVehicleState.isInCorrectLane = true;
  situation.otherVehicleState.isInCorrectLane = true;

  convertVehicleStateDynamics(egoVehicle, situation.egoVehicleState);
  convertVehicleStateDynamics(currentScene.object, situation.otherVehicleState);

  switch (currentScene.getSituationType())
  {
    case rss::situation::SituationType::SameDirection:
    case rss::situation::SituationType::OppositeDirection:
    {
      result = convertObjectsNonIntersection(egoVehicle, currentScene, situation);

      break;
    }
    case rss::situation::SituationType::IntersectionEgoHasPriority:
    case rss::situation::SituationType::IntersectionObjectHasPriority:
    case rss::situation::SituationType::IntersectionSamePriority:
    {
      result = convertObjectsIntersection(egoVehicle, currentScene, situation);
      break;
    }
    case rss::situation::SituationType::NotRelevant:
    {
      result = true;
      break;
    }
  }

  return result;
}

bool extractSituations(world::WorldModel const &worldModel, situation::SituationVector &situationVector) noexcept
{
  bool result = true;

  for (auto const &scene : worldModel.scenes)
  {
    situation::Situation situation;
    situation.timeIndex = worldModel.timeIndex;
    bool const extractResult = extractSituation(worldModel.egoVehicle, scene, situation);

    // if the situation is relevant, add it to situationVector
    if (scene.situationType != rss::situation::SituationType::NotRelevant)
    {
      if (extractResult)
      {
        try
        {
          situationVector.push_back(situation);
        }
        catch (...)
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
  return result;
}

} // namespace RssSituationExtraction
} // namespace core
} // namespace rss
