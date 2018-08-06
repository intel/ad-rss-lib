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

#include <gtest/gtest.h>
#include "RSSParameters.hpp"
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
}
