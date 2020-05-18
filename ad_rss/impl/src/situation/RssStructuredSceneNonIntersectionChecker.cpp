// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssStructuredSceneNonIntersectionChecker.hpp"
#include "RssFormulas.hpp"
#include "ad/rss/state/RssStateOperation.hpp"

namespace ad {
namespace rss {
namespace situation {

bool RssStructuredSceneNonIntersectionChecker::calculateRssStateNonIntersection(world::TimeIndex const &timeIndex,
                                                                                Situation const &situation,
                                                                                state::RssState &rssState)
{
  if (timeIndex != mCurrentTimeIndex)
  {
    mLastStatesBeforeDangerThresholdTime.swap(mNewStatesBeforeDangerThresholdTime);
    mNewStatesBeforeDangerThresholdTime.clear();
    mCurrentTimeIndex = timeIndex;
  }

  rssState.situationId = situation.situationId;
  rssState.situationType = situation.situationType;
  rssState.objectId = situation.objectId;

  rssState.longitudinalState.isSafe = false;
  rssState.longitudinalState.response = state::LongitudinalResponse::BrakeMin;
  rssState.longitudinalState.alphaLon = situation.egoVehicleState.dynamics.alphaLon;

  rssState.lateralStateLeft.isSafe = false;
  rssState.lateralStateLeft.response = state::LateralResponse::BrakeMin;
  rssState.lateralStateLeft.alphaLat = situation.egoVehicleState.dynamics.alphaLat;

  rssState.lateralStateRight.isSafe = false;
  rssState.lateralStateRight.response = state::LateralResponse::BrakeMin;
  rssState.lateralStateRight.alphaLat = situation.egoVehicleState.dynamics.alphaLat;

  bool result = false;
  // first calculate the current state
  if (situation.situationType == situation::SituationType::SameDirection)
  {
    result = calculateRssStateSameDirection(situation, rssState);
  }
  else if (situation.situationType == situation::SituationType::OppositeDirection)
  {
    result = calculateRssStateOppositeDirection(situation, rssState);
  }
  else
  {
    spdlog::error(
      "RssStructuredSceneNonIntersectionChecker::calculateRssStateNonIntersection>> situation type invalid {}",
      situation);
  }

  // second calculate proper response in respect to the state before danger threshold according to definition 10 of the
  // RSS paper v6
  RssSafeState nonDangerousStateToRemember;
  if (isDangerous(rssState))
  {
    auto const previousNonDangerousState = mLastStatesBeforeDangerThresholdTime.find(rssState.situationId);
    if (previousNonDangerousState != mLastStatesBeforeDangerThresholdTime.end())
    {
      nonDangerousStateToRemember = previousNonDangerousState->second;
    }
  }
  else
  {
    nonDangerousStateToRemember.longitudinalSafe = isLongitudinalSafe(rssState);
    nonDangerousStateToRemember.lateralSafe = isLateralSafe(rssState);
  }

  if ((nonDangerousStateToRemember.lateralSafe) && (nonDangerousStateToRemember.longitudinalSafe))
  {
    // Both longitudinal and lateral distances became dangerous at the same time
    if (isDangerous(rssState))
    {
      spdlog::info("RssStructuredSceneNonIntersectionChecker>> State is dangerous (t_b == t_b,lon == t_b,lat) {}",
                   rssState);
    }
  }
  else if (nonDangerousStateToRemember.lateralSafe)
  {
    // @todo: Handling of a cut-in by a leading vehicle as stated in definitions 11-13 of the RSS paper v6
    //        will be handled outside of this function. As a consequence.
    //        There is currently no response for a cut-in of a leading vehicle
    rssState.longitudinalState.response = state::LongitudinalResponse::None;
    if (isDangerous(rssState))
    {
      spdlog::info(
        "RssStructuredSceneNonIntersectionChecker>> State is dangerous (t_b == t_b,lat) No longitudinal response: {}",
        rssState);
    }
  }
  else if (nonDangerousStateToRemember.longitudinalSafe)
  {
    rssState.lateralStateLeft.response = state::LateralResponse::None;
    rssState.lateralStateRight.response = state::LateralResponse::None;
    if (isDangerous(rssState))
    {
      spdlog::info(
        "RssStructuredSceneNonIntersectionChecker>> State is dangerous (t_b == t_b,lon) No lateral response: {}",
        rssState);
    }
  }
  else
  {
    // no non dangerous state available
    if (isDangerous(rssState))
    {
      spdlog::info("RssStructuredSceneNonIntersectionChecker>> State is dangerous, no non dangerous state available {}",
                   rssState);
    }
  }

  // store state for the next time step
  if (nonDangerousStateToRemember.longitudinalSafe || nonDangerousStateToRemember.lateralSafe)
  {
    auto const insertResult = mNewStatesBeforeDangerThresholdTime.insert(
      RssSafeStateBeforeDangerThresholdTimeMap::value_type(situation.situationId, nonDangerousStateToRemember));

    if (!insertResult.second)
    {
      result = false;
      spdlog::error("RssStructuredSceneNonIntersectionChecker>> map insertion failed unexpectedly");
    }
  }

  return result;
}

bool RssStructuredSceneNonIntersectionChecker::calculateRssStateSameDirection(Situation const &situation,
                                                                              state::RssState &rssState)
{
  bool result = calculateLongitudinalRssStateSameDirection(situation, rssState.longitudinalState);
  if (result)
  {
    result = calculateLateralRssState(situation, rssState.lateralStateLeft, rssState.lateralStateRight);
  }
  return result;
}

bool RssStructuredSceneNonIntersectionChecker::calculateRssStateOppositeDirection(Situation const &situation,
                                                                                  state::RssState &rssState)
{
  bool result = calculateLongitudinalRssStateOppositeDirection(situation, rssState.longitudinalState);
  if (result)
  {
    result = calculateLateralRssState(situation, rssState.lateralStateLeft, rssState.lateralStateRight);
  }
  return result;
}

bool RssStructuredSceneNonIntersectionChecker::calculateLongitudinalRssStateSameDirection(
  Situation const &situation, state::LongitudinalRssState &rssState)
{
  bool result = false;

  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.rssStateInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  bool isSafe = false;

  if ((LongitudinalRelativePosition::InFront == situation.relativePosition.longitudinalPosition)
      || (LongitudinalRelativePosition::OverlapFront == situation.relativePosition.longitudinalPosition))
  {
    rssState.rssStateInformation.evaluator = state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;

    // The ego vehicle is leading in this situation so we don't need to break longitudinal
    rssState.response = state::LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(situation.egoVehicleState,
                                                        situation.otherVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.rssStateInformation.safeDistance,
                                                        isSafe);
  }
  else
  {
    rssState.rssStateInformation.evaluator = state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;

    result = checkSafeLongitudinalDistanceSameDirection(situation.otherVehicleState,
                                                        situation.egoVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.rssStateInformation.safeDistance,
                                                        isSafe);
  }

  rssState.isSafe = isSafe;
  if (isSafe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool RssStructuredSceneNonIntersectionChecker::calculateLongitudinalRssStateOppositeDirection(
  Situation const &situation, state::LongitudinalRssState &rssState)
{
  bool result = false;

  bool isSafe = false;
  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.rssStateInformation.currentDistance = situation.relativePosition.longitudinalDistance;

  if (situation.egoVehicleState.isInCorrectLane)
  {
    rssState.rssStateInformation.evaluator
      = state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;

    result = checkSafeLongitudinalDistanceOppositeDirection(situation.egoVehicleState,
                                                            situation.otherVehicleState,
                                                            situation.relativePosition.longitudinalDistance,
                                                            rssState.rssStateInformation.safeDistance,
                                                            isSafe);
    rssState.response = state::LongitudinalResponse::BrakeMinCorrect;
  }
  else
  {
    rssState.rssStateInformation.evaluator = state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;

    result = checkSafeLongitudinalDistanceOppositeDirection(situation.otherVehicleState,
                                                            situation.egoVehicleState,
                                                            situation.relativePosition.longitudinalDistance,
                                                            rssState.rssStateInformation.safeDistance,
                                                            isSafe);
  }

  rssState.isSafe = isSafe;
  if (rssState.isSafe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool RssStructuredSceneNonIntersectionChecker::calculateLateralRssState(Situation const &situation,
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
    rssStateLeft.rssStateInformation.evaluator = state::RssStateEvaluator::None;
    rssStateLeft.rssStateInformation.currentDistance = std::numeric_limits<physics::Distance>::max();
    rssStateLeft.rssStateInformation.safeDistance = std::numeric_limits<physics::Distance>::max();

    // ego is the left vehicle, so right side has to be checked
    rssStateRight.rssStateInformation.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateRight.rssStateInformation.currentDistance = situation.relativePosition.lateralDistance;
    result = checkSafeLateralDistance(situation.egoVehicleState,
                                      situation.otherVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      rssStateRight.rssStateInformation.safeDistance,
                                      isDistanceSafe);
  }
  else if (LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
  {
    rssStateRight.rssStateInformation.evaluator = state::RssStateEvaluator::None;
    rssStateRight.rssStateInformation.currentDistance = std::numeric_limits<physics::Distance>::max();
    rssStateRight.rssStateInformation.safeDistance = std::numeric_limits<physics::Distance>::max();

    // ego is the right vehicle, so left side has to be checked
    rssStateLeft.rssStateInformation.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateLeft.rssStateInformation.currentDistance = situation.relativePosition.lateralDistance;
    result = checkSafeLateralDistance(situation.otherVehicleState,
                                      situation.egoVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      rssStateLeft.rssStateInformation.safeDistance,
                                      isDistanceSafe);
  }
  else
  {
    rssStateLeft.rssStateInformation.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateLeft.rssStateInformation.currentDistance = physics::Distance(0);
    rssStateLeft.rssStateInformation.safeDistance = physics::Distance(0);
    rssStateRight.rssStateInformation.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateRight.rssStateInformation.currentDistance = physics::Distance(0);
    rssStateRight.rssStateInformation.safeDistance = physics::Distance(0);

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
} // namespace rss
} // namespace ad
