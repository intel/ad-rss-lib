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

#include <map>
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"

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
   * @return true if response could be calculated, false otherwise
   * If false is returned the internal state has not been updated
   */
  bool provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot, state::ProperResponse &response);

private:
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
  template <typename Response>
  static Response combineResponse(Response const &previousResponse, Response const &newResponse)
  {
    if (previousResponse > newResponse)
    {
      return previousResponse;
    }
    return newResponse;
  }

  /**
   * @brief combine two LateralRssAccelerationValues in worst-case manner
   *
   * @param[in] left the first LateralRssAccelerationValues
   * @param[in] right the second LateralRssAccelerationValues
   *
   * The LateralRssAccelerationValues are combined in a form that the most restrictive acceleration values
   * of both becomes the resulting LateralRssAccelerationValues.
   *
   * @returns the resulting LateralRssAccelerationValues
   */
  static world::LateralRssAccelerationValues combineRssDynamics(world::LateralRssAccelerationValues const &left,
                                                                world::LateralRssAccelerationValues const &right);

  /**
   * @brief combine two LongitudinalRssAccelerationValues in worst-case manner
   *
   * @param[in] left the first LongitudinalRssAccelerationValues
   * @param[in] right the second LongitudinalRssAccelerationValues
   *
   * The LongitudinalRssAccelerationValues are combined in a form that the most restrictive acceleration values
   * of both becomes the resulting LongitudinalRssAccelerationValues.
   *
   * @returns the resulting LongitudinalRssAccelerationValues
   */
  static world::LongitudinalRssAccelerationValues
  combineRssDynamics(world::LongitudinalRssAccelerationValues const &left,
                     world::LongitudinalRssAccelerationValues const &right);

  struct RssSafeState
  {
    bool longitudinalSafe{false};
    bool lateralSafe{false};
  };

  /**
   * @brief typedef for the mapping of object id to the corresponding RssSafeState before the danger threshold time
   */
  typedef std::map<situation::SituationId, RssSafeState> RssSafeStateBeforeDangerThresholdTimeMap;

  /**
   * @brief the state of each situation before the danger threshold time
   *
   * Needs to be stored to check which is the proper response required to solve an unclear situation
   */
  RssSafeStateBeforeDangerThresholdTimeMap mStatesBeforeDangerThresholdTime;
};

} // namespace core
} // namespace rss
} // namespace ad
