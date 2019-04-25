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

#include "TestSupport.hpp"

namespace ad_rss {

const TestSupport cTestSupport;

void resetRssState(state::LongitudinalRssState &state)
{
  state.response = state::LongitudinalResponse::None;
  state.isSafe = true;
  state.responseInformation.currentDistance = physics::Distance::getMax();
  state.responseInformation.safeDistance = physics::Distance::getMax();
  state.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
}

void resetRssState(state::LateralRssState &state)
{
  state.response = state::LateralResponse::None;
  state.isSafe = true;
  state.responseInformation.currentDistance = physics::Distance::getMax();
  state.responseInformation.safeDistance = physics::Distance::getMax();
  state.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
}

void resetRssState(state::ResponseState &responseState, situation::SituationId const situationId)
{
  responseState.timeIndex = 1u;
  responseState.situationId = situationId;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);
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

  state.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  state.velocity.speedLat = kmhToMeterPerSec(latVelocity);
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

Distance calculateLongitudinalStoppingDistance(world::Velocity const &objectVelocity,
                                               Acceleration const &acceleration,
                                               Acceleration const &deceleration,
                                               Duration const &responseTime)
{
  Distance dMin = objectVelocity.speedLon * responseTime;
  dMin += 0.5 * acceleration * responseTime * responseTime;
  Speed const speedMax = objectVelocity.speedLon + responseTime * acceleration;
  dMin += (speedMax * speedMax) / (2. * deceleration);
  return dMin;
}

Distance calculateLongitudinalMinSafeDistance(world::Velocity const &followingObjectVelocity,
                                              world::RssDynamics const &followingObjectRssDynamics,
                                              world::Velocity const &leadingObjectVelocity,
                                              world::RssDynamics const &leadingObjectRssDynamics)
{
  Distance const followingStoppingDistance
    = calculateLongitudinalStoppingDistance(followingObjectVelocity,
                                            followingObjectRssDynamics.alphaLon.accelMax,
                                            followingObjectRssDynamics.alphaLon.brakeMin,
                                            followingObjectRssDynamics.responseTime);
  Distance const leadingStoppingDistance
    = calculateLongitudinalStoppingDistance(leadingObjectVelocity,
                                            leadingObjectRssDynamics.alphaLon.accelMax,
                                            leadingObjectRssDynamics.alphaLon.brakeMax,
                                            Duration(0));
  Distance const dMin = followingStoppingDistance - leadingStoppingDistance;
  return std::max(dMin, Distance(0.));
}

Distance
calculateLongitudinalMinSafeDistanceOppositeDirection(world::Velocity const &objectInCorrectLaneVelocity,
                                                      world::RssDynamics const &objectInCorrectLaneRssDynamics,
                                                      world::Velocity const &objectNotInCorrectLaneVelocity,
                                                      world::RssDynamics const &objectNotInCorrectLaneRssDynamics)
{
  Distance const correctStoppingDistance
    = calculateLongitudinalStoppingDistance(objectInCorrectLaneVelocity,
                                            objectInCorrectLaneRssDynamics.alphaLon.accelMax,
                                            objectInCorrectLaneRssDynamics.alphaLon.brakeMinCorrect,
                                            objectInCorrectLaneRssDynamics.responseTime);
  Distance const notCorrectStoppingDistance
    = calculateLongitudinalStoppingDistance(objectNotInCorrectLaneVelocity,
                                            objectNotInCorrectLaneRssDynamics.alphaLon.accelMax,
                                            objectNotInCorrectLaneRssDynamics.alphaLon.brakeMin,
                                            objectNotInCorrectLaneRssDynamics.responseTime);
  Distance const dMin = correctStoppingDistance + notCorrectStoppingDistance;
  return dMin;
}

Distance calculateLateralMinSafeDistance(world::Velocity const &leftObjectVelocity,
                                         world::RssDynamics const &leftObjectRssDynamics,
                                         world::Velocity const &rightObjectVelocity,
                                         world::RssDynamics const &rightObjectRssDynamics)
{
  Speed lObjectVelAfterResTime
    = leftObjectVelocity.speedLat + leftObjectRssDynamics.responseTime * leftObjectRssDynamics.alphaLat.accelMax;
  Speed rObjectVelAfterResTime
    = rightObjectVelocity.speedLat - rightObjectRssDynamics.responseTime * rightObjectRssDynamics.alphaLat.accelMax;
  Distance dMin = (leftObjectVelocity.speedLat + lObjectVelAfterResTime) / 2. * leftObjectRssDynamics.responseTime;
  if (lObjectVelAfterResTime > Speed(0.))
  {
    dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2 * leftObjectRssDynamics.alphaLat.brakeMin);
  }
  dMin -= (rightObjectVelocity.speedLat + rObjectVelAfterResTime) / 2. * rightObjectRssDynamics.responseTime;
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

  resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::LateralDistance;
  resultState.responseInformation.currentDistance = situation.relativePosition.lateralDistance;
  switch (situation.situationType)
  {
    case situation::SituationType::SameDirection:
    case situation::SituationType::OppositeDirection:
      if (situation.relativePosition.lateralPosition == situation::LateralRelativePosition::AtLeft)
      {
        resultState.responseInformation.safeDistance
          = calculateLateralMinSafeDistance(situation.egoVehicleState.velocity,
                                            situation.egoVehicleState.dynamics,
                                            situation.otherVehicleState.velocity,
                                            situation.otherVehicleState.dynamics);
      }
      else if (situation.relativePosition.lateralPosition == situation::LateralRelativePosition::AtRight)
      {
        resultState.responseInformation.safeDistance
          = calculateLateralMinSafeDistance(situation.otherVehicleState.velocity,
                                            situation.otherVehicleState.dynamics,
                                            situation.egoVehicleState.velocity,
                                            situation.egoVehicleState.dynamics);
      }
      else
      {
        resultState.responseInformation.safeDistance = Distance(0.);
      }
      break;
    case situation::SituationType::IntersectionEgoHasPriority:
    case situation::SituationType::IntersectionObjectHasPriority:
    case situation::SituationType::IntersectionSamePriority:
      resultState.responseInformation.safeDistance = Distance(0.);
      break;
    case situation::SituationType::NotRelevant:
      resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
      resultState.responseInformation.currentDistance = Distance::getMax();
      resultState.responseInformation.safeDistance = Distance::getMax();
      break;
    default:
      resultState.responseInformation.currentDistance = Distance(-1.);
      resultState.responseInformation.safeDistance = Distance(-1.);
      break;
  }
  return resultState;
}

state::LongitudinalRssState TestSupport::stateWithInformation(state::LongitudinalRssState const &longitudinalState,
                                                              situation::Situation const &situation)
{
  state::LongitudinalRssState resultState = longitudinalState;

  resultState.responseInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  switch (situation.situationType)
  {
    case situation::SituationType::SameDirection:
      if ((situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::InFront)
          || (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::OverlapFront))
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState.velocity,
                                                 situation.otherVehicleState.dynamics,
                                                 situation.egoVehicleState.velocity,
                                                 situation.egoVehicleState.dynamics);
      }
      else
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState.velocity,
                                                 situation.egoVehicleState.dynamics,
                                                 situation.otherVehicleState.velocity,
                                                 situation.otherVehicleState.dynamics);
      }
      break;
    case situation::SituationType::OppositeDirection:
      if (situation.egoVehicleState.isInCorrectLane)
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistanceOppositeDirection(situation.egoVehicleState.velocity,
                                                                  situation.egoVehicleState.dynamics,
                                                                  situation.otherVehicleState.velocity,
                                                                  situation.otherVehicleState.dynamics);
      }
      else
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceOppositeDirection;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistanceOppositeDirection(situation.otherVehicleState.velocity,
                                                                  situation.otherVehicleState.dynamics,
                                                                  situation.egoVehicleState.velocity,
                                                                  situation.egoVehicleState.dynamics);
      }
      break;
    case situation::SituationType::IntersectionEgoHasPriority:
    case situation::SituationType::IntersectionObjectHasPriority:
    case situation::SituationType::IntersectionSamePriority:
      if (!situation.egoVehicleState.hasPriority)
      {
        resultState.responseInformation.currentDistance = situation.egoVehicleState.distanceToEnterIntersection;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalStoppingDistance(situation.egoVehicleState.velocity,
                                                  situation.egoVehicleState.dynamics.alphaLon.accelMax,
                                                  situation.egoVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.egoVehicleState.dynamics.responseTime);
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop;
        if (resultState.responseInformation.currentDistance > resultState.responseInformation.safeDistance)
        {
          break;
        }
      }
      if (!situation.otherVehicleState.hasPriority)
      {
        resultState.responseInformation.currentDistance = situation.otherVehicleState.distanceToEnterIntersection;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalStoppingDistance(situation.otherVehicleState.velocity,
                                                  situation.otherVehicleState.dynamics.alphaLon.accelMax,
                                                  situation.otherVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.otherVehicleState.dynamics.responseTime);
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop;
        if (resultState.responseInformation.currentDistance > resultState.responseInformation.safeDistance)
        {
          break;
        }
      }
      resultState.responseInformation.currentDistance = situation.relativePosition.longitudinalDistance;
      if (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::InFront)
      {
        resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::IntersectionEgoInFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState.velocity,
                                                 situation.otherVehicleState.dynamics,
                                                 situation.egoVehicleState.velocity,
                                                 situation.egoVehicleState.dynamics);
      }
      else if (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::AtBack)
      {
        resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::IntersectionOtherInFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState.velocity,
                                                 situation.egoVehicleState.dynamics,
                                                 situation.otherVehicleState.velocity,
                                                 situation.otherVehicleState.dynamics);
      }
      if (resultState.responseInformation.currentDistance > resultState.responseInformation.safeDistance)
      {
        break;
      }
      else
      {
        resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::IntersectionOverlap;
        resultState.responseInformation.currentDistance = Distance(0.);
        resultState.responseInformation.safeDistance = Distance(0.);
      }
      break;
    case situation::SituationType::NotRelevant:
      resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
      resultState.responseInformation.currentDistance = Distance::getMax();
      resultState.responseInformation.safeDistance = Distance::getMax();
      break;
    default:
      resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
      resultState.responseInformation.currentDistance = Distance(-1.);
      resultState.responseInformation.safeDistance = Distance(-1.);
      break;
  }

  return resultState;
}

} // namespace ad_rss
