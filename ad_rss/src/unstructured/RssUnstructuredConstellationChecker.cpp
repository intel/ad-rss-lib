// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/unstructured/RssUnstructuredConstellationChecker.hpp"
#include <cmath>
#include <limits>
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/core/Physics.hpp"
#include "ad/rss/unstructured/TrajectoryPedestrian.hpp"
#include "ad/rss/unstructured/TrajectoryVehicle.hpp"

namespace ad {
namespace rss {
namespace unstructured {

const ad::physics::Speed c_drive_away_stopped_max_speed(0.1);

RssUnstructuredConstellationChecker::RssUnstructuredConstellationChecker()
{
  CalculateTrajectorySetsCallbackFunctionType trajectoryVehicleCallback
    = [](::ad::rss::core::RelativeConstellation const &constellation,
         ::ad::rss::world::ObjectId const &objectId,
         core::RelativeObjectState const &vehicleState,
         ::ad::geometry::Polygon &brakePolygon,
         ::ad::geometry::Polygon &continueForwardPolygon) -> bool {
    (void)constellation;
    (void)objectId;
    unstructured::TrajectoryVehicle trajectoryVehicle;
    bool result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
    return result;
  };
  CalculateTrajectorySetsCallbackFunctionType trajectoryPedestrianCallback
    = [](::ad::rss::core::RelativeConstellation const &constellation,
         ::ad::rss::world::ObjectId const &objectId,
         core::RelativeObjectState const &vehicleState,
         ::ad::geometry::Polygon &brakePolygon,
         ::ad::geometry::Polygon &continueForwardPolygon) -> bool {
    (void)constellation;
    (void)objectId;
    unstructured::TrajectoryPedestrian trajectoryPedestrian;
    bool result = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
    return result;
  };
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::EgoVehicle] = trajectoryVehicleCallback;
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::Bicycle] = trajectoryVehicleCallback;
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::OtherObject] = trajectoryVehicleCallback;
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::OtherVehicle] = trajectoryVehicleCallback;
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::ArtificialVehicle] = trajectoryVehicleCallback;

  mCalculateTrajectorySetsCallbackMap[world::ObjectType::Pedestrian] = trajectoryPedestrianCallback;
  mCalculateTrajectorySetsCallbackMap[world::ObjectType::ArtificialPedestrian] = trajectoryPedestrianCallback;
}

RssUnstructuredConstellationChecker::RssUnstructuredConstellationChecker(
  RssUnstructuredConstellationChecker const &other)
  : mOtherMustBrakeStatesBeforeDangerThresholdTime(other.mOtherMustBrakeStatesBeforeDangerThresholdTime)
  , mNewOtherMustBrakeStatesBeforeDangerThresholdTime(other.mNewOtherMustBrakeStatesBeforeDangerThresholdTime)
  , mCurrentTimeIndex(other.mCurrentTimeIndex)
  , mDriveAwayStateMap(other.mDriveAwayStateMap)
{
  core::shared_lock_guard const shared_lock(other.mCallbackRwLock);
  mCalculateTrajectorySetsCallbackMap = other.mCalculateTrajectorySetsCallbackMap;
}

RssUnstructuredConstellationChecker &
RssUnstructuredConstellationChecker::operator=(RssUnstructuredConstellationChecker const &other)
{
  core::shared_lock_guard const shared_lock(other.mCallbackRwLock);

  mOtherMustBrakeStatesBeforeDangerThresholdTime = other.mOtherMustBrakeStatesBeforeDangerThresholdTime;
  mNewOtherMustBrakeStatesBeforeDangerThresholdTime = other.mNewOtherMustBrakeStatesBeforeDangerThresholdTime;
  mCurrentTimeIndex = other.mCurrentTimeIndex;
  mDriveAwayStateMap = other.mDriveAwayStateMap;
  mCalculateTrajectorySetsCallbackMap = other.mCalculateTrajectorySetsCallbackMap;
  return *this;
}

bool RssUnstructuredConstellationChecker::calculateUnstructuredConstellationStateInfo(
  ::ad::rss::core::RelativeConstellation const &constellation,
  ::ad::rss::world::ObjectId const &objectId,
  core::RelativeObjectState const &vehicleState,
  state::UnstructuredConstellationStateInformation &stateInfo) const
{
  bool result = true;
  ::ad::geometry::Polygon brake;
  ::ad::geometry::Polygon continueForward;

  core::shared_lock_guard const shared_lock(mCallbackRwLock);
  auto callbackIter = mCalculateTrajectorySetsCallbackMap.find(vehicleState.object_type);
  if (callbackIter != mCalculateTrajectorySetsCallbackMap.end())
  {
    result = callbackIter->second(constellation, objectId, vehicleState, brake, continueForward);
  }
  else
  {
    result = false;
    core::getLogger()->error("RssUnstructuredConstellationChecker::calculateUnstructuredConstellationStateInfo>> "
                             "object type {} not yet supported for unstructured calculation.",
                             std::to_string(vehicleState.object_type));
  }

  if (result)
  {
    ::ad::geometry::toTrajectorySet(brake, stateInfo.brake_trajectory_set);
    ::ad::geometry::toTrajectorySet(continueForward, stateInfo.continue_forward_trajectory_set);
    stateInfo.considered_drive_away_steering_angle
      = normalizeAngleSigned(constellation.ego_state.unstructured_object_state.yaw
                             + constellation.ego_state.unstructured_object_state.steering_angle);
  }
  return result;
}

bool RssUnstructuredConstellationChecker::calculateRssStateUnstructured(
  world::TimeIndex const &time_index,
  core::RelativeConstellation const &constellation,
  state::UnstructuredConstellationStateInformation &egoStateInfo,
  state::RssState &rssState)
{
  bool result = true;

  if (time_index != mCurrentTimeIndex)
  {
    mOtherMustBrakeStatesBeforeDangerThresholdTime.swap(mNewOtherMustBrakeStatesBeforeDangerThresholdTime);
    mNewOtherMustBrakeStatesBeforeDangerThresholdTime.clear();
    mCurrentTimeIndex = time_index;

    // ego state only has to be calculated once per time step
    result = calculateUnstructuredConstellationStateInfo(
      constellation, constellation.ego_id, constellation.ego_state, egoStateInfo);
  }

  if (result)
  {
    result
      = calculateUnstructuredConstellationStateInfo(constellation,
                                                    constellation.object_id,
                                                    constellation.other_state,
                                                    rssState.unstructured_constellation_state.rss_state_information);
  }

  if (result)
  {
    result = calculateState(constellation,
                            egoStateInfo,
                            rssState.unstructured_constellation_state.rss_state_information,
                            rssState.unstructured_constellation_state);
  }

  if (result)
  {
    if (rssState.unstructured_constellation_state.response == state::UnstructuredConstellationResponse::DriveAway)
    {
      core::getLogger()->debug(
        "Unstructured Constellation[{}->{}:{}] store drive-away state with allowed heading range {}.",
        constellation.ego_id,
        constellation.object_id,
        constellation.constellation_id,
        rssState.unstructured_constellation_state.heading_range);
      DriveAwayState driveAwayState;
      driveAwayState.allowedHeadingRange = rssState.unstructured_constellation_state.heading_range;
      driveAwayState.otherPosition = constellation.other_state.unstructured_object_state.center_point;
      mDriveAwayStateMap[constellation.constellation_id] = driveAwayState;
    }
    else
    {
      auto foundDriveAwayStateIt = mDriveAwayStateMap.find(constellation.constellation_id);

      if (foundDriveAwayStateIt != mDriveAwayStateMap.end())
      {
        bool keepDriveAwayState = true;

        if (rssState.unstructured_constellation_state.is_safe)
        {
          core::getLogger()->trace("Unstructured Constellation[{}->{}:{}] Remove previous drive-away state as "
                                   "constellation became safe again.",
                                   constellation.ego_id,
                                   constellation.object_id,
                                   constellation.constellation_id);
          keepDriveAwayState = false;
        }
        else if (constellation.other_state.unstructured_object_state.center_point
                 != foundDriveAwayStateIt->second.otherPosition)
        {
          core::getLogger()->trace(
            "Unstructured Constellation[{}->{}:{}] Remove previous drive-away state as other object has moved.",
            constellation.ego_id,
            constellation.object_id,
            constellation.constellation_id);
          keepDriveAwayState = false;
        }
        else if (!::ad::geometry::isInsideHeadingRange(
                   rssState.unstructured_constellation_state.rss_state_information.considered_drive_away_steering_angle,
                   foundDriveAwayStateIt->second.allowedHeadingRange))
        {
          core::getLogger()->trace(
            "Unstructured Constellation[{}->{}:{}] Remove previous drive-away state as steering "
            "angle {} is not within range {}.",
            constellation.ego_id,
            constellation.object_id,
            constellation.constellation_id,
            rssState.unstructured_constellation_state.rss_state_information.considered_drive_away_steering_angle,
            foundDriveAwayStateIt->second.allowedHeadingRange);
          keepDriveAwayState = false;
        }

        if (keepDriveAwayState)
        {
          core::getLogger()->debug(
            "Unstructured Constellation[{}->{}:{}] ego vehicle driving away with previously allowed heading {}.",
            constellation.ego_id,
            constellation.object_id,
            constellation.constellation_id,
            foundDriveAwayStateIt->second.allowedHeadingRange);
          rssState.unstructured_constellation_state.response = state::UnstructuredConstellationResponse::DriveAway;
          rssState.unstructured_constellation_state.is_safe = false;
          rssState.unstructured_constellation_state.heading_range = foundDriveAwayStateIt->second.allowedHeadingRange;
        }
        else
        {
          mDriveAwayStateMap.erase(foundDriveAwayStateIt);
        }
      }
    }
  }
  return result;
}

bool RssUnstructuredConstellationChecker::calculateState(
  core::RelativeConstellation const &constellation,
  state::UnstructuredConstellationStateInformation const &egoStateInfo,
  state::UnstructuredConstellationStateInformation const &otherStateInfo,
  state::UnstructuredConstellationRssState &rssState)
{
  bool result = true;
  auto const &egoBrake = egoStateInfo.brake_trajectory_set;
  auto const &egoContinueForward = egoStateInfo.continue_forward_trajectory_set;
  auto const &otherBrake = otherStateInfo.brake_trajectory_set;
  auto const &otherContinueForward = otherStateInfo.continue_forward_trajectory_set;

  if (egoBrake.empty() || egoContinueForward.empty() || otherBrake.empty() || otherContinueForward.empty())
  {
    core::getLogger()->warn("Unstructured Constellation[{}->{}:{}] refers to empty trajectory sets",
                            constellation.ego_id,
                            constellation.object_id,
                            constellation.constellation_id);
    return false;
  }

  // check if distance is safe
  bool egoBrakeOtherContinueForwardOverlap = ::ad::geometry::collides(egoBrake, otherContinueForward);
  bool otherBrakeEgoContinueForwardOverlap = ::ad::geometry::collides(otherBrake, egoContinueForward);
  bool egoBrakeOtherBrakeOverlap = ::ad::geometry::collides(egoBrake, otherBrake);

  bool isSafeEgoMustBrake = !egoBrakeOtherContinueForwardOverlap && otherBrakeEgoContinueForwardOverlap;
  bool isSafeOtherMustBrake = !otherBrakeEgoContinueForwardOverlap && egoBrakeOtherContinueForwardOverlap;
  bool isSafeBrakeBoth = !egoBrakeOtherBrakeOverlap;

  auto is_safe = isSafeEgoMustBrake || isSafeOtherMustBrake || isSafeBrakeBoth;

  core::getLogger()->trace("Unstructured Constellation[{}->{}:{}] safe check: isSafeEgoMustBrake: {}, "
                           "isSafeOtherMustBrake: {}, isSafeBrakeBoth: {}",
                           constellation.ego_id,
                           constellation.object_id,
                           constellation.constellation_id,
                           isSafeEgoMustBrake,
                           isSafeOtherMustBrake,
                           isSafeBrakeBoth);
  DrivingMode mode{DrivingMode::Invalid};

  if (is_safe)
  {
    core::getLogger()->debug("Unstructured Constellation[{}->{}:{}] safe. Store value otherMustBrake: {}",
                             constellation.ego_id,
                             constellation.object_id,
                             constellation.constellation_id,
                             isSafeOtherMustBrake ? "true" : "false");
    mNewOtherMustBrakeStatesBeforeDangerThresholdTime[constellation.constellation_id] = isSafeOtherMustBrake;
    mode = DrivingMode::ContinueForward;
  }
  else
  {
    // not safe
    bool lastOtherMustBrake = false;
    auto foundStateIt = mOtherMustBrakeStatesBeforeDangerThresholdTime.find(constellation.constellation_id);
    if (foundStateIt != mOtherMustBrakeStatesBeforeDangerThresholdTime.end())
    {
      lastOtherMustBrake = foundStateIt->second;
      mNewOtherMustBrakeStatesBeforeDangerThresholdTime[constellation.constellation_id] = lastOtherMustBrake;
    }

    // Rule 1: If both cars were already at a full stop, then one can drive away from other vehicle
    if (((constellation.ego_state.unstructured_object_state.speed_range.maximum <= c_drive_away_stopped_max_speed)
         && (constellation.other_state.unstructured_object_state.speed_range.maximum
             <= c_drive_away_stopped_max_speed)))
    {
      core::getLogger()->debug(
        "Unstructured Constellation[{}->{}:{}] Rule 1: both stopped, unsafe distance -> drive away.",
        constellation.ego_id,
        constellation.object_id,
        constellation.constellation_id);
      mode = DrivingMode::DriveAway;
    }

    // Rule 2: If:
    // - ego-brake and other-continue-forward not overlap
    // and
    // - other-brake and ego-continue-forward overlap
    if ((mode == DrivingMode::Invalid) && lastOtherMustBrake)
    {
      if (constellation.ego_state.unstructured_object_state.speed_range.maximum > c_drive_away_stopped_max_speed)
      {
        core::getLogger()->debug("Unstructured Constellation[{}->{}:{}] Rule 2: opponent is moving -> continue forward",
                                 constellation.ego_id,
                                 constellation.object_id,
                                 constellation.constellation_id);
        mode = DrivingMode::ContinueForward;
      }
      else
      {
        core::getLogger()->debug("Unstructured Constellation[{}->{}:{}] Rule 2: opponent is stopped -> drive away",
                                 constellation.ego_id,
                                 constellation.object_id,
                                 constellation.constellation_id);
        mode = DrivingMode::DriveAway;
      }
    }

    // Rule 3: Brake
    if (mode == DrivingMode::Invalid)
    {
      core::getLogger()->debug("Unstructured Constellation[{}->{}:{}] Rule 3: brake (brake collides with other brake)",
                               constellation.ego_id,
                               constellation.object_id,
                               constellation.constellation_id);
      mode = DrivingMode::Brake;
    }
  }

  switch (mode)
  {
    case DrivingMode::ContinueForward:
      rssState.response = state::UnstructuredConstellationResponse::ContinueForward;
      rssState.is_safe = true;
      break;
    case DrivingMode::Brake:
      rssState.response = state::UnstructuredConstellationResponse::Brake;
      rssState.is_safe = false;
      break;
    case DrivingMode::DriveAway:
    {
      calculateDriveAwayAngle(::ad::geometry::toPoint(constellation.ego_state.unstructured_object_state.center_point),
                              ::ad::geometry::toPoint(constellation.other_state.unstructured_object_state.center_point),
                              constellation.ego_state.dynamics.unstructured_settings.drive_away_max_angle,
                              rssState.heading_range);
      rssState.response = state::UnstructuredConstellationResponse::DriveAway;
      rssState.is_safe = false;
      break;
    }
    case DrivingMode::Invalid:
      result = false;
      break;
    default:
      result = false;
      throw std::runtime_error("RssUnstructuredConstellationChecker::calculateState>> invalid driving mode");
      break;
  }

  return result;
}

bool RssUnstructuredConstellationChecker::calculateDriveAwayAngle(::ad::geometry::Point const &egoVehicleLocation,
                                                                  ::ad::geometry::Point const &otherVehicleLocation,
                                                                  physics::Angle const &maxAllowedAngleWhenBothStopped,
                                                                  ::ad::geometry::HeadingRange &range) const
{
  auto const substractedLocationVector = egoVehicleLocation - otherVehicleLocation;

  // get vector angle
  auto const substractedLocationVectorAngle = physics::Angle(
    std::atan2(static_cast<double>(substractedLocationVector.y()), static_cast<double>(substractedLocationVector.x())));

  range.begin = physics::normalizeAngleSigned(substractedLocationVectorAngle - maxAllowedAngleWhenBothStopped);
  range.end = physics::normalizeAngleSigned(substractedLocationVectorAngle + maxAllowedAngleWhenBothStopped);
  return true;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
