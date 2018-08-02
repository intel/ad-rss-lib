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

#include "RSSResponseFunctions.hpp"
#include <cmath>
#include "lane/RSSFormulas.hpp"

namespace rss {
namespace check {

bool doVehiclesHaveSameDirection(lane::VehicleState const &egoVehicle, lane::VehicleState const &otherVehicle)
{
  return std::signbit(egoVehicle.velocity.speedLon) == std::signbit(otherVehicle.velocity.speedLon);
}

bool calculateLongitudinalResponseNonIntersection(lane::VehicleState const &egoVehicle,
                                                  lane::VehicleState const &otherVehicle,
                                                  LongitudinalResponse &response)
{
  bool result = false;
  if (doVehiclesHaveSameDirection(egoVehicle, otherVehicle))
  {
    result = calculateLongitudinalResponseNonIntersectionSameDirection(egoVehicle, otherVehicle, response);
  }
  else
  {
    result = calculateLongitudinalResponseNonIntersectionOppositeDirection(egoVehicle, otherVehicle, response);
  }
  return result;
}

bool calculateLongitudinalResponseNonIntersectionSameDirection(lane::VehicleState const &egoVehicle,
                                                               lane::VehicleState const &otherVehicle,
                                                               LongitudinalResponse &response)
{
  bool result = false;

  response = LongitudinalResponse::BrakeMin;
  bool isDistanceSafe = false;

  if (isVehicleInFront(egoVehicle, otherVehicle))
  {
    // The ego vehicle is leading in this situation so we don't need to break longitudinally
    response = LongitudinalResponse::None;

    result = checkSafeLongitudinalDistanceSameDirection(egoVehicle, otherVehicle, isDistanceSafe);
  }
  else
  {
    result = checkSafeLongitudinalDistanceSameDirection(otherVehicle, egoVehicle, isDistanceSafe);
  }

  if (isDistanceSafe)
  {
    response = LongitudinalResponse::Safe;
  }

  return result;
}

bool calculateLongitudinalResponseNonIntersectionOppositeDirection(lane::VehicleState const &egoVehicle,
                                                                   lane::VehicleState const &otherVehicle,
                                                                   LongitudinalResponse &response)
{
  bool result = false;
  bool isSafe = false;

  response = LongitudinalResponse::BrakeMin;

  /**
   * 1. Check if state is dangerous if both vehicles use brake min
   */
  result = checkSafeLongitudinalDistanceOppositeDirection(false, egoVehicle, otherVehicle, isSafe);

  /**
   * 2. If state is safe if both vehicles use brake min,
   *    check if one of the vehicles is on correct lane and the other not
   * This check is in addition to the check proposed in the original paper
   */
  if (result && isSafe && (egoVehicle.isInCorrectLane != otherVehicle.isInCorrectLane))
  {
    if (egoVehicle.isInCorrectLane)
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true, egoVehicle, otherVehicle, isSafe);
      response = LongitudinalResponse::BrakeMinCorrect;
    }
    else
    {
      result = checkSafeLongitudinalDistanceOppositeDirection(true, otherVehicle, egoVehicle, isSafe);
      response = LongitudinalResponse::BrakeMin;
    }
  }

  if (isSafe)
  {
    response = LongitudinalResponse::Safe;
  }

  return result;
}

bool calculateLateralResponse(lane::VehicleState const &egoVehicle,
                              lane::VehicleState const &otherVehicle,
                              LateralResponse &responseLeft,
                              LateralResponse &responseRight)
{
  (void)egoVehicle;
  (void)otherVehicle;
  /**
   * @todo Implement proper check -> Next Sprint
   */
  responseLeft = LateralResponse::BrakeMin;
  responseRight = LateralResponse::BrakeMin;
  return true;
}

} // namespace check
} // namespace rss
