// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
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
