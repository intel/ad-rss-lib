// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssUnstructuredSceneChecker.hpp"
#include <cmath>
#include <limits>
#include "../unstructured/TrajectoryPedestrian.hpp"
#include "../unstructured/TrajectoryVehicle.hpp"
#include "RssFormulas.hpp"
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

namespace ad {

namespace rss {
namespace situation {

using situation::calculateTimeToCoverDistance;

bool RssUnstructuredSceneChecker::calculateUnstructuredSceneStateInfo(
  situation::VehicleState const &vehicleState, state::UnstructuredSceneStateInformation &stateInfo) const
{
  bool result = true;
  unstructured::Polygon brake;
  unstructured::Polygon continueForward;

  switch (vehicleState.objectType)
  {
    case world::ObjectType::Invalid:
      result = false;
      break;
    case world::ObjectType::EgoVehicle:
    case world::ObjectType::OtherVehicle:
    {
      unstructured::TrajectoryVehicle trajectoryVehicle;
      result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brake, continueForward);
      break;
    }
    case world::ObjectType::Pedestrian:
    {
      unstructured::TrajectoryPedestrian trajectoryPedestrian;
      result = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brake, continueForward);
      break;
    }
    case world::ObjectType::ArtificialObject:
      result = false;
      break;
    default:
      result = false;
      throw std::runtime_error(
        "RssUnstructuredSceneChecker::calculateUnstructuredSceneStateInfo>> invalid object type");
      break;
  }

  if (result)
  {
    unstructured::toTrajectorySet(brake, stateInfo.brakeTrajectorySet);
    unstructured::toTrajectorySet(continueForward, stateInfo.continueForwardTrajectorySet);
  }
  return result;
}

bool RssUnstructuredSceneChecker::calculateRssStateUnstructured(world::TimeIndex const &timeIndex,
                                                                Situation const &situation,
                                                                state::UnstructuredSceneStateInformation &egoStateInfo,
                                                                state::RssState &rssState)
{
  bool result = true;
  if (timeIndex != mCurrentTimeIndex)
  {
    mOtherMustBrakeStatesBeforeDangerThresholdTime.swap(mNewOtherMustBrakeStatesBeforeDangerThresholdTime);
    mNewOtherMustBrakeStatesBeforeDangerThresholdTime.clear();
    mCurrentTimeIndex = timeIndex;

    // ego state only has to be calculated once per time step
    result = calculateUnstructuredSceneStateInfo(situation.egoVehicleState, egoStateInfo);
  }

  state::UnstructuredSceneStateInformation otherStateInfo;
  if (result)
  {
    result = calculateUnstructuredSceneStateInfo(situation.otherVehicleState, otherStateInfo);
  }

  if (result)
  {
    result = calculateState(situation, egoStateInfo, otherStateInfo, rssState.unstructuredSceneState);
  }
  return result;
}

bool RssUnstructuredSceneChecker::calculateState(Situation const &situation,
                                                 state::UnstructuredSceneStateInformation const &egoStateInfo,
                                                 state::UnstructuredSceneStateInformation const &otherStateInfo,
                                                 state::UnstructuredSceneRssState &rssState)
{
  bool result = true;
  auto const &egoBrake = egoStateInfo.brakeTrajectorySet;
  auto const &egoContinueForward = egoStateInfo.continueForwardTrajectorySet;
  auto const &otherBrake = otherStateInfo.brakeTrajectorySet;
  auto const &otherContinueForward = otherStateInfo.continueForwardTrajectorySet;

  if (egoBrake.empty() || egoContinueForward.empty() || otherBrake.empty() || otherContinueForward.empty())
  {
    spdlog::info("Situation {} refers to empty trajectory sets", situation.situationId);
    return false;
  }

  // check if distance is safe
  bool egoBrakeOtherContinueForwardOverlap = unstructured::collides(egoBrake, otherContinueForward);
  bool otherBrakeEgoContinueForwardOverlap = unstructured::collides(otherBrake, egoContinueForward);
  bool egoBrakeOtherBrakeOverlap = unstructured::collides(egoBrake, otherBrake);

  bool isSafeEgoMustBrake = !egoBrakeOtherContinueForwardOverlap && otherBrakeEgoContinueForwardOverlap;
  bool isSafeOtherMustBrake = !otherBrakeEgoContinueForwardOverlap && egoBrakeOtherContinueForwardOverlap;
  bool isSafeBrakeBoth = !egoBrakeOtherBrakeOverlap;

  auto isSafe = isSafeEgoMustBrake || isSafeOtherMustBrake || isSafeBrakeBoth;

  DrivingMode mode{DrivingMode::Invalid};

  if (isSafe)
  {
    spdlog::info("Situation {} safe. Store value otherMustBrake: {}",
                 situation.situationId,
                 isSafeOtherMustBrake ? "true" : "false");
    mNewOtherMustBrakeStatesBeforeDangerThresholdTime[situation.situationId] = isSafeOtherMustBrake;
    mode = DrivingMode::ContinueForward;
  }
  else
  {
    // not safe
    bool lastOtherMustBrake = false;
    auto foundStateIt = mOtherMustBrakeStatesBeforeDangerThresholdTime.find(situation.situationId);
    if (foundStateIt != mOtherMustBrakeStatesBeforeDangerThresholdTime.end())
    {
      lastOtherMustBrake = foundStateIt->second;
      mNewOtherMustBrakeStatesBeforeDangerThresholdTime[situation.situationId] = lastOtherMustBrake;
    }

    // Rule 1: If both cars were already at a full stop, then one can drive away from other vehicle
    if (((situation.egoVehicleState.objectState.speed == ad::physics::Speed(0.))
         && (situation.otherVehicleState.objectState.speed == ad::physics::Speed(0.))))
    {
      spdlog::info("Situation {} Rule 1: both stopped, unsafe distance -> drive away.", situation.situationId);
      mode = DrivingMode::DriveAway;
    }

    // Rule 2: If:
    // - ego-brake and other-continue-forward not overlap
    // and
    // - other-brake and ego-continue-forward overlap
    if ((mode == DrivingMode::Invalid) && lastOtherMustBrake)
    {
      if (situation.egoVehicleState.objectState.speed > ad::physics::Speed(0.))
      {
        spdlog::info("Situation {} Rule 2: opponent is moving -> continue forward", situation.situationId);
        mode = DrivingMode::ContinueForward;
      }
      else
      {
        spdlog::info("Situation {} Rule 2: opponent is stopped -> drive away", situation.situationId);
        mode = DrivingMode::DriveAway;
      }
    }

    // Rule 3: Brake
    if (mode == DrivingMode::Invalid)
    {
      spdlog::info("Situation {} Rule 3: brake (brake collides with other brake)", situation.situationId);
      mode = DrivingMode::Brake;
    }
  }

  switch (mode)
  {
    case DrivingMode::ContinueForward:
      rssState.response = state::UnstructuredSceneResponse::ContinueForward;
      rssState.isSafe = true;
      break;
    case DrivingMode::Brake:
      rssState.response = state::UnstructuredSceneResponse::Brake;
      rssState.isSafe = false;
      break;
    case DrivingMode::DriveAway:
    {
      calculateDriveAwayAngle(unstructured::toPoint(situation.otherVehicleState.objectState.centerPoint),
                              unstructured::toPoint(situation.egoVehicleState.objectState.centerPoint),
                              situation.egoVehicleState.dynamics.unstructuredSettings.driveAwayMaxAngle,
                              rssState.headingRange);

      rssState.response = state::UnstructuredSceneResponse::DriveAway;
      rssState.isSafe = false;
      break;
    }
    case DrivingMode::Invalid:
      result = false;
      break;
    default:
      result = false;
      throw std::runtime_error("RssUnstructuredSceneChecker::calculateState>> invalid driving mode");
      break;
  }

  return result;
}

bool RssUnstructuredSceneChecker::calculateDriveAwayAngle(unstructured::Point const &otherVehicleLocation,
                                                          unstructured::Point const &startingPoint,
                                                          ::ad::physics::Angle const &maxAllowedAngleWhenBothStopped,
                                                          ::ad::physics::AngleRange &range) const
{
  auto const substractedLocationVector = startingPoint - otherVehicleLocation;

  // get vector angle
  auto const substractedLocationVectorAngle = ::ad::physics::Angle(
    std::atan2(static_cast<double>(substractedLocationVector.y()), static_cast<double>(substractedLocationVector.x())));

  range.minimum = physics::normalizeAngle(substractedLocationVectorAngle - maxAllowedAngleWhenBothStopped);
  range.maximum = physics::normalizeAngle(substractedLocationVectorAngle + maxAllowedAngleWhenBothStopped);
  return true;
}

} // namespace situation
} // namespace rss
} // namespace ad
