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

#include <map>
#include "ad/rss/core/RelativeConstellation.hpp"
#include "ad/rss/state/RssState.hpp"
#include "ad/rss/world/TimeIndex.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace structured
 */
namespace structured {

/**
 * @brief Class to check whether a non-intersection structured constellation is safe and to determine the proper
 * response for
 * the constellation
 *
 * Note: Implements the checks and responses given by the definitions 1-10 of the RSS paper (arXiv:1708.06374v6)
 *
 * Class performs required check to if constellation is safe
 * Class will maintain the previous state of the constellation in order to provide the proper response.
 */
class RssNonIntersectionConstellationChecker
{
public:
  /**
   * @brief Constructor
   */
  RssNonIntersectionConstellationChecker() = default;

  /**
   * @brief Destructor
   */
  ~RssNonIntersectionConstellationChecker() = default;

  /**
   * @brief Calculate safety checks and determine required rssState for structured non intersection constellations
   *
   * @param[in]  time_index the time index of the constellation
   * @param[in]  constellation constellation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateNonIntersection(world::TimeIndex const &time_index,
                                        core::RelativeConstellation const &constellation,
                                        state::RssState &rssState);

private:
  /**
   * @brief Calculate safety checks and determine required rssState for non intersection same direction scenario
   *
   * @param[in]  time_index the time index of the constellation
   * @param[in]  constellation constellation to analyze
   * @param[out] rssState  response state of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateSameDirection(core::RelativeConstellation const &constellation, state::RssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for non intersection opposite direction scenario
   *
   * @param[in]  time_index the time index of the constellation
   * @param[in]  constellation constellation to analyze
   * @param[out] rssState  response state of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateOppositeDirection(core::RelativeConstellation const &constellation, state::RssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for longitudinal direction for
   * non intersection scenario when both vehicles are driving in same direction
   *
   * @param[in]  constellation constellation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLongitudinalRssStateSameDirection(core::RelativeConstellation const &constellation,
                                                  state::LongitudinalRssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for longitudinal direction for
   * non intersection scenario when vehicles are driving in opposite direction
   *
   * @param[in]  constellation constellation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLongitudinalRssStateOppositeDirection(core::RelativeConstellation const &constellation,
                                                      state::LongitudinalRssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for lateral direction
   *
   * @param[in] constellation      constellation to analyze
   * @param[out] rssStateLeft  rssState of the ego vehicle at its left side
   * @param[out] rssStateRight rssState of the ego vehicle at its right side
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLateralRssState(core::RelativeConstellation const &constellation,
                                state::LateralRssState &rssStateLeft,
                                state::LateralRssState &rssStateRight);

  struct RssSafeState
  {
    bool longitudinalSafe{false};
    bool lateralSafe{false};
  };

  /**
   * @brief typedef for the mapping of object id to the corresponding RssSafeState before the danger threshold time
   */
  typedef std::map<core::RelativeConstellationId, RssSafeState> RssSafeStateBeforeDangerThresholdTimeMap;

  /**
   * @brief the state of each constellation before the danger threshold time of last timestep
   *
   * Needs to be stored to check which is the proper response required to solve an unclear constellation
   */
  RssSafeStateBeforeDangerThresholdTimeMap mLastStatesBeforeDangerThresholdTime;
  /**
   * @brief the new state of each constellation before the danger threshold time of current timestep
   *
   */
  RssSafeStateBeforeDangerThresholdTimeMap mNewStatesBeforeDangerThresholdTime;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the state maps
   */
  world::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace structured
} // namespace rss
} // namespace ad
