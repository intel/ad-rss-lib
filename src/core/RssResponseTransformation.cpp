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

#include "rss/core/RssResponseTransformation.hpp"

namespace rss {

namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ResponseState const &response,
                             world::AccelerationRestriction &accelerationRestriction)
{
  if (worldModel.timeIndex != response.timeIndex)
  {
    return false;
  }
  accelerationRestriction.timeIndex = response.timeIndex;

  /**
   * If there is no action required RssResponseTransformation should send the maximum allowed acceleration/brake values
   * given by the world model
   */
  accelerationRestriction.longitudinalRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax;
  switch (response.longitudinalState.response)
  {
    case ::rss::state::LongitudinalResponse::BrakeMin:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin;
      break;
    case ::rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMinCorrect;
      break;
    case ::rss::state::LongitudinalResponse::None:
      accelerationRestriction.longitudinalRange.maximum = worldModel.egoVehicle.dynamics.alphaLon.accelMax;
      break;
  }

  switch (response.lateralStateLeft.response)
  {
    case ::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralLeftRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<world::Acceleration>::lowest();
      break;
    case ::rss::state::LateralResponse::None:
      accelerationRestriction.lateralLeftRange.maximum = worldModel.egoVehicle.dynamics.alphaLat.accelMax;
      accelerationRestriction.lateralLeftRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      break;
  }

  switch (response.lateralStateRight.response)
  {
    case ::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralRightRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<world::Acceleration>::lowest();
      break;
    case ::rss::state::LateralResponse::None:
      accelerationRestriction.lateralRightRange.maximum = worldModel.egoVehicle.dynamics.alphaLat.accelMax;
      accelerationRestriction.lateralRightRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      break;
  }

  return true;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace rss
