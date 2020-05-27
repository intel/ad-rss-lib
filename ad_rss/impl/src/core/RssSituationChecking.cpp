// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssSituationChecking.hpp"
#include <algorithm>
#include <memory>
#include "../situation/RssStructuredSceneIntersectionChecker.hpp"
#include "../situation/RssStructuredSceneNonIntersectionChecker.hpp"
#include "../situation/RssUnstructuredSceneChecker.hpp"
#include "ad/rss/situation/SituationSnapshotValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

namespace ad {
namespace rss {
namespace core {

enum class IsSafe
{
  Yes,
  No
};

inline state::RssState createRssState(situation::SituationId const &situationId,
                                      situation::SituationType const &situationType,
                                      world::ObjectId const &objectId,
                                      world::RssDynamics const &egoDynamics,
                                      IsSafe const &isSafeValue)
{
  bool const isSafe = (isSafeValue == IsSafe::Yes);
  state::RssStateInformation emptyRssStateInfo;
  emptyRssStateInfo.currentDistance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.safeDistance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.evaluator = state::RssStateEvaluator::None;

  state::RssState resultRssState;
  resultRssState.situationId = situationId;
  resultRssState.situationType = situationType;
  resultRssState.objectId = objectId;
  resultRssState.lateralStateLeft.isSafe = isSafe;
  resultRssState.lateralStateLeft.response
    = isSafe ? (::ad::rss::state::LateralResponse::None) : (::ad::rss::state::LateralResponse::BrakeMin);
  resultRssState.lateralStateLeft.alphaLat = egoDynamics.alphaLat;
  resultRssState.lateralStateLeft.rssStateInformation = emptyRssStateInfo;
  resultRssState.lateralStateRight.isSafe = isSafe;
  resultRssState.lateralStateRight.response
    = isSafe ? (::ad::rss::state::LateralResponse::None) : (::ad::rss::state::LateralResponse::BrakeMin);
  resultRssState.lateralStateRight.alphaLat = egoDynamics.alphaLat;
  resultRssState.lateralStateRight.rssStateInformation = emptyRssStateInfo;
  resultRssState.longitudinalState.isSafe = isSafe;
  resultRssState.longitudinalState.response
    = isSafe ? (::ad::rss::state::LongitudinalResponse::None) : (::ad::rss::state::LongitudinalResponse::BrakeMin);
  resultRssState.longitudinalState.alphaLon = egoDynamics.alphaLon;
  resultRssState.longitudinalState.rssStateInformation = emptyRssStateInfo;
  resultRssState.unstructuredSceneState.headingRange.minimum = ad::physics::Angle(0.0);
  resultRssState.unstructuredSceneState.headingRange.maximum = ad::physics::c2PI;
  resultRssState.unstructuredSceneState.response = ad::rss::state::UnstructuredSceneResponse::None;
  return resultRssState;
}

RssSituationChecking::RssSituationChecking()
{
  try
  {
    mNonIntersectionChecker = std::unique_ptr<situation::RssStructuredSceneNonIntersectionChecker>(
      new situation::RssStructuredSceneNonIntersectionChecker());
    mIntersectionChecker = std::unique_ptr<situation::RssStructuredSceneIntersectionChecker>(
      new situation::RssStructuredSceneIntersectionChecker());
    mUnstructuredSceneChecker
      = std::unique_ptr<situation::RssUnstructuredSceneChecker>(new situation::RssUnstructuredSceneChecker());
  }
  catch (...)
  {
    spdlog::critical("RssSituationChecking object initialization failed");
    mNonIntersectionChecker = nullptr;
    mIntersectionChecker = nullptr;
    mUnstructuredSceneChecker = nullptr;
  }
}

RssSituationChecking::~RssSituationChecking()
{
}

bool RssSituationChecking::checkSituationInputRangeChecked(situation::Situation const &situation,
                                                           state::RssStateSnapshot &rssStateSnapshot)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    if ((!static_cast<bool>(mNonIntersectionChecker)) || (!static_cast<bool>(mIntersectionChecker))
        || (!static_cast<bool>(mUnstructuredSceneChecker)))
    {
      spdlog::critical("RssSituationChecking::checkSituationInputRangeChecked>> object not properly initialized");
      return false;
    }

    auto rssState = createRssState(situation.situationId,
                                   situation.situationType,
                                   situation.objectId,
                                   situation.egoVehicleState.dynamics,
                                   IsSafe::No);

    switch (situation.situationType)
    {
      case situation::SituationType::NotRelevant:
        rssState = createRssState(situation.situationId,
                                  situation.situationType,
                                  situation.objectId,
                                  situation.egoVehicleState.dynamics,
                                  IsSafe::Yes);
        result = true;
        break;
      case situation::SituationType::SameDirection:
      case situation::SituationType::OppositeDirection:
        result = mNonIntersectionChecker->calculateRssStateNonIntersection(mCurrentTimeIndex, situation, rssState);
        break;

      case situation::SituationType::IntersectionEgoHasPriority:
      case situation::SituationType::IntersectionObjectHasPriority:
      case situation::SituationType::IntersectionSamePriority:
        result = mIntersectionChecker->calculateRssStateIntersection(mCurrentTimeIndex, situation, rssState);
        break;
      case situation::SituationType::Unstructured:
        result = mUnstructuredSceneChecker->calculateRssStateUnstructured(
          mCurrentTimeIndex, situation, rssStateSnapshot.unstructuredSceneEgoInformation, rssState);
        break;
      default:
        spdlog::error("RssSituationChecking::checkSituationInputRangeChecked>> Invalid situation type {}", situation);
        result = false;
        break;
    }

    if (result)
    {
      rssStateSnapshot.individualResponses.push_back(rssState);
    }
  }
  catch (...)
  {
    spdlog::critical("RssSituationChecking::checkSituationInputRangeChecked>> Exception caught {}", situation);
    result = false;
  }

  return result;
}

bool RssSituationChecking::checkSituations(situation::SituationSnapshot const &situationSnapshot,
                                           state::RssStateSnapshot &rssStateSnapshot)
{
  if (!withinValidInputRange(situationSnapshot))
  {
    spdlog::error("RssSituationChecking::checkSituations>> Invalid input {}", situationSnapshot);
    return false;
  }
  if (!checkTimeIncreasingConsistently(situationSnapshot.timeIndex))
  {
    spdlog::error("RssSituationChecking::checkSituations>> Inconsistent time {}", situationSnapshot.timeIndex);
    return false;
  }
  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    rssStateSnapshot.timeIndex = situationSnapshot.timeIndex;
    rssStateSnapshot.defaultEgoVehicleRssDynamics = situationSnapshot.defaultEgoVehicleRssDynamics;
    rssStateSnapshot.individualResponses.clear();

    for (auto it = situationSnapshot.situations.begin(); (it != situationSnapshot.situations.end()) && result; ++it)
    {
      result = checkSituationInputRangeChecked(*it, rssStateSnapshot);
    }
  }
  catch (...)
  {
    spdlog::critical("RssSituationChecking::checkSituations>> Exception catched {}", situationSnapshot);
    result = false;
  }
  if (!result)
  {
    rssStateSnapshot.individualResponses.clear();
  }
  return result;
}

bool RssSituationChecking::checkTimeIncreasingConsistently(world::TimeIndex const &nextTimeIndex)
{
  bool timeIsIncreasing = false;
  if (mCurrentTimeIndex != nextTimeIndex)
  {
    // check for overflow
    world::TimeIndex const deltaTimeIndex = nextTimeIndex - mCurrentTimeIndex;
    if (deltaTimeIndex < (std::numeric_limits<world::TimeIndex>::max() / 2))
    {
      timeIsIncreasing = true;
    }
  }
  mCurrentTimeIndex = nextTimeIndex;
  return timeIsIncreasing;
}

} // namespace core
} // namespace rss
} // namespace ad
