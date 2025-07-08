// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/structured/RssFormulas.hpp"
#include <algorithm>
#include "ad/rss/core/Physics.hpp"
#include "ad/rss/core/RelativeObjectStateValidInputRange.hpp"

namespace ad {
namespace rss {
namespace structured {

// make the code more readable
using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::Speed;

inline bool objectStateWithinVaildInputRange(core::RelativeObjectState const &objectState)
{
  if (!withinValidInputRange(objectState))
  {
    return false;
  }
  if (objectState.structured_object_state.velocity.speed_lon_min < Speed(0.))
  {
    return false;
  }
  return true;
}

bool calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(Speed const &currentSpeed,
                                                                  Speed const &max_speed_on_acceleration,
                                                                  Duration const &response_time,
                                                                  Acceleration const &acceleration,
                                                                  Acceleration const &deceleration,
                                                                  Distance &distanceOffset)
{
  Speed resultingSpeed = Speed(0.);
  Distance distanceOffsetAfterResponseTime = Distance(0.);
  bool result = core::calculateAcceleratedLimitedMovement(currentSpeed,
                                                          max_speed_on_acceleration,
                                                          acceleration,
                                                          response_time,
                                                          resultingSpeed,
                                                          distanceOffsetAfterResponseTime);

  Distance distanceToStop = Distance(0.);
  if (std::signbit(resultingSpeed.mSpeed) != std::signbit(deceleration.mAcceleration))
  {
    // if speed after stated braking pattern has the same direction as the acceleration
    // further braking to full stop in that moving direction has to be added
    result = result && core::calculateStoppingDistance(resultingSpeed, deceleration, distanceToStop);
  }

  if (result)
  {
    distanceOffset = distanceOffsetAfterResponseTime + distanceToStop;
  }

  return result;
}

bool calculateLateralDistanceOffsetAfterStatedBrakingPattern(Speed const &currentSpeed,
                                                             Duration const &response_time,
                                                             Acceleration const &acceleration,
                                                             Acceleration const &deceleration,
                                                             Distance &distanceOffset)
{
  Speed resultingSpeed = Speed(0.);
  Distance distanceOffsetAfterResponseTime = Distance(0.);

  bool result = core::calculateSpeedInAcceleratedMovement(currentSpeed, acceleration, response_time, resultingSpeed);
  result = result
    && core::calculateDistanceOffsetInAcceleratedMovement(
             currentSpeed, acceleration, response_time, distanceOffsetAfterResponseTime);

  Distance distanceToStop = Distance(0.);
  if (std::signbit(resultingSpeed.mSpeed) != std::signbit(deceleration.mAcceleration))
  {
    // if speed after stated braking pattern has the same direction as the acceleration
    // further braking to full stop in that moving direction has to be added
    result = result && core::calculateStoppingDistance(resultingSpeed, deceleration, distanceToStop);
  }

  if (result)
  {
    distanceOffset = distanceOffsetAfterResponseTime + distanceToStop;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceSameDirection(core::RelativeObjectState const &leadingObject,
                                                    core::RelativeObjectState const &followingObject,
                                                    Distance &safe_distance)
{
  if (!objectStateWithinVaildInputRange(leadingObject) || !objectStateWithinVaildInputRange(followingObject))
  {
    return false;
  }

  Distance distanceStatedBraking = Distance(0.);

  bool result = calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    followingObject.structured_object_state.velocity.speed_lon_max,
    followingObject.dynamics.max_speed_on_acceleration,
    followingObject.dynamics.response_time,
    followingObject.dynamics.alpha_lon.accel_max,
    followingObject.dynamics.alpha_lon.brake_min,
    distanceStatedBraking);
  Distance distanceMaxBrake = Distance(0.);
  result = result
    && core::calculateStoppingDistance(leadingObject.structured_object_state.velocity.speed_lon_min,
                                       leadingObject.dynamics.alpha_lon.brake_max,
                                       distanceMaxBrake);

  if (result)
  {
    // we need to be able to brake before min_longitudinal_safety_distance is reached
    safe_distance = std::max(distanceStatedBraking - distanceMaxBrake, Distance(0.));
    safe_distance += followingObject.dynamics.min_longitudinal_safety_distance;
  }

  return result;
}

bool checkSafeLongitudinalDistanceSameDirection(core::RelativeObjectState const &leadingObject,
                                                core::RelativeObjectState const &followingObject,
                                                Distance const &objectDistance,
                                                Distance &safe_distance,
                                                bool &isDistanceSafe)
{
  if (objectDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safe_distance = std::numeric_limits<physics::Distance>::max();

  bool const result = calculateSafeLongitudinalDistanceSameDirection(leadingObject, followingObject, safe_distance);

  if (objectDistance > safe_distance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirection(core::RelativeObjectState const &correctObject,
                                                        core::RelativeObjectState const &oppositeObject,
                                                        Distance &safe_distance)
{
  if (!objectStateWithinVaildInputRange(correctObject) || !objectStateWithinVaildInputRange(oppositeObject))
  {
    return false;
  }

  Distance distanceStatedBrakingCorrect = Distance(0.);

  bool result = calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    correctObject.structured_object_state.velocity.speed_lon_max,
    correctObject.dynamics.max_speed_on_acceleration,
    correctObject.dynamics.response_time,
    correctObject.dynamics.alpha_lon.accel_max,
    correctObject.dynamics.alpha_lon.brake_min_correct,
    distanceStatedBrakingCorrect);

  Distance distanceStatedBrakingOpposite = Distance(0.);

  if (result)
  {
    result = calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
      oppositeObject.structured_object_state.velocity.speed_lon_max,
      oppositeObject.dynamics.max_speed_on_acceleration,
      oppositeObject.dynamics.response_time,
      oppositeObject.dynamics.alpha_lon.accel_max,
      oppositeObject.dynamics.alpha_lon.brake_min,
      distanceStatedBrakingOpposite);
  }

  if (result)
  {
    // we need to be able to brake before min_longitudinal_safety_distance is reached
    safe_distance = distanceStatedBrakingCorrect + distanceStatedBrakingOpposite
      + std::max(correctObject.dynamics.min_longitudinal_safety_distance,
                 oppositeObject.dynamics.min_longitudinal_safety_distance);
  }

  return result;
}

bool checkSafeLongitudinalDistanceOppositeDirection(core::RelativeObjectState const &correctObject,
                                                    core::RelativeObjectState const &oppositeObject,
                                                    Distance const &objectDistance,
                                                    Distance &safe_distance,
                                                    bool &isDistanceSafe)
{
  if (objectDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safe_distance = std::numeric_limits<physics::Distance>::max();
  bool const result = calculateSafeLongitudinalDistanceOppositeDirection(correctObject, oppositeObject, safe_distance);

  if (objectDistance > safe_distance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool checkStopInFrontIntersection(core::RelativeObjectState const &object,
                                  Distance &safe_distance,
                                  bool &isDistanceSafe)
{
  if (!objectStateWithinVaildInputRange(object))
  {
    return false;
  }

  isDistanceSafe = false;

  safe_distance = Distance(0.);
  bool result = calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    object.structured_object_state.velocity.speed_lon_max,
    object.dynamics.max_speed_on_acceleration,
    object.dynamics.response_time,
    object.dynamics.alpha_lon.accel_max,
    object.dynamics.alpha_lon.brake_min,
    safe_distance);

  // we need to be able to brake before min_longitudinal_safety_distance is reached
  safe_distance += object.dynamics.min_longitudinal_safety_distance;

  if (safe_distance < object.structured_object_state.distance_to_enter_intersection)
  {
    isDistanceSafe = true;
  }

  return result;
}

bool calculateSafeLateralDistance(core::RelativeObjectState const &leftObject,
                                  core::RelativeObjectState const &rightObject,
                                  Distance &safe_distance)
{
  if (!objectStateWithinVaildInputRange(leftObject) || !objectStateWithinVaildInputRange(rightObject))
  {
    return false;
  }

  bool result = false;
  Distance distanceOffsetStatedBrakingLeft = Distance(0.);
  Distance distanceOffsetStatedBrakingRight = Distance(0.);

  result = calculateLateralDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    leftObject.structured_object_state.velocity.speed_lat_max,
    leftObject.dynamics.response_time,
    leftObject.dynamics.alpha_lat.accel_max,
    leftObject.dynamics.alpha_lat.brake_min,
    distanceOffsetStatedBrakingLeft);

  result = result
    && calculateLateralDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
             rightObject.structured_object_state.velocity.speed_lat_min,
             rightObject.dynamics.response_time,
             -rightObject.dynamics.alpha_lat.accel_max,
             -rightObject.dynamics.alpha_lat.brake_min,
             distanceOffsetStatedBrakingRight);

  if (result)
  {
    // safe distance is the difference of both distances
    safe_distance = distanceOffsetStatedBrakingLeft - distanceOffsetStatedBrakingRight;
    //  plus the lateral fluctuation margin: here we use the 0.5*my of both
    safe_distance
      += 0.5 * (leftObject.dynamics.lateral_fluctuation_margin + rightObject.dynamics.lateral_fluctuation_margin);
    safe_distance = std::max(safe_distance, Distance(0.));
  }
  return result;
}

bool checkSafeLateralDistance(core::RelativeObjectState const &leftObject,
                              core::RelativeObjectState const &rightObject,
                              Distance const &objectDistance,
                              Distance &safe_distance,
                              bool &isDistanceSafe)
{
  if (objectDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safe_distance = std::numeric_limits<physics::Distance>::max();
  bool const result = calculateSafeLateralDistance(leftObject, rightObject, safe_distance);

  if (objectDistance > safe_distance)
  {
    isDistanceSafe = true;
  }

  return result;
}

} // namespace structured
} // namespace rss
} // namespace ad
