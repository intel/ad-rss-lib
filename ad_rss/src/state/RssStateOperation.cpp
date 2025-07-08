// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/state/RssStateOperation.hpp"

#include <ad/geometry/GeometryOperation.hpp>
#include <ad/physics/RangeOperation.hpp>

#include "ad/rss/core/Logging.hpp"

namespace ad {
namespace rss {
namespace state {

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

void combineState(state::UnstructuredConstellationRssState const &state,
                  physics::Acceleration &driveAwayBrakeMin,
                  bool &driveAwayToBrakeTransition,
                  state::UnstructuredConstellationResponse &response,
                  ::ad::geometry::HeadingRangeVector &responseHeadingRanges,
                  physics::AccelerationRange &accelerationRange)
{
  if ((response != state::UnstructuredConstellationResponse::Brake)
      && (state.response == state::UnstructuredConstellationResponse::DriveAway))
  {
    driveAwayBrakeMin = std::min(driveAwayBrakeMin, state.alpha_lon.brake_min);
    if (!driveAwayToBrakeTransition)
    {
      auto const overlapAvailable = ::ad::geometry::getHeadingOverlap(state.heading_range, responseHeadingRanges);
      if (!overlapAvailable)
      {
        driveAwayToBrakeTransition = true;
      }
    }
  }

  if (state.response > response)
  {
    response = state.response;
  }

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::max(accelerationRange.minimum, state.alpha_lon.brake_max);
  if (state.response == state::UnstructuredConstellationResponse::Brake)
  {
    responseHeadingRanges.clear();
    accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.brake_min);
  }
  else if (state.response == state::UnstructuredConstellationResponse::DriveAway)
  {
    bool is_inside_heading_range = ::ad::geometry::isInsideHeadingRange(
      state.rss_state_information.considered_drive_away_steering_angle, state.heading_range);
    if (is_inside_heading_range)
    {
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.accel_max);
    }
    else
    {
      // brake as long as the steering angle is not within the heading range
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.brake_min);
    }
  }
  else
  {
    accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.accel_max);
  }
  // LCOV_EXCL_BR_STOP
}

void combineState(state::LongitudinalRssState const &state,
                  state::LongitudinalResponse &response,
                  physics::AccelerationRange &accelerationRange)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::max(accelerationRange.minimum, state.alpha_lon.brake_max);
  switch (state.response)
  {
    case state::LongitudinalResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.brake_min);
      break;
    case state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.brake_min_correct);
      break;
    case state::LongitudinalResponse::None:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lon.accel_max);
      break;
    default:
      core::getLogger()->error(
        "RssResponseTransformation::updateAccelerationRestriction>> Invalid longitudinal response {}", state.response);
      // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP
}

void combineState(state::LateralRssState const &state,
                  state::LateralResponse &response,
                  physics::AccelerationRange &accelerationRange,
                  bool const isLaneBoundariesObject)
{
  response = combineResponse(state.response, response);

  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
  switch (state.response)
  {
    case state::LateralResponse::BrakeMin:
      accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lat.brake_min);
      break;
    case state::LateralResponse::None:
      if (!isLaneBoundariesObject)
      {
        // lane boundaries are soft borders into one single direction, so don't limit the nominal driving
        accelerationRange.maximum = std::min(accelerationRange.maximum, state.alpha_lat.accel_max);
      }
      break;
    default:
      core::getLogger()->error("RssResponseTransformation::updateAccelerationRestriction>> Invalid lateral response {}",
                               state.response);
      // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP
}

state::ProperResponse combineProperResponse(state::ProperResponse const &left, state::ProperResponse const &right)
{
  state::ProperResponse combinedProperResponse;
  combinedProperResponse.time_index = std::max(left.time_index, right.time_index);
  combinedProperResponse.is_safe = left.is_safe && right.is_safe;
  combinedProperResponse.dangerous_objects.reserve(left.dangerous_objects.size() + right.dangerous_objects.size());
  combinedProperResponse.dangerous_objects.insert(
    combinedProperResponse.dangerous_objects.end(), left.dangerous_objects.begin(), left.dangerous_objects.end());
  combinedProperResponse.dangerous_objects.insert(
    combinedProperResponse.dangerous_objects.end(), right.dangerous_objects.begin(), right.dangerous_objects.end());
  combinedProperResponse.longitudinal_response
    = combineResponse(left.longitudinal_response, right.longitudinal_response);
  combinedProperResponse.lateral_response_right
    = combineResponse(left.lateral_response_right, right.lateral_response_right);
  combinedProperResponse.lateral_response_left
    = combineResponse(left.lateral_response_left, right.lateral_response_left);
  combinedProperResponse.unstructured_constellation_response
    = combineResponse(left.unstructured_constellation_response, right.unstructured_constellation_response);
  combinedProperResponse.acceleration_restrictions.lateral_left_range = ad::physics::getIntersectionRange(
    left.acceleration_restrictions.lateral_left_range, right.acceleration_restrictions.lateral_left_range);
  combinedProperResponse.acceleration_restrictions.lateral_right_range = ad::physics::getIntersectionRange(
    left.acceleration_restrictions.lateral_right_range, right.acceleration_restrictions.lateral_right_range);
  combinedProperResponse.acceleration_restrictions.longitudinal_range = ad::physics::getIntersectionRange(
    left.acceleration_restrictions.longitudinal_range, right.acceleration_restrictions.longitudinal_range);
  return combinedProperResponse;
}

} // namespace state
} // namespace rss
} // namespace ad
