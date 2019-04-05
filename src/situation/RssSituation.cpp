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

#include "situation/RssSituation.hpp"
#include "situation/RssFormulas.hpp"

namespace ad_rss {
namespace situation {

bool calculateRssStateNonIntersectionSameDirection(Situation const &situation, state::ResponseState &responseState)
{
  bool result = calculateLongitudinalRssStateNonIntersectionSameDirection(situation, responseState.longitudinalState);
  if (result)
  {
    result = calculateLateralRssState(situation, responseState.lateralStateLeft, responseState.lateralStateRight);
  }
  return result;
}

bool calculateRssStateNonIntersectionOppositeDirection(Situation const &situation, state::ResponseState &responseState)
{
  bool result
    = calculateLongitudinalRssStateNonIntersectionOppositeDirection(situation, responseState.longitudinalState);
  if (result)
  {
    result = calculateLateralRssState(situation, responseState.lateralStateLeft, responseState.lateralStateRight);
  }
  return result;
}

bool calculateLongitudinalRssStateNonIntersectionSameDirection(Situation const &situation,
                                                               state::LongitudinalRssState &rssState)
{
  bool result = false;

  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.responseInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  bool isSafe = false;

  if ((LongitudinalRelativePosition::InFront == situation.relativePosition.longitudinalPosition)
      || (LongitudinalRelativePosition::OverlapFront == situation.relativePosition.longitudinalPosition))
  {
    rssState.responseInformation.responseEvaluator
      = state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront;

    // The ego vehicle is leading in this situation so we don't need to break longitudinal
    rssState.response = state::LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(situation.egoVehicleState,
                                                        situation.otherVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.responseInformation.safeDistance,
                                                        isSafe);
  }
  else
  {
    rssState.responseInformation.responseEvaluator
      = state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront;

    result = checkSafeLongitudinalDistanceSameDirection(situation.otherVehicleState,
                                                        situation.egoVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.responseInformation.safeDistance,
                                                        isSafe);
  }

  rssState.isSafe = isSafe;
  if (isSafe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool calculateLongitudinalRssStateNonIntersectionOppositeDirection(Situation const &situation,
                                                                   state::LongitudinalRssState &rssState)
{
  bool result = false;

  bool isSafe = false;
  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.responseInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  if (situation.egoVehicleState.isInCorrectLane)
  {
    rssState.responseInformation.responseEvaluator
      = state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;

    result = checkSafeLongitudinalDistanceOppositeDirection(situation.egoVehicleState,
                                                            situation.otherVehicleState,
                                                            situation.relativePosition.longitudinalDistance,
                                                            rssState.responseInformation.safeDistance,
                                                            isSafe);
    rssState.response = state::LongitudinalResponse::BrakeMinCorrect;
  }
  else
  {
    rssState.responseInformation.responseEvaluator = state::ResponseEvaluator::LongitudinalDistanceOppositeDirection;

    result = checkSafeLongitudinalDistanceOppositeDirection(situation.otherVehicleState,
                                                            situation.egoVehicleState,
                                                            situation.relativePosition.longitudinalDistance,
                                                            rssState.responseInformation.safeDistance,
                                                            isSafe);
  }

  rssState.isSafe = isSafe;
  if (rssState.isSafe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool calculateLateralRssState(Situation const &situation,
                              state::LateralRssState &rssStateLeft,
                              state::LateralRssState &rssStateRight)
{
  rssStateLeft.isSafe = false;
  rssStateLeft.response = state::LateralResponse::BrakeMin;
  rssStateRight.isSafe = false;
  rssStateRight.response = state::LateralResponse::BrakeMin;

  bool isDistanceSafe = false;

  bool result = false;
  if (LateralRelativePosition::AtLeft == situation.relativePosition.lateralPosition)
  {
    rssStateLeft.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
    rssStateLeft.responseInformation.currentDistance = physics::Distance::getMax();
    rssStateLeft.responseInformation.safeDistance = physics::Distance::getMax();

    // ego is the left vehicle, so right side has to be checked
    rssStateRight.responseInformation.responseEvaluator = state::ResponseEvaluator::LateralDistance;
    rssStateRight.responseInformation.currentDistance = situation.relativePosition.lateralDistance;
    result = checkSafeLateralDistance(situation.egoVehicleState,
                                      situation.otherVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      rssStateRight.responseInformation.safeDistance,
                                      isDistanceSafe);
  }
  else if (LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
  {
    rssStateRight.responseInformation.responseEvaluator = state::ResponseEvaluator::None;
    rssStateRight.responseInformation.currentDistance = physics::Distance::getMax();
    rssStateRight.responseInformation.safeDistance = physics::Distance::getMax();

    // ego is the right vehicle, so left side has to be checked
    rssStateLeft.responseInformation.responseEvaluator = state::ResponseEvaluator::LateralDistance;
    rssStateLeft.responseInformation.currentDistance = situation.relativePosition.lateralDistance;
    result = checkSafeLateralDistance(situation.otherVehicleState,
                                      situation.egoVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      rssStateLeft.responseInformation.safeDistance,
                                      isDistanceSafe);
  }
  else
  {
    rssStateLeft.responseInformation.responseEvaluator = state::ResponseEvaluator::LateralDistance;
    rssStateLeft.responseInformation.currentDistance = physics::Distance(0);
    rssStateLeft.responseInformation.safeDistance = physics::Distance(0);
    rssStateRight.responseInformation.responseEvaluator = state::ResponseEvaluator::LateralDistance;
    rssStateRight.responseInformation.currentDistance = physics::Distance(0);
    rssStateRight.responseInformation.safeDistance = physics::Distance(0);

    // lateral distance is zero, never safe
    result = true;
  }

  if (isDistanceSafe)
  {
    rssStateLeft.isSafe = true;
    rssStateLeft.response = state::LateralResponse::None;
    rssStateRight.isSafe = true;
    rssStateRight.response = state::LateralResponse::None;
  }
  else if ((LateralRelativePosition::AtLeft == situation.relativePosition.lateralPosition)
           || (LateralRelativePosition::OverlapLeft == situation.relativePosition.lateralPosition))
  {
    // ego is the left vehicle, so the collision is on the right side
    rssStateLeft.isSafe = true;
    rssStateLeft.response = state::LateralResponse::None;
  }
  else if ((LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
           || (LateralRelativePosition::OverlapRight == situation.relativePosition.lateralPosition))
  {
    // ego is the right vehicle, so the collision is on the left side
    rssStateRight.isSafe = true;
    rssStateRight.response = state::LateralResponse::None;
  }

  return result;
}

} // namespace situation
} // namespace ad_rss
