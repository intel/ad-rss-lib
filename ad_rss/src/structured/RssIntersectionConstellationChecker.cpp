// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/structured/RssIntersectionConstellationChecker.hpp"
#include <cmath>
#include <limits>
#include "ad/rss/core/Physics.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {

using physics::Duration;

namespace rss {
namespace structured {

bool RssIntersectionConstellationChecker::checkLateralIntersect(core::RelativeConstellation const &constellation,
                                                                bool &is_safe)
{
  is_safe = false;

  /**
   * Check if in any case the first vehicle has passed the intersection before the other
   * vehicle arrives at that point
   */

  Duration timeToReachEgo;
  Duration timeToReachOther;
  Duration timeToLeaveEgo;
  Duration timeToLeaveOther;

  bool result
    = core::calculateTimeToCoverDistance(constellation.ego_state.structured_object_state.velocity.speed_lon_max,
                                         constellation.ego_state.dynamics.max_speed_on_acceleration,
                                         constellation.ego_state.dynamics.response_time,
                                         constellation.ego_state.dynamics.alpha_lon.accel_max,
                                         constellation.ego_state.dynamics.alpha_lon.brake_min,
                                         constellation.ego_state.structured_object_state.distance_to_enter_intersection,
                                         timeToReachEgo);

  result = result
    && core::calculateTimeToCoverDistance(
             constellation.other_state.structured_object_state.velocity.speed_lon_max,
             constellation.ego_state.dynamics.max_speed_on_acceleration,
             constellation.other_state.dynamics.response_time,
             constellation.other_state.dynamics.alpha_lon.accel_max,
             constellation.other_state.dynamics.alpha_lon.brake_min,
             constellation.other_state.structured_object_state.distance_to_enter_intersection,
             timeToReachOther);

  result = result
    && core::calculateTimeToCoverDistance(
             constellation.ego_state.structured_object_state.velocity.speed_lon_min,
             constellation.ego_state.dynamics.max_speed_on_acceleration,
             constellation.ego_state.dynamics.response_time,
             constellation.ego_state.dynamics.alpha_lon.brake_max,
             constellation.ego_state.dynamics.alpha_lon.brake_max,
             constellation.ego_state.structured_object_state.distance_to_leave_intersection,
             timeToLeaveEgo);

  result = result
    && core::calculateTimeToCoverDistance(
             constellation.other_state.structured_object_state.velocity.speed_lon_min,
             constellation.ego_state.dynamics.max_speed_on_acceleration,
             constellation.other_state.dynamics.response_time,
             constellation.other_state.dynamics.alpha_lon.brake_max,
             constellation.other_state.dynamics.alpha_lon.brake_max,
             constellation.other_state.structured_object_state.distance_to_leave_intersection,
             timeToLeaveOther);

  if (result)
  {
    if ((timeToReachEgo > timeToLeaveOther) || (timeToReachOther > timeToLeaveEgo)
        || ((timeToReachEgo == std::numeric_limits<Duration>::max())
            && (timeToReachOther == std::numeric_limits<Duration>::max())))
    {
      /**
       * Currently we assume lateral overlap when there is a vehicle in an intersection
       * @todo This could be relaxed by calculating lateral distance here as well
       */
      is_safe = true;
    }
  }

  return result;
}

bool RssIntersectionConstellationChecker::checkIntersectionSafe(core::RelativeConstellation const &constellation,
                                                                state::RssStateInformation &rss_state_information,
                                                                bool &is_safe,
                                                                IntersectionState &intersectionState)
{
  if ((constellation.ego_state.structured_object_state.distance_to_leave_intersection
       < constellation.ego_state.structured_object_state.distance_to_enter_intersection)
      || (constellation.other_state.structured_object_state.distance_to_leave_intersection
          < constellation.other_state.structured_object_state.distance_to_enter_intersection))
  {
    return false;
  }

  bool result = true;
  is_safe = false;

  /**
   * Check if a non prio vehicle has safe distance to the intersection
   */
  if (!constellation.ego_state.structured_object_state.has_priority)
  {
    rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
    rss_state_information.current_distance
      = constellation.ego_state.structured_object_state.distance_to_enter_intersection;
    result = checkStopInFrontIntersection(constellation.ego_state, rss_state_information.safe_distance, is_safe);
  }
  if (result && !is_safe && !constellation.other_state.structured_object_state.has_priority)
  {
    rss_state_information.evaluator = state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
    rss_state_information.current_distance
      = constellation.other_state.structured_object_state.distance_to_enter_intersection;
    result = checkStopInFrontIntersection(constellation.other_state, rss_state_information.safe_distance, is_safe);
  }

  if (is_safe)
  {
    intersectionState = IntersectionState::NonPrioAbleToBreak;
  }
  else if (result)
  {
    rss_state_information.current_distance = constellation.relative_position.longitudinal_distance;
    /**
     * Check if there is a safe longitudinal distance between the vehicles
     */
    if (constellation.relative_position.longitudinal_position == core::LongitudinalRelativePosition::InFront)
    {
      rss_state_information.evaluator = state::RssStateEvaluator::IntersectionEgoInFront;
      result = checkSafeLongitudinalDistanceSameDirection(constellation.ego_state,
                                                          constellation.other_state,
                                                          constellation.relative_position.longitudinal_distance,
                                                          rss_state_information.safe_distance,
                                                          is_safe);
    }
    else
    {
      rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOtherInFront;
      result = checkSafeLongitudinalDistanceSameDirection(constellation.other_state,
                                                          constellation.ego_state,
                                                          constellation.relative_position.longitudinal_distance,
                                                          rss_state_information.safe_distance,
                                                          is_safe);
    }
    if (is_safe)
    {
      intersectionState = IntersectionState::SafeLongitudinalDistance;
    }
    else if (result)
    {
      rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOverlap;
      rss_state_information.current_distance = physics::Distance(0.);
      rss_state_information.safe_distance = physics::Distance(0.);
      result = checkLateralIntersect(constellation, is_safe);

      if (is_safe)
      {
        intersectionState = IntersectionState::NoTimeOverlap;
      }
    }
  }

  return result;
}

bool RssIntersectionConstellationChecker::calculateRssStateIntersection(
  world::TimeIndex const &time_index, core::RelativeConstellation const &constellation, state::RssState &rssState)
{
  if (constellation.ego_state.structured_object_state.has_priority
      && constellation.other_state.structured_object_state.has_priority)
  {
    // both cannot have priority over the other at the same time
    return false;
  }
  bool result = false;
  try
  {
    if (time_index != mCurrentTimeIndex)
    {
      /**
       * next time step: current safe state map becomes last state now
       */
      mLastSafeStateMap.swap(mNewSafeStateMap);
      mNewSafeStateMap.clear();
      mCurrentTimeIndex = time_index;
    }

    rssState.constellation_id = constellation.constellation_id;
    rssState.constellation_type = constellation.constellation_type;
    rssState.ego_id = constellation.ego_id;
    rssState.object_id = constellation.object_id;

    rssState.longitudinal_state.is_safe = false;
    rssState.longitudinal_state.response = state::LongitudinalResponse::BrakeMin;
    rssState.longitudinal_state.alpha_lon = constellation.ego_state.dynamics.alpha_lon;

    /**
     * An intersection constellation is lateral unsafe but usually doesn't require a lateral brake
     * @todo: if taking lateral intersection handling into account, this also has to be updated
     */
    rssState.lateral_state_left.is_safe = false;
    rssState.lateral_state_left.response = state::LateralResponse::None;
    rssState.lateral_state_left.alpha_lat = constellation.ego_state.dynamics.alpha_lat;
    rssState.lateral_state_left.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssState.lateral_state_left.rss_state_information.current_distance = physics::Distance(0);
    rssState.lateral_state_left.rss_state_information.safe_distance = physics::Distance(0);
    rssState.lateral_state_right.is_safe = false;
    rssState.lateral_state_right.response = state::LateralResponse::None;
    rssState.lateral_state_right.alpha_lat = constellation.ego_state.dynamics.alpha_lat;
    rssState.lateral_state_right.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
    rssState.lateral_state_right.rss_state_information.current_distance = physics::Distance(0);
    rssState.lateral_state_right.rss_state_information.safe_distance = physics::Distance(0);

    bool is_safe = false;
    IntersectionState intersectionState = IntersectionState::NonPrioAbleToBreak;

    /**
     * Check if the intersection is safe and determine the intersection state of the constellation
     */
    result = checkIntersectionSafe(
      constellation, rssState.longitudinal_state.rss_state_information, is_safe, intersectionState);

    if (result)
    {
      rssState.longitudinal_state.is_safe = is_safe;

      auto const previousIntersectionState = mLastSafeStateMap.find(constellation.constellation_id);

      if (!is_safe)
      {
        /**
         * Constellation is unsafe determine proper response
         */
        if (previousIntersectionState != mLastSafeStateMap.end())
        {
          switch (previousIntersectionState->second)
          {
            case IntersectionState::NonPrioAbleToBreak:
            {
              if (constellation.ego_state.structured_object_state.has_priority)
              {
                rssState.longitudinal_state.response = state::LongitudinalResponse::None;
              }
              break;
            }
            case IntersectionState::SafeLongitudinalDistance:
            {
              if (constellation.relative_position.longitudinal_position == core::LongitudinalRelativePosition::InFront)
              {
                rssState.longitudinal_state.response = state::LongitudinalResponse::None;
              }
              break;
            }
            case IntersectionState::NoTimeOverlap:
            {
              // @todo If we don't assume always lateral overlap we might need to brake laterally as well
              rssState.longitudinal_state.response = state::LongitudinalResponse::BrakeMin;
              break;
            }
            default:
            {
              // LCOV_EXCL_START: unreachable code, keep to be on the safe side
              result = false;
              break;
              // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
            }
          }

          /**
           * Store the last safe intersection state for next time step
           */
          mNewSafeStateMap.insert(
            RssIntersectionStateMap::value_type(constellation.constellation_id, previousIntersectionState->second));
        }
        else
        {
          /**
           * Constellation is unsafe but there is no previous safe state. Therefore we can only decide to brake.
           */
          rssState.longitudinal_state.response = state::LongitudinalResponse::BrakeMin;
        }
      }
      else
      {
        /**
         * Constellation is safe
         */
        rssState.longitudinal_state.response = state::LongitudinalResponse::None;

        // store the new safe state
        mNewSafeStateMap.insert(RssIntersectionStateMap::value_type(constellation.constellation_id, intersectionState));
      }
    }
  }
  catch (...)
  {
    result = false;
  }
  return result;
}

} // namespace structured
} // namespace rss
} // namespace ad
