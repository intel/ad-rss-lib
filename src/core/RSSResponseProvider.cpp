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

#include "rss/core/RSSResponseProvider.hpp"
#include <algorithm>
#include "check/RSSResponseFunctions.hpp"

namespace rss {
namespace core {

using check::LateralResponse;
using check::LongitudinalResponse;

RSSResponseProvider::RSSResponseProvider()
{
}

bool RSSResponseProvider::provideProperResponse(check::ResponseVector const &currentResponses,
                                                check::Response &response)
{
  response.lateralResponseRight = LateralResponse::Safe;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.longitudinalResponse = LongitudinalResponse::Safe;

  bool result = true;

  RssStateBeforeBlameTimeMap newStatesBeforeBlameTime;

  for (auto currentResponse : currentResponses)
  {
    // The response belonging to the last state before the blame time
    check::RssState nonDangerousStateToRemember;
    if (check::isDangerous(currentResponse))
    {
      auto previousNonDangerousState = mStatesBeforeBlameTime.find(currentResponse.situationId);
      if (previousNonDangerousState != mStatesBeforeBlameTime.end())
      {
        if (previousNonDangerousState->second.lateralSafe)
        {
          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          response.lateralResponseLeft
            = check::combineLateralResponse(currentResponse.lateralResponseLeft, response.lateralResponseLeft);

          response.lateralResponseRight
            = combineLateralResponse(currentResponse.lateralResponseRight, response.lateralResponseRight);
        }
        if (previousNonDangerousState->second.longitudinalSafe)
        {
          response.longitudinalResponse
            = check::combineLongitudinalResponse(currentResponse.longitudinalResponse, response.longitudinalResponse);
        }

        nonDangerousStateToRemember = previousNonDangerousState->second;
      }
      else
      {
        // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
        // dangerous at the same time
        response.longitudinalResponse
          = check::combineLongitudinalResponse(currentResponse.longitudinalResponse, response.longitudinalResponse);

        // we might need to check here if left or right is the dangerous side
        // but for the combineLateralResponse will only respect the more severe response
        // omitting the check should have the same result
        response.lateralResponseLeft
          = check::combineLateralResponse(currentResponse.lateralResponseLeft, response.lateralResponseLeft);

        response.lateralResponseRight
          = check::combineLateralResponse(currentResponse.lateralResponseRight, response.lateralResponseRight);
      }
    }
    else
    {
      nonDangerousStateToRemember.longitudinalSafe = isLongitudinalSafe(currentResponse);
      nonDangerousStateToRemember.lateralSafe = isLateralSafe(currentResponse);
    }

    // store state for the next iteration
    auto insertResult = newStatesBeforeBlameTime.insert(
      RssStateBeforeBlameTimeMap::value_type(currentResponse.situationId, nonDangerousStateToRemember));

    if (result)
    {
      result = insertResult.second;
    }
  }

  // Determine resulting response
  mStatesBeforeBlameTime.clear();
  mStatesBeforeBlameTime.swap(newStatesBeforeBlameTime);

  return result;
}

} // namespace core
} // namespace rss
