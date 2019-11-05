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

#include "ad/rss/core/RssResponseTransformation.hpp"
#include "ad/rss/state/ProperResponseValidInputRange.hpp"
#include "ad/rss/world/WorldModelValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

namespace ad {
namespace rss {
namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ProperResponse const &response,
                             world::AccelerationRestriction &accelerationRestriction)
{
  if (!withinValidInputRange(worldModel) || !withinValidInputRange(response))
  {
    spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid input {} {}", worldModel, response);
    return false;
  }

  if (worldModel.timeIndex != response.timeIndex)
  {
    spdlog::error(
      "RssResponseTransformation::transformProperResponse>> WorldModel timeIndex {} not matching response timeIndex {}",
      worldModel.timeIndex,
      response.timeIndex);
    return false;
  }
  accelerationRestriction.timeIndex = response.timeIndex;

  /**
   * If there is no action required RssResponseTransformation should send the maximum allowed acceleration/brake values
   * given by the world model
   */
  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRestriction.longitudinalRange.minimum = -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMax;
  switch (response.longitudinalResponse)
  {
    case ::ad::rss::state::LongitudinalResponse::BrakeMin:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMin;
      break;
    case ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRestriction.longitudinalRange.maximum
        = -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMinCorrect;
      break;
    case ::ad::rss::state::LongitudinalResponse::None:
      accelerationRestriction.longitudinalRange.maximum = worldModel.egoVehicleRssDynamics.alphaLon.accelMax;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid longitudinal response state {}",
                    response.longitudinalResponse);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseLeft)
  {
    case ::ad::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralLeftRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad::rss::state::LateralResponse::None:
      accelerationRestriction.lateralLeftRange.maximum = worldModel.egoVehicleRssDynamics.alphaLat.accelMax;
      accelerationRestriction.lateralLeftRange.minimum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid lateral left response state {}",
                    response.lateralResponseLeft);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseRight)
  {
    case ::ad::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralRightRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad::rss::state::LateralResponse::None:
      accelerationRestriction.lateralRightRange.maximum = worldModel.egoVehicleRssDynamics.alphaLat.accelMax;
      accelerationRestriction.lateralRightRange.minimum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid lateral right response state {}",
                    response.lateralResponseRight);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP

  return true;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace rss
} // namespace ad
