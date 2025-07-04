// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
#include "TestSupport.hpp"
#include <ad/geometry/HeadingRange.hpp>

namespace ad {
namespace rss {

const TestSupport cTestSupport;

void resetRssState(state::LongitudinalRssState &state)
{
  state.response = state::LongitudinalResponse::None;
  state.alpha_lon = getEgoRssDynamics().alpha_lon;
  state.is_safe = true;
  state.rss_state_information.current_distance = physics::Distance::getMax();
  state.rss_state_information.safe_distance = physics::Distance::getMax();
  state.rss_state_information.evaluator = state::RssStateEvaluator::None;
}

void resetRssState(state::LateralRssState &state)
{
  state.response = state::LateralResponse::None;
  state.alpha_lat = getEgoRssDynamics().alpha_lat;
  state.is_safe = true;
  state.rss_state_information.current_distance = physics::Distance::getMax();
  state.rss_state_information.safe_distance = physics::Distance::getMax();
  state.rss_state_information.evaluator = state::RssStateEvaluator::None;
}

void resetRssState(state::UnstructuredConstellationRssState &state)
{
  state.response = state::UnstructuredConstellationResponse::None;
  state.alpha_lon = getEgoRssDynamics().alpha_lon;
  state.heading_range.begin = ad::physics::Angle(0.0);
  state.heading_range.end = ad::physics::c2PI;
  state.is_safe = true;
}

void resetRssState(state::RssState &rssState,
                   core::RelativeConstellationId const constellation_id,
                   world::ObjectId const object_id,
                   world::ConstellationType const constellation_type)
{
  rssState.constellation_id = constellation_id;
  rssState.object_id = object_id;
  rssState.constellation_type = constellation_type;
  resetRssState(rssState.longitudinal_state);
  resetRssState(rssState.lateral_state_left);
  resetRssState(rssState.lateral_state_right);
  resetRssState(rssState.unstructured_constellation_state);
}

void resetRssState(state::ProperResponse &properResponse)
{
  properResponse.is_safe = true;
  properResponse.time_index = 1u;
  properResponse.dangerous_objects.clear();
  properResponse.longitudinal_response = state::LongitudinalResponse::None;
  properResponse.lateral_response_left = state::LateralResponse::None;
  properResponse.lateral_response_right = state::LateralResponse::None;

  properResponse.heading_ranges.clear();
  ::ad::geometry::HeadingRange initialHeadingRange;
  initialHeadingRange.begin = ad::physics::Angle(0.0);
  initialHeadingRange.end = ad::physics::c2PI;
  properResponse.heading_ranges.push_back(initialHeadingRange);
}

world::RssDynamics getObjectRssDynamics()
{
  world::RssDynamics rssDynamics;

  rssDynamics.alpha_lon.accel_max = cMaximumLongitudinalAcceleration;
  rssDynamics.alpha_lon.brake_max = cMaximumLongitudinalBrakingDeceleleration;
  rssDynamics.alpha_lon.brake_min = cMinimumLongitudinalBrakingDeceleleration;
  rssDynamics.alpha_lon.brake_min_correct = cMinimumLongitudinalBrakingDecelelerationCorrect;

  rssDynamics.alpha_lat.accel_max = cMaximumLateralAcceleration;
  rssDynamics.alpha_lat.brake_min = cMinimumLateralBrakingDeceleleration;

  rssDynamics.lateral_fluctuation_margin = ad::physics::Distance(0.1);
  rssDynamics.response_time = cResponseTimeOtherVehicles;

  rssDynamics.min_longitudinal_safety_distance = ad::physics::Distance(0.);

  rssDynamics.unstructured_settings.pedestrian_turning_radius = ad::physics::Distance(2.0);
  rssDynamics.unstructured_settings.drive_away_max_angle = ad::physics::Angle(2.4);
  rssDynamics.unstructured_settings.vehicle_yaw_rate_change = ad::physics::AngularAcceleration(0.3);
  rssDynamics.unstructured_settings.vehicle_min_radius = ad::physics::Distance(3.5);
  rssDynamics.unstructured_settings.vehicle_trajectory_calculation_step = ad::physics::Duration(0.2);

  rssDynamics.unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps = 0;
  rssDynamics.unstructured_settings.vehicle_brake_intermediate_acceleration_steps = 1;
  rssDynamics.unstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps = 0;
  rssDynamics.unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps = 0;
  rssDynamics.unstructured_settings.pedestrian_brake_intermediate_acceleration_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps = 4;
  rssDynamics.unstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps = 0;

  return rssDynamics;
}

world::RssDynamics getEgoRssDynamics()
{
  world::RssDynamics rssDynamics;

  rssDynamics.alpha_lon.accel_max = cMaximumLongitudinalAcceleration;
  rssDynamics.alpha_lon.brake_max = cMaximumLongitudinalBrakingDeceleleration;
  rssDynamics.alpha_lon.brake_min = cMinimumLongitudinalBrakingDeceleleration;
  rssDynamics.alpha_lon.brake_min_correct = cMinimumLongitudinalBrakingDecelelerationCorrect;

  rssDynamics.alpha_lat.accel_max = cMaximumLateralAcceleration;
  rssDynamics.alpha_lat.brake_min = cMinimumLateralBrakingDeceleleration;

  rssDynamics.lateral_fluctuation_margin = ad::physics::Distance(0.1);
  rssDynamics.response_time = cResponseTimeEgoVehicle;

  rssDynamics.min_longitudinal_safety_distance = ad::physics::Distance(0.);

  rssDynamics.unstructured_settings.pedestrian_turning_radius = ad::physics::Distance(2.0);
  rssDynamics.unstructured_settings.drive_away_max_angle = ad::physics::Angle(2.4);
  rssDynamics.unstructured_settings.vehicle_yaw_rate_change = ad::physics::AngularAcceleration(0.3);
  rssDynamics.unstructured_settings.vehicle_min_radius = ad::physics::Distance(3.5);
  rssDynamics.unstructured_settings.vehicle_trajectory_calculation_step = ad::physics::Duration(0.2);

  rssDynamics.unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps = 0;
  rssDynamics.unstructured_settings.vehicle_brake_intermediate_acceleration_steps = 1;
  rssDynamics.unstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps = 0;
  rssDynamics.unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps = 0;
  rssDynamics.unstructured_settings.pedestrian_brake_intermediate_acceleration_steps = 3;
  rssDynamics.unstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps = 4;
  rssDynamics.unstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps = 0;
  return rssDynamics;
}

world::Object createObject(double const lonVelocity, double const latVelocity)
{
  world::Object object;

  object.object_type = world::ObjectType::OtherVehicle;
  object.velocity.speed_lon_min = kmhToMeterPerSec(lonVelocity);
  object.velocity.speed_lon_max = kmhToMeterPerSec(lonVelocity);
  object.velocity.speed_lat_min = kmhToMeterPerSec(latVelocity);
  object.velocity.speed_lat_max = kmhToMeterPerSec(latVelocity);
  object.state = createObjectState(lonVelocity, latVelocity);
  return object;
}

world::ObjectState createObjectState(double const lonVelocity, double const latVelocity)
{
  world::ObjectState state;
  state.yaw = ad::physics::Angle(0.0);
  state.steering_angle = ad::physics::Angle(0.0);
  state.dimension.length = ad::physics::Distance(4.0);
  state.dimension.width = ad::physics::Distance(2.0);
  state.yaw_rate = ad::physics::AngularVelocity(0.0);
  state.center_point.x = ad::physics::Distance(0.0);
  state.center_point.y = ad::physics::Distance(0.0);
  auto const speed = ad::physics::Speed(std::sqrt(kmhToMeterPerSec(lonVelocity) * kmhToMeterPerSec(lonVelocity)
                                                  + kmhToMeterPerSec(latVelocity) * kmhToMeterPerSec(latVelocity)));
  state.speed_range.minimum = speed;
  state.speed_range.maximum = speed;
  return state;
}

core::RelativeObjectState
createRelativeVehicleState(world::ObjectType const object_type, double const lonVelocity, double const latVelocity)
{
  core::RelativeObjectState state;

  state.object_type = object_type;
  state.dynamics = getObjectRssDynamics();
  state.structured_object_state.velocity.speed_lon_min = kmhToMeterPerSec(lonVelocity);
  state.structured_object_state.velocity.speed_lon_max = state.structured_object_state.velocity.speed_lon_min;
  state.structured_object_state.velocity.speed_lat_min = kmhToMeterPerSec(latVelocity);
  state.structured_object_state.velocity.speed_lat_max = state.structured_object_state.velocity.speed_lat_min;
  state.structured_object_state.distance_to_enter_intersection = Distance(0.);
  state.structured_object_state.distance_to_leave_intersection = Distance(1000.);
  state.structured_object_state.has_priority = false;
  state.structured_object_state.is_in_correct_lane = true;
  state.unstructured_object_state = createObjectState(lonVelocity, latVelocity);
  return state;
}

core::RelativePosition createRelativeLongitudinalPosition(core::LongitudinalRelativePosition const &position,
                                                          Distance const &distance)
{
  core::RelativePosition relative_position;
  relative_position.lateral_distance = Distance(0.);
  relative_position.lateral_position = core::LateralRelativePosition::Overlap;
  relative_position.longitudinal_distance = distance;
  relative_position.longitudinal_position = position;
  return relative_position;
}

core::RelativePosition createRelativeLateralPosition(core::LateralRelativePosition const &position,
                                                     Distance const &distance)
{
  core::RelativePosition relative_position;
  relative_position.lateral_distance = distance;
  relative_position.lateral_position = position;
  relative_position.longitudinal_distance = Distance(0.);
  relative_position.longitudinal_position = core::LongitudinalRelativePosition::Overlap;
  return relative_position;
}

Distance calculateLongitudinalStoppingDistance(Speed const &objectSpeed,
                                               Speed const &objectMaxSpeedOnAcceleration,
                                               Acceleration const &acceleration,
                                               Acceleration const &deceleration,
                                               Duration const &response_time)
{
  Duration accelerationTime = response_time;
  Speed speedMax = std::min(objectMaxSpeedOnAcceleration, objectSpeed + response_time * acceleration);
  if (objectSpeed >= objectMaxSpeedOnAcceleration)
  {
    // no acceleration if already faster than max_speed_on_acceleration
    accelerationTime = Duration(0.);
    speedMax = objectSpeed;
  }
  else if (acceleration != Acceleration(0.))
  {
    // maybe the acceleration time is less, if max_speed_on_acceleration is reached before response time
    accelerationTime = std::min(accelerationTime, std::fabs(objectMaxSpeedOnAcceleration - objectSpeed) / acceleration);
  }
  Distance dMin = objectSpeed * accelerationTime;
  dMin += 0.5 * acceleration * accelerationTime * accelerationTime;
  dMin += speedMax * (response_time - accelerationTime);
  dMin += (speedMax * speedMax) / (2. * -deceleration);
  return dMin;
}

Distance calculateLongitudinalMinSafeDistance(physics::Speed const &followingObjectSpeed,
                                              world::RssDynamics const &followingObjectRssDynamics,
                                              physics::Speed const &leadingObjectSpeed,
                                              world::RssDynamics const &leadingObjectRssDynamics)
{
  Distance const followingStoppingDistance
    = calculateLongitudinalStoppingDistance(followingObjectSpeed,
                                            followingObjectRssDynamics.max_speed_on_acceleration,
                                            followingObjectRssDynamics.alpha_lon.accel_max,
                                            followingObjectRssDynamics.alpha_lon.brake_min,
                                            followingObjectRssDynamics.response_time);
  Distance const leadingStoppingDistance
    = calculateLongitudinalStoppingDistance(leadingObjectSpeed,
                                            leadingObjectRssDynamics.max_speed_on_acceleration,
                                            leadingObjectRssDynamics.alpha_lon.accel_max,
                                            leadingObjectRssDynamics.alpha_lon.brake_max,
                                            Duration(0));
  Distance dMin = followingStoppingDistance - leadingStoppingDistance;
  dMin = std::max(dMin, Distance(0.));
  dMin += Distance(followingObjectRssDynamics.min_longitudinal_safety_distance);
  return dMin;
}

Distance
calculateLongitudinalMinSafeDistanceOppositeDirection(physics::Speed const &objectInCorrectLaneSpeed,
                                                      world::RssDynamics const &objectInCorrectLaneRssDynamics,
                                                      physics::Speed const &objectNotInCorrectLaneSpeed,
                                                      world::RssDynamics const &objectNotInCorrectLaneRssDynamics)
{
  Distance const correctStoppingDistance
    = calculateLongitudinalStoppingDistance(objectInCorrectLaneSpeed,
                                            objectInCorrectLaneRssDynamics.max_speed_on_acceleration,
                                            objectInCorrectLaneRssDynamics.alpha_lon.accel_max,
                                            objectInCorrectLaneRssDynamics.alpha_lon.brake_min_correct,
                                            objectInCorrectLaneRssDynamics.response_time);
  Distance const notCorrectStoppingDistance
    = calculateLongitudinalStoppingDistance(objectNotInCorrectLaneSpeed,
                                            objectNotInCorrectLaneRssDynamics.max_speed_on_acceleration,
                                            objectNotInCorrectLaneRssDynamics.alpha_lon.accel_max,
                                            objectNotInCorrectLaneRssDynamics.alpha_lon.brake_min,
                                            objectNotInCorrectLaneRssDynamics.response_time);
  Distance dMin = correctStoppingDistance + notCorrectStoppingDistance;
  dMin += std::max(objectInCorrectLaneRssDynamics.min_longitudinal_safety_distance,
                   objectNotInCorrectLaneRssDynamics.min_longitudinal_safety_distance);
  return dMin;
}

Distance calculateLateralMinSafeDistance(physics::Speed const &leftObjectSpeed,
                                         world::RssDynamics const &leftObjectRssDynamics,
                                         physics::Speed const &rightObjectSpeed,
                                         world::RssDynamics const &rightObjectRssDynamics)
{
  Speed lObjectVelAfterResTime
    = leftObjectSpeed + leftObjectRssDynamics.response_time * leftObjectRssDynamics.alpha_lat.accel_max;
  Speed rObjectVelAfterResTime
    = rightObjectSpeed - rightObjectRssDynamics.response_time * rightObjectRssDynamics.alpha_lat.accel_max;
  Distance dMin = (leftObjectSpeed + lObjectVelAfterResTime) / 2. * leftObjectRssDynamics.response_time;
  if (lObjectVelAfterResTime > Speed(0.))
  {
    dMin += lObjectVelAfterResTime * lObjectVelAfterResTime / (2. * -leftObjectRssDynamics.alpha_lat.brake_min);
  }
  dMin -= (rightObjectSpeed + rObjectVelAfterResTime) / 2. * rightObjectRssDynamics.response_time;
  if (rObjectVelAfterResTime < Speed(0.))
  {
    dMin += rObjectVelAfterResTime * rObjectVelAfterResTime / (2. * -rightObjectRssDynamics.alpha_lat.brake_min);
  }
  dMin += 0.5 * (rightObjectRssDynamics.lateral_fluctuation_margin + leftObjectRssDynamics.lateral_fluctuation_margin);
  return std::max(dMin, Distance(0.));
}
TestSupport::TestSupport()
{
  resetRssState(cLongitudinalSafe);
  cLongitudinalSafe.is_safe = true;
  cLongitudinalSafe.response = state::LongitudinalResponse::None;
  resetRssState(cLongitudinalNone);
  cLongitudinalNone.is_safe = false;
  cLongitudinalNone.response = state::LongitudinalResponse::None;
  resetRssState(cLongitudinalBrakeMin);
  cLongitudinalBrakeMin.is_safe = false;
  cLongitudinalBrakeMin.response = state::LongitudinalResponse::BrakeMin;
  resetRssState(cLongitudinalBrakeMinCorrect);
  cLongitudinalBrakeMinCorrect.is_safe = false;
  cLongitudinalBrakeMinCorrect.response = state::LongitudinalResponse::BrakeMinCorrect;
  resetRssState(cLateralSafe);
  cLateralSafe.is_safe = true;
  cLateralSafe.response = state::LateralResponse::None;
  resetRssState(cLateralNone);
  cLateralNone.is_safe = false;
  cLateralNone.response = state::LateralResponse::None;
  resetRssState(cLateralBrakeMin);
  cLateralBrakeMin.is_safe = false;
  cLateralBrakeMin.response = state::LateralResponse::BrakeMin;
}

state::LateralRssState TestSupport::stateWithInformation(state::LateralRssState const &lateralState,
                                                         core::RelativeConstellation const &constellation)
{
  state::LateralRssState resultState = lateralState;

  resultState.alpha_lat = constellation.ego_state.dynamics.alpha_lat;
  resultState.rss_state_information.evaluator = state::RssStateEvaluator::LateralDistance;
  resultState.rss_state_information.current_distance = constellation.relative_position.lateral_distance;
  switch (constellation.constellation_type)
  {
    case world::ConstellationType::OppositeDirection:
    case world::ConstellationType::SameDirection:
      if (constellation.relative_position.lateral_position == core::LateralRelativePosition::AtLeft)
      {
        resultState.rss_state_information.safe_distance
          = calculateLateralMinSafeDistance(constellation.ego_state.structured_object_state.velocity.speed_lat_max,
                                            constellation.ego_state.dynamics,
                                            constellation.other_state.structured_object_state.velocity.speed_lat_min,
                                            constellation.other_state.dynamics);
      }
      else if (constellation.relative_position.lateral_position == core::LateralRelativePosition::AtRight)
      {
        resultState.rss_state_information.safe_distance
          = calculateLateralMinSafeDistance(constellation.other_state.structured_object_state.velocity.speed_lat_max,
                                            constellation.other_state.dynamics,
                                            constellation.ego_state.structured_object_state.velocity.speed_lat_min,
                                            constellation.ego_state.dynamics);
      }
      else
      {
        resultState.rss_state_information.safe_distance = Distance(0.);
      }
      break;
    case world::ConstellationType::IntersectionEgoHasPriority:
    case world::ConstellationType::IntersectionObjectHasPriority:
    case world::ConstellationType::IntersectionSamePriority:
      resultState.rss_state_information.safe_distance = Distance(0.);
      break;
    case world::ConstellationType::NotRelevant:
      resultState.rss_state_information.evaluator = state::RssStateEvaluator::None;
      resultState.rss_state_information.current_distance = Distance::getMax();
      resultState.rss_state_information.safe_distance = Distance::getMax();
      break;
    default:
      resultState.rss_state_information.current_distance = Distance(-1.);
      resultState.rss_state_information.safe_distance = Distance(-1.);
      break;
  }

  return resultState;
}

state::LongitudinalRssState TestSupport::stateWithInformation(state::LongitudinalRssState const &longitudinal_state,
                                                              core::RelativeConstellation const &constellation)
{
  state::LongitudinalRssState resultState = longitudinal_state;

  resultState.alpha_lon = constellation.ego_state.dynamics.alpha_lon;
  resultState.rss_state_information.current_distance = constellation.relative_position.longitudinal_distance;

  switch (constellation.constellation_type)
  {
    case world::ConstellationType::SameDirection:
      if ((constellation.relative_position.longitudinal_position == core::LongitudinalRelativePosition::InFront)
          || (constellation.relative_position.longitudinal_position
              == core::LongitudinalRelativePosition::OverlapFront))
      {
        resultState.rss_state_information.evaluator
          = state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistance(
          constellation.other_state.structured_object_state.velocity.speed_lon_max,
          constellation.other_state.dynamics,
          constellation.ego_state.structured_object_state.velocity.speed_lon_min,
          constellation.ego_state.dynamics);
      }
      else
      {
        resultState.rss_state_information.evaluator
          = state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistance(
          constellation.ego_state.structured_object_state.velocity.speed_lon_max,
          constellation.ego_state.dynamics,
          constellation.other_state.structured_object_state.velocity.speed_lon_min,
          constellation.other_state.dynamics);
      }
      break;
    case world::ConstellationType::OppositeDirection:
      if (constellation.ego_state.structured_object_state.is_in_correct_lane)
      {
        resultState.rss_state_information.evaluator
          = state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistanceOppositeDirection(
          constellation.ego_state.structured_object_state.velocity.speed_lon_max,
          constellation.ego_state.dynamics,
          constellation.other_state.structured_object_state.velocity.speed_lon_max,
          constellation.other_state.dynamics);
      }
      else
      {
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistanceOppositeDirection(
          constellation.other_state.structured_object_state.velocity.speed_lon_max,
          constellation.other_state.dynamics,
          constellation.ego_state.structured_object_state.velocity.speed_lon_max,
          constellation.ego_state.dynamics);
      }
      break;
    case world::ConstellationType::IntersectionEgoHasPriority:
    case world::ConstellationType::IntersectionObjectHasPriority:
    case world::ConstellationType::IntersectionSamePriority:
      if (!constellation.ego_state.structured_object_state.has_priority)
      {
        resultState.rss_state_information.current_distance
          = constellation.ego_state.structured_object_state.distance_to_enter_intersection;
        resultState.rss_state_information.safe_distance = calculateLongitudinalStoppingDistance(
          constellation.ego_state.structured_object_state.velocity.speed_lon_max,
          constellation.ego_state.dynamics.max_speed_on_acceleration,
          constellation.ego_state.dynamics.alpha_lon.accel_max,
          constellation.ego_state.dynamics.alpha_lon.brake_min,
          constellation.ego_state.dynamics.response_time);
        resultState.rss_state_information.safe_distance
          = std::max(resultState.rss_state_information.safe_distance,
                     constellation.ego_state.dynamics.min_longitudinal_safety_distance);
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
        if (resultState.rss_state_information.current_distance > resultState.rss_state_information.safe_distance)
        {
          break;
        }
      }
      if (!constellation.other_state.structured_object_state.has_priority)
      {
        resultState.rss_state_information.current_distance
          = constellation.other_state.structured_object_state.distance_to_enter_intersection;
        resultState.rss_state_information.safe_distance = calculateLongitudinalStoppingDistance(
          constellation.other_state.structured_object_state.velocity.speed_lon_max,
          constellation.other_state.dynamics.max_speed_on_acceleration,
          constellation.other_state.dynamics.alpha_lon.accel_max,
          constellation.other_state.dynamics.alpha_lon.brake_min,
          constellation.other_state.dynamics.response_time);
        resultState.rss_state_information.safe_distance
          = std::max(resultState.rss_state_information.safe_distance,
                     constellation.other_state.dynamics.min_longitudinal_safety_distance);
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
        if (resultState.rss_state_information.current_distance > resultState.rss_state_information.safe_distance)
        {
          break;
        }
      }
      resultState.rss_state_information.current_distance = constellation.relative_position.longitudinal_distance;
      if (constellation.relative_position.longitudinal_position == core::LongitudinalRelativePosition::InFront)
      {
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::IntersectionEgoInFront;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistance(
          constellation.other_state.structured_object_state.velocity.speed_lon_max,
          constellation.other_state.dynamics,
          constellation.ego_state.structured_object_state.velocity.speed_lon_min,
          constellation.ego_state.dynamics);
      }
      else if (constellation.relative_position.longitudinal_position == core::LongitudinalRelativePosition::AtBack)
      {
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOtherInFront;
        resultState.rss_state_information.safe_distance = calculateLongitudinalMinSafeDistance(
          constellation.ego_state.structured_object_state.velocity.speed_lon_max,
          constellation.ego_state.dynamics,
          constellation.other_state.structured_object_state.velocity.speed_lon_min,
          constellation.other_state.dynamics);
      }
      if (resultState.rss_state_information.current_distance > resultState.rss_state_information.safe_distance)
      {
        break;
      }
      else
      {
        resultState.rss_state_information.evaluator = state::RssStateEvaluator::IntersectionOverlap;
        resultState.rss_state_information.current_distance = Distance(0.);
        resultState.rss_state_information.safe_distance = Distance(0.);
      }
      break;
    case world::ConstellationType::NotRelevant:
      resultState.rss_state_information.evaluator = state::RssStateEvaluator::None;
      resultState.rss_state_information.current_distance = Distance::getMax();
      resultState.rss_state_information.safe_distance = Distance::getMax();
      break;
    default:
      resultState.rss_state_information.evaluator = state::RssStateEvaluator::None;
      resultState.rss_state_information.current_distance = Distance(-1.);
      resultState.rss_state_information.safe_distance = Distance(-1.);
      break;
  }

  return resultState;
}

void getUnstructuredVehicle(::ad::geometry::Point const &center_point,
                            bool positiveDirection,
                            state::UnstructuredConstellationStateInformation &stateInfo,
                            core::RelativeObjectState &vehicleState)
{
  vehicleState.unstructured_object_state.center_point.x = ad::physics::Distance(center_point.x());
  vehicleState.unstructured_object_state.center_point.y = ad::physics::Distance(center_point.y());
  if (positiveDirection)
  {
    vehicleState.unstructured_object_state.yaw = ad::physics::cPI_2;
  }
  else
  {
    vehicleState.unstructured_object_state.yaw = 3. * ad::physics::cPI_2;
  }

  stateInfo.brake_trajectory_set.clear();
  stateInfo.continue_forward_trajectory_set.clear();
  // brake
  if (positiveDirection)
  {
    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() - 0.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() - 0.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() - 0.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() - 0.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() + 1.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() + 2.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() + 1.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() + 2.5)));
  }
  else
  {
    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() + 0.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() + 0.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() + 0.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() + 0.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() - 1.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() - 0.5, center_point.y() - 2.5)));

    stateInfo.brake_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() - 1.5)));
    stateInfo.continue_forward_trajectory_set.push_back(
      ::ad::geometry::toDistance(::ad::geometry::Point(center_point.x() + 0.5, center_point.y() - 2.5)));
  }
  stateInfo.brake_trajectory_set.push_back(stateInfo.brake_trajectory_set.front());
  stateInfo.continue_forward_trajectory_set.push_back(stateInfo.continue_forward_trajectory_set.front());
}

} // namespace rss
} // namespace ad
