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

#include "Vehicle.hpp"

namespace rss {
namespace situation {

bool checkVehicleDynamics(Dynamics const &dynamics)
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

bool checkVehicleLongitudinalVelocity(Velocity const &velocity)
{
  if (velocity.speedLon < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleState(VehicleState const &state)
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

} // namespace situation
} // namespace rss
