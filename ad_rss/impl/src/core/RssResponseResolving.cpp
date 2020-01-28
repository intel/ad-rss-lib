// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssResponseResolving.hpp"
#include <algorithm>
#include "ad/rss/state/RssStateOperation.hpp"
#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

namespace ad {
namespace rss {
namespace core {

RssResponseResolving::RssResponseResolving()
{
}

bool RssResponseResolving::provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot,
                                                 state::ProperResponse &response)
{
  if (!withinValidInputRange(currentStateSnapshot))
  {
    spdlog::error("RssResponseResolving::provideProperResponse>> Invalid input");
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
        spdlog::info("RssResponseResolving::provideProperResponse>> State is dangerous: {}", currentState);
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
    spdlog::critical("RssResponseResolving::provideProperResponse>> Exception catched");
    result = false;
  }

  return result;
}

} // namespace core
} // namespace rss
} // namespace ad
