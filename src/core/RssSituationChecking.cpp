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
#include "ad_rss/core/RssLogging.hpp"
#include "ad_rss/situation/SituationVectorValidInputRange.hpp"
#include "core/RssState.hpp"
#include "situation/RssIntersectionChecker.hpp"
#include "situation/RssSituation.hpp"

namespace ad_rss {
namespace core {

RssSituationChecking::RssSituationChecking()
{
  try
  {
    mIntersectionChecker = std::unique_ptr<situation::RssIntersectionChecker>(new situation::RssIntersectionChecker());
  }
  catch (...)
  {
    DLT_LOG_CXX(RssLogging::getDltContext(), DLT_LOG_FATAL, "RssSituationChecking object initialization failed");
    mIntersectionChecker = nullptr;
  }
}

RssSituationChecking::~RssSituationChecking()
{
}

bool RssSituationChecking::checkSituationInputRangeChecked(situation::Situation const &situation,
                                                           bool const nextTimeStep,
                                                           state::ResponseState &response)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    if (!static_cast<bool>(mIntersectionChecker))
    {
      DLT_LOG_CXX(RssLogging::getDltContext(),
                  DLT_LOG_FATAL,
                  "RssSituationChecking::checkSituationInputRangeChecked>> object not properly initialized");
      return false;
    }
    if (!checkTimeIncreasingConsistently(situation, nextTimeStep))
    {
      DLT_LOG_CXX(RssLogging::getDltContext(),
                  DLT_LOG_ERROR,
                  "RssSituationChecking::checkSituationInputRangeChecked>> Inconsistent time",
                  situation);
      return false;
    }

    response = state::createResponseState(situation.timeIndex, situation.situationId, state::IsSafe::No);

    switch (situation.situationType)
    {
      case situation::SituationType::NotRelevant:
        response = state::createResponseState(situation.timeIndex, situation.situationId, state::IsSafe::Yes);
        result = true;
        break;
      case situation::SituationType::SameDirection:
        result = calculateRssStateNonIntersectionSameDirection(situation, response);
        break;
      case situation::SituationType::OppositeDirection:
        result = calculateRssStateNonIntersectionOppositeDirection(situation, response);
        break;

      case situation::SituationType::IntersectionEgoHasPriority:
      case situation::SituationType::IntersectionObjectHasPriority:
      case situation::SituationType::IntersectionSamePriority:
        result = mIntersectionChecker->calculateRssStateIntersection(situation, response);
        break;
      default:
        DLT_LOG_CXX(RssLogging::getDltContext(),
                    DLT_LOG_ERROR,
                    "RssSituationChecking::checkSituationInputRangeChecked>> Invalid situation type",
                    situation);
        result = false;
        break;
    }
  }
  catch (...)
  {
    DLT_LOG_CXX(RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationChecking::checkSituationInputRangeChecked>> Exception catched",
                nextTimeStep,
                situation);
    result = false;
  }

  return result;
}

bool RssSituationChecking::checkSituations(situation::SituationVector const &situationVector,
                                           state::ResponseStateVector &responseStateVector)
{
  if (!withinValidInputRange(situationVector))
  {
    DLT_LOG_CXX(RssLogging::getDltContext(),
                DLT_LOG_ERROR,
                "RssSituationChecking::checkSituations>> Invalid input",
                situationVector);
    return false;
  }
  bool result = true;
  bool nextTimeStep = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    responseStateVector.clear();
    for (auto const &situation : situationVector)
    {
      state::ResponseState responseState;
      bool const checkResult = checkSituationInputRangeChecked(situation, nextTimeStep, responseState);
      nextTimeStep = false;
      if (checkResult)
      {
        responseStateVector.push_back(responseState);
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
    DLT_LOG_CXX(RssLogging::getDltContext(),
                DLT_LOG_FATAL,
                "RssSituationChecking::checkSituations>> Exception catched",
                situationVector);
    result = false;
  }
  if (!result)
  {
    responseStateVector.clear();
  }
  return result;
}

bool RssSituationChecking::checkTimeIncreasingConsistently(situation::Situation const &situation,
                                                           bool const nextTimeStep)
{
  if (nextTimeStep)
  {
    // next time tick
    mLastTimeIndex = mCurrentTimeIndex;
    mCurrentTimeIndex = situation.timeIndex;
  }
  else if (mCurrentTimeIndex != situation.timeIndex)
  {
    DLT_LOG_CXX(RssLogging::getDltContext(),
                DLT_LOG_ERROR,
                "RssSituationChecking::checkTimeIncreasingConsistently>> Time index changes unexpectedly",
                mCurrentTimeIndex,
                situation.timeIndex);
    return false;
  }

  bool timeIsIncreasing = false;
  if (mCurrentTimeIndex != mLastTimeIndex)
  {
    // check for overflow
    physics::TimeIndex const deltaTimeIndex = mCurrentTimeIndex - mLastTimeIndex;
    if (deltaTimeIndex < (std::numeric_limits<physics::TimeIndex>::max() / 2))
    {
      timeIsIncreasing = true;
    }
    else
    {
      DLT_LOG_CXX(RssLogging::getDltContext(),
                  DLT_LOG_ERROR,
                  "RssSituationChecking::checkTimeIncreasingConsistently>> Time is going backwards. Last:",
                  mLastTimeIndex,
                  "Current:",
                  mCurrentTimeIndex);
    }
  }
  else
  {
    DLT_LOG_CXX(RssLogging::getDltContext(),
                DLT_LOG_ERROR,
                "RssSituationChecking::checkTimeIncreasingConsistently>> Time is constant unexpectedly. Last:",
                mLastTimeIndex,
                "Current:",
                mCurrentTimeIndex);
  }
  return timeIsIncreasing;
}

} // namespace core
} // namespace ad_rss
