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

bool RssResponseResolving::provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot,
                                                 state::ProperResponse &response,
                                                 world::AccelerationRestriction &accelerationRestriction)
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

    accelerationRestriction.timeIndex = response.timeIndex;

    // absolute maxima are given by the default dynamics
    accelerationRestriction.longitudinalRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.accelMax;
    accelerationRestriction.lateralLeftRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat.accelMax;
    accelerationRestriction.lateralRightRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat.accelMax;

    // absolute minimum in longitudinal direction is given by brakeMax
    accelerationRestriction.longitudinalRange.minimum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMax;

    // in lateral dimension, this is handled differently
    // because of the explicit split into left and right direction
    //
    // lowest() value used for minimum because, if the vehicle is driving to the left
    // it can decelerate the movement to the left in an unbounded manner.
    // At the point the vehicle direction is turning, the right restrictions are becoming valid.
    //
    // @todo: we should try to come to a closed description in here, so that
    // we only have ONE lateral acceleration range combining the whole result
    // This will make it easier outside
    // But: in this case we have to ensure that the orientation of the situation
    // is respected accordingly, as especially within intersections this might differ!
    // Furthermore, we might need to have some knowledge on the expected cycle time,
    // to be able to restrict counter-steering at the right point in time BEFORE the turn over
    // the minimum therefore, would then change dynamically while counter steering...
    //
    // Currently the final transformation back has to be performed outside which requires
    // deeper understanding there; so the above is more or less up to the system integrator
    // to calculate while transforming back from vehicle coordinates to control data
    // => Would make it much easier to integrate in the outside if we can solve this internally in
    // a robust and correct manner
    accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
    accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();

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
            combineState(
              currentState.lateralStateLeft, response.lateralResponseLeft, accelerationRestriction.lateralLeftRange);

            combineState(
              currentState.lateralStateRight, response.lateralResponseRight, accelerationRestriction.lateralRightRange);
          }
          if (previousNonDangerousState->second.longitudinalSafe)
          {
            combineState(
              currentState.longitudinalState, response.longitudinalResponse, accelerationRestriction.longitudinalRange);
          }

          nonDangerousStateToRemember = previousNonDangerousState->second;
        }
        else
        {
          // There is a lateral and a longitudinal conflict so both longitudinal and lateral distances became
          // dangerous at the same time
          combineState(
            currentState.longitudinalState, response.longitudinalResponse, accelerationRestriction.longitudinalRange);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          combineState(
            currentState.lateralStateLeft, response.lateralResponseLeft, accelerationRestriction.lateralLeftRange);

          combineState(
            currentState.lateralStateRight, response.lateralResponseRight, accelerationRestriction.lateralRightRange);
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

/**
 * @brief determine the resulting RSS response
 *
 * @param[in] previousResponse the previous RSS response
 * @param[in] newResponse      the RSS response to be considered in addition
 *
 * The RSS responses are combined in a form that the most severe response of both becomes the resulting response.
 * The responses are compared with each other based on the enumeration values.
 * Therefore, these values need have to be ordered strictly ascending in respect to their severity.
 *
 * @returns the resulting RSS response
 */
template <typename Response> Response combineResponse(Response const &previousResponse, Response const &newResponse)
{
  if (previousResponse > newResponse)
  {
    return previousResponse;
  }
  return newResponse;
}

void RssResponseResolving::combineState(::ad::rss::state::LongitudinalRssState const &state,
                                        ::ad::rss::state::LongitudinalResponse &response,
                                        ::ad::physics::AccelerationRange &accelerationRange)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::max(accelerationRange.minimum, state.alphaLon.brakeMax);
  switch (state.response)
  {
    case ::ad::rss::state::LongitudinalResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLon.brakeMin);
      break;
    case ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLon.brakeMinCorrect);
      break;
    case ::ad::rss::state::LongitudinalResponse::None:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLon.accelMax);
      break;
    default:
      spdlog::error("RssResponseTransformation::updateAccelerationRestriction>> Invalid longitudinal response {}",
                    state.response);
      // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP
}

void RssResponseResolving::combineState(::ad::rss::state::LateralRssState const &state,
                                        ::ad::rss::state::LateralResponse &response,
                                        ::ad::physics::AccelerationRange &accelerationRange)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
  switch (state.response)
  {
    case ::ad::rss::state::LateralResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLat.brakeMin);
      break;
    case ::ad::rss::state::LateralResponse::None:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLat.accelMax);
      break;
    default:
      spdlog::error("RssResponseTransformation::updateAccelerationRestriction>> Invalid lateral response {}",
                    state.response);
      // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP
}

} // namespace core
} // namespace rss
} // namespace ad
