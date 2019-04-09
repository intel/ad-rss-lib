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
#include "ad_rss/core/RssLogging.hpp"

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

world::Object createObject(double const lonVelocity, double const latVelocity)
{
  world::Object object;

  object.objectType = world::ObjectType::OtherVehicle;
  object.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  object.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  object.dynamics.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
  object.dynamics.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;
  object.dynamics.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
  object.dynamics.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;

  object.dynamics.alphaLat.accelMax = cMaximumLateralAcceleration;
  object.dynamics.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

  object.responseTime = cResponseTimeOtherVehicles;

  return object;
}

situation::VehicleState createVehicleState(double const lonVelocity, double const latVelocity)
{
  situation::VehicleState state;

  state.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  state.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  state.dynamics.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
  state.dynamics.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;

  state.dynamics.alphaLat.accelMax = cMaximumLateralAcceleration;
  state.dynamics.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

  state.responseTime = cResponseTimeOtherVehicles;
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

TestSupport::TestSupport()
{
#if DLT_NOT_AVAILABLE == 0
  DLT_REGISTER_APP("RssT", "ad-rss-lib test");
  dlt_set_resend_timeout_atexit(0); // do not wait for any dlt-daemon to connect
#if RSS_TEST_LOCAL_PRINT
  DLT_ENABLE_LOCAL_PRINT(); // print locally
#endif                      // RSS_TEST_LOCAL_PRINT
#endif                      // RSS_LOGGING_ENABLED

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

TestSupport::~TestSupport()
{
#if DLT_NOT_AVAILABLE == 0
  DLT_UNREGISTER_APP();
#endif // RSS_LOGGING_ENABLED
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
          = calculateLateralMinSafeDistance(situation.egoVehicleState, situation.otherVehicleState);
      }
      else if (situation.relativePosition.lateralPosition == situation::LateralRelativePosition::AtRight)
      {
        resultState.responseInformation.safeDistance
          = calculateLateralMinSafeDistance(situation.otherVehicleState, situation.egoVehicleState);
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
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState, situation.egoVehicleState);
      }
      else
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState, situation.otherVehicleState);
      }
      break;
    case situation::SituationType::OppositeDirection:
      if (situation.egoVehicleState.isInCorrectLane)
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
        resultState.responseInformation.safeDistance = calculateLongitudinalMinSafeDistanceOppositeDirection(
          situation.egoVehicleState, situation.otherVehicleState);
      }
      else
      {
        resultState.responseInformation.responseEvaluator
          = state::ResponseEvaluator::LongitudinalDistanceOppositeDirection;
        resultState.responseInformation.safeDistance = calculateLongitudinalMinSafeDistanceOppositeDirection(
          situation.otherVehicleState, situation.egoVehicleState);
      }
      break;
    case situation::SituationType::IntersectionEgoHasPriority:
    case situation::SituationType::IntersectionObjectHasPriority:
    case situation::SituationType::IntersectionSamePriority:
      if (!situation.egoVehicleState.hasPriority)
      {
        resultState.responseInformation.currentDistance = situation.egoVehicleState.distanceToEnterIntersection;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalStoppingDistance(situation.egoVehicleState,
                                                  situation.egoVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.egoVehicleState.responseTime);
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
          = calculateLongitudinalStoppingDistance(situation.otherVehicleState,
                                                  situation.otherVehicleState.dynamics.alphaLon.brakeMin,
                                                  situation.otherVehicleState.responseTime);
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
          = calculateLongitudinalMinSafeDistance(situation.otherVehicleState, situation.egoVehicleState);
      }
      else if (situation.relativePosition.longitudinalPosition == situation::LongitudinalRelativePosition::AtBack)
      {
        resultState.responseInformation.responseEvaluator = state::ResponseEvaluator::IntersectionOtherInFront;
        resultState.responseInformation.safeDistance
          = calculateLongitudinalMinSafeDistance(situation.egoVehicleState, situation.otherVehicleState);
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
