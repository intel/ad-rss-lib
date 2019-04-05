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

#include <cmath>
#include <gtest/gtest.h>
#include <limits>
#include "RssTestParameters.hpp"
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

void resetRssState(state::LongitudinalRssState &state);

void resetRssState(state::LateralRssState &state);

void resetRssState(state::ResponseState &responseState, situation::SituationId situationId);

// set state unsafe with given literal
template <typename RSSState, typename RSSStateLiteral> void setRssStateUnsafe(RSSState &state, RSSStateLiteral literal)
{
  state.response = literal;
  state.isSafe = false;
}

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

world::Object createObject(double lonVelocity, double latVelocity);

situation::VehicleState createVehicleState(double lonVelocity, double latVelocity);

inline situation::VehicleState createVehicleStateForLongitudinalMotion(double velocity)
{
  return createVehicleState(velocity, 0.);
}

inline situation::VehicleState createVehicleStateForLateralMotion(double velocity)
{
  return createVehicleState(0., velocity);
}

situation::RelativePosition createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition position,
                                                               Distance distance = Distance(0.));

situation::RelativePosition createRelativeLateralPosition(situation::LateralRelativePosition position,
                                                          Distance distance = Distance(0.));

template <class ObjectType>
Distance calculateLongitudinalStoppingDistance(ObjectType const &object,
                                               Acceleration const &deceleration,
                                               Duration const &responseTime = Duration(0))
{
  Distance dMin = object.velocity.speedLon * responseTime;
  dMin += 0.5 * object.dynamics.alphaLon.accelMax * responseTime * responseTime;
  Speed const speedMax = object.velocity.speedLon + responseTime * object.dynamics.alphaLon.accelMax;
  dMin += (speedMax * speedMax) / (2. * deceleration);
  return dMin;
}

template <class ObjectType>
Distance calculateLongitudinalMinSafeDistance(ObjectType const &followingObject, ObjectType const &leadingObject)
{
  Distance const followingStoppingDistance = calculateLongitudinalStoppingDistance(
    followingObject, followingObject.dynamics.alphaLon.brakeMin, followingObject.responseTime);
  Distance const leadingStoppingDistance
    = calculateLongitudinalStoppingDistance(leadingObject, leadingObject.dynamics.alphaLon.brakeMax);
  Distance const dMin = followingStoppingDistance - leadingStoppingDistance;
  return std::max(dMin, Distance(0.));
}

template <class ObjectType>
Distance calculateLongitudinalMinSafeDistanceOppositeDirection(ObjectType const &objectInCorrectLane,
                                                               ObjectType const &objectNotInCorrectLane)
{
  Distance const correctStoppingDistance = calculateLongitudinalStoppingDistance(
    objectInCorrectLane, objectInCorrectLane.dynamics.alphaLon.brakeMinCorrect, objectInCorrectLane.responseTime);
  Distance const notCorrectStoppingDistance = calculateLongitudinalStoppingDistance(
    objectNotInCorrectLane, objectNotInCorrectLane.dynamics.alphaLon.brakeMin, objectNotInCorrectLane.responseTime);
  Distance const dMin = correctStoppingDistance + notCorrectStoppingDistance;
  return dMin;
}

template <class ObjectType>
Distance calculateLateralMinSafeDistance(ObjectType const &leftObject, ObjectType const &rightObject)
{
  Speed lObjectVelAfterResTime
    = leftObject.velocity.speedLat + leftObject.responseTime * leftObject.dynamics.alphaLat.accelMax;
  Speed rObjectVelAfterResTime
    = rightObject.velocity.speedLat - rightObject.responseTime * rightObject.dynamics.alphaLat.accelMax;
  Distance dMin = (leftObject.velocity.speedLat + lObjectVelAfterResTime) / 2. * leftObject.responseTime;
  dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2 * leftObject.dynamics.alphaLat.brakeMin);
  dMin -= (rightObject.velocity.speedLat + rObjectVelAfterResTime) / 2. * rightObject.responseTime;
  dMin += rObjectVelAfterResTime * rObjectVelAfterResTime / (2 * rightObject.dynamics.alphaLat.brakeMin);

  return std::max(dMin, Distance(0.));
}

class TestSupport
{
public:
  TestSupport();

  static state::LateralRssState stateWithInformation(state::LateralRssState const &lateralState,
                                                     situation::Situation const &situation);
  static state::LongitudinalRssState stateWithInformation(state::LongitudinalRssState const &longitudinalState,
                                                          situation::Situation const &situation);

  state::LongitudinalRssState cLongitudinalSafe;
  state::LongitudinalRssState cLongitudinalNone;
  state::LongitudinalRssState cLongitudinalBrakeMin;
  state::LongitudinalRssState cLongitudinalBrakeMinCorrect;
  state::LateralRssState cLateralSafe;
  state::LateralRssState cLateralNone;
  state::LateralRssState cLateralBrakeMin;
};

extern const TestSupport cTestSupport;

} // namespace ad_rss
