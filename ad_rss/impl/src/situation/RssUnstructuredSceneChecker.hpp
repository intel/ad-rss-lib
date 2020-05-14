// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include <cstdint>
#include <map>
#include "ad/rss/situation/Situation.hpp"
#include "ad/rss/state/RssState.hpp"
#include "ad/rss/unstructured/Geometry.hpp"
#include "ad/rss/world/TimeIndex.hpp"

class TrafficParticipant;

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * @brief Class to check whether an unstructured scene is safe and to determine the proper response for the situation
 *
 * Class performs required check to if situation is safe
 * TODOClass will maintain the previous state of the situation in order to provide the proper response.
 */
class RssUnstructuredSceneChecker
{
public:
  enum class SafeState
  {
    safe,
    unsafeBrakeOtherHasPrio,
    unsafeBrakeEgoHasPrio,
    unsafeBrakeBoth
  };

  enum class DrivingMode
  {
    DriveAway,
    ContinueForward,
    Brake,
    Invalid
  };
  /**
   * @brief Constructor
   */
  RssUnstructuredSceneChecker();

  /**
   * @brief Destructor
   */
  ~RssUnstructuredSceneChecker();

  /**
   * @brief Calculate safety checks and determine required rssState for unstructured situations
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateRssStateUnstructured(world::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::RssState &rssState);

  bool calculateUnstructuredSceneStateInfo(::ad::rss::situation::VehicleState const &egoState,
                                           ::ad::rss::state::UnstructuredSceneStateInformation &stateInfo);

  void updateStates();

private:
  void convertPolygon(unstructured::Polygon const &polygon, world::UnstructuredTrajectorySet &trajectorySet);

  bool calculateState(Situation const &situation, state::UnstructuredSceneRssState &rssState);

  bool calculateTrajectorySets(::ad::rss::situation::VehicleState const &vehicleState,
                               ad::rss::unstructured::Polygon &brakePolygon,
                               ad::rss::unstructured::Polygon &continueForwardPolygon);

  /**
   * @brief typedef for the mapping of situation id to the corresponding otherMustBrake value before the danger
   * threshold time
   */
  typedef std::map<situation::SituationId, bool> OtherMustBrakeStateBeforeDangerThresholdTimeMap;

  /**
   * @brief the state of each situation before the danger threshold time
   *
   * Needs to be stored to check which is the required behaviour to solve the situation
   */
  OtherMustBrakeStateBeforeDangerThresholdTimeMap mOtherMustBrakeStatesBeforeDangerThresholdTime;
  OtherMustBrakeStateBeforeDangerThresholdTimeMap mNewOtherMustBrakeStatesBeforeDangerThresholdTime;
};

} // namespace situation
} // namespace rss
} // namespace ad
