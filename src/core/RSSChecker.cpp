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
#include "situation/RSSSituation.hpp"

namespace rss {
namespace core {
namespace RSSChecker {

bool checkSituation(situation::Situation const &situation, state::ResponseState &response) noexcept
{
  bool result = false;

  response.situationId = situation.situationId;
  response.longitudinalState.isSafe = false;
  response.longitudinalState.response = state::LongitudinalResponse::BrakeMin;
  response.lateralStateLeft.isSafe = false;
  response.lateralStateLeft.response = state::LateralResponse::BrakeMin;
  response.lateralStateRight.isSafe = false;
  response.lateralStateRight.response = state::LateralResponse::BrakeMin;

  // If one vehicle has priority we are in an intersection scenario
  if (!situation.egoVehicleState.hasPriority && !situation.otherVehicleState.hasPriority)
  {
    /**
     * Check longitudinal safe distance
     */
    result = calculateLongitudinalRssStateNonIntersection(situation, response.longitudinalState);

    if (result)
    {
      /**
       * Check lateral safe distance
       */
      result = calculateLateralRssState(situation, response.lateralStateLeft, response.lateralStateRight);
    }
  }

  return result;
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
