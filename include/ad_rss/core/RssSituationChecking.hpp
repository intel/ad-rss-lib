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

#include <memory>
#include "ad_rss/situation/SituationSnapshot.hpp"
#include "ad_rss/state/RssStateSnapshot.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {

/*!
 * @brief Forward declaration
 */
namespace situation {
class RssIntersectionChecker;
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
   * @param[out] rssState      the rssState state for the current situation
   *
   * @return true if situation could be analyzed, false if there was an error during evaluation
   */
  bool checkSituationInputRangeChecked(situation::Situation const &situation, state::RssState &rssState);

  /*!
   * @brief check to ensure time index is consistent
   *
   * @param[in] nextTimeIndex   the new time index
   *
   * @return true if the time is constantly increasing
   */
  bool checkTimeIncreasingConsistently(physics::TimeIndex const &nextTimeIndex);

  std::unique_ptr<ad_rss::situation::RssIntersectionChecker> mIntersectionChecker;
  physics::TimeIndex mCurrentTimeIndex{0u};
};
} // namespace core
} // namespace ad_rss
