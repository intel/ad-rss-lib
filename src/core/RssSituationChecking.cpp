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
