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

#include <cstdint>
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
 * @brief Class to check whether an intersection is safe and to determine the proper response for the situation
 *
 *
 * Note: Implements the checks and responses given by the definitions 16-18 of the RSS paper (arXiv:1708.06374v6)
 *       The more detailed lateral intersection handling according to definitions 14 and 15 is not considered, yet.
 *       Instead, the current implementation always considers a lateral conflict within intersections and doesn't trigger any lateral response.
 *
 * Class performs required check to if situation is safe
 * Class will maintain the previous state of the situation in order to provide the proper response.
 */
class RssStructuredSceneIntersectionChecker
{
public:
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
   * @brief Constructor
   */
  RssStructuredSceneIntersectionChecker() = default;

  /**
   * @brief Destructor
   */
  ~RssStructuredSceneIntersectionChecker() = default;

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
  bool calculateRssStateIntersection(world::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::RssState &rssState);

private:
  bool checkLateralIntersect(Situation const &situation, bool &isSafe);

  bool checkIntersectionSafe(Situation const &situation,
                             state::RssStateInformation &rssStateInformation,
                             bool &isSafe,
                             IntersectionState &intersectionState);

  typedef std::map<SituationId, IntersectionState> RssIntersectionStateMap;

  /**
   * @brief last safe IntersectionState of each situation of previous time step
   */
  RssIntersectionStateMap mLastSafeStateMap;

  /**
   * @brief new safe IntersectionState of each situation of current time step
   */
  RssIntersectionStateMap mNewSafeStateMap;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the state maps
   */
  world::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace rss
} // namespace ad
