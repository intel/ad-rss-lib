// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad_rss/core/RssResponseTransformation.hpp"
#include "ad_rss/state/ProperResponseValidInputRange.hpp"
#include "ad_rss/world/WorldModelValidInputRange.hpp"

namespace ad_rss {

namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ProperResponse const &response,
                             world::AccelerationRestriction &accelerationRestriction)
{
  if (!withinValidInputRange(worldModel) || !withinValidInputRange(response))
  {
    return false;
  }

  if (worldModel.timeIndex != response.timeIndex)
  {
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
    case ::ad_rss::state::LongitudinalResponse::BrakeMin:
      accelerationRestriction.longitudinalRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMin;
      break;
    case ::ad_rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRestriction.longitudinalRange.maximum
        = -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMinCorrect;
      break;
    case ::ad_rss::state::LongitudinalResponse::None:
      accelerationRestriction.longitudinalRange.maximum = worldModel.egoVehicleRssDynamics.alphaLon.accelMax;
      break;
    default:
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseLeft)
  {
    case ::ad_rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralLeftRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad_rss::state::LateralResponse::None:
      accelerationRestriction.lateralLeftRange.maximum = worldModel.egoVehicleRssDynamics.alphaLat.accelMax;
      accelerationRestriction.lateralLeftRange.minimum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      break;
    default:
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseRight)
  {
    case ::ad_rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralRightRange.maximum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad_rss::state::LateralResponse::None:
      accelerationRestriction.lateralRightRange.maximum = worldModel.egoVehicleRssDynamics.alphaLat.accelMax;
      accelerationRestriction.lateralRightRange.minimum = -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin;
      break;
    default:
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP

  return true;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace ad_rss
