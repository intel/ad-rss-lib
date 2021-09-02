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
#include "ad/rss/situation/Situation.hpp"
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
 * @brief namespace situation
 */
namespace situation {

/**
 * @brief Class to check whether a non-intersection structured scene is safe and to determine the proper response for
 * the situation
 *
 * Note: Implements the checks and responses given by the definitions 1-10 of the RSS paper (arXiv:1708.06374v6)
 *
 * Class performs required check to if situation is safe
 * Class will maintain the previous state of the situation in order to provide the proper response.
 */
class RssStructuredSceneNonIntersectionChecker
{
public:
  /**
   * @brief Constructor
   */
  RssStructuredSceneNonIntersectionChecker() = default;

  /**
   * @brief Destructor
   */
  ~RssStructuredSceneNonIntersectionChecker() = default;

  /**
   * @brief Calculate safety checks and determine required rssState for structured non intersection situations
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateNonIntersection(world::TimeIndex const &timeIndex,
                                        Situation const &situation,
                                        state::RssState &rssState);

private:
  /**
   * @brief Calculate safety checks and determine required rssState for non intersection same direction scenario
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  response state of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateSameDirection(Situation const &situation, state::RssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for non intersection opposite direction scenario
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  response state of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateOppositeDirection(Situation const &situation, state::RssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for longitudinal direction for
   * non intersection scenario when both vehicles are driving in same direction
   *
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLongitudinalRssStateSameDirection(Situation const &situation, state::LongitudinalRssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for longitudinal direction for
   * non intersection scenario when vehicles are driving in opposite direction
   *
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLongitudinalRssStateOppositeDirection(Situation const &situation,
                                                      state::LongitudinalRssState &rssState);

  /**
   * @brief Calculate safety checks and determine required rssState for lateral direction
   *
   * @param[in] situation      situation to analyze
   * @param[out] rssStateLeft  rssState of the ego vehicle at its left side
   * @param[out] rssStateRight rssState of the ego vehicle at its right side
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateLateralRssState(Situation const &situation,
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
  typedef std::map<situation::SituationId, RssSafeState> RssSafeStateBeforeDangerThresholdTimeMap;

  /**
   * @brief the state of each situation before the danger threshold time of last timestep
   *
   * Needs to be stored to check which is the proper response required to solve an unclear situation
   */
  RssSafeStateBeforeDangerThresholdTimeMap mLastStatesBeforeDangerThresholdTime;
  /**
   * @brief the new state of each situation before the danger threshold time of current timestep
   *
   */
  RssSafeStateBeforeDangerThresholdTimeMap mNewStatesBeforeDangerThresholdTime;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the state maps
   */
  world::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace rss
} // namespace ad
