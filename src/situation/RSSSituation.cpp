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

#include "RSSSituation.hpp"
#include "situation/RSSFormulas.hpp"
#include "situation/Vehicle.hpp"

namespace rss {
namespace situation {

bool calculateRssStateNonIntersectionSameDirection(Situation const &situation,
                                                   state::ResponseState &responseState) noexcept
{
  bool result = calculateLongitudinalRssStateNonIntersectionSameDirection(situation, responseState.longitudinalState);
  if (result)
  {
    result = calculateLateralRssState(situation, responseState.lateralStateLeft, responseState.lateralStateRight);
  }
  return result;
}

bool calculateRssStateNonIntersectionOppositeDirection(Situation const &situation,
                                                       state::ResponseState &responseState) noexcept
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
                                                               state::LongitudinalRssState &rssState) noexcept
{
  bool result = false;

  rssState.response = state::LongitudinalResponse::BrakeMin;

  bool isSafe = false;

  if ((LongitudinalRelativePosition::InFront == situation.relativePosition.longitudinalPosition)
      || (LongitudinalRelativePosition::OverlapFront == situation.relativePosition.longitudinalPosition))
  {
    // The ego vehicle is leading in this situation so we don't need to break longitudinal
    rssState.response = state::LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(
      situation.egoVehicleState, situation.otherVehicleState, situation.relativePosition.longitudinalDistance, isSafe);
  }
  else
  {
    result = checkSafeLongitudinalDistanceSameDirection(
      situation.otherVehicleState, situation.egoVehicleState, situation.relativePosition.longitudinalDistance, isSafe);
  }

  rssState.isSafe = isSafe;
  if (isSafe)
  {
    rssState.response = state::LongitudinalResponse::None;
  }

  return result;
}

bool calculateLongitudinalRssStateNonIntersectionOppositeDirection(Situation const &situation,
                                                                   state::LongitudinalRssState &rssState) noexcept
{
  bool result = false;

  bool isSafe = false;
  rssState.response = state::LongitudinalResponse::BrakeMin;

  /**
   * 1. Check if state is dangerous if both vehicles use brake min
   */
  result = checkSafeLongitudinalDistanceOppositeDirection(false,
                                                          situation.egoVehicleState,
                                                          situation.otherVehicleState,
                                                          situation.relativePosition.longitudinalDistance,
                                                          isSafe);

  /**
   * 2. If state is safe if both vehicles use brake min,
   *    check if one of the vehicles is on correct lane and the other not
   *
   *    Note: If both vehicles are on the correct lane, no rssState is triggered until case 1. becomes active
   */
  if (result && isSafe && (situation.egoVehicleState.isInCorrectLane != situation.otherVehicleState.isInCorrectLane))
  {
    if (situation.egoVehicleState.isInCorrectLane)
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true,
                                                              situation.egoVehicleState,
                                                              situation.otherVehicleState,
                                                              situation.relativePosition.longitudinalDistance,
                                                              isSafe);
      rssState.response = state::LongitudinalResponse::BrakeMinCorrect;
    }
    else
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true,
                                                              situation.otherVehicleState,
                                                              situation.egoVehicleState,
                                                              situation.relativePosition.longitudinalDistance,
                                                              isSafe);
      rssState.response = state::LongitudinalResponse::BrakeMin;
    }
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
                              state::LateralRssState &rssStateRight) noexcept
{
  rssStateLeft.isSafe = false;
  rssStateLeft.response = state::LateralResponse::BrakeMin;
  rssStateRight.isSafe = false;
  rssStateRight.response = state::LateralResponse::BrakeMin;

  bool isDistanceSafe = false;

  bool result = false;
  if (LateralRelativePosition::AtLeft == situation.relativePosition.lateralPosition)
  {
    result = checkSafeLateralDistance(situation.egoVehicleState,
                                      situation.otherVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      isDistanceSafe);
  }
  else if (LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
  {
    result = checkSafeLateralDistance(situation.otherVehicleState,
                                      situation.egoVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      isDistanceSafe);
  }
  else
  {
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
