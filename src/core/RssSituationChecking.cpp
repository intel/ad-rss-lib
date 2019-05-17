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

#include "ad_rss/core/RssSituationChecking.hpp"
#include <algorithm>
#include <memory>
#include "ad_rss/situation/SituationSnapshotValidInputRange.hpp"
#include "situation/RssIntersectionChecker.hpp"
#include "situation/RssSituation.hpp"

namespace ad_rss {
namespace core {

enum class IsSafe
{
  Yes,
  No
};

inline state::RssState
createRssState(situation::SituationId const &situationId, world::ObjectId const &objectId, IsSafe const &isSafeValue)
{
  bool const isSafe = (isSafeValue == IsSafe::Yes);
  state::RssStateInformation emptyRssStateInfo;
  emptyRssStateInfo.currentDistance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.safeDistance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.evaluator = state::RssStateEvaluator::None;

  state::RssState resultRssState;
  resultRssState.situationId = situationId;
  resultRssState.objectId = objectId;
  resultRssState.lateralStateLeft.isSafe = isSafe;
  resultRssState.lateralStateLeft.response
    = isSafe ? (::ad_rss::state::LateralResponse::None) : (::ad_rss::state::LateralResponse::BrakeMin);
  resultRssState.lateralStateLeft.rssStateInformation = emptyRssStateInfo;
  resultRssState.lateralStateRight.isSafe = isSafe;
  resultRssState.lateralStateRight.response
    = isSafe ? (::ad_rss::state::LateralResponse::None) : (::ad_rss::state::LateralResponse::BrakeMin);
  resultRssState.lateralStateRight.rssStateInformation = emptyRssStateInfo;
  resultRssState.longitudinalState.isSafe = isSafe;
  resultRssState.longitudinalState.response
    = isSafe ? (::ad_rss::state::LongitudinalResponse::None) : (::ad_rss::state::LongitudinalResponse::BrakeMin);
  resultRssState.longitudinalState.rssStateInformation = emptyRssStateInfo;

  return resultRssState;
}

RssSituationChecking::RssSituationChecking()
{
  try
  {
    mIntersectionChecker = std::unique_ptr<situation::RssIntersectionChecker>(new situation::RssIntersectionChecker());
  }
  catch (...)
  {
    mIntersectionChecker = nullptr;
  }
}

RssSituationChecking::~RssSituationChecking()
{
}

bool RssSituationChecking::checkSituationInputRangeChecked(situation::Situation const &situation,
                                                           state::RssState &rssState)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    if (!static_cast<bool>(mIntersectionChecker))
    {
      return false;
    }

    rssState = createRssState(situation.situationId, situation.objectId, IsSafe::No);

    switch (situation.situationType)
    {
      case situation::SituationType::NotRelevant:
        rssState = createRssState(situation.situationId, situation.objectId, IsSafe::Yes);
        result = true;
        break;
      case situation::SituationType::SameDirection:
        result = calculateRssStateNonIntersectionSameDirection(situation, rssState);
        break;
      case situation::SituationType::OppositeDirection:
        result = calculateRssStateNonIntersectionOppositeDirection(situation, rssState);
        break;

      case situation::SituationType::IntersectionEgoHasPriority:
      case situation::SituationType::IntersectionObjectHasPriority:
      case situation::SituationType::IntersectionSamePriority:
        result = mIntersectionChecker->calculateRssStateIntersection(mCurrentTimeIndex, situation, rssState);
        break;
      default:
        result = false;
        break;
    }
  }
  catch (...)
  {
    result = false;
  }

  return result;
}

bool RssSituationChecking::checkSituations(situation::SituationSnapshot const &situationSnapshot,
                                           state::RssStateSnapshot &rssStateSnapshot)
{
  if (!withinValidInputRange(situationSnapshot))
  {
    return false;
  }
  if (!checkTimeIncreasingConsistently(situationSnapshot.timeIndex))
  {
    return false;
  }
  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    rssStateSnapshot.timeIndex = situationSnapshot.timeIndex;
    rssStateSnapshot.individualResponses.clear();
    for (auto const &situation : situationSnapshot.situations)
    {
      state::RssState rssState;
      bool const checkResult = checkSituationInputRangeChecked(situation, rssState);
      if (checkResult)
      {
        rssStateSnapshot.individualResponses.push_back(rssState);
      }
      else
      {
        result = false;
        break;
      }
    }
  }
  catch (...)
  {
    result = false;
  }
  if (!result)
  {
    rssStateSnapshot.individualResponses.clear();
  }
  return result;
}

bool RssSituationChecking::checkTimeIncreasingConsistently(physics::TimeIndex const &nextTimeIndex)
{
  bool timeIsIncreasing = false;
  if (mCurrentTimeIndex != nextTimeIndex)
  {
    // check for overflow
    physics::TimeIndex const deltaTimeIndex = nextTimeIndex - mCurrentTimeIndex;
    if (deltaTimeIndex < (std::numeric_limits<physics::TimeIndex>::max() / 2))
    {
      timeIsIncreasing = true;
    }
  }
  mCurrentTimeIndex = nextTimeIndex;
  return timeIsIncreasing;
}

} // namespace core
} // namespace ad_rss
