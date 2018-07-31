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

#include "rss/core/RSSChecker.hpp"
#include <algorithm>
#include "check/RSSResponseFunctions.hpp"

namespace rss {
namespace core {
namespace RSSChecker {

using check::Response;
using check::LateralResponse;
using check::LongitudinalResponse;

bool checkSituation(lane::Situation const &situation, Response &response)
{
  bool result = false;

  LongitudinalResponse longitudinalResponse = LongitudinalResponse::BrakeMin;
  LateralResponse lateralResponseLeft = LateralResponse::BrakeMin;
  LateralResponse lateralResponseRight = LateralResponse::BrakeMin;
  // If one vehicle has priority we're in an intersection scenario
  if (!situation.egoVehicleState.hasPriority && !situation.otherVehicleState.hasPriority)
  {
    /**
     * Check longitudinal safe distance
     */
    result = check::calculateLongitudinalResponseNonIntersection(
      situation.egoVehicleState, situation.otherVehicleState, longitudinalResponse);

    if (result)
    {
      result = check::calculateLateralResponse(
        situation.egoVehicleState, situation.otherVehicleState, lateralResponseLeft, lateralResponseRight);
    }
  }

  if (result)
  {
    response.id = situation.id;
    response.longitudinalResponse = longitudinalResponse;
    response.lateralResponseLeft = lateralResponseLeft;
    response.lateralResponseRight = lateralResponseRight;
  }
  return result;
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
