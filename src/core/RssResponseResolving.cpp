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

#include "rss/core/RssResponseResolving.hpp"
#include <algorithm>
#include "RSSState.hpp"

namespace rss {
namespace core {

RssResponseResolving::RssResponseResolving()
{
}

bool RssResponseResolving::provideProperResponse(state::ResponseStateVector const &currentStates,
                                                 state::ResponseState &responseState) noexcept
{
  responseState.timeIndex = 0u;
  responseState.lateralStateLeft.response = state::LateralResponse::None;
  responseState.lateralStateLeft.isSafe = true;
  responseState.lateralStateRight.response = state::LateralResponse::None;
  responseState.lateralStateRight.isSafe = true;
  responseState.longitudinalState.response = state::LongitudinalResponse::None;
  responseState.longitudinalState.isSafe = true;

  bool result = true;

  RssStateBeforeBlameTimeMap newStatesBeforeBlameTime;

  try
  {
    for (auto currentState : currentStates)
    {
      if (responseState.timeIndex == 0u)
      {
        responseState.timeIndex = currentState.timeIndex;
      }
      else if (responseState.timeIndex != currentState.timeIndex)
      {
        result = false;
        break;
      }

      // The response belonging to the last state before the blame time
      RssState nonDangerousStateToRemember;
      if (isDangerous(currentState))
      {
        auto previousNonDangerousState = mStatesBeforeBlameTime.find(currentState.situationId);
        if (previousNonDangerousState != mStatesBeforeBlameTime.end())
        {
          if (previousNonDangerousState->second.lateralSafe)
          {
            // we might need to check here if left or right is the dangerous side
            // but for the combineLateralResponse will only respect the more severe response
            // omitting the check should have the same result
            //
            // @todo: Handling of a cut-in by a leading vehicle as stated in Definition 9.3.(2) will be handled
            //        outside of this function. As a consequence, there is currently no response for a cut-in of a
            //        leading vehicle
            responseState.lateralStateLeft
              = combineRssState(currentState.lateralStateLeft, responseState.lateralStateLeft);

            responseState.lateralStateRight
              = combineRssState(currentState.lateralStateRight, responseState.lateralStateRight);
          }
          if (previousNonDangerousState->second.longitudinalSafe)
          {
            responseState.longitudinalState
              = combineRssState(currentState.longitudinalState, responseState.longitudinalState);
          }

          nonDangerousStateToRemember = previousNonDangerousState->second;
        }
        else
        {
          // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
          // dangerous at the same time
          responseState.longitudinalState
            = combineRssState(currentState.longitudinalState, responseState.longitudinalState);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          responseState.lateralStateLeft
            = combineRssState(currentState.lateralStateLeft, responseState.lateralStateLeft);

          responseState.lateralStateRight
            = combineRssState(currentState.lateralStateRight, responseState.lateralStateRight);
        }
      }
      else
      {
        nonDangerousStateToRemember.longitudinalSafe = isLongitudinalSafe(currentState);
        nonDangerousStateToRemember.lateralSafe = isLateralSafe(currentState);
      }

      // store state for the next iteration
      if (nonDangerousStateToRemember.longitudinalSafe || nonDangerousStateToRemember.lateralSafe)
      {
        auto insertResult = newStatesBeforeBlameTime.insert(
          RssStateBeforeBlameTimeMap::value_type(currentState.situationId, nonDangerousStateToRemember));

        if (result)
        {
          result = insertResult.second;
        }
      }
    }

    if (result)
    {
      // Determine resulting response
      mStatesBeforeBlameTime.clear();
      mStatesBeforeBlameTime.swap(newStatesBeforeBlameTime);
    }
  }
  catch (...)
  {
    result = false;
  }

  return result;
}

} // namespace core
} // namespace rss
