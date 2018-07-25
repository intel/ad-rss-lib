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

#include "rss_core/RSSParameters.hpp"
#include "rss_core/RSSTypes.hpp"

const double cDoubleNear = 0.01;

inline rss_core::Speed kmhToMeterPerSec(rss_core::Speed speed)
{
  return speed / 3.6;
}

inline rss_core::lane::VehicleState createVehicleState(double velocity)
{
  rss_core::lane::VehicleState state;

  state.velocity.speedLon = kmhToMeterPerSec(velocity);
  state.dynamics.alphaLon.accelMax = rss_core::cMaximumAcceleration;
  state.dynamics.alphaLon.brakeMax = rss_core::cMaximumBreakingDeceleleration;
  state.dynamics.alphaLon.brakeMin = rss_core::cMinimumBreakingDeceleleration;

  state.dynamics.alphaLat.accelMax = rss_core::cMaximumAcceleration;
  state.dynamics.alphaLat.brakeMax = rss_core::cMaximumBreakingDeceleleration;
  state.dynamics.alphaLat.brakeMin = rss_core::cMinimumBreakingDeceleleration;

  state.responseTime = rss_core::cResponseTimeOtherVehicles;

  return state;
}
