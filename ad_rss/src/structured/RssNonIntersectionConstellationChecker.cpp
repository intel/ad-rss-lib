// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/structured/RssNonIntersectionConstellationChecker.hpp"
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/state/RssStateOperation.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace structured {

bool RssNonIntersectionConstellationChecker::calculateRssStateNonIntersection(
  world::TimeIndex const &time_index, core::RelativeConstellation const &constellation, state::RssState &rssState)
{
  if (time_index != mCurrentTimeIndex)
  {
    mLastStatesBeforeDangerThresholdTime.swap(mNewStatesBeforeDangerThresholdTime);
    mNewStatesBeforeDangerThresholdTime.clear();
    mCurrentTimeIndex = time_index;
  }

  rssState.constellation_id = constellation.constellation_id;
  rssState.constellation_type = constellation.constellation_type;
  rssState.ego_id = constellation.ego_id;
  rssState.object_id = constellation.object_id;

  rssState.longitudinal_state.is_safe = false;
  rssState.longitudinal_state.response = state::LongitudinalResponse::BrakeMin;
  rssState.longitudinal_state.alpha_lon = constellation.ego_state.dynamics.alpha_lon;

  rssState.lateral_state_left.is_safe = false;
  rssState.lateral_state_left.response = state::LateralResponse::BrakeMin;
  rssState.lateral_state_left.alpha_lat = constellation.ego_state.dynamics.alpha_lat;

  rssState.lateral_state_right.is_safe = false;
  rssState.lateral_state_right.response = state::LateralResponse::BrakeMin;
  rssState.lateral_state_right.alpha_lat = constellation.ego_state.dynamics.alpha_lat;

  bool result = false;
  // first calculate the current state
  if (constellation.constellation_type == world::ConstellationType::SameDirection)
  {
    result = calculateRssStateSameDirection(constellation, rssState);
  }
  else if (constellation.constellation_type == world::ConstellationType::OppositeDirection)
  {
    result = calculateRssStateOppositeDirection(constellation, rssState);
  }
  else
  {
    core::getLogger()->error("RssNonIntersectionConstellationChecker::calculateRssStateNonIntersection[{}->{}]>> "
                             "constellation type invalid {}",
                             rssState.ego_id,
                             rssState.object_id,
                             constellation);
  }

  // second calculate proper response in respect to the state before danger threshold according to definition 10 of the
  // RSS paper v6
  RssSafeState lastStateBeforeDangerThresholdTimeToRemember;
  if (isDangerous(rssState))
  {
    auto const previousLastStateBeforeDangerThresholdTime
      = mLastStatesBeforeDangerThresholdTime.find(rssState.constellation_id);
    if (previousLastStateBeforeDangerThresholdTime != mLastStatesBeforeDangerThresholdTime.end())
    {
      lastStateBeforeDangerThresholdTimeToRemember = previousLastStateBeforeDangerThresholdTime->second;
    }
    else
    {
      // This is the first time the constellation appears and it is immediately in dangerous state
      // in same direction use-case we are able to deduce the non dangereous state:
      // if the vehicles are actually overlapping in their lateral dimension, the vehicles are following each other
      // Therefore, we don't require to break in lateral direction
      // and can store a previous longitudinal safe state
      // Example: something dropping from a vehicle driving in front or let the tracker of the perception system
      // just loose the track of a vehicle in front/at back and assign it a new object id
      // In such cases, a lateral proper response with breakMin would even prevent from an evasive maneuver
      // which might want to evade laterally
      if ((constellation.constellation_type == world::ConstellationType::SameDirection)
          && ((constellation.relative_position.lateral_position == core::LateralRelativePosition::OverlapLeft)
              || (constellation.relative_position.lateral_position == core::LateralRelativePosition::Overlap)
              || (constellation.relative_position.lateral_position == core::LateralRelativePosition::OverlapRight)))
      {
        lastStateBeforeDangerThresholdTimeToRemember.longitudinalSafe = true;
        lastStateBeforeDangerThresholdTimeToRemember.lateralSafe = false;
        core::getLogger()->info(
          "RssNonIntersectionConstellationChecker[{}->{}]>> State is dangerous spontaneously and relative position "
          "already overlaps laterally. Asuming longitudinal safe at danger threshold time. {} {}",
          rssState.ego_id,
          rssState.object_id,
          rssState,
          constellation);
      }
    }
  }
  else
  {
    lastStateBeforeDangerThresholdTimeToRemember.longitudinalSafe = isLongitudinalSafe(rssState);
    lastStateBeforeDangerThresholdTimeToRemember.lateralSafe = isLateralSafe(rssState);
  }

  if ((lastStateBeforeDangerThresholdTimeToRemember.lateralSafe)
      && (lastStateBeforeDangerThresholdTimeToRemember.longitudinalSafe))
  {
    // Both longitudinal and lateral distances became dangerous at the same time
    if (isDangerous(rssState))
    {
      core::getLogger()->info(
        "RssNonIntersectionConstellationChecker[{}->{}]>> State is dangerous (t_b == t_b,lon == t_b,lat) {}",
        rssState.ego_id,
        rssState.object_id,
        rssState);
    }
  }
  else if (lastStateBeforeDangerThresholdTimeToRemember.lateralSafe)
  {
    // @todo: Handling of a cut-in by a leading vehicle as stated in definitions 11-13 of the RSS paper v6
    //        will be handled outside of this function. As a consequence.
    //        There is currently no response for a cut-in of a leading vehicle
    rssState.longitudinal_state.response = state::LongitudinalResponse::None;
    if (isDangerous(rssState))
    {
      core::getLogger()->info("RssNonIntersectionConstellationChecker[{}->{}]>> State is dangerous (t_b == t_b,lat) No "
                              "longitudinal response: {}",
                              rssState.ego_id,
                              rssState.object_id,
                              rssState);
    }
  }
  else if (lastStateBeforeDangerThresholdTimeToRemember.longitudinalSafe
           && (getRightBorderObjectId() != rssState.object_id) && (getLeftBorderObjectId() != rssState.object_id))
  {
    rssState.lateral_state_left.response = state::LateralResponse::None;
    rssState.lateral_state_right.response = state::LateralResponse::None;
    if (isDangerous(rssState))
    {
      core::getLogger()->info(
        "RssNonIntersectionConstellationChecker[{}->{}]>> State is dangerous (t_b == t_b,lon) No lateral response: {}",
        rssState.ego_id,
        rssState.object_id,
        rssState);
    }
  }
  else
  {
    // no non dangerous state available: the constellation appeared spontaneously being unsafe immediately
    if (isDangerous(rssState))
    {
      core::getLogger()->info(
        "RssNonIntersectionConstellationChecker[{}->{}]>> State is dangerous, no non dangerous state available {}",
        rssState.ego_id,
        rssState.object_id,
        rssState);
    }
  }

  // store state for the next time step
  auto const insertResult
    = mNewStatesBeforeDangerThresholdTime.insert(RssSafeStateBeforeDangerThresholdTimeMap::value_type(
      constellation.constellation_id, lastStateBeforeDangerThresholdTimeToRemember));

  if (!insertResult.second)
  {
    result = false;
    core::getLogger()->error("RssNonIntersectionConstellationChecker[{}->{}]>> map insertion failed unexpectedly",
                             rssState.ego_id,
                             rssState.object_id);
  }

  return result;
}

bool RssNonIntersectionConstellationChecker::calculateRssStateSameDirection(
  core::RelativeConstellation const &constellation, state::RssState &rssState)
{
  bool result = calculateLongitudinalRssStateSameDirection(constellation, rssState.longitudinal_state);
  if (result)
  {
    result = calculateLateralRssState(constellation, rssState.lateral_state_left, rssState.lateral_state_right);
  }
  return result;
}

bool RssNonIntersectionConstellationChecker::calculateRssStateOppositeDirection(
  core::RelativeConstellation const &constellation, state::RssState &rssState)
{
  bool result = calculateLongitudinalRssStateOppositeDirection(constellation, rssState.longitudinal_state);
  if (result)
  {
    result = calculateLateralRssState(constellation, rssState.lateral_state_left, rssState.lateral_state_right);
  }
  return result;
}

bool RssNonIntersectionConstellationChecker::calculateLongitudinalRssStateSameDirection(
  core::RelativeConstellation const &constellation, state::LongitudinalRssState &rssState)
{
  bool result = false;

  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.rss_state_information.current_distance = constellation.relative_position.longitudinal_distance;

  bool is_safe = false;

  if ((core::LongitudinalRelativePosition::InFront == constellation.relative_position.longitudinal_position)
      || (core::LongitudinalRelativePosition::OverlapFront == constellation.relative_position.longitudinal_position))
  {
    rssState.rss_state_information.evaluator = state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;

    // The ego vehicle is leading in this constellation so we don't need to break longitudinal
    rssState.response = state::LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(constellation.ego_state,
                                                        constellation.other_state,
                                                        constellation.relative_position.longitudinal_distance,
                                                        rssState.rss_state_information.safe_distance,
                                                        is_safe);
  }
  else
  {
    rssState.rss_state_information.evaluator = state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;

    result = checkSafeLongitudinalDistanceSameDirection(constellation.other_state,
                                                        constellation.ego_state,
                                                        constellation.relative_position.longitudinal_distance,
                                                        rssState.rss_state_information.safe_distance,
                                                        is_safe);
  }

  rssState.is_safe = is_safe;
  if (is_safe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool RssNonIntersectionConstellationChecker::calculateLongitudinalRssStateOppositeDirection(
  core::RelativeConstellation const &constellation, state::LongitudinalRssState &rssState)
{
  bool result = false;

  bool is_safe = false;
  rssState.response = state::LongitudinalResponse::BrakeMin;
  rssState.rss_state_information.current_distance = constellation.relative_position.longitudinal_distance;

  if (constellation.ego_state.structured_object_state.is_in_correct_lane)
  {
    rssState.rss_state_information.evaluator
      = state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;

    result = checkSafeLongitudinalDistanceOppositeDirection(constellation.ego_state,
                                                            constellation.other_state,
                                                            constellation.relative_position.longitudinal_distance,
                                                            rssState.rss_state_information.safe_distance,
                                                            is_safe);
    rssState.response = state::LongitudinalResponse::BrakeMinCorrect;
  }
  else
  {
    rssState.rss_state_information.evaluator = state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;

    result = checkSafeLongitudinalDistanceOppositeDirection(constellation.other_state,
                                                            constellation.ego_state,
                                                            constellation.relative_position.longitudinal_distance,
                                                            rssState.rss_state_information.safe_distance,
                                                            is_safe);
  }

  rssState.is_safe = is_safe;
  if (rssState.is_safe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool RssNonIntersectionConstellationChecker::calculateLateralRssState(core::RelativeConstellation const &constellation,
                                                                      state::LateralRssState &rssStateLeft,
                                                                      state::LateralRssState &rssStateRight)
{
  rssStateLeft.is_safe = false;
  rssStateLeft.response = state::LateralResponse::BrakeMin;
  rssStateRight.is_safe = false;
  rssStateRight.response = state::LateralResponse::BrakeMin;

  bool isDistanceSafe = false;

  bool result = false;
  if ((core::LateralRelativePosition::AtLeft == constellation.relative_position.lateral_position)
      || (getRightBorderObjectId() == constellation.object_id))
  {
    rssStateLeft.rss_state_information.evaluator = state::RssStateEvaluator::None;
    rssStateLeft.rss_state_information.current_distance = std::numeric_limits<physics::Distance>::max();
    rssStateLeft.rss_state_information.safe_distance = std::numeric_limits<physics::Distance>::max();

    // ego is the left vehicle, so right side has to be checked
    rssStateRight.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateRight.rss_state_information.current_distance = constellation.relative_position.lateral_distance;
    result = checkSafeLateralDistance(constellation.ego_state,
                                      constellation.other_state,
                                      constellation.relative_position.lateral_distance,
                                      rssStateRight.rss_state_information.safe_distance,
                                      isDistanceSafe);
  }
  else if ((core::LateralRelativePosition::AtRight == constellation.relative_position.lateral_position)
           || (getLeftBorderObjectId() == constellation.object_id))
  {
    rssStateRight.rss_state_information.evaluator = state::RssStateEvaluator::None;
    rssStateRight.rss_state_information.current_distance = std::numeric_limits<physics::Distance>::max();
    rssStateRight.rss_state_information.safe_distance = std::numeric_limits<physics::Distance>::max();

    // ego is the right vehicle, so left side has to be checked
    rssStateLeft.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateLeft.rss_state_information.current_distance = constellation.relative_position.lateral_distance;
    result = checkSafeLateralDistance(constellation.other_state,
                                      constellation.ego_state,
                                      constellation.relative_position.lateral_distance,
                                      rssStateLeft.rss_state_information.safe_distance,
                                      isDistanceSafe);
  }
  else
  {
    rssStateLeft.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateLeft.rss_state_information.current_distance = physics::Distance(0);
    rssStateLeft.rss_state_information.safe_distance = physics::Distance(0);
    rssStateRight.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssStateRight.rss_state_information.current_distance = physics::Distance(0);
    rssStateRight.rss_state_information.safe_distance = physics::Distance(0);

    // lateral distance is zero, never safe
    result = true;
  }

  if (isDistanceSafe)
  {
    rssStateLeft.is_safe = true;
    rssStateLeft.response = state::LateralResponse::None;
    rssStateRight.is_safe = true;
    rssStateRight.response = state::LateralResponse::None;
  }
  else if ((core::LateralRelativePosition::AtLeft == constellation.relative_position.lateral_position)
           || (core::LateralRelativePosition::OverlapLeft == constellation.relative_position.lateral_position)
           || (getRightBorderObjectId() == constellation.object_id))
  {
    // ego is the left vehicle, so the collision is on the right side
    rssStateLeft.is_safe = true;
    rssStateLeft.response = state::LateralResponse::None;
  }
  else if ((core::LateralRelativePosition::AtRight == constellation.relative_position.lateral_position)
           || (core::LateralRelativePosition::OverlapRight == constellation.relative_position.lateral_position)
           || (getLeftBorderObjectId() == constellation.object_id))
  {
    // ego is the right vehicle, so the collision is on the left side
    rssStateRight.is_safe = true;
    rssStateRight.response = state::LateralResponse::None;
  }

  return result;
}

} // namespace structured
} // namespace rss
} // namespace ad
