// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"

namespace ad {
namespace rss {

const TestSupport cTestSupport;

void resetRssState(state::LongitudinalRssState &state)
{
  state.response = state::LongitudinalResponse::None;
  state.isSafe = true;
  state.rssStateInformation.currentDistance = physics::Distance::getMax();
  state.rssStateInformation.safeDistance = physics::Distance::getMax();
  state.rssStateInformation.evaluator = state::RssStateEvaluator::None;
}

void resetRssState(state::LateralRssState &state)
{
  state.response = state::LateralResponse::None;
  state.isSafe = true;
  state.rssStateInformation.currentDistance = physics::Distance::getMax();
  state.rssStateInformation.safeDistance = physics::Distance::getMax();
  state.rssStateInformation.evaluator = state::RssStateEvaluator::None;
}

void resetRssState(state::RssState &rssState, situation::SituationId const situationId, world::ObjectId const objectId)
{
  rssState.situationId = situationId;
  rssState.objectId = objectId;
  resetRssState(rssState.longitudinalState);
  resetRssState(rssState.lateralStateLeft);
  resetRssState(rssState.lateralStateRight);
}

void resetRssState(state::ProperResponse &properResponse)
{
  properResponse.isSafe = true;
  properResponse.timeIndex = 1u;
  properResponse.dangerousObjects.clear();
  properResponse.longitudinalResponse = state::LongitudinalResponse::None;
  properResponse.lateralResponseLeft = state::LateralResponse::None;
  properResponse.lateralResponseRight = state::LateralResponse::None;
}

world::RssDynamics getObjectRssDynamics()
{
  world::RssDynamics rssDynamics;

  rssDynamics.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
  rssDynamics.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;
  rssDynamics.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
  rssDynamics.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;

  rssDynamics.alphaLat.accelMax = cMaximumLateralAcceleration;
  rssDynamics.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

  rssDynamics.responseTime = cResponseTimeOtherVehicles;
  return rssDynamics;
}

world::RssDynamics getEgoRssDynamics()
{
  world::RssDynamics rssDynamics;

  rssDynamics.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
  rssDynamics.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;
  rssDynamics.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
  rssDynamics.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;

  rssDynamics.alphaLat.accelMax = cMaximumLateralAcceleration;
  rssDynamics.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

  rssDynamics.responseTime = cResponseTimeEgoVehicle;
  return rssDynamics;
}

world::Object createObject(double const lonVelocity, double const latVelocity)
{
  world::Object object;

  object.objectType = world::ObjectType::OtherVehicle;
  object.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  object.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  return object;
}

situation::VehicleState createVehicleState(double const lonVelocity, double const latVelocity)
{
  situation::VehicleState state;

  state.velocity.speedLon.minimum = kmhToMeterPerSec(lonVelocity);
  state.velocity.speedLon.maximum = state.velocity.speedLon.minimum;
  state.velocity.speedLat.minimum = kmhToMeterPerSec(latVelocity);
  state.velocity.speedLat.maximum = state.velocity.speedLat.minimum;
  state.dynamics = getObjectRssDynamics();
  state.distanceToEnterIntersection = Distance(0.);
  state.distanceToLeaveIntersection = Distance(1000.);
  state.hasPriority = false;
  state.isInCorrectLane = true;

  return state;
}

situation::RelativePosition createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition const &position,
                                                               Distance const &distance)
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = Distance(0.);
  relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
  relativePosition.longitudinalDistance = distance;
  relativePosition.longitudinalPosition = position;
  return relativePosition;
}

situation::RelativePosition createRelativeLateralPosition(situation::LateralRelativePosition const &position,
                                                          Distance const &distance)
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = distance;
  relativePosition.lateralPosition = position;
  relativePosition.longitudinalDistance = Distance(0.);
  relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
  return relativePosition;
}

Distance calculateLongitudinalStoppingDistance(Speed const &objectSpeed,
                                               Speed const &objectMaxSpeed,
                                               Acceleration const &acceleration,
                                               Acceleration const &deceleration,
                                               Duration const &responseTime)
{
  Duration accelerationTime = responseTime;
  if (acceleration != Acceleration(0.))
  {
    accelerationTime = std::min(accelerationTime, std::fabs(objectMaxSpeed - objectSpeed) / acceleration);
  }
  Distance dMin = objectSpeed * accelerationTime;
  dMin += 0.5 * acceleration * accelerationTime * accelerationTime;
  dMin += objectMaxSpeed * (responseTime - accelerationTime);
  Speed const speedMax = std::min(objectMaxSpeed, objectSpeed + responseTime * acceleration);
  dMin += (speedMax * speedMax) / (2. * deceleration);
  return dMin;
}

Distance calculateLongitudinalMinSafeDistance(physics::Speed const &followingObjectSpeed,
                                              world::RssDynamics const &followingObjectRssDynamics,
                                              physics::Speed const &leadingObjectSpeed,
                                              world::RssDynamics const &leadingObjectRssDynamics)
{
  Distance const followingStoppingDistance
    = calculateLongitudinalStoppingDistance(followingObjectSpeed,
                                            followingObjectRssDynamics.maxSpeed,
                                            followingObjectRssDynamics.alphaLon.accelMax,
                                            followingObjectRssDynamics.alphaLon.brakeMin,
                                            followingObjectRssDynamics.responseTime);
  Distance const leadingStoppingDistance
    = calculateLongitudinalStoppingDistance(leadingObjectSpeed,
                                            leadingObjectRssDynamics.maxSpeed,
                                            leadingObjectRssDynamics.alphaLon.accelMax,
                                            leadingObjectRssDynamics.alphaLon.brakeMax,
                                            Duration(0));
  Distance const dMin = followingStoppingDistance - leadingStoppingDistance;
  return std::max(dMin, Distance(0.));
}

Distance
calculateLongitudinalMinSafeDistanceOppositeDirection(physics::Speed const &objectInCorrectLaneSpeed,
                                                      world::RssDynamics const &objectInCorrectLaneRssDynamics,
                                                      physics::Speed const &objectNotInCorrectLaneSpeed,
                                                      world::RssDynamics const &objectNotInCorrectLaneRssDynamics)
{
  Distance const correctStoppingDistance
    = calculateLongitudinalStoppingDistance(objectInCorrectLaneSpeed,
                                            objectInCorrectLaneRssDynamics.maxSpeed,
                                            objectInCorrectLaneRssDynamics.alphaLon.accelMax,
                                            objectInCorrectLaneRssDynamics.alphaLon.brakeMinCorrect,
                                            objectInCorrectLaneRssDynamics.responseTime);
  Distance const notCorrectStoppingDistance
    = calculateLongitudinalStoppingDistance(objectNotInCorrectLaneSpeed,
                                            objectNotInCorrectLaneRssDynamics.maxSpeed,
                                            objectNotInCorrectLaneRssDynamics.alphaLon.accelMax,
                                            objectNotInCorrectLaneRssDynamics.alphaLon.brakeMin,
                                            objectNotInCorrectLaneRssDynamics.responseTime);
  Distance const dMin = correctStoppingDistance + notCorrectStoppingDistance;
  return dMin;
}

Distance calculateLateralMinSafeDistance(physics::Speed const &leftObjectSpeed,
                                         world::RssDynamics const &leftObjectRssDynamics,
                                         physics::Speed const &rightObjectSpeed,
                                         world::RssDynamics const &rightObjectRssDynamics)
{
  Speed lObjectVelAfterResTime
    = leftObjectSpeed + leftObjectRssDynamics.responseTime * leftObjectRssDynamics.alphaLat.accelMax;
  Speed rObjectVelAfterResTime
    = rightObjectSpeed - rightObjectRssDynamics.responseTime * rightObjectRssDynamics.alphaLat.accelMax;
  Distance dMin = (leftObjectSpeed + lObjectVelAfterResTime) / 2. * leftObjectRssDynamics.responseTime;
  if (lObjectVelAfterResTime > Speed(0.))
  {
    dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2 * leftObjectRssDynamics.alphaLat.brakeMin);
  }
  dMin -= (rightObjectSpeed + rObjectVelAfterResTime) / 2. * rightObjectRssDynamics.responseTime;
  if (rObjectVelAfterResTime < Speed(0.))
  {
    dMin += rObjectVelAfterResTime * rObjectVelAfterResTime / (2 * rightObjectRssDynamics.alphaLat.brakeMin);
  }

  return std::max(dMin, Distance(0.));
}
TestSupport::TestSupport()
{
  resetRssState(cLongitudinalSafe);
  cLongitudinalSafe.isSafe = true;
  cLongitudinalSafe.response = state::LongitudinalResponse::None;
  resetRssState(cLongitudinalNone);
  cLongitudinalNone.isSafe = false;
  cLongitudinalNone.response = state::LongitudinalResponse::None;
  resetRssState(cLongitudinalBrakeMin);
  cLongitudinalBrakeMin.isSafe = false;
  cLongitudinalBrakeMin.response = state::LongitudinalResponse::BrakeMin;
  resetRssState(cLongitudinalBrakeMinCorrect);
  cLongitudinalBrakeMinCorrect.isSafe = false;
  cLongitudinalBrakeMinCorrect.response = state::LongitudinalResponse::BrakeMinCorrect;
  resetRssState(cLateralSafe);
  cLateralSafe.isSafe = true;
  cLateralSafe.response = state::LateralResponse::None;
  resetRssState(cLateralNone);
  cLateralNone.isSafe = false;
  cLateralNone.response = state::LateralResponse::None;
  resetRssState(cLateralBrakeMin);
  cLateralBrakeMin.isSafe = false;
  cLateralBrakeMin.response = state::LateralResponse::BrakeMin;
}

state::LateralRssState TestSupport::stateWithInformation(state::LateralRssState const &lateralState,
                                                         situation::Situation const &situation)
{
  state::LateralRssState resultState = lateralState;

  resultState.rssStateInformation.evaluator = state::RssStateEvaluator::LateralDistance;
  resultState.rssStateInformation.currentDistance = situation.relativePosition.lateralDistance;
  switch (situation.situationType)
  {
    case situation::SituationType::OppositeDirection:
    case situation::SituationType::SameDirection:
      if (situation.relativePosition.lateralPosition == situation::LateralRelativePosition::AtLeft)
      {
        resultState.rssStateInformation.safeDistance
          = calculateLateralMinSafeDistance(situation.egoVehicleState.velocity.speedLat.maximum,
                                            situation.egoVehicleState.dynamics,
                                            situation.otherVehicleState.velocity.speedLat.minimum,
                                            situation.otherVehicleState.dynamics);
      }
      else if (situation.relativePosition.lateralPosition == situation::LateralRelativePosition::AtRight)
      {
        resultState.rssStateInformation.safeDistance
          = calculateLateralMinSafeDistance(situation.otherVehicleState.velocity.speedLat.maximum,
                                            situation.otherVehicleState.dynamics,
                                            situation.egoVehicleState.velocity.speedLat.minimum,
                                            situation.egoVehicleState.dynamics);
      }
      else
      {
        resultState.rssStateInformation.safeDistance = Distance(0.);
      }
      break;
    case situation::SituationType::IntersectionEgoHasPriority:
    case situation::SituationType::IntersectionObjectHasPriority:
    case situation::SituationType::IntersectionSamePriority:
      resultState.rssStateInformation.safeDistance = Distance(0.);
      break;
    case situation::SituationType::NotRelevant:
      resultState.rssStateInformation.evaluator = state::RssStateEvaluator::None;
      resultState.rssStateInformation.currentDistance = Distance::getMax();
      resultState.rssStateInformation.safeDistance = Distance::getMax();
      break;
    default:
      resultState.rssStateInformation.currentDistance = Distance(-1.);
      resultState.rssStateInformation.safeDistance = Distance(-1.);
      break;
  }
  return resultState;
}

state::LongitudinalRssState TestSupport::stateWithInformation(state::LongitudinalRssState const &longitudinalState,
                                                              situation::Situation const &situation)
{
  state::LongitudinalRssState resultState = longitudinalState;

  resultState.rssStateInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  switch (situation.situationType)
  {
    case situation::SituationType::SameDirection:
      if ((situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::InFront)
          || (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::OverlapFront))
      {
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState.velocity.speedLon.maximum,
                                                 situation.otherVehicleState.dynamics,
                                                 situation.egoVehicleState.velocity.speedLon.minimum,
                                                 situation.egoVehicleState.dynamics);
      }
      else
      {
        resultState.rssStateInformation.evaluator
          = state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState.velocity.speedLon.maximum,
                                                 situation.egoVehicleState.dynamics,
                                                 situation.otherVehicleState.velocity.speedLon.minimum,
                                                 situation.otherVehicleState.dynamics);
      }
      break;
    case situation::SituationType::OppositeDirection:
      if (situation.egoVehicleState.isInCorrectLane)
      {
        resultState.rssStateInformation.evaluator
          = state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistanceOppositeDirection(situation.egoVehicleState.velocity.speedLon.maximum,
                                                                  situation.egoVehicleState.dynamics,
                                                                  situation.otherVehicleState.velocity.speedLon.maximum,
                                                                  situation.otherVehicleState.dynamics);
      }
      else
      {
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistanceOppositeDirection(situation.otherVehicleState.velocity.speedLon.maximum,
                                                                  situation.otherVehicleState.dynamics,
                                                                  situation.egoVehicleState.velocity.speedLon.maximum,
                                                                  situation.egoVehicleState.dynamics);
      }
      break;
    case situation::SituationType::IntersectionEgoHasPriority:
    case situation::SituationType::IntersectionObjectHasPriority:
    case situation::SituationType::IntersectionSamePriority:
      if (!situation.egoVehicleState.hasPriority)
      {
        resultState.rssStateInformation.currentDistance = situation.egoVehicleState.distanceToEnterIntersection;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalStoppingDistance(situation.egoVehicleState.velocity.speedLon.maximum,
                                                  situation.egoVehicleState.dynamics.maxSpeed,
                                                  situation.egoVehicleState.dynamics.alphaLon.accelMax,
                                                  situation.egoVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.egoVehicleState.dynamics.responseTime);
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
        if (resultState.rssStateInformation.currentDistance > resultState.rssStateInformation.safeDistance)
        {
          break;
        }
      }
      if (!situation.otherVehicleState.hasPriority)
      {
        resultState.rssStateInformation.currentDistance = situation.otherVehicleState.distanceToEnterIntersection;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalStoppingDistance(situation.otherVehicleState.velocity.speedLon.maximum,
                                                  situation.otherVehicleState.dynamics.maxSpeed,
                                                  situation.otherVehicleState.dynamics.alphaLon.accelMax,
                                                  situation.otherVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.otherVehicleState.dynamics.responseTime);
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
        if (resultState.rssStateInformation.currentDistance > resultState.rssStateInformation.safeDistance)
        {
          break;
        }
      }
      resultState.rssStateInformation.currentDistance = situation.relativePosition.longitudinalDistance;
      if (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::InFront)
      {
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::IntersectionEgoInFront;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState.velocity.speedLon.maximum,
                                                 situation.otherVehicleState.dynamics,
                                                 situation.egoVehicleState.velocity.speedLon.minimum,
                                                 situation.egoVehicleState.dynamics);
      }
      else if (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::AtBack)
      {
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::IntersectionOtherInFront;
        resultState.rssStateInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState.velocity.speedLon.maximum,
                                                 situation.egoVehicleState.dynamics,
                                                 situation.otherVehicleState.velocity.speedLon.minimum,
                                                 situation.otherVehicleState.dynamics);
      }
      if (resultState.rssStateInformation.currentDistance > resultState.rssStateInformation.safeDistance)
      {
        break;
      }
      else
      {
        resultState.rssStateInformation.evaluator = state::RssStateEvaluator::IntersectionOverlap;
        resultState.rssStateInformation.currentDistance = Distance(0.);
        resultState.rssStateInformation.safeDistance = Distance(0.);
      }
      break;
    case situation::SituationType::NotRelevant:
      resultState.rssStateInformation.evaluator = state::RssStateEvaluator::None;
      resultState.rssStateInformation.currentDistance = Distance::getMax();
      resultState.rssStateInformation.safeDistance = Distance::getMax();
      break;
    default:
      resultState.rssStateInformation.evaluator = state::RssStateEvaluator::None;
      resultState.rssStateInformation.currentDistance = Distance(-1.);
      resultState.rssStateInformation.safeDistance = Distance(-1.);
      break;
  }

  return resultState;
}

} // namespace rss
} // namespace ad
