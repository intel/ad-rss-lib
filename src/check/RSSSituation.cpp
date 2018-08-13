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
#include "lane/RSSFormulas.hpp"
#include "lane/Vehicle.hpp"

namespace rss {
namespace check {

bool calculateLongitudinalRssStateNonIntersection(lane::Situation const &situation,
                                                  LongitudinalRssState &rssState) noexcept
{
  bool result = false;
  if (situation.relativePosition.isDrivingInOppositeDirection)
  {
    result = calculateLongitudinalRssStateNonIntersectionOppositeDirection(situation, rssState);
  }
  else
  {
    result = calculateLongitudinalRssStateNonIntersectionSameDirection(situation, rssState);
  }
  return result;
}

bool calculateLongitudinalRssStateNonIntersectionSameDirection(lane::Situation const &situation,
                                                               LongitudinalRssState &rssState) noexcept
{
  bool result = false;

  rssState.isSafe = false;
  rssState.response = LongitudinalResponse::BrakeMin;

  if (lane::LongitudinalRelativePosition::InFront == situation.relativePosition.longitudinalPosition)
  {
    // The ego vehicle is leading in this situation so we don't need to break longitudinal
    rssState.response = LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(situation.egoVehicleState,
                                                        situation.otherVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.isSafe);
  }
  else
  {
    result = checkSafeLongitudinalDistanceSameDirection(situation.otherVehicleState,
                                                        situation.egoVehicleState,
                                                        situation.relativePosition.longitudinalDistance,
                                                        rssState.isSafe);
  }

  if (rssState.isSafe)
  {
    rssState.response = LongitudinalResponse::None;
  }

  return result;
}

bool calculateLongitudinalRssStateNonIntersectionOppositeDirection(lane::Situation const &situation,
                                                                   LongitudinalRssState &rssState) noexcept
{
  bool result = false;

  rssState.isSafe = false;
  rssState.response = LongitudinalResponse::BrakeMin;

  /**
   * 1. Check if state is dangerous if both vehicles use brake min
   */
  result = checkSafeLongitudinalDistanceOppositeDirection(false,
                                                          situation.egoVehicleState,
                                                          situation.otherVehicleState,
                                                          situation.relativePosition.longitudinalDistance,
                                                          rssState.isSafe);

  /**
   * 2. If state is safe if both vehicles use brake min,
   *    check if one of the vehicles is on correct lane and the other not
   *
   *    Note: If both vehicles are on the correct lane, no rssState is triggered until case 1. becomes active
   */
  if (result && rssState.isSafe
      && (situation.egoVehicleState.isInCorrectLane != situation.otherVehicleState.isInCorrectLane))
  {
    if (situation.egoVehicleState.isInCorrectLane)
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true,
                                                              situation.egoVehicleState,
                                                              situation.otherVehicleState,
                                                              situation.relativePosition.longitudinalDistance,
                                                              rssState.isSafe);
      rssState.response = LongitudinalResponse::BrakeMinCorrect;
    }
    else
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true,
                                                              situation.otherVehicleState,
                                                              situation.egoVehicleState,
                                                              situation.relativePosition.longitudinalDistance,
                                                              rssState.isSafe);
      rssState.response = LongitudinalResponse::BrakeMin;
    }
  }

  if (rssState.isSafe)
  {
    rssState.response = LongitudinalResponse::None;
  }

  return result;
}

bool calculateLateralRssState(lane::Situation const &situation,
                              LateralRssState &rssStateLeft,
                              LateralRssState &rssStateRight) noexcept
{
  rssStateLeft.isSafe = false;
  rssStateLeft.response = LateralResponse::BrakeMin;
  rssStateRight.isSafe = false;
  rssStateRight.response = LateralResponse::BrakeMin;

  bool isDistanceSafe = false;

  bool result = false;
  if (lane::LateralRelativePosition::AtLeft == situation.relativePosition.lateralPosition)
  {
    result = checkSafeLateralDistance(situation.egoVehicleState,
                                      situation.otherVehicleState,
                                      situation.relativePosition.lateralDistance,
                                      isDistanceSafe);
  }
  else if (lane::LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
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
    rssStateLeft.response = LateralResponse::None;
    rssStateRight.isSafe = true;
    rssStateRight.response = LateralResponse::None;
  }
  else if ((lane::LateralRelativePosition::AtLeft == situation.relativePosition.lateralPosition)
           || (lane::LateralRelativePosition::OverlapLeft == situation.relativePosition.lateralPosition))
  {
    // ego is the left vehicle, so the collision is on the right side
    rssStateLeft.isSafe = true;
    rssStateLeft.response = LateralResponse::None;
  }
  else if ((lane::LateralRelativePosition::AtRight == situation.relativePosition.lateralPosition)
           || (lane::LateralRelativePosition::OverlapRight == situation.relativePosition.lateralPosition))
  {
    // ego is the right vehicle, so the collision is on the left side
    rssStateRight.isSafe = true;
    rssStateRight.response = LateralResponse::None;
  }

  return result;
}

} // namespace check
} // namespace rss
