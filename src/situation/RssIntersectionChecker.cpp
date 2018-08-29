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

#include "RssIntersectionChecker.hpp"

#include <cmath>
#include "Math.hpp"
#include "RSSFormulas.hpp"
#include "RSSSituation.hpp"

namespace rss {
namespace situation {

RssIntersectionChecker::RssIntersectionChecker()
{
}

RssIntersectionChecker::~RssIntersectionChecker()
{
  mLastSafeStateMap.clear();
  mCurrentSafeStateMap.clear();
}

bool checkLateralIntersect(Situation const &situation, bool &isSafe)
{
  isSafe = false;
  bool result = true;

  /**
   * Check if in any case the first vehicle has passed the intersection (point?) before the other
   * vehicle arrives at that point
   */

  time::Duration timeToReachEgo;
  time::Duration timeToReachOther;
  time::Duration timeToLeaveEgo;
  time::Duration timeToLeaveOther;

  result &= calculateTimeToCoverDistance(situation.egoVehicleState.velocity.speedLon,
                                         situation.egoVehicleState.responseTime,
                                         situation.egoVehicleState.dynamics.alphaLon.accelMax,
                                         situation.egoVehicleState.dynamics.alphaLon.brakeMin,
                                         situation.egoVehicleState.distanceToEnterIntersection,
                                         timeToReachEgo);

  result &= calculateTimeToCoverDistance(situation.otherVehicleState.velocity.speedLon,
                                         situation.otherVehicleState.responseTime,
                                         situation.otherVehicleState.dynamics.alphaLon.accelMax,
                                         situation.otherVehicleState.dynamics.alphaLon.brakeMin,
                                         situation.otherVehicleState.distanceToEnterIntersection,
                                         timeToReachOther);

  result &= calculateTimeToCoverDistance(situation.egoVehicleState.velocity.speedLon,
                                         situation.egoVehicleState.responseTime,
                                         -1. * situation.egoVehicleState.dynamics.alphaLon.brakeMax,
                                         situation.egoVehicleState.dynamics.alphaLon.brakeMax,
                                         situation.egoVehicleState.distanceToLeaveIntersection,
                                         timeToLeaveEgo);

  result &= calculateTimeToCoverDistance(situation.otherVehicleState.velocity.speedLon,
                                         situation.otherVehicleState.responseTime,
                                         -1. * situation.otherVehicleState.dynamics.alphaLon.brakeMax,
                                         situation.otherVehicleState.dynamics.alphaLon.brakeMax,
                                         situation.otherVehicleState.distanceToLeaveIntersection,
                                         timeToLeaveOther);

  if (timeToReachEgo > timeToLeaveOther || timeToReachOther > timeToLeaveEgo
      || (std::isinf(timeToReachEgo) && std::isinf(timeToReachOther)))
  {
    /**
     * Currently we assume lateral overlap when there is a vehicle in an intersection
     * @todo This could be relaxed by calculating lateral distance here as well
     */
    isSafe = true;
  }

  return result;
}

bool checkIntersectionSafe(Situation const &situation, bool &isSafe, IntersectionState &intersectionState) noexcept
{
  if ((situation.egoVehicleState.distanceToLeaveIntersection < situation.egoVehicleState.distanceToEnterIntersection)
      || (situation.otherVehicleState.distanceToLeaveIntersection
          < situation.otherVehicleState.distanceToEnterIntersection))
  {
    return false;
  }

  bool result = false;

  /**
   * Check if the non prio vehicle has safe distance to the intersection
   */
  if (!situation.egoVehicleState.hasPriority)
  {
    result = checkStopInFrontIntersection(situation.egoVehicleState, isSafe);
  }
  else
  {
    result = checkStopInFrontIntersection(situation.otherVehicleState, isSafe);
  }

  if (isSafe)
  {
    intersectionState = IntersectionState::NonPrioAbleToBreak;
  }
  else if (result)
  {
    /**
     * Check if there is a safe longitudinal distance between the vehicles
     */
    if (situation.relativePosition.longitudinalPosition == LongitudinalRelativePosition::InFront)
    {
      result = checkSafeLongitudinalDistanceSameDirection(situation.egoVehicleState,
                                                          situation.otherVehicleState,
                                                          situation.relativePosition.longitudinalDistance,
                                                          isSafe);
    }
    else
    {
      result = checkSafeLongitudinalDistanceSameDirection(situation.otherVehicleState,
                                                          situation.egoVehicleState,
                                                          situation.relativePosition.longitudinalDistance,
                                                          isSafe);
    }
    if (isSafe)
    {
      intersectionState = IntersectionState::SafeLongitudinalDistance;
    }
    else if (result)
    {
      result = checkLateralIntersect(situation, isSafe);

      if (isSafe)
      {
        intersectionState = IntersectionState::NoTimeOverlap;
      }
    }
  }

  return result;
}

bool RssIntersectionChecker::calculateRssStateIntersection(Situation const &situation,
                                                           state::ResponseState &rssState) noexcept
{
  if (situation.egoVehicleState.hasPriority == situation.otherVehicleState.hasPriority)
  {
    return false;
  }

  bool result = false;
  try
  {
    /**
     * @todo use id here when available to determine when clear is required
     */
    if (situation.timeIndex != mCurrentTimeIndex)
    {
      mLastSafeStateMap.swap(mCurrentSafeStateMap);
      mCurrentSafeStateMap.clear();
      mCurrentTimeIndex = situation.timeIndex;
    }

    rssState.longitudinalState.isSafe = false;
    rssState.longitudinalState.response = ::rss::state::LongitudinalResponse::BrakeMin;

    /**
     * An intersection situation  is lateral unsafe but usually doesn't require a lateral brake
     */
    rssState.lateralStateLeft.isSafe = false;
    rssState.lateralStateLeft.response = ::rss::state::LateralResponse::None;
    rssState.lateralStateRight.isSafe = false;
    rssState.lateralStateRight.response = ::rss::state::LateralResponse::None;

    bool isSafe = false;
    IntersectionState intersectionState = IntersectionState::NonPrioAbleToBreak;

    /**
     * Check if the intersection is safe and determine the intersection state of the situation
     */

    result = checkIntersectionSafe(situation, isSafe, intersectionState);

    if (result)
    {
      rssState.longitudinalState.isSafe = isSafe;

      auto previousIntersectionState = mLastSafeStateMap.find(situation.situationId);

      if (!isSafe)
      {
        /**
         * Situation is unsafe determine right response
         */
        if (previousIntersectionState != mLastSafeStateMap.end())
        {
          switch (previousIntersectionState->second)
          {
            case IntersectionState::NonPrioAbleToBreak:
            {
              if (situation.egoVehicleState.hasPriority)
              {
                rssState.longitudinalState.response = ::rss::state::LongitudinalResponse::None;
              }
              break;
            }
            case IntersectionState::SafeLongitudinalDistance:
            {
              if (situation.relativePosition.longitudinalPosition == LongitudinalRelativePosition::InFront)
              {
                rssState.longitudinalState.response = ::rss::state::LongitudinalResponse::None;
              }
              break;
            }
            case IntersectionState::NoTimeOverlap:
            {
              //@todo If we don't assume always lateral overlap we might need to brake lateraly aswell
              rssState.longitudinalState.response = ::rss::state::LongitudinalResponse::BrakeMin;
              break;
            }
          }

          /**
           * Store the last safe intersection state for next time step
           */
          mCurrentSafeStateMap.insert(
            RssIntersectionStateMap::value_type(situation.situationId, previousIntersectionState->second));
        }
        else
        {
          /**
           * Situation is unsafe but there is no previous safe state. This must not happen.
           */
          result = false;
        }
      }
      else
      {
        /**
         * Situation is safe
         */
        rssState.longitudinalState.response = ::rss::state::LongitudinalResponse::None;

        // Update the last safe state
        mCurrentSafeStateMap.insert(RssIntersectionStateMap::value_type(situation.situationId, intersectionState));
      }
    }
  }
  catch (...)
  {
    result = false;
  }
  return result;
}

} // namespace situation
} // namespace rss
