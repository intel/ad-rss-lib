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
 * Note: Implements the checks and responses given by the definitions 19-22 of the RSS paper (arXiv:1708.06374v6)
 *
 * Class performs required check to if situation is safe
 * Class will maintain the previous state of the situation in order to provide the proper response.
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
  RssUnstructuredSceneChecker() = default;

  /**
   * @brief Destructor
   */
  ~RssUnstructuredSceneChecker() = default;

  /**
   * @brief Calculate safety checks and determine required rssState for unstructured situations
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] egoStateInfo  rssState of the ego vehicle (Be aware: only calculated/updated once per timestep)
   * @param[out] rssState  rssState of the vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateUnstructured(world::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::UnstructuredSceneStateInformation &egoStateInfo,
                                     state::RssState &rssState);

private:
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
   * @brief Calculate the unstructured scene state
   *
   * @param[in]  situation situation to analyze
   * @param[in]  egoStateInfo the trajectory sets of the ego vehicle
   * @param[in]  otherStateInfo the trajectory sets of the other traffic participant
   * @param[out] rssState the calculated rss state
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateState(Situation const &situation,
                      state::UnstructuredSceneStateInformation const &egoStateInfo,
                      state::UnstructuredSceneStateInformation const &otherStateInfo,
                      state::UnstructuredSceneRssState &rssState);

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
  /**
   * @brief the new states to be considered in next time step
   */
  OtherMustBrakeStateBeforeDangerThresholdTimeMap mNewOtherMustBrakeStatesBeforeDangerThresholdTime;
  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the state maps
   */
  world::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace rss
} // namespace ad
