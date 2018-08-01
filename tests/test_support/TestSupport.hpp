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
#include "lane/RSSParameters.hpp"
#include "rss/lane/VehicleState.hpp"

namespace rss {

const double cDoubleNear = 0.01;

inline lane::Speed kmhToMeterPerSec(lane::Speed speed)
{
  return speed / 3.6;
}

inline lane::VehicleState createVehicleState(double velocity)
{
  lane::VehicleState state;

  state.velocity.speedLon = kmhToMeterPerSec(velocity);
  state.dynamics.alphaLon.accelMax = lane::cMaximumAcceleration;
  state.dynamics.alphaLon.brakeMax = lane::cMaximumBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMin = lane::cMinimumBrakingDeceleleration;
  state.dynamics.alphaLon.brakeMinCorrect = lane::cMinimumBrakingDecelelerationCorrect;

  state.dynamics.alphaLat.accelMax = lane::cMaximumAcceleration;
  state.dynamics.alphaLat.brakeMin = lane::cMinimumBrakingDeceleleration;

  state.responseTime = lane::cResponseTimeOtherVehicles;
  state.hasPriority = false;

  return state;
}
}
