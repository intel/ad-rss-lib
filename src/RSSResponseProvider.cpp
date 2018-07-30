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

#include "rss_core/RSSResponseProvider.hpp"
#include <algorithm>
#include "rss_core/RSSFormulas.hpp"

namespace rss_core {

RSSResponseProvider::RSSResponseProvider()
{
}

bool RSSResponseProvider::provideProperResponse(std::vector<Response> const &currentResponses, Response &response)
{
  response.mLateralResponseRight = LateralResponse::Safe;
  response.mLateralResponseLeft = LateralResponse::Safe;
  response.mLongitudinalResponse = LongitudinalResponse::Safe;

  bool result = true;

  std::map<lane::Id, StateBeforeBlameTime> newStatesBeforeBlameTime;

  for (auto currentResponse : currentResponses)
  {
    // The response belonging to the last state before the blame time
    StateBeforeBlameTime nonDangerousStateToRemember;
    if (isDangerous(currentResponse))
    {
      auto previousNonDangerousState = mStatesBeforeBlameTime.find(currentResponse.id);
      if (previousNonDangerousState != mStatesBeforeBlameTime.end())
      {
        if (previousNonDangerousState->second.lateralSafe)
        {
          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          response.mLateralResponseLeft
            = combineLateralResponse(currentResponse.mLateralResponseLeft, response.mLateralResponseLeft);

          response.mLateralResponseRight
            = combineLateralResponse(currentResponse.mLateralResponseRight, response.mLateralResponseRight);
        }
        if (previousNonDangerousState->second.longitudinalSafe)
        {
          response.mLongitudinalResponse
            = combineLongitudinalResponse(currentResponse.mLongitudinalResponse, response.mLongitudinalResponse);
        }

        nonDangerousStateToRemember = previousNonDangerousState->second;
      }
      else
      {
        // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
        // dangerous at the same time
        response.mLongitudinalResponse
          = combineLongitudinalResponse(currentResponse.mLongitudinalResponse, response.mLongitudinalResponse);

        // we might need to check here if left or right is the dangerous side
        // but for the combineLateralResponse will only respect the more severe response
        // omitting the check should have the same result
        response.mLateralResponseLeft
          = combineLateralResponse(currentResponse.mLateralResponseLeft, response.mLateralResponseLeft);

        response.mLateralResponseRight
          = combineLateralResponse(currentResponse.mLateralResponseRight, response.mLateralResponseRight);
      }
    }
    else
    {
      nonDangerousStateToRemember
        = StateBeforeBlameTime(isLongitudinalSafe(currentResponse), isLateralSafe(currentResponse));
    }

    // store state for the next iteration
    auto insertResult = newStatesBeforeBlameTime.insert(
      std::pair<lane::Id, StateBeforeBlameTime>(currentResponse.id, nonDangerousStateToRemember));

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
}
