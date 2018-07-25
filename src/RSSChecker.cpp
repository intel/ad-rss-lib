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

#include "rss_core/RSSChecker.hpp"
#include <algorithm>
#include "rss_core/RSSFormulas.hpp"

namespace rss_core {

RSSChecker::RSSChecker()
{
}

bool RSSChecker::checkSituation(lane::Situation const &situation, Response &response)
{
  bool result = false;

  LongitudinalResponse longitudinalResponse = LongitudinalResponse::BreakMin;
  LateralResponse lateralResponse = LateralResponse::BreakMinLeft;
  // If one vehicle has priority we're in an intersection scenario
  if (!situation.egoVehicleState.hasPriority && !situation.otherVehicleState.hasPriority)
  {
    /**
     * Check longitudinal safe distance
     */
    result = calculateLongitudinalResponseNonIntersection(
      situation.egoVehicleState, situation.otherVehicleState, longitudinalResponse);

    if (result)
    {
      result = calculateLateralResponse(situation.egoVehicleState, situation.otherVehicleState, lateralResponse);
    }
  }

  if (result)
  {
    response.mLongitudinalResponse = longitudinalResponse;
    response.mLateralResponse = lateralResponse;
  }
  return result;
}
}
