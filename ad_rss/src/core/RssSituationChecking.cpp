// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssSituationChecking.hpp"
#include <algorithm>
#include <memory>
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/core/RssSituationSnapshotValidInputRange.hpp"

namespace ad {
namespace rss {
namespace core {

enum class IsSafe
{
  Yes,
  No
};

inline state::RssState createRssState(RelativeConstellationId const &constellation_id,
                                      world::ConstellationType const &constellation_type,
                                      world::ObjectId const &object_id,
                                      world::ObjectId const &ego_id,
                                      world::RssDynamics const &egoDynamics,
                                      IsSafe const &isSafeValue)
{
  bool const is_safe = (isSafeValue == IsSafe::Yes);
  state::RssStateInformation emptyRssStateInfo;
  emptyRssStateInfo.current_distance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.safe_distance = std::numeric_limits<physics::Distance>::max();
  emptyRssStateInfo.evaluator = state::RssStateEvaluator::None;

  state::RssState resultRssState;
  resultRssState.constellation_id = constellation_id;
  resultRssState.constellation_type = constellation_type;
  resultRssState.ego_id = ego_id;
  resultRssState.object_id = object_id;
  resultRssState.lateral_state_left.is_safe = is_safe;
  resultRssState.lateral_state_left.response
    = is_safe ? (::ad::rss::state::LateralResponse::None) : (::ad::rss::state::LateralResponse::BrakeMin);
  resultRssState.lateral_state_left.alpha_lat = egoDynamics.alpha_lat;
  resultRssState.lateral_state_left.rss_state_information = emptyRssStateInfo;
  resultRssState.lateral_state_right.is_safe = is_safe;
  resultRssState.lateral_state_right.response
    = is_safe ? (::ad::rss::state::LateralResponse::None) : (::ad::rss::state::LateralResponse::BrakeMin);
  resultRssState.lateral_state_right.alpha_lat = egoDynamics.alpha_lat;
  resultRssState.lateral_state_right.rss_state_information = emptyRssStateInfo;
  resultRssState.longitudinal_state.is_safe = is_safe;
  resultRssState.longitudinal_state.response
    = is_safe ? (::ad::rss::state::LongitudinalResponse::None) : (::ad::rss::state::LongitudinalResponse::BrakeMin);
  resultRssState.longitudinal_state.alpha_lon = egoDynamics.alpha_lon;
  resultRssState.longitudinal_state.rss_state_information = emptyRssStateInfo;
  resultRssState.unstructured_constellation_state.heading_range.begin = ad::physics::Angle(0.0);
  resultRssState.unstructured_constellation_state.heading_range.end = ad::physics::c2PI;
  resultRssState.unstructured_constellation_state.alpha_lon = egoDynamics.alpha_lon;
  resultRssState.unstructured_constellation_state.is_safe = is_safe;
  resultRssState.unstructured_constellation_state.response = is_safe
    ? (::ad::rss::state::UnstructuredConstellationResponse::None)
    : (::ad::rss::state::UnstructuredConstellationResponse::Brake);
  return resultRssState;
}

bool RssSituationChecking::checkConstellationInputRangeChecked(RelativeConstellation const &constellation,
                                                               state::RssStateSnapshot &rssStateSnapshot)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    auto rssState = createRssState(constellation.constellation_id,
                                   constellation.constellation_type,
                                   constellation.object_id,
                                   constellation.ego_id,
                                   constellation.ego_state.dynamics,
                                   IsSafe::No);

    switch (constellation.constellation_type)
    {
      case world::ConstellationType::NotRelevant:
        rssState = createRssState(constellation.constellation_id,
                                  constellation.constellation_type,
                                  constellation.object_id,
                                  constellation.ego_id,
                                  constellation.ego_state.dynamics,
                                  IsSafe::Yes);
        result = true;
        break;
      case world::ConstellationType::SameDirection:
      case world::ConstellationType::OppositeDirection:
        result = mNonIntersectionChecker.calculateRssStateNonIntersection(mCurrentTimeIndex, constellation, rssState);
        break;

      case world::ConstellationType::IntersectionEgoHasPriority:
      case world::ConstellationType::IntersectionObjectHasPriority:
      case world::ConstellationType::IntersectionSamePriority:
        result = mIntersectionChecker.calculateRssStateIntersection(mCurrentTimeIndex, constellation, rssState);
        break;
      case world::ConstellationType::Unstructured:
        result = mUnstructuredConstellationChecker.calculateRssStateUnstructured(
          mCurrentTimeIndex, constellation, rssStateSnapshot.unstructured_constellation_ego_information, rssState);
        break;
      default:
        core::getLogger()->error(
          "RssSituationChecking::checkConstellationInputRangeChecked>> Invalid constellation type {}", constellation);
        result = false;
        break;
    }

    if (result)
    {
      rssStateSnapshot.individual_responses.push_back(rssState);
    }
  }
  catch (std::exception &e)
  {
    core::getLogger()->critical(
      "RssSituationChecking::checkConstellationInputRangeChecked>> Exception caught '{}' {}", e.what(), constellation);
    result = false;
  }
  catch (...)
  {
    core::getLogger()->critical("RssSituationChecking::checkConstellationInputRangeChecked>> Exception caught {}",
                                constellation);
    result = false;
  }

  return result;
}

bool RssSituationChecking::checkSituation(RssSituationSnapshot const &situationSnapshot,
                                          state::RssStateSnapshot &rssStateSnapshot)
{
  if (!withinValidInputRange(situationSnapshot))
  {
    core::getLogger()->error("RssSituationChecking::checkConstellations>> Invalid input {}", situationSnapshot);
    return false;
  }
  if (!checkTimeIncreasingConsistently(situationSnapshot.time_index))
  {
    core::getLogger()->error("RssSituationChecking::checkConstellations>> Inconsistent time {}",
                             situationSnapshot.time_index);
    return false;
  }
  bool result = true;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    rssStateSnapshot.time_index = situationSnapshot.time_index;
    rssStateSnapshot.default_ego_vehicle_rss_dynamics = situationSnapshot.default_ego_vehicle_rss_dynamics;
    rssStateSnapshot.individual_responses.clear();
    rssStateSnapshot.unstructured_constellation_ego_information.brake_trajectory_set.clear();
    rssStateSnapshot.unstructured_constellation_ego_information.continue_forward_trajectory_set.clear();

    for (auto it = situationSnapshot.constellations.begin(); (it != situationSnapshot.constellations.end()) && result;
         ++it)
    {
      result = checkConstellationInputRangeChecked(*it, rssStateSnapshot);
    }
  }
  catch (...)
  {
    core::getLogger()->critical("RssSituationChecking::checkConstellations>> Exception caught {}", situationSnapshot);
    result = false;
  }
  if (!result)
  {
    rssStateSnapshot.individual_responses.clear();
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
