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
  accelerationRestriction.longitudinalRange.maximum = worldModel.egoVehicle.dynamics.alphaLon.accelMax;

  /**
   * @todo wouldn't it be better to change this to deceleration max?
   */
  accelerationRestriction.longitudinalRange.minimum = -1.f * worldModel.egoVehicle.dynamics.alphaLon.brakeMax;

  /**
   * @todo this seems to be wrong. We need to distinguish between acceleration and deceleration
   */
  accelerationRestriction.lateralRange.maximum = worldModel.egoVehicle.dynamics.alphaLat.accelMax;
  accelerationRestriction.lateralRange.minimum = -1.f * worldModel.egoVehicle.dynamics.alphaLat.accelMax;

  //@todo: implement rest

  return false;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace rss
