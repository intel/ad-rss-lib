// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssState.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS state datatypes and operations
 */
namespace state {

/**
 * @brief is rss state longitudinal safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(RssState const &rssState)
{
  return rssState.longitudinal_state.is_safe;
}

/**
 * @brief is rss state lateral safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafe(RssState const &rssState)
{
  return rssState.lateral_state_right.is_safe && rssState.lateral_state_left.is_safe;
}

/**
 * @brief is rss unstructured constellation state safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isUnstructuredConstellationSafe(RssState const &rssState)
{
  return rssState.unstructured_constellation_state.is_safe;
}

/**
 * @brief is rss state dangerous
 *
 * @param[in] rssState to check
 *
 * true if dangerous, false if not
 */
inline bool isDangerous(RssState const &rssState)
{
  if (rssState.constellation_type == ad::rss::world::ConstellationType::Unstructured)
  {
    return !isUnstructuredConstellationSafe(rssState);
  }
  else
  {
    return !isLongitudinalSafe(rssState) && !isLateralSafe(rssState);
  }
}

/*!
 * @brief combineState and update AccelerationRestriction
 *
 * Updates the longitudinal accelerationRestriction
 *
 * @param[in] state - The unstructured constellation state to update the acceleration restrictions with
 *  @param[inout] driveAwayBrakeMin -- the minimal brake_min of all drive-away states
 *  @param[inout] driveAwayToBrakeTransition -- a transition from drive-Away to Brake happened
 *  @param[inout] response -- the combined RSS response to become RSS safe.
 *  @param[inout] responseHeadingRanges -- the combined RSS response heading ranges (for driving away)
 * @param[inout] accelerationRange - The combined restrictions on the vehicle acceleration to become RSS safe.
 *
 */
void combineState(state::UnstructuredConstellationRssState const &state,
                  physics::Acceleration &driveAwayBrakeMin,
                  bool &driveAwayToBrakeTransition,
                  state::UnstructuredConstellationResponse &response,
                  ::ad::geometry::HeadingRangeVector &responseHeadingRanges,
                  physics::AccelerationRange &accelerationRange);

/*!
 * @brief combineState and update AccelerationRestriction
 *
 * Updates the longitudinal accelerationRestriction
 *
 * @param[in] state - The longitudinal state to update the acceleration restrictions with
 * @param[inout] response -- the combined RSS response to become RSS safe.
 * @param[inout] accelerationRange - The combined restrictions on the vehicle acceleration to become RSS safe.
 *
 */
void combineState(state::LongitudinalRssState const &state,
                  state::LongitudinalResponse &response,
                  physics::AccelerationRange &accelerationRange);

/*!
 * @brief combineState and update AccelerationRestriction
 *
 * Updates the lateral acceleration_restrictions
 *
 * @param[in] state - The lateral state to update the acceleration restrictions with
 * @param[inout] response -- the combined RSS response to become RSS safe.
 * @param[inout] accelerationRange - The restrictions on the vehicle acceleration to become RSS safe.
 * @param[in] isLaneBoundariesObject is the object a lane boundaries object (which is ignored if none response)
 *
 */
void combineState(state::LateralRssState const &state,
                  state::LateralResponse &response,
                  physics::AccelerationRange &accelerationRange,
                  bool const isLaneBoundariesObject);

/*!
 * @brief Combine two proper responses
 *
 * @param[in] left -- a RSS response to become RSS safe.
 * @param[in] right -- another RSS response to become RSS safe.
 *
 * @returns The combined proper response considering the worst-case
 */
state::ProperResponse combineProperResponse(state::ProperResponse const &left, state::ProperResponse const &right);

} // namespace state
} // namespace rss
} // namespace ad
