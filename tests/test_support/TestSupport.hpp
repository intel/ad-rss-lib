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
#include "rss/check/ResponseState.hpp"
#include "rss/lane/RelativePosition.hpp"
#include "rss/lane/VehicleState.hpp"

namespace rss {

const double cDoubleNear = 0.01;

inline lane::Speed kmhToMeterPerSec(lane::Speed speed)
{
  return speed / 3.6;
}

inline lane::VehicleState createVehicleState(double lonVelocity, double latVelocity)
{
  lane::VehicleState state;

  state.velocity.speedLon = kmhToMeterPerSec(lonVelocity);
  state.velocity.speedLat = kmhToMeterPerSec(latVelocity);
  state.dynamics.alphaLon.accelMax = lane::cMaximumLongitudinalAcceleration;
  state.dynamics.alphaLon.brakeMax = lane::cMaximumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMin = lane::cMinimumLongitudinalBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMinCorrect = lane::cMinimumLongitudinalBrakingDecelelerationCorrect;

  state.dynamics.alphaLat.accelMax = lane::cMaximumLateralAcceleration;
  state.dynamics.alphaLat.brakeMin = lane::cMinimumLateralBrakingDeceleleration;

  state.responseTime = lane::cResponseTimeOtherVehicles;
  state.hasPriority = false;
  state.isInCorrectLane = true;

  return state;
}

inline lane::VehicleState createVehicleStateForLongitudinalMotion(double velocity)
{
  return createVehicleState(velocity, 0.);
}

inline lane::VehicleState createVehicleStateForLateralMotion(double velocity)
{
  return createVehicleState(0., velocity);
}

inline lane::RelativePosition createRelativeLongitudinalPosition(lane::LongitudinalRelativePosition position,
                                                                 lane::Distance distance = 0.,
                                                                 bool oppositeDirection = false)
{
  lane::RelativePosition relativePosition;
  relativePosition.lateralDistance = 0.;
  relativePosition.lateralPosition = lane::LateralRelativePosition::Overlap;
  relativePosition.longitudinalDistance = distance;
  relativePosition.longitudinalPosition = position;
  relativePosition.isDrivingInOppositeDirection = oppositeDirection;
  return relativePosition;
}

inline lane::RelativePosition createRelativeLateralPosition(lane::LateralRelativePosition position,
                                                            lane::Distance distance = 0.,
                                                            bool oppositeDirection = false)
{
  lane::RelativePosition relativePosition;
  relativePosition.lateralDistance = distance;
  relativePosition.lateralPosition = position;
  relativePosition.longitudinalDistance = 0.;
  relativePosition.longitudinalPosition = lane::LongitudinalRelativePosition::Overlap;
  relativePosition.isDrivingInOppositeDirection = oppositeDirection;
  return relativePosition;
}

// reset state (safe with literal==0)
template <typename RSSState> void resetRssState(RSSState &state)
{
  state.response = decltype(state.response)(0);
  state.isSafe = true;
}

inline void resetRssState(check::ResponseState &responseState, lane::SituationId situationId = 0)
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

static const check::LongitudinalRssState cLongitudinalSafe{true, check::LongitudinalResponse::None};
static const check::LongitudinalRssState cLongitudinalNone{false, check::LongitudinalResponse::None};
static const check::LongitudinalRssState cLongitudinalBrakeMin{false, check::LongitudinalResponse::BrakeMin};
static const check::LongitudinalRssState cLongitudinalBrakeMinCorrect{false,
                                                                      check::LongitudinalResponse::BrakeMinCorrect};

static const check::LateralRssState cLateralSafe{true, check::LateralResponse::None};
static const check::LateralRssState cLateralNone{false, check::LateralResponse::None};
static const check::LateralRssState cLateralBrakeMin{false, check::LateralResponse::BrakeMin};
}

inline bool operator==(::rss::check::LongitudinalRssState const &left, ::rss::check::LongitudinalRssState const &right)
{
  return (left.isSafe == right.isSafe) && (left.response == right.response);
}

inline bool operator==(::rss::check::LateralRssState const &left, ::rss::check::LateralRssState const &right)
{
  return (left.isSafe == right.isSafe) && (left.response == right.response);
}

// allow compiler to search in global namespace for the above comparison operators from within gtest code
namespace testing {
namespace internal {
using ::operator==;
}
}
