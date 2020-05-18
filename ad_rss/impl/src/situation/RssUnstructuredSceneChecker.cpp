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
#include "RssSituation.hpp"
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

namespace ad {

using physics::Duration;

namespace rss {
namespace situation {

using situation::calculateTimeToCoverDistance;

RssUnstructuredSceneChecker::RssUnstructuredSceneChecker()
{
}

RssUnstructuredSceneChecker::~RssUnstructuredSceneChecker()
{
}

bool RssUnstructuredSceneChecker::calculateUnstructuredSceneStateInfo(
  situation::VehicleState const &vehicleState, state::UnstructuredSceneStateInformation &stateInfo) const
{
  unstructured::Polygon brake;
  unstructured::Polygon continueForward;
  auto result = calculateTrajectorySets(vehicleState, brake, continueForward);
  unstructured::toTrajectorySet(brake, stateInfo.brakeTrajectorySet);
  unstructured::toTrajectorySet(continueForward, stateInfo.continueForwardTrajectorySet);
  return result;
}

bool RssUnstructuredSceneChecker::calculateRssStateUnstructured(
  world::TimeIndex const &timeIndex,
  Situation const &situation,
  state::UnstructuredSceneStateInformation const &egoStateInfo,
  state::RssState &rssState)
{
  // TODO: does definition 20 mean that we need to use stopping time of ego-vehicle (instead of stopping time of other)
  auto result = calculateUnstructuredSceneStateInfo(situation.otherVehicleState,
                                                    rssState.unstructuredSceneState.rssStateInformation);
  if (result)
  {
    result = calculateState(situation, egoStateInfo, rssState.unstructuredSceneState);
  }
  return result;
}

bool RssUnstructuredSceneChecker::calculateState(Situation const &situation,
                                                 state::UnstructuredSceneStateInformation const &egoStateInfo,
                                                 state::UnstructuredSceneRssState &rssState)
{
  bool result = true;
  auto const &egoBrake = egoStateInfo.brakeTrajectorySet;
  auto const &egoContinueForward = egoStateInfo.continueForwardTrajectorySet;
  auto const &opponentBrake = rssState.rssStateInformation.brakeTrajectorySet;
  auto const &opponentContinueForward = rssState.rssStateInformation.continueForwardTrajectorySet;

  // check if distance is safe
  bool egoBrakeOtherContinueForwardOverlap = unstructured::collides(egoBrake, opponentContinueForward);
  bool otherBrakeEgoContinueForwardOverlap = unstructured::collides(opponentBrake, egoContinueForward);
  bool egoBrakeOtherBrakeOverlap = unstructured::collides(egoBrake, opponentBrake);

  bool isSafeEgoMustBrake = !egoBrakeOtherContinueForwardOverlap && otherBrakeEgoContinueForwardOverlap;
  bool isSafeOtherMustBrake = !otherBrakeEgoContinueForwardOverlap && egoBrakeOtherContinueForwardOverlap;
  bool isSafeBrakeBoth = !egoBrakeOtherBrakeOverlap;

  auto isSafe = isSafeEgoMustBrake || isSafeOtherMustBrake || isSafeBrakeBoth;

  DrivingMode mode{DrivingMode::Invalid};

  if (isSafe)
  {
    SPDLOG_INFO("Situation {} safe. Store value otherMustBrake: {}",
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
      SPDLOG_INFO("Situation {} Rule 1: both stopped, unsafe distance -> drive away.", situation.situationId);
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
        SPDLOG_INFO("Situation {} Rule 2: opponent is moving -> continue forward", situation.situationId);
        mode = DrivingMode::ContinueForward;
      }
      else
      {
        SPDLOG_INFO("Situation {} Rule 2: opponent is stopped -> drive away", situation.situationId);
        mode = DrivingMode::DriveAway;
      }
    }

    // Rule 3: Brake
    if (mode == DrivingMode::Invalid)
    {
      SPDLOG_INFO("Situation {} Rule 3: brake (brake collides with other brake)", situation.situationId);
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
  }

  return result;
}

bool RssUnstructuredSceneChecker::calculateTrajectorySets(situation::VehicleState const &vehicleState,
                                                          unstructured::Polygon &brakePolygon,
                                                          unstructured::Polygon &continueForwardPolygon) const
{
  bool result = true;
  switch (vehicleState.objectType)
  {
    case world::ObjectType::Invalid:
      result = false;
      break;
    case world::ObjectType::EgoVehicle:
    case world::ObjectType::OtherVehicle:
    {
      unstructured::TrajectoryVehicle trajectoryVehicle;
      result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
      break;
    }
    case world::ObjectType::Pedestrian:
    {
      unstructured::TrajectoryPedestrian trajectoryPedestrian;
      result = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
      break;
    }
    case world::ObjectType::ArtificialObject:
      result = false;
      break;
  }
  return result;
}

void RssUnstructuredSceneChecker::updateStates()
{
  mOtherMustBrakeStatesBeforeDangerThresholdTime.clear();
  mOtherMustBrakeStatesBeforeDangerThresholdTime.swap(mNewOtherMustBrakeStatesBeforeDangerThresholdTime);
  mNewOtherMustBrakeStatesBeforeDangerThresholdTime.clear();
}

bool RssUnstructuredSceneChecker::calculateDriveAwayAngle(unstructured::Point const &otherVehicleLocation,
                                                          unstructured::Point const &startingPoint,
                                                          ::ad::physics::Angle const &maxAllowedAngleWhenBothStopped,
                                                          ::ad::physics::AngleRange &range) const
{
  auto substractedLocationVector = unstructured::Point((startingPoint.x() - otherVehicleLocation.x()),
                                                       (startingPoint.y() - otherVehicleLocation.y()));

  // get vector angle
  double substractedLocationVectorAngle = std::atan2(static_cast<double>(substractedLocationVector.y()),
                                                     static_cast<double>(substractedLocationVector.x()));

  range.minimum = unstructured::normalizeAngle(substractedLocationVectorAngle - maxAllowedAngleWhenBothStopped);
  range.maximum = unstructured::normalizeAngle(substractedLocationVectorAngle + maxAllowedAngleWhenBothStopped);
  return true;
}

} // namespace situation
} // namespace rss
} // namespace ad
