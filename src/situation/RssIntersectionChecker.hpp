// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include <cstdint>
#include <map>
#include "ad_rss/physics/TimeIndex.hpp"
#include "ad_rss/situation/Situation.hpp"
#include "ad_rss/state/RssState.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief Enum LongitudinalResponse
 *
 * Enumeration defining the possible longitudinal responses
 *
 * Be aware: there has to be a strict order of the enumeration values according to
 * the strictness of the response
 */
enum class IntersectionState : std::uint32_t
{
  NonPrioAbleToBreak = 0u,       /*!< NonPrio-Vehicle can stop in front intersection */
  SafeLongitudinalDistance = 1u, /*!< There is a safe longitudinal distance  between the vehicles*/
  NoTimeOverlap = 2u             /*!< There is no time overlap between the paths of the two vehicles */
};

/**
 * @brief Class to check whether an intersection is safe and to determine the proper response for the situation
 *
 * Class performs required check to if situation is safe
 * Class will maintain the previous state of the situation in order to provide the proper response.
 */
class RssIntersectionChecker
{
public:
  /**
   * @brief Constructor
   */
  RssIntersectionChecker();

  /**
   * @brief Destructor
   */
  ~RssIntersectionChecker();

  /**
   * @brief Calculate safety checks and determine required rssState for intersection situations
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateRssStateIntersection(physics::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::RssState &rssState);

private:
  typedef std::map<SituationId, IntersectionState> RssIntersectionStateMap;
  /**
   * @brief last safe IntersectionState of each situation of previous time step
   */
  RssIntersectionStateMap mLastSafeStateMap;

  /**
   * @brief last safe IntersectionState of each situation of current time step
   */
  RssIntersectionStateMap mCurrentSafeStateMap;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the mLastSafeStateMap
   */
  physics::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace ad_rss
