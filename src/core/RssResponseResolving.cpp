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

#include "ad_rss/core/RssResponseResolving.hpp"
#include <algorithm>
#include "ad_rss/state/ResponseStateVectorValidInputRange.hpp"
#include "core/RSSState.hpp"

namespace ad_rss {
namespace core {

RssResponseResolving::RssResponseResolving()
{
}

bool RssResponseResolving::provideProperResponse(state::ResponseStateVector const &currentStates,
                                                 state::ResponseState &responseState)
{
  if (!withinValidInputRange(currentStates))
  {
    return false;
  }

  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    responseState.timeIndex = physics::TimeIndex(0u);
    responseState.lateralStateLeft.response = state::LateralResponse::None;
    responseState.lateralStateLeft.isSafe = true;
    responseState.lateralStateRight.response = state::LateralResponse::None;
    responseState.lateralStateRight.isSafe = true;
    responseState.longitudinalState.response = state::LongitudinalResponse::None;
    responseState.longitudinalState.isSafe = true;

    RssStateBeforeDangerThresholdTimeMap newStatesBeforeDangerThresholdTime;

    for (auto const &currentState : currentStates)
    {
      if (responseState.timeIndex == physics::TimeIndex(0u))
      {
        responseState.timeIndex = currentState.timeIndex;
      }
      else if (responseState.timeIndex != currentState.timeIndex)
      {
        result = false;
        break;
      }

      // The response belonging to the last state before the danger threshold time
      RssState nonDangerousStateToRemember;
      if (isDangerous(currentState))
      {
        auto const previousNonDangerousState = mStatesBeforeDangerThresholdTime.find(currentState.situationId);
        if (previousNonDangerousState != mStatesBeforeDangerThresholdTime.end())
        {
          if (previousNonDangerousState->second.lateralSafe)
          {
            // we might need to check here if left or right is the dangerous side
            // but for the combineLateralResponse will only respect the more severe response
            // omitting the check should have the same result
            //
            // @todo: Handling of a cut-in by a leading vehicle as stated in definitions 11-13 of the RSS paper v6
            //        will be handled outside of this function. As a consequence.
            //        There is currently no response for a cut-in of a leading vehicle
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
        auto const insertResult = newStatesBeforeDangerThresholdTime.insert(
          RssStateBeforeDangerThresholdTimeMap::value_type(currentState.situationId, nonDangerousStateToRemember));

        if (result)
        {
          result = insertResult.second;
        }
      }
    }

    if (result)
    {
      // Determine resulting response
      mStatesBeforeDangerThresholdTime.clear();
      mStatesBeforeDangerThresholdTime.swap(newStatesBeforeDangerThresholdTime);
    }
  }
  catch (...)
  {
    result = false;
  }

  return result;
}

} // namespace core
} // namespace ad_rss
