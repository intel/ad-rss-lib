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

#include <memory>
#include "ad/rss/situation/SituationSnapshot.hpp"
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
 * @brief Forward declaration
 */
namespace situation {
class RssStructuredSceneIntersectionChecker;
class RssStructuredSceneNonIntersectionChecker;
class RssUnstructuredSceneChecker;
} // namespace situation

/*!
 * @brief namespace core
 */
namespace core {

/*!
 * @brief class RssSituationChecking
 *
 * class providing functions required for the RSS checks of the situation.
 */
class RssSituationChecking
{
public:
  /*!
   * @brief constructor
   */
  RssSituationChecking();

  /*!
   * @brief destructor
   */
  ~RssSituationChecking();

  /*!
   * @brief Checks if the current situations are safe.
   *
   * @param [in] situationSnapshot the situation snapshot in time that should be analyzed
   * @param[out] rssStateSnapshot the rss state snapshot of these situations
   *
   * @return true if the situations could be analyzed, false if an error occurred during evaluation.
   */
  bool checkSituations(situation::SituationSnapshot const &situationSnapshot,
                       state::RssStateSnapshot &rssStateSnapshot);

private:
  /*!
   * @brief Check if the current situation is safe.
   *
   * @param[in] situation      the Situation that should be analyzed
   * @param[out] rssStateSnapshot the rss state snapshot the current state has to be appended
   *
   * @return true if situation could be analyzed, false if there was an error during evaluation
   */
  bool checkSituationInputRangeChecked(situation::Situation const &situation,
                                       state::RssStateSnapshot &rssStateSnapshot);

  /*!
   * @brief check to ensure time index is consistent
   *
   * @param[in] nextTimeIndex   the new time index
   *
   * @return true if the time is constantly increasing
   */
  bool checkTimeIncreasingConsistently(world::TimeIndex const &nextTimeIndex);

  std::unique_ptr<ad::rss::situation::RssStructuredSceneIntersectionChecker> mIntersectionChecker;
  std::unique_ptr<ad::rss::situation::RssStructuredSceneNonIntersectionChecker> mNonIntersectionChecker;
  std::unique_ptr<ad::rss::situation::RssUnstructuredSceneChecker> mUnstructuredSceneChecker;
  world::TimeIndex mCurrentTimeIndex{0u};
};
} // namespace core
} // namespace rss
} // namespace ad
