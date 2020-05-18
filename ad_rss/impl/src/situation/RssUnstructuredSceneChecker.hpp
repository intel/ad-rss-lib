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
   */
  bool calculateRssStateUnstructured(world::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::UnstructuredSceneStateInformation const &egoStateInfo,
                                     state::RssState &rssState);

  /**
   * @brief Calculate the unstructured scene state info
   *
   * @param[in]  egoState state of the vehicle
   * @param[out] stateInfo the calculated state info
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateUnstructuredSceneStateInfo(situation::VehicleState const &egoState,
                                           state::UnstructuredSceneStateInformation &stateInfo) const;

  /**
   * @brief updates states, needs to be called after every situation checking loop
   */
  void updateStates();

private:
  bool calculateState(Situation const &situation,
                      state::UnstructuredSceneStateInformation const &egoStateInfo,
                      state::UnstructuredSceneRssState &rssState);

  bool calculateTrajectorySets(situation::VehicleState const &vehicleState,
                               unstructured::Polygon &brakePolygon,
                               unstructured::Polygon &continueForwardPolygon) const;

  /**
   * @brief calculate the angle range that is allowed to drive away
   *
   * @param[in]  otherVehicleLocation the location of the other vehicle
   * @param[in]  trajectorySet2 second trajectory set
   *
   * @returns true if trajectory sets collide, otherwise false
   */
  bool calculateDriveAwayAngle(unstructured::Point const &otherVehicleLocation,
                               unstructured::Point const &startingPoint,
                               ::ad::physics::Angle const &maxAllowedAngleWhenBothStopped,
                               ::ad::physics::AngleRange &range) const;

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
