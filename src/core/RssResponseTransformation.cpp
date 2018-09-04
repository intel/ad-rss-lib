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

#include "rss/core/RssResponseTransformation.hpp"

namespace rss {

namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ResponseState const &response,
                             world::AccelerationRestriction &accelerationRestriction) noexcept
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
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<int>::lowest();
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
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<int>::lowest();
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
