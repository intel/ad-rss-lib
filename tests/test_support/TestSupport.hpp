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
#pragma once

#include <cmath>
#include <gtest/gtest.h>

#include "RSSParameters.hpp"
#include "rss/situation/RelativePosition.hpp"
#include "rss/situation/VehicleState.hpp"
#include "rss/state/ResponseState.hpp"
#include "rss/world/Object.hpp"

namespace rss {

const double cDoubleNear = 0.01;

inline situation::Speed kmhToMeterPerSec(double speed)
{
  return speed / 3.6;
}

inline world::Object createObject(double lonVelocity, double latVelocity)
{
  world::Object object;

  object.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  object.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  object.dynamics.alphaLon.accelMax = situation::cMaximumLongitudinalAcceleration;
  object.dynamics.alphaLon.brakeMax = situation::cMaximumLongitudinalBrakingDeceleleration;
  object.dynamics.alphaLon.brakeMin = situation::cMinimumLongitudinalBrakingDeceleleration;
  object.dynamics.alphaLon.brakeMinCorrect = situation::cMinimumLongitudinalBrakingDecelelerationCorrect;

  object.dynamics.alphaLat.accelMax = situation::cMaximumLateralAcceleration;
  object.dynamics.alphaLat.brakeMin = situation::cMinimumLateralBrakingDeceleleration;

  object.responseTime = situation::cResponseTimeOtherVehicles;

  return object;
}

inline situation::VehicleState createVehicleState(double lonVelocity, double latVelocity)
{
  situation::VehicleState state;

  state.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  state.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  state.dynamics.alphaLon.accelMax = situation::cMaximumLongitudinalAcceleration;
  state.dynamics.alphaLon.brakeMax = situation::cMaximumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMin = situation::cMinimumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMinCorrect = situation::cMinimumLongitudinalBrakingDecelelerationCorrect;

  state.dynamics.alphaLat.accelMax = situation::cMaximumLateralAcceleration;
  state.dynamics.alphaLat.brakeMin = situation::cMinimumLateralBrakingDeceleleration;

  state.responseTime = situation::cResponseTimeOtherVehicles;
  state.distanceToEnterIntersection = std::numeric_limits<situation::Distance>::max();
  state.distanceToLeaveIntersection = std::numeric_limits<situation::Distance>::max();
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
                                                                      situation::Distance distance = 0.)
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = 0.;
  relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
  relativePosition.longitudinalDistance = distance;
  relativePosition.longitudinalPosition = position;
  return relativePosition;
}

inline situation::RelativePosition createRelativeLateralPosition(situation::LateralRelativePosition position,
                                                                 situation::Distance distance = 0.)
{
  situation::RelativePosition relativePosition;
  relativePosition.lateralDistance = distance;
  relativePosition.lateralPosition = position;
  relativePosition.longitudinalDistance = 0.;
  relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
  return relativePosition;
}

inline double calculateLongitudinalMinSafeDistance(::rss::world::Object const &followingObject,
                                                   ::rss::world::Object const &leadingObject)
{
  double dMin = followingObject.velocity.speedLon * followingObject.responseTime;
  dMin += 0.5 * followingObject.dynamics.alphaLon.accelMax * std::pow(followingObject.responseTime, 2.);
  dMin += std::pow(followingObject.velocity.speedLon
                     + followingObject.responseTime * followingObject.dynamics.alphaLon.accelMax,
                   2.)
    / (2. * followingObject.dynamics.alphaLon.brakeMin);
  dMin = dMin
    - leadingObject.velocity.speedLon * leadingObject.velocity.speedLon
      / (2. * leadingObject.dynamics.alphaLon.brakeMax);
  return dMin;
}

inline double calculateLongitudinalMinSafeDistanceOppositeDirection(::rss::world::Object const &objectA,
                                                                    ::rss::world::Object const &objectB,
                                                                    bool escalation)
{
  double objectAVelAfterResTime = objectA.velocity.speedLon + objectA.responseTime * objectA.dynamics.alphaLon.accelMax;
  double objectBVelAfterResTime = objectB.velocity.speedLon + objectB.responseTime * objectB.dynamics.alphaLon.accelMax;
  double dMin = (objectA.velocity.speedLon + objectAVelAfterResTime) / 2. * objectA.responseTime;

  if (!escalation)
  {
    dMin += objectAVelAfterResTime * objectAVelAfterResTime / (2 * objectA.dynamics.alphaLon.brakeMinCorrect);
  }
  else
  {
    dMin += objectAVelAfterResTime * objectAVelAfterResTime / (2 * objectA.dynamics.alphaLon.brakeMin);
  }
  dMin += (objectB.velocity.speedLon + objectBVelAfterResTime) / 2. * objectB.responseTime;
  dMin += objectBVelAfterResTime * objectBVelAfterResTime / (2 * objectB.dynamics.alphaLon.brakeMin);

  return dMin;
}

inline double calculateLateralMinSafeDistance(::rss::world::Object const &leftObject,
                                              ::rss::world::Object const &rightObject)
{
  double lObjectVelAfterResTime
    = leftObject.velocity.speedLat + leftObject.responseTime * leftObject.dynamics.alphaLat.accelMax;
  double rObjectVelAfterResTime
    = rightObject.velocity.speedLat - rightObject.responseTime * rightObject.dynamics.alphaLat.accelMax;
  double dMin = (leftObject.velocity.speedLat + lObjectVelAfterResTime) / 2. * leftObject.responseTime;
  dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2 * leftObject.dynamics.alphaLat.brakeMin);
  dMin -= (rightObject.velocity.speedLat + rObjectVelAfterResTime) / 2. * rightObject.responseTime;
  dMin += rObjectVelAfterResTime * rObjectVelAfterResTime / (2 * rightObject.dynamics.alphaLat.brakeMin);

  return dMin;
}

// reset state (safe with literal==0)
template <typename RSSState> void resetRssState(RSSState &state)
{
  state.response = decltype(state.response)(0);
  state.isSafe = true;
}

inline void resetRssState(state::ResponseState &responseState, situation::SituationId situationId = 0)
{
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

static const state::LongitudinalRssState cLongitudinalSafe{true, state::LongitudinalResponse::None};
static const state::LongitudinalRssState cLongitudinalNone{false, state::LongitudinalResponse::None};
static const state::LongitudinalRssState cLongitudinalBrakeMin{false, state::LongitudinalResponse::BrakeMin};
static const state::LongitudinalRssState cLongitudinalBrakeMinCorrect{false,
                                                                      state::LongitudinalResponse::BrakeMinCorrect};

static const state::LateralRssState cLateralSafe{true, state::LateralResponse::None};
static const state::LateralRssState cLateralNone{false, state::LateralResponse::None};
static const state::LateralRssState cLateralBrakeMin{false, state::LateralResponse::BrakeMin};
}

inline bool operator==(::rss::state::LongitudinalRssState const &left, ::rss::state::LongitudinalRssState const &right)
{
  return (left.isSafe == right.isSafe) && (left.response == right.response);
}

inline bool operator==(::rss::state::LateralRssState const &left, ::rss::state::LateralRssState const &right)
{
  return (left.isSafe == right.isSafe) && (left.response == right.response);
}

// allow compiler to search in global namespace for the above comparison operators from within gtest code
namespace testing {
namespace internal {
using ::operator==;
}
}
