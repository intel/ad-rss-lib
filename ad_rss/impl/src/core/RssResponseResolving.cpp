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
#include "ad/rss/unstructured/Geometry.hpp"
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

    // absolute maxima are given by the default dynamics
    response.accelerationRestrictions.longitudinalRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.accelMax;
    response.accelerationRestrictions.lateralLeftRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat.accelMax;
    response.accelerationRestrictions.lateralRightRange.maximum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLat.accelMax;

    // absolute minimum in longitudinal direction is given by brakeMax
    response.accelerationRestrictions.longitudinalRange.minimum
      = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMax;

    // in lateral dimension, this is handled differently
    // because of the explicit split into left and right direction
    //
    // lowest() value used for minimum because, if the vehicle is driving to the left
    // it can decelerate the movement to the left in an unbounded manner.
    // At the point the vehicle direction is turning, the right restrictions are becoming valid.
    //
    // @todo: ideally we should try to come to a closed description in here, so that
    // we only have ONE lateral acceleration range combining the whole result
    // This will make it easier outside
    // But: in this case we have to ensure that the orientation of the situation
    // is respected accordingly, as especially within intersections this might differ depending on the driven route!
    // Furthermore, we might need to have some knowledge on the expected cycle time,
    // to be able to restrict counter-steering at the right point in time BEFORE the turn over
    // the minimum therefore, would then change dynamically while counter steering...
    //
    // Currently the final transformation back has to be performed outside which requires
    // deeper understanding there; so the above is more or less up to the system integrator
    // to calculate while transforming back from vehicle coordinates to control data
    //
    // => Would make it much easier to integrate in the outside if we can solve this internally in
    // a robust and correct manner
    response.accelerationRestrictions.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
    response.accelerationRestrictions.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();

    auto finalUnstructuredResponse = state::UnstructuredSceneResponse::ContinueForward;
    state::HeadingRange initialHeadingRange;
    initialHeadingRange.begin = ad::physics::Angle(0.0);
    initialHeadingRange.end = ad::physics::c2PI;
    response.headingRanges.push_back(initialHeadingRange);
    std::vector<state::HeadingRange> finalHeadingRanges;
    finalHeadingRanges.push_back(initialHeadingRange);

    bool unstructuredSceneFound = false;
    bool structuredSceneFound = false;
    for (auto const &currentState : currentStateSnapshot.individualResponses)
    {
      if (isDangerous(currentState))
      {
        if (currentState.situationType == situation::SituationType::Unstructured)
        {
          unstructuredSceneFound = true;
          spdlog::info("RssResponseResolving::provideProperResponse>> Unstructured state is dangerous: {}",
                       currentState);
          response.dangerousObjects.push_back(currentState.objectId);
          if ((finalUnstructuredResponse == state::UnstructuredSceneResponse::Brake)
              || (currentState.unstructuredSceneState.response == state::UnstructuredSceneResponse::Brake))
          {
            finalUnstructuredResponse = state::UnstructuredSceneResponse::Brake;
          }
          else if (currentState.unstructuredSceneState.response == state::UnstructuredSceneResponse::DriveAway)
          {
            auto overlapAvailable
              = unstructured::getHeadingOverlap(currentState.unstructuredSceneState.headingRange, finalHeadingRanges);
            if (overlapAvailable)
            {
              finalUnstructuredResponse = state::UnstructuredSceneResponse::DriveAway;
            }
            else
            {
              finalUnstructuredResponse = state::UnstructuredSceneResponse::Brake;
            }
          }
        }
        else // structured
        {
          structuredSceneFound = true;
          spdlog::info("RssResponseResolving::provideProperResponse>> Structured state is dangerous: {}", currentState);
          response.isSafe = false;
          if (std::find(response.dangerousObjects.begin(), response.dangerousObjects.end(), currentState.objectId)
              == response.dangerousObjects.end())
          {
            response.dangerousObjects.push_back(currentState.objectId);
          }

          combineState(currentState.longitudinalState,
                       response.longitudinalResponse,
                       response.accelerationRestrictions.longitudinalRange);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          combineState(currentState.lateralStateLeft,
                       response.lateralResponseLeft,
                       response.accelerationRestrictions.lateralLeftRange);

          combineState(currentState.lateralStateRight,
                       response.lateralResponseRight,
                       response.accelerationRestrictions.lateralRightRange);
        }
      }
      if (structuredSceneFound && unstructuredSceneFound)
      {
        spdlog::critical("RssResponseResolving::provideProperResponse>> Combination of structured and unstructured "
                         "scene not supported yet!");
        result = false;
      }
    }

    if (unstructuredSceneFound)
    {
      if (finalUnstructuredResponse == state::UnstructuredSceneResponse::Brake)
      {
        response.isSafe = false;
        response.longitudinalResponse = state::LongitudinalResponse::BrakeMin;
        response.accelerationRestrictions.longitudinalRange.minimum
          = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMax;
        response.accelerationRestrictions.longitudinalRange.maximum
          = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMin;
      }
      else if (finalUnstructuredResponse == state::UnstructuredSceneResponse::DriveAway)
      {
        response.isSafe = false;
        response.longitudinalResponse = state::LongitudinalResponse::BrakeMin;
        response.headingRanges = finalHeadingRanges;
        response.accelerationRestrictions.longitudinalRange.minimum
          = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMax;
        response.accelerationRestrictions.longitudinalRange.maximum
          = currentStateSnapshot.defaultEgoVehicleRssDynamics.alphaLon.brakeMin;
      }
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

void RssResponseResolving::combineState(state::LongitudinalRssState const &state,
                                        state::LongitudinalResponse &response,
                                        ::ad::physics::AccelerationRange &accelerationRange)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::max(accelerationRange.minimum, state.alphaLon.brakeMax);
  switch (state.response)
  {
    case state::LongitudinalResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLon.brakeMin);
      break;
    case state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLon.brakeMinCorrect);
      break;
    case state::LongitudinalResponse::None:
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

void RssResponseResolving::combineState(state::LateralRssState const &state,
                                        state::LateralResponse &response,
                                        ::ad::physics::AccelerationRange &accelerationRange)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
  switch (state.response)
  {
    case state::LateralResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alphaLat.brakeMin);
      break;
    case state::LateralResponse::None:
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
