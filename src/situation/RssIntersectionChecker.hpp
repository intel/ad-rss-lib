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

/**
 * @file
 */

#pragma once

#include <cstdint>
#include <map>
#include "rss/situation/Situation.hpp"
#include "rss/state/ResponseState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS situation coordinate system datatypes and operations
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
  explicit RssIntersectionChecker();

  /**
   * @brief Destructor
   */
  ~RssIntersectionChecker();

  /**
   * @brief Calculate safety checks and determine required rssState for intersection situations
   *
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateRssStateIntersection(Situation const &situation, state::ResponseState &rssState) noexcept;

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
  ::rss::time::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace rss
