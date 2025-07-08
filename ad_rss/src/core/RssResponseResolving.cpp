// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssResponseResolving.hpp"
#include <algorithm>
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/state/RssStateOperation.hpp"
#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace core {

bool RssResponseResolving::provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot,
                                                 state::ProperResponse &response)
{
  if (!withinValidInputRange(currentStateSnapshot))
  {
    core::getLogger()->error("RssResponseResolving::provideProperResponse>> Invalid input");
    return false;
  }

  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    response.time_index = currentStateSnapshot.time_index;
    response.is_safe = true;
    response.dangerous_objects.clear();
    response.longitudinal_response = state::LongitudinalResponse::None;
    response.lateral_response_left = state::LateralResponse::None;
    response.lateral_response_right = state::LateralResponse::None;
    response.unstructured_constellation_response = state::UnstructuredConstellationResponse::None;

    // absolute maxima are given by the default dynamics
    response.acceleration_restrictions.longitudinal_range.maximum
      = currentStateSnapshot.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max;
    response.acceleration_restrictions.lateral_left_range.maximum
      = currentStateSnapshot.default_ego_vehicle_rss_dynamics.alpha_lat.accel_max;
    response.acceleration_restrictions.lateral_right_range.maximum
      = currentStateSnapshot.default_ego_vehicle_rss_dynamics.alpha_lat.accel_max;

    // absolute minimum in longitudinal direction is given by brake_max
    response.acceleration_restrictions.longitudinal_range.minimum
      = currentStateSnapshot.default_ego_vehicle_rss_dynamics.alpha_lon.brake_max;

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
    // But: in this case we have to ensure that the orientation of the constellation
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
    response.acceleration_restrictions.lateral_left_range.minimum
      = std::numeric_limits<physics::Acceleration>::lowest();
    response.acceleration_restrictions.lateral_right_range.minimum
      = std::numeric_limits<physics::Acceleration>::lowest();
    response.heading_ranges.clear();
    physics::Acceleration driveAwayBrakeMin = currentStateSnapshot.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max;
    bool unstructuredDriveAwayToBrakeTransitionOccured = false;

    for (auto const &currentState : currentStateSnapshot.individual_responses)
    {
      if (isDangerous(currentState))
      {
        bool const isLaneBoundariesObject = (currentState.object_id == structured::getLeftBorderObjectId())
          || (currentState.object_id == structured::getRightBorderObjectId());
        response.is_safe = false;
        if (std::find(response.dangerous_objects.begin(), response.dangerous_objects.end(), currentState.object_id)
            == response.dangerous_objects.end())
        {
          response.dangerous_objects.push_back(currentState.object_id);
        }

        if (currentState.constellation_type == world::ConstellationType::Unstructured)
        {
          core::getLogger()->info("RssResponseResolving::provideProperResponse>> Unstructured state is dangerous: {}",
                                  currentState);
          combineState(currentState.unstructured_constellation_state,
                       driveAwayBrakeMin,
                       unstructuredDriveAwayToBrakeTransitionOccured,
                       response.unstructured_constellation_response,
                       response.heading_ranges,
                       response.acceleration_restrictions.longitudinal_range);
        }
        else // structured
        {
          core::getLogger()->info("RssResponseResolving::provideProperResponse>> Structured state is dangerous: {}",
                                  currentState);

          combineState(currentState.longitudinal_state,
                       response.longitudinal_response,
                       response.acceleration_restrictions.longitudinal_range);

          // we might need to check here if left or right is the dangerous side
          // but for the combineLateralResponse will only respect the more severe response
          // omitting the check should have the same result
          combineState(currentState.lateral_state_left,
                       response.lateral_response_left,
                       response.acceleration_restrictions.lateral_left_range,
                       isLaneBoundariesObject);

          combineState(currentState.lateral_state_right,
                       response.lateral_response_right,
                       response.acceleration_restrictions.lateral_right_range,
                       isLaneBoundariesObject);
        }
      }
    }

    if (unstructuredDriveAwayToBrakeTransitionOccured
        && (response.unstructured_constellation_response == state::UnstructuredConstellationResponse::DriveAway))
    {
      response.unstructured_constellation_response = state::UnstructuredConstellationResponse::Brake;
      // brake should already be applied because at least one of the steering angles should have not been within the
      // respective range to be on the safe side
      response.acceleration_restrictions.longitudinal_range.maximum
        = std::min(response.acceleration_restrictions.longitudinal_range.maximum, driveAwayBrakeMin);
    }
  }
  catch (std::exception &e)
  {
    core::getLogger()->critical(
      "RssResponseResolving::provideProperResponse>> Exception caught'{}' {}", e.what(), currentStateSnapshot);
    result = false;
  }
  catch (...)
  {
    core::getLogger()->critical("RssResponseResolving::provideProperResponse>> Exception caught {}",
                                currentStateSnapshot);
    result = false;
  }

  return result;
}

} // namespace core
} // namespace rss
} // namespace ad
