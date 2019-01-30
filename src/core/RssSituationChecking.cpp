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

#include "rss/core/RssSituationChecking.hpp"
#include <algorithm>
#include <memory>
#include "situation/RSSSituation.hpp"
#include "situation/RssIntersectionChecker.hpp"

namespace rss {
namespace core {

RssSituationChecking::RssSituationChecking()
{
  mIntersectionChecker = std::make_unique<rss::situation::RssIntersectionChecker>();
}

RssSituationChecking::~RssSituationChecking()
{
}

bool RssSituationChecking::checkSituation(situation::Situation const &situation,
                                          state::ResponseState &response) noexcept
{
  if (!bool(mIntersectionChecker))
  {
    return false;
  }
  bool result = false;

  response.timeIndex = situation.timeIndex;
  response.situationId = situation.situationId;
  response.longitudinalState.isSafe = false;
  response.longitudinalState.response = state::LongitudinalResponse::BrakeMin;
  response.lateralStateLeft.isSafe = false;
  response.lateralStateLeft.response = state::LateralResponse::BrakeMin;
  response.lateralStateRight.isSafe = false;
  response.lateralStateRight.response = state::LateralResponse::BrakeMin;

  switch (situation.situationType)
  {
    case situation::SituationType::NotRelevant:
      response.longitudinalState.isSafe = true;
      response.longitudinalState.response = state::LongitudinalResponse::None;
      response.lateralStateLeft.isSafe = true;
      response.lateralStateLeft.response = state::LateralResponse::None;
      response.lateralStateRight.isSafe = true;
      response.lateralStateRight.response = state::LateralResponse::None;
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
      result = mIntersectionChecker->calculateRssStateIntersection(situation, response);
      break;
    case situation::SituationType::IntersectionSamePriority:
      // Not supported yet
      //@todo support situation::SituationType::IntersectionSamePriority
      result = false;
      break;
  }

  return result;
}

bool RssSituationChecking::checkSituations(situation::SituationVector const &situationVector,
                                           state::ResponseStateVector &responseStateVector) noexcept
{
  bool result = true;
  responseStateVector.clear();
  for (auto const &situation : situationVector)
  {
    state::ResponseState responseState;
    bool const checkResult = checkSituation(situation, responseState);
    if (checkResult)
    {
      try
      {
        responseStateVector.push_back(responseState);
      }
      catch (...)
      {
        result = false;
      }
    }
    else
    {
      result = false;
    }
  }
  return result;
}

} // namespace core
} // namespace rss
