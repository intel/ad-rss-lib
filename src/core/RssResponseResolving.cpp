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
#include "ad_rss/state/RssStateOperation.hpp"
#include "ad_rss/state/RssStateSnapshotValidInputRange.hpp"

namespace ad_rss {
namespace core {

RssResponseResolving::RssResponseResolving()
{
}

bool RssResponseResolving::provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot,
                                                 state::ProperResponse &response)
{
  if (!withinValidInputRange(currentStateSnapshot))
  {
    return false;
  }

  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    response.timeIndex = currentStateSnapshot.timeIndex;
    response.isSafe = true;
    response.dangerousObjects.clear();
    response.longitudinalResponse = state::LongitudinalResponse::None;
    response.lateralResponseLeft = state::LateralResponse::None;
    response.lateralResponseRight = state::LateralResponse::None;

    RssSafeStateBeforeDangerThresholdTimeMap newStatesBeforeDangerThresholdTime;
    for (auto const &currentState : currentStateSnapshot.individualResponses)
    {
      // The response belonging to the last state before the danger threshold time
      RssSafeState nonDangerousStateToRemember;
      if (isDangerous(currentState))
      {
        response.isSafe = false;
        if (std::find(response.dangerousObjects.begin(), response.dangerousObjects.end(), currentState.objectId)
            == response.dangerousObjects.end())
        {
          response.dangerousObjects.push_back(currentState.objectId);
        }
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
            response.lateralResponseLeft
              = combineResponse(currentState.lateralStateLeft.response, response.lateralResponseLeft);

            response.lateralResponseRight
              = combineResponse(currentState.lateralStateRight.response, response.lateralResponseRight);
          }
          if (previousNonDangerousState->second.longitudinalSafe)
          {
            response.longitudinalResponse
              = combineResponse(currentState.longitudinalState.response, response.longitudinalResponse);
          }

          nonDangerousStateToRemember = previousNonDangerousState->second;
        }
        else
        {
          // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
          // dangerous at the same time
          response.longitudinalResponse
            = combineResponse(currentState.longitudinalState.response, response.longitudinalResponse);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          response.lateralResponseLeft
            = combineResponse(currentState.lateralStateLeft.response, response.lateralResponseLeft);

          response.lateralResponseRight
            = combineResponse(currentState.lateralStateRight.response, response.lateralResponseRight);
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
          RssSafeStateBeforeDangerThresholdTimeMap::value_type(currentState.situationId, nonDangerousStateToRemember));

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
