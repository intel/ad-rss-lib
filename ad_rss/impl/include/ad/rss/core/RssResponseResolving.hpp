// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"
#include "ad/rss/world/AccelerationRestriction.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/**
 * @brief RssResponseResolving
 *
 * Class to resolve the responseStateVector of the different situation specific responses
 * into a single responseState. This class tracks the RSS response state of every
 * situation id over time and especially stores the respective response state before
 * the danger threshold time. This requires that the id of a RSS situation remains constant over
 * time in case it refers to the same object; otherwise tracking over time will fail.
 */
class RssResponseResolving
{
public:
  /**
   * @brief constructor
   */
  RssResponseResolving();

  /**
   * @brief Calculate the proper response out of the current responses
   *
   * @param[in]  currentStateSnapshot all the rss states gathered for the current situations
   * @param[out] response the proper overall response state
   *
   * @return true if response and acceleration restriction could be calculated, false otherwise
   * If false is returned the internal state has not been updated
   */
  bool provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot, state::ProperResponse &response);

private:
  /*!
  * @brief updateAccelerationRestriction
  *
  * Updates the longitudinal accelerationRestriction
  *
  * @param[in] state - The longitudinal state to update the acceleration restrictions with
 *  @param[inout] response -- the combined RSS response to become RSS safe.
  * @param[inout] accelerationRestriction - The combined restrictions on the vehicle acceleration to become RSS safe.
  *
  */
  void combineState(::ad::rss::state::LongitudinalRssState const &state,
                    ::ad::rss::state::LongitudinalResponse &response,
                    ::ad::physics::AccelerationRange &accelerationRange);

  /*!
  * @brief updateAccelerationRestriction
  *
  * Updates the lateral accelerationRestrictions
  *
  * @param[in] state - The lateral state to update the acceleration restrictions with
  * @param[inout] response -- the combined RSS response to become RSS safe.
  * @param[inout] accelerationRestriction - The restrictions on the vehicle acceleration to become RSS safe.
  *
  */
  void combineState(::ad::rss::state::LateralRssState const &state,
                    ::ad::rss::state::LateralResponse &response,
                    ::ad::physics::AccelerationRange &accelerationRange);
};

} // namespace core
} // namespace rss
} // namespace ad