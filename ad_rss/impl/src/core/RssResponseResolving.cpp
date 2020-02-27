// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
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

world::LateralRssAccelerationValues
RssResponseResolving::combineRssDynamics(world::LateralRssAccelerationValues const &left,
                                         world::LateralRssAccelerationValues const &right)
{
  world::LateralRssAccelerationValues combinedAccelerationValues;
  combinedAccelerationValues.accelMax = std::min(left.accelMax, right.accelMax);
  combinedAccelerationValues.brakeMin = std::max(left.brakeMin, right.brakeMin);
  return combinedAccelerationValues;
}

world::LongitudinalRssAccelerationValues
RssResponseResolving::combineRssDynamics(world::LongitudinalRssAccelerationValues const &left,
                                         world::LongitudinalRssAccelerationValues const &right)
{
  world::LongitudinalRssAccelerationValues combinedAccelerationValues;
  combinedAccelerationValues.accelMax = std::min(left.accelMax, right.accelMax);
  combinedAccelerationValues.brakeMax = std::min(left.brakeMax, right.brakeMax);
  combinedAccelerationValues.brakeMinCorrect = std::max(left.brakeMinCorrect, right.brakeMinCorrect);
  combinedAccelerationValues.brakeMin = std::max(left.brakeMin, right.brakeMin);
  return combinedAccelerationValues;
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
    response.alphaLon.accelMax = physics::Acceleration::getMax();
    response.alphaLon.brakeMax = physics::Acceleration::getMax();
    response.alphaLon.brakeMin = physics::Acceleration::getMin();
    response.alphaLon.brakeMinCorrect = physics::Acceleration::getMin();
    response.lateralResponseLeft = state::LateralResponse::None;
    response.alphaLatLeft.accelMax = physics::Acceleration::getMax();
    response.alphaLatLeft.brakeMin = physics::Acceleration::getMin();
    response.lateralResponseRight = state::LateralResponse::None;
    response.alphaLatRight.accelMax = physics::Acceleration::getMax();
    response.alphaLatRight.brakeMin = physics::Acceleration::getMin();

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
            response.alphaLatLeft = combineRssDynamics(currentState.lateralStateLeft.alphaLat, response.alphaLatLeft);

            response.lateralResponseRight
              = combineResponse(currentState.lateralStateRight.response, response.lateralResponseRight);
            response.alphaLatRight
              = combineRssDynamics(currentState.lateralStateRight.alphaLat, response.alphaLatRight);
          }
          if (previousNonDangerousState->second.longitudinalSafe)
          {
            response.longitudinalResponse
              = combineResponse(currentState.longitudinalState.response, response.longitudinalResponse);
            response.alphaLon = combineRssDynamics(currentState.longitudinalState.alphaLon, response.alphaLon);
          }

          nonDangerousStateToRemember = previousNonDangerousState->second;
        }
        else
        {
          // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
          // dangerous at the same time
          response.longitudinalResponse
            = combineResponse(currentState.longitudinalState.response, response.longitudinalResponse);
          response.alphaLon = combineRssDynamics(currentState.longitudinalState.alphaLon, response.alphaLon);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          response.lateralResponseLeft
            = combineResponse(currentState.lateralStateLeft.response, response.lateralResponseLeft);
          response.alphaLatLeft = combineRssDynamics(currentState.lateralStateLeft.alphaLat, response.alphaLatLeft);

          response.lateralResponseRight
            = combineResponse(currentState.lateralStateRight.response, response.lateralResponseRight);
          response.alphaLatRight = combineRssDynamics(currentState.lateralStateRight.alphaLat, response.alphaLatRight);
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
      // If the values are not restricted, use the default dynamics
      if (response.longitudinalResponse == state::LongitudinalResponse::None)
      {
        response.alphaLon = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon;
      }
      if (response.lateralResponseLeft == state::LateralResponse::None)
      {
        response.alphaLatLeft = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat;
      }
      if (response.lateralResponseRight == state::LateralResponse::None)
      {
        response.alphaLatRight = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat;
      }

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
