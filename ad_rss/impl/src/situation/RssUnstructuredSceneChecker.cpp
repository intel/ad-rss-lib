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
  ::ad::rss::situation::VehicleState const &vehicleState,
  ::ad::rss::state::UnstructuredSceneStateInformation &stateInfo)
{
  unstructured::Polygon brake;
  unstructured::Polygon continueForward;
  auto result = calculateTrajectorySets(vehicleState, brake, continueForward);
  convertPolygon(brake, stateInfo.brakeTrajectorySet);
  convertPolygon(continueForward, stateInfo.continueForwardTrajectorySet);
  return result;
}

bool RssUnstructuredSceneChecker::calculateRssStateUnstructured(world::TimeIndex const &timeIndex,
                                                                Situation const &situation,
                                                                state::RssState &rssState)
{
  // TODO: does definition 20 mean that we need to use stopping time of ego-vehicle (instead of stopping time of other)
  auto result = calculateUnstructuredSceneStateInfo(situation.otherVehicleState,
                                                    rssState.unstructuredSceneState.rssStateInformation);
  if (result)
  {
    result = calculateState(situation, rssState.unstructuredSceneState);
  }
  return result;
}

void RssUnstructuredSceneChecker::convertPolygon(unstructured::Polygon const &polygon,
                                                 world::UnstructuredTrajectorySet &trajectorySet)
{
  for (auto const &point : polygon.outer())
  {
    ad::physics::Distance2D distance;
    distance.x = point.x();
    distance.y = point.y();
    trajectorySet.push_back(unstructured::toDistance(point));
  }
}

bool RssUnstructuredSceneChecker::calculateState(Situation const &situation, state::UnstructuredSceneRssState &rssState)
{
  bool result = true;

  // TODO get rid of duplicated calculation
  ::ad::rss::state::UnstructuredSceneStateInformation egoStateInfo;
  result = calculateUnstructuredSceneStateInfo(situation.egoVehicleState, egoStateInfo);

  if (result)
  {
    auto const &egoBrake = egoStateInfo.brakeTrajectorySet;
    auto const &egoContinueForward = egoStateInfo.continueForwardTrajectorySet;
    auto const &opponentBrake = rssState.rssStateInformation.brakeTrajectorySet;
    auto const &opponentContinueForward = rssState.rssStateInformation.continueForwardTrajectorySet;

    // check if distance is safe
    bool egoBrakeOtherContinueForwardOverlap = ad::rss::unstructured::collides(egoBrake, opponentContinueForward);
    bool otherBrakeEgoContinueForwardOverlap = ad::rss::unstructured::collides(opponentBrake, egoContinueForward);
    bool egoBrakeOtherBrakeOverlap = ad::rss::unstructured::collides(egoBrake, opponentBrake);

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
        ad::rss::unstructured::getAllowedDrivingCorridorWhenBothStopped(
          ad::rss::unstructured::toPoint(situation.otherVehicleState.objectState.centerPoint),
          ad::rss::unstructured::toPoint(situation.egoVehicleState.objectState.centerPoint),
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
  }

  return result;
}

bool RssUnstructuredSceneChecker::calculateTrajectorySets(::ad::rss::situation::VehicleState const &vehicleState,
                                                          ad::rss::unstructured::Polygon &brakePolygon,
                                                          ad::rss::unstructured::Polygon &continueForwardPolygon)
{
  bool result = true;
  switch (vehicleState.objectType)
  {
    case ::ad::rss::world::ObjectType::Invalid:
      result = false;
      break;
    case ::ad::rss::world::ObjectType::EgoVehicle:
    case ::ad::rss::world::ObjectType::OtherVehicle:
    {
      ad::rss::unstructured::TrajectoryVehicle trajectoryVehicle;
      result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
      break;
    }
    case ::ad::rss::world::ObjectType::Pedestrian:
    {
      ad::rss::unstructured::TrajectoryPedestrian trajectoryPedestrian;
      result = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
      break;
    }
    case ::ad::rss::world::ObjectType::ArtificialObject:
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

} // namespace situation
} // namespace rss
} // namespace ad
