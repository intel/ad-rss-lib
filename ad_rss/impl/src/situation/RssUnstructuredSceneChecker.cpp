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
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/situation/RssFormulas.hpp"
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

  if (result)
  {
    result = calculateUnstructuredSceneStateInfo(situation.otherVehicleState,
                                                 rssState.unstructuredSceneState.rssStateInformation);
  }

  if (result)
  {
    result = calculateState(
      situation, egoStateInfo, rssState.unstructuredSceneState.rssStateInformation, rssState.unstructuredSceneState);
  }

  if (result)
  {
    auto foundDriveAwayStateIt = mDriveAwayStateMap.find(situation.situationId);

    if (foundDriveAwayStateIt != mDriveAwayStateMap.end())
    {
      auto steeringAngle = normalizeAngleSigned(situation.egoVehicleState.objectState.yaw
                                                + situation.egoVehicleState.objectState.steeringAngle);
      bool keepDriveAwayState = true;

      if (rssState.unstructuredSceneState.isSafe)
      {
        spdlog::trace("Situation {} Remove previous drive-away state as situation became safe again.",
                      situation.situationId);
        keepDriveAwayState = false;
      }
      else if (situation.otherVehicleState.objectState.centerPoint != foundDriveAwayStateIt->second.otherPosition)
      {
        spdlog::trace("Situation {} Remove previous drive-away state as other object has moved.",
                      situation.situationId);
        keepDriveAwayState = false;
      }
      else if (!unstructured::isInsideHeadingRange(steeringAngle, foundDriveAwayStateIt->second.allowedHeadingRange))
      {
        spdlog::trace("Situation {} Remove previous drive-away state as steering angle {} is not within range {}.",
                      situation.situationId,
                      steeringAngle,
                      foundDriveAwayStateIt->second.allowedHeadingRange);
        keepDriveAwayState = false;
      }

      if (keepDriveAwayState)
      {
        spdlog::debug("Situation {} ego vehicle driving away with previously allowed heading {}.",
                      situation.situationId,
                      foundDriveAwayStateIt->second.allowedHeadingRange);
        rssState.unstructuredSceneState.response = state::UnstructuredSceneResponse::DriveAway;
        rssState.unstructuredSceneState.isSafe = false;
        rssState.unstructuredSceneState.headingRange = foundDriveAwayStateIt->second.allowedHeadingRange;
      }
      else
      {
        mDriveAwayStateMap.erase(foundDriveAwayStateIt);
      }
    }
    else
    {
      if (rssState.unstructuredSceneState.response == state::UnstructuredSceneResponse::DriveAway)
      {
        spdlog::debug("Situation {} store drive-away state with allowed heading range {}.",
                      situation.situationId,
                      rssState.unstructuredSceneState.headingRange);
        DriveAwayState driveAwayState;
        driveAwayState.allowedHeadingRange = rssState.unstructuredSceneState.headingRange;
        driveAwayState.otherPosition = situation.otherVehicleState.objectState.centerPoint;
        mDriveAwayStateMap[situation.situationId] = driveAwayState;
      }
    }
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
    spdlog::warn("Situation {} refers to empty trajectory sets", situation.situationId);
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

  spdlog::trace("Situation {} safe check: isSafeEgoMustBrake: {}, isSafeOtherMustBrake: {}, isSafeBrakeBoth: {}",
                situation.situationId,
                isSafeEgoMustBrake,
                isSafeOtherMustBrake,
                isSafeBrakeBoth);
  DrivingMode mode{DrivingMode::Invalid};

  if (isSafe)
  {
    spdlog::debug("Situation {} safe. Store value otherMustBrake: {}",
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
    if (((situation.egoVehicleState.objectState.speed == physics::Speed(0.))
         && (situation.otherVehicleState.objectState.speed == physics::Speed(0.))))
    {
      spdlog::debug("Situation {} Rule 1: both stopped, unsafe distance -> drive away.", situation.situationId);
      mode = DrivingMode::DriveAway;
    }

    // Rule 2: If:
    // - ego-brake and other-continue-forward not overlap
    // and
    // - other-brake and ego-continue-forward overlap
    if ((mode == DrivingMode::Invalid) && lastOtherMustBrake)
    {
      if (situation.egoVehicleState.objectState.speed > physics::Speed(0.))
      {
        spdlog::debug("Situation {} Rule 2: opponent is moving -> continue forward", situation.situationId);
        mode = DrivingMode::ContinueForward;
      }
      else
      {
        spdlog::debug("Situation {} Rule 2: opponent is stopped -> drive away", situation.situationId);
        mode = DrivingMode::DriveAway;
      }
    }

    // Rule 3: Brake
    if (mode == DrivingMode::Invalid)
    {
      spdlog::debug("Situation {} Rule 3: brake (brake collides with other brake)", situation.situationId);
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
      calculateDriveAwayAngle(unstructured::toPoint(situation.egoVehicleState.objectState.centerPoint),
                              unstructured::toPoint(situation.otherVehicleState.objectState.centerPoint),
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

bool RssUnstructuredSceneChecker::calculateDriveAwayAngle(unstructured::Point const &egoVehicleLocation,
                                                          unstructured::Point const &otherVehicleLocation,
                                                          physics::Angle const &maxAllowedAngleWhenBothStopped,
                                                          state::HeadingRange &range) const
{
  auto const substractedLocationVector = egoVehicleLocation - otherVehicleLocation;

  // get vector angle
  auto const substractedLocationVectorAngle = physics::Angle(
    std::atan2(static_cast<double>(substractedLocationVector.y()), static_cast<double>(substractedLocationVector.x())));

  range.begin = physics::normalizeAngleSigned(substractedLocationVectorAngle - maxAllowedAngleWhenBothStopped);
  range.end = physics::normalizeAngleSigned(substractedLocationVectorAngle + maxAllowedAngleWhenBothStopped);
  return true;
}

} // namespace situation
} // namespace rss
} // namespace ad
