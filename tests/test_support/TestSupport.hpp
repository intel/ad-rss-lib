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
#pragma once

#include <gtest/gtest.h>

#include <cmath>
#include <limits>

#include "RSSParameters.hpp"
#include "ad_rss/physics/Operations.hpp"
#include "ad_rss/situation/RelativePosition.hpp"
#include "ad_rss/situation/Situation.hpp"
#include "ad_rss/situation/VehicleState.hpp"
#include "ad_rss/state/ResponseState.hpp"
#include "ad_rss/world/Object.hpp"
#include "physics/Math.hpp"

namespace ad_rss {

// make the code more readable
using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::ParametricValue;
using physics::Speed;

const double cDoubleNear(0.01);

#define ARRAYLEN(a) (sizeof(a) / sizeof(a[0]))

class TestSupport
{
public:
  TestSupport()
  {
    cLongitudinalSafe.isSafe = true;
    cLongitudinalSafe.response = state::LongitudinalResponse::None;
    cLongitudinalNone.isSafe = false;
    cLongitudinalNone.response = state::LongitudinalResponse::None;
    cLongitudinalBrakeMin.isSafe = false;
    cLongitudinalBrakeMin.response = state::LongitudinalResponse::BrakeMin;
    cLongitudinalBrakeMinCorrect.isSafe = false;
    cLongitudinalBrakeMinCorrect.response = state::LongitudinalResponse::BrakeMinCorrect;
    cLateralSafe.isSafe = true;
    cLateralSafe.response = state::LateralResponse::None;
    cLateralNone.isSafe = false;
    cLateralNone.response = state::LateralResponse::None;
    cLateralBrakeMin.isSafe = false;
    cLateralBrakeMin.response = state::LateralResponse::BrakeMin;
  }

  state::LongitudinalRssState cLongitudinalSafe;
  state::LongitudinalRssState cLongitudinalNone;
  state::LongitudinalRssState cLongitudinalBrakeMin;
  state::LongitudinalRssState cLongitudinalBrakeMinCorrect;
  state::LateralRssState cLateralSafe;
  state::LateralRssState cLateralNone;
  state::LateralRssState cLateralBrakeMin;
};

static const TestSupport cTestSupport;

inline physics::Speed kmhToMeterPerSec(double speed)
{
  return Speed(speed / 3.6);
}

inline world::Object objectAsEgo(world::Object iObject)
{
  world::Object object(iObject);
  object.objectType = world::ObjectType::EgoVehicle;
  return object;
}

inline world::Object createObject(double lonVelocity, double latVelocity)
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

inline situation::VehicleState createVehicleState(double lonVelocity, double latVelocity)
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

inline situation::VehicleState createVehicleStateForLongitudinalMotion(double velocity)
{
  return createVehicleState(velocity, 0.);
}

inline situation::VehicleState createVehicleStateForLateralMotion(double velocity)
{
  return createVehicleState(0., velocity);
}

inline situation::RelativePosition createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition position,
                                                                      Distance distance = Distance(0.))
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = Distance(0.);
  relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
  relativePosition.longitudinalDistance = distance;
  relativePosition.longitudinalPosition = position;
  return relativePosition;
}

inline situation::RelativePosition createRelativeLateralPosition(situation::LateralRelativePosition position,
                                                                 Distance distance = Distance(0.))
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = distance;
  relativePosition.lateralPosition = position;
  relativePosition.longitudinalDistance = Distance(0.);
  relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
  return relativePosition;
}

inline Distance calculateLongitudinalMinSafeDistance(::ad_rss::world::Object const &followingObject,
                                                     ::ad_rss::world::Object const &leadingObject)
{
  Distance dMin = followingObject.velocity.speedLon * followingObject.responseTime;
  dMin
    += 0.5 * followingObject.dynamics.alphaLon.accelMax * followingObject.responseTime * followingObject.responseTime;
  Speed const speedMax
    = followingObject.velocity.speedLon + followingObject.responseTime * followingObject.dynamics.alphaLon.accelMax;
  dMin += (speedMax * speedMax) / (2. * followingObject.dynamics.alphaLon.brakeMin);
  dMin = dMin
    - leadingObject.velocity.speedLon * leadingObject.velocity.speedLon
      / (2. * leadingObject.dynamics.alphaLon.brakeMax);
  return dMin;
}

inline Distance calculateLongitudinalMinSafeDistanceOppositeDirection(::ad_rss::world::Object const &objectA,
                                                                      ::ad_rss::world::Object const &objectB)
{
  Speed const objectAVelAfterResTime
    = objectA.velocity.speedLon + objectA.responseTime * objectA.dynamics.alphaLon.accelMax;
  Speed const objectBVelAfterResTime
    = objectB.velocity.speedLon + objectB.responseTime * objectB.dynamics.alphaLon.accelMax;
  Distance dMin = (objectA.velocity.speedLon + objectAVelAfterResTime) / 2. * objectA.responseTime;
  dMin += objectAVelAfterResTime * objectAVelAfterResTime / (2 * objectA.dynamics.alphaLon.brakeMinCorrect);
  dMin += (objectB.velocity.speedLon + objectBVelAfterResTime) / 2. * objectB.responseTime;
  dMin += objectBVelAfterResTime * objectBVelAfterResTime / (2 * objectB.dynamics.alphaLon.brakeMin);

  return dMin;
}

inline Distance calculateLateralMinSafeDistance(::ad_rss::world::Object const &leftObject,
                                                ::ad_rss::world::Object const &rightObject)
{
  Speed lObjectVelAfterResTime
    = leftObject.velocity.speedLat + leftObject.responseTime * leftObject.dynamics.alphaLat.accelMax;
  Speed rObjectVelAfterResTime
    = rightObject.velocity.speedLat - rightObject.responseTime * rightObject.dynamics.alphaLat.accelMax;
  Distance dMin = (leftObject.velocity.speedLat + lObjectVelAfterResTime) / 2. * leftObject.responseTime;
  dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2 * leftObject.dynamics.alphaLat.brakeMin);
  dMin -= (rightObject.velocity.speedLat + rObjectVelAfterResTime) / 2. * rightObject.responseTime;
  dMin += rObjectVelAfterResTime * rObjectVelAfterResTime / (2 * rightObject.dynamics.alphaLat.brakeMin);

  return dMin;
}

inline void resetRssState(state::LongitudinalRssState &state)
{
  state.response = state::LongitudinalResponse::None;
  state.isSafe = true;
}

inline void resetRssState(state::LateralRssState &state)
{
  state.response = state::LateralResponse::None;
  state.isSafe = true;
}

inline void resetRssState(state::ResponseState &responseState, situation::SituationId situationId)
{
  responseState.timeIndex = 1u;
  responseState.situationId = situationId;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);
}

// set state unsafe with given literal
template <typename RSSState, typename RSSStateLiteral> void setRssStateUnsafe(RSSState &state, RSSStateLiteral literal)
{
  state.response = literal;
  state.isSafe = false;
}

} // namespace ad_rss
