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

#include "Vehicle.hpp"

namespace rss {
namespace lane {

bool checkVehicleDynamics(Dynamics const &dynamics) noexcept
{
  // acceleration has to be >=0
  if (dynamics.alphaLon.accelMax < 0)
  {
    return false;
  }

  // deceleration has to be > 0
  if ((dynamics.alphaLon.brakeMax <= 0) || (dynamics.alphaLon.brakeMin <= 0)
      || (dynamics.alphaLon.brakeMinCorrect <= 0))
  {
    return false;
  }

  // deceleration has to be ordered properly
  if ((dynamics.alphaLon.brakeMax < dynamics.alphaLon.brakeMin)
      || (dynamics.alphaLon.brakeMin < dynamics.alphaLon.brakeMinCorrect))
  {
    return false;
  }

  // acceleration has to be >=0
  if (dynamics.alphaLat.accelMax < 0)
  {
    return false;
  }

  // deceleration has to be > 0
  if (dynamics.alphaLat.brakeMin <= 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleLongitudinalVelocity(Velocity const &velocity) noexcept
{
  if (velocity.speedLon < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleState(VehicleState const &state) noexcept
{
  if (!checkVehicleDynamics(state.dynamics))
  {
    return false;
  }

  if (!checkVehicleLongitudinalVelocity(state.velocity))
  {
    return false;
  }

  if (state.responseTime <= 0)
  {
    return false;
  }

  return true;
}

} // namespace lane
} // namespace rss
