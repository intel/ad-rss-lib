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
#include "ad_rss/situation/SituationVector.hpp"
#include "ad_rss/state/ResponseStateVector.hpp"

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
   * @param [in] situationVector the vector of situations that should be analyzed
   * @param[out] responseStateVector the vector of response states for the current situations
   *
   * @return true if the situations could be analyzed, false if an error occurred during evaluation.
   */
  bool checkSituations(situation::SituationVector const &situationVector,
                       state::ResponseStateVector &responseStateVector);

private:
  /*!
   * @brief Check if the current situation is safe.
   *
   * @param[in] situation      the Situation that should be analyzed
   * @param[in] nextTimeStep   indidicates that a new time step occurred
   * @param[out] response      the response state for the current situation
   *
   * @return true if situation could be analyzed, false if there was an error during evaluation
   */
  bool checkSituationInputRangeChecked(situation::Situation const &situation,
                                       bool const nextTimeStep,
                                       state::ResponseState &response);

  /*!
   * @brief check to ensure situation time is consistent
   *
   * @param[in] situation      the Situation that should be analyzed
   * @param[in] nextTimeStep   indidicates that a new time step occurred
   *
   * @return true if the time is constantly increasing
   */
  bool checkTimeIncreasingConsistently(situation::Situation const &situation, bool const nextTimeStep);

  std::unique_ptr<ad_rss::situation::RssIntersectionChecker> mIntersectionChecker;
  physics::TimeIndex mLastTimeIndex{0u};
  physics::TimeIndex mCurrentTimeIndex{0u};
};
} // namespace core
} // namespace ad_rss
