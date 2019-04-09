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

#include "ad_rss/core/RssResponseTransformation.hpp"
#include "ad_rss/core/RssLogging.hpp"
#include "ad_rss/state/ResponseStateValidInputRange.hpp"
#include "ad_rss/world/WorldModelValidInputRange.hpp"

namespace ad_rss {

namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ResponseState const &response,
                             world::AccelerationRestriction &accelerationRestriction)
{
  if (!withinValidInputRange(worldModel) || !withinValidInputRange(response))
  {
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_ERROR,
                "RssResponseTransformation::transformProperResponse>> Invalid input",
                worldModel,
                response);
    return false;
  }

  if (worldModel.timeIndex != response.timeIndex)
  {
    DLT_LOG_CXX(core::RssLogging::getDltContext(),
                DLT_LOG_ERROR,
                "RssResponseTransformation::transformProperResponse>> WorldModel timeIndex",
                worldModel.timeIndex,
                "not matching response timeIndex",
                response.timeIndex);
    return false;
  }
  accelerationRestriction.timeIndex = response.timeIndex;

  /**
   * If there is no action required RssResponseTransformation should send the maximum allowed acceleration/brake values
   * given by the world model
   */
  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRestriction.longitudinalRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax;
  switch (response.longitudinalState.response)
  {
    case ::ad_rss::state::LongitudinalResponse::BrakeMin:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin;
      break;
    case ::ad_rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMinCorrect;
      break;
    case ::ad_rss::state::LongitudinalResponse::None:
      accelerationRestriction.longitudinalRange.maximum = worldModel.egoVehicle.dynamics.alphaLon.accelMax;
      break;
    default:
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      DLT_LOG_CXX(core::RssLogging::getDltContext(),
                  DLT_LOG_ERROR,
                  "RssResponseTransformation::transformProperResponse>> Invalid longitudinal response state",
                  response.longitudinalState.response);
      return false;
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralStateLeft.response)
  {
    case ::ad_rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralLeftRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad_rss::state::LateralResponse::None:
      accelerationRestriction.lateralLeftRange.maximum = worldModel.egoVehicle.dynamics.alphaLat.accelMax;
      accelerationRestriction.lateralLeftRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      break;
    default:
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      DLT_LOG_CXX(core::RssLogging::getDltContext(),
                  DLT_LOG_ERROR,
                  "RssResponseTransformation::transformProperResponse>> Invalid lateral left response state",
                  response.lateralStateLeft.response);
      return false;
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralStateRight.response)
  {
    case ::ad_rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralRightRange.maximum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad_rss::state::LateralResponse::None:
      accelerationRestriction.lateralRightRange.maximum = worldModel.egoVehicle.dynamics.alphaLat.accelMax;
      accelerationRestriction.lateralRightRange.minimum = -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin;
      break;
    default:
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      DLT_LOG_CXX(core::RssLogging::getDltContext(),
                  DLT_LOG_ERROR,
                  "RssResponseTransformation::transformProperResponse>> Invalid lateral right response state",
                  response.lateralStateRight.response);
      return false;
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP

  return true;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace ad_rss
