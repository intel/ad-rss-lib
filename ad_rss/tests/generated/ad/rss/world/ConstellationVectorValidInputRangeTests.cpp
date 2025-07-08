/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/ConstellationVectorValidInputRange.hpp"

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::ConstellationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::ConstellationVector value;
  ::ad::rss::world::Constellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::world::Object elementEgo_vehicle;
  ::ad::rss::world::ObjectId elementEgo_vehicleObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgo_vehicle.object_id = elementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType elementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_vehicle.object_type = elementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicleOccupied_regionsElement.segment_id = elementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lon_range = elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lat_range = elementEgo_vehicleOccupied_regionsElementLat_range;
  elementEgo_vehicleOccupied_regions.resize(1, elementEgo_vehicleOccupied_regionsElement);
  elementEgo_vehicle.occupied_regions = elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity elementEgo_vehicleVelocity;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_min(-100.);
  elementEgo_vehicleVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_max(-100.);
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_min(-100.);
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_max(-100.);
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocitySpeed_lat_max;
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocity.speed_lon_min;
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocity.speed_lat_min;
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocity.speed_lon_max;
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocity.speed_lat_max;
  elementEgo_vehicle.velocity = elementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState elementEgo_vehicleState;
  ::ad::physics::Angle elementEgo_vehicleStateYaw(-6.283185308);
  elementEgo_vehicleState.yaw = elementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D elementEgo_vehicleStateDimension;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionLength(-1e9);
  elementEgo_vehicleStateDimension.length = elementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionWidth(-1e9);
  elementEgo_vehicleStateDimension.width = elementEgo_vehicleStateDimensionWidth;
  elementEgo_vehicleState.dimension = elementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgo_vehicleStateYaw_rate(-100.);
  elementEgo_vehicleState.yaw_rate = elementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D elementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointX(-1e9);
  elementEgo_vehicleStateCenter_point.x = elementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointY(-1e9);
  elementEgo_vehicleStateCenter_point.y = elementEgo_vehicleStateCenter_pointY;
  elementEgo_vehicleState.center_point = elementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_rangeMaximum;
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_range.minimum;
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_range.maximum;
  elementEgo_vehicleState.speed_range = elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle elementEgo_vehicleStateSteering_angle(-6.283185308);
  elementEgo_vehicleState.steering_angle = elementEgo_vehicleStateSteering_angle;
  elementEgo_vehicle.state = elementEgo_vehicleState;
  element.ego_vehicle = elementEgo_vehicle;
  ::ad::rss::world::RssDynamics elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lon = elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lat = elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsResponse_time(0.);
  elementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.response_time = elementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementEgo_vehicle_rss_dynamics.max_speed_on_acceleration = elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_vehicle_rss_dynamics.unstructured_settings = elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  element.ego_vehicle_rss_dynamics = elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.object_id = elementObjectObject_id;
  ::ad::rss::world::ObjectType elementObjectObject_type(::ad::rss::world::ObjectType::Invalid);
  elementObject.object_type = elementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupied_regionsElement.segment_id = elementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_rangeMaximum;
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_range.minimum;
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_range.maximum;
  elementObjectOccupied_regionsElement.lon_range = elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_rangeMaximum;
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_range.minimum;
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_range.maximum;
  elementObjectOccupied_regionsElement.lat_range = elementObjectOccupied_regionsElementLat_range;
  elementObjectOccupied_regions.resize(1, elementObjectOccupied_regionsElement);
  elementObject.occupied_regions = elementObjectOccupied_regions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_min(-100.);
  elementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speed_lon_min = elementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_max(-100.);
  elementObjectVelocity.speed_lon_max = elementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_min(-100.);
  elementObjectVelocity.speed_lat_min = elementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_max(-100.);
  elementObjectVelocity.speed_lat_max = elementObjectVelocitySpeed_lat_max;
  elementObjectVelocity.speed_lon_max = elementObjectVelocity.speed_lon_min;
  elementObjectVelocity.speed_lat_max = elementObjectVelocity.speed_lat_min;
  elementObjectVelocity.speed_lon_min = elementObjectVelocity.speed_lon_max;
  elementObjectVelocity.speed_lat_min = elementObjectVelocity.speed_lat_max;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYaw_rate(-100.);
  elementObjectState.yaw_rate = elementObjectStateYaw_rate;
  ::ad::physics::Distance2D elementObjectStateCenter_point;
  ::ad::physics::Distance elementObjectStateCenter_pointX(-1e9);
  elementObjectStateCenter_point.x = elementObjectStateCenter_pointX;
  ::ad::physics::Distance elementObjectStateCenter_pointY(-1e9);
  elementObjectStateCenter_point.y = elementObjectStateCenter_pointY;
  elementObjectState.center_point = elementObjectStateCenter_point;
  ::ad::physics::SpeedRange elementObjectStateSpeed_range;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMinimum(-100.);
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMaximum(-100.);
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_rangeMaximum;
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_range.minimum;
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_range.maximum;
  elementObjectState.speed_range = elementObjectStateSpeed_range;
  ::ad::physics::Angle elementObjectStateSteering_angle(-6.283185308);
  elementObjectState.steering_angle = elementObjectStateSteering_angle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lon.accel_max = elementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_max;
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamics.alpha_lon = elementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lat.accel_max = elementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lat.brake_min = elementObject_rss_dynamicsAlpha_latBrake_min;
  elementObject_rss_dynamics.alpha_lat = elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementObject_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementObject_rss_dynamics.lateral_fluctuation_margin = elementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementObject_rss_dynamicsResponse_time(0.);
  elementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObject_rss_dynamics.response_time = elementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementObject_rss_dynamics.max_speed_on_acceleration = elementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementObject_rss_dynamics.unstructured_settings = elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementObject_rss_dynamics.min_longitudinal_safety_distance
    = elementObject_rss_dynamicsMin_longitudinal_safety_distance;
  element.object_rss_dynamics = elementObject_rss_dynamics;
  ::ad::rss::world::RoadArea elementIntersecting_road;
  ::ad::rss::world::RoadSegment elementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType elementIntersecting_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementIntersecting_roadElement.type = elementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersecting_roadElementLane_segmentsElement.id = elementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementIntersecting_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersecting_roadElementLane_segmentsElement.driving_direction
    = elementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLength.minimum;
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLength.maximum;
  elementIntersecting_roadElementLane_segmentsElement.length
    = elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  elementIntersecting_roadElementLane_segmentsElement.width = elementIntersecting_roadElementLane_segmentsElementWidth;
  elementIntersecting_roadElementLane_segments.resize(1, elementIntersecting_roadElementLane_segmentsElement);
  elementIntersecting_roadElement.lane_segments = elementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_after_intersecting_area
    = elementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_before_intersecting_area
    = elementIntersecting_roadElementMinimum_length_before_intersecting_area;
  elementIntersecting_road.resize(1, elementIntersecting_roadElement);
  element.intersecting_road = elementIntersecting_road;
  ::ad::rss::world::RoadArea elementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment elementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType elementEgo_vehicle_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementEgo_vehicle_roadElement.type = elementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicle_roadElementLane_segmentsElement.id = elementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.length = elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.width = elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  elementEgo_vehicle_roadElementLane_segments.resize(1, elementEgo_vehicle_roadElementLane_segmentsElement);
  elementEgo_vehicle_roadElement.lane_segments = elementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  elementEgo_vehicle_road.resize(1, elementEgo_vehicle_roadElement);
  element.ego_vehicle_road = elementEgo_vehicle_road;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::ConstellationVector value;
  ::ad::rss::world::Constellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::world::Object elementEgo_vehicle;
  ::ad::rss::world::ObjectId elementEgo_vehicleObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgo_vehicle.object_id = elementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType elementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_vehicle.object_type = elementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicleOccupied_regionsElement.segment_id = elementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lon_range = elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lat_range = elementEgo_vehicleOccupied_regionsElementLat_range;
  elementEgo_vehicleOccupied_regions.resize(1, elementEgo_vehicleOccupied_regionsElement);
  elementEgo_vehicle.occupied_regions = elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity elementEgo_vehicleVelocity;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_min(-100.);
  elementEgo_vehicleVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_max(-100.);
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_min(-100.);
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_max(-100.);
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocitySpeed_lat_max;
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocity.speed_lon_min;
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocity.speed_lat_min;
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocity.speed_lon_max;
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocity.speed_lat_max;
  elementEgo_vehicle.velocity = elementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState elementEgo_vehicleState;
  ::ad::physics::Angle elementEgo_vehicleStateYaw(-6.283185308);
  elementEgo_vehicleState.yaw = elementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D elementEgo_vehicleStateDimension;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionLength(-1e9);
  elementEgo_vehicleStateDimension.length = elementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionWidth(-1e9);
  elementEgo_vehicleStateDimension.width = elementEgo_vehicleStateDimensionWidth;
  elementEgo_vehicleState.dimension = elementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgo_vehicleStateYaw_rate(-100.);
  elementEgo_vehicleState.yaw_rate = elementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D elementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointX(-1e9);
  elementEgo_vehicleStateCenter_point.x = elementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointY(-1e9);
  elementEgo_vehicleStateCenter_point.y = elementEgo_vehicleStateCenter_pointY;
  elementEgo_vehicleState.center_point = elementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_rangeMaximum;
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_range.minimum;
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_range.maximum;
  elementEgo_vehicleState.speed_range = elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle elementEgo_vehicleStateSteering_angle(-6.283185308);
  elementEgo_vehicleState.steering_angle = elementEgo_vehicleStateSteering_angle;
  elementEgo_vehicle.state = elementEgo_vehicleState;
  element.ego_vehicle = elementEgo_vehicle;
  ::ad::rss::world::RssDynamics elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lon = elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lat = elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsResponse_time(0.);
  elementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.response_time = elementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementEgo_vehicle_rss_dynamics.max_speed_on_acceleration = elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_vehicle_rss_dynamics.unstructured_settings = elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  element.ego_vehicle_rss_dynamics = elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.object_id = elementObjectObject_id;
  ::ad::rss::world::ObjectType elementObjectObject_type(::ad::rss::world::ObjectType::Invalid);
  elementObject.object_type = elementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupied_regionsElement.segment_id = elementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_rangeMaximum;
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_range.minimum;
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_range.maximum;
  elementObjectOccupied_regionsElement.lon_range = elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_rangeMaximum;
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_range.minimum;
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_range.maximum;
  elementObjectOccupied_regionsElement.lat_range = elementObjectOccupied_regionsElementLat_range;
  elementObjectOccupied_regions.resize(1, elementObjectOccupied_regionsElement);
  elementObject.occupied_regions = elementObjectOccupied_regions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_min(-100.);
  elementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speed_lon_min = elementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_max(-100.);
  elementObjectVelocity.speed_lon_max = elementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_min(-100.);
  elementObjectVelocity.speed_lat_min = elementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_max(-100.);
  elementObjectVelocity.speed_lat_max = elementObjectVelocitySpeed_lat_max;
  elementObjectVelocity.speed_lon_max = elementObjectVelocity.speed_lon_min;
  elementObjectVelocity.speed_lat_max = elementObjectVelocity.speed_lat_min;
  elementObjectVelocity.speed_lon_min = elementObjectVelocity.speed_lon_max;
  elementObjectVelocity.speed_lat_min = elementObjectVelocity.speed_lat_max;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYaw_rate(-100.);
  elementObjectState.yaw_rate = elementObjectStateYaw_rate;
  ::ad::physics::Distance2D elementObjectStateCenter_point;
  ::ad::physics::Distance elementObjectStateCenter_pointX(-1e9);
  elementObjectStateCenter_point.x = elementObjectStateCenter_pointX;
  ::ad::physics::Distance elementObjectStateCenter_pointY(-1e9);
  elementObjectStateCenter_point.y = elementObjectStateCenter_pointY;
  elementObjectState.center_point = elementObjectStateCenter_point;
  ::ad::physics::SpeedRange elementObjectStateSpeed_range;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMinimum(-100.);
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMaximum(-100.);
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_rangeMaximum;
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_range.minimum;
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_range.maximum;
  elementObjectState.speed_range = elementObjectStateSpeed_range;
  ::ad::physics::Angle elementObjectStateSteering_angle(-6.283185308);
  elementObjectState.steering_angle = elementObjectStateSteering_angle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lon.accel_max = elementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_max;
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamics.alpha_lon = elementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lat.accel_max = elementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lat.brake_min = elementObject_rss_dynamicsAlpha_latBrake_min;
  elementObject_rss_dynamics.alpha_lat = elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementObject_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementObject_rss_dynamics.lateral_fluctuation_margin = elementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementObject_rss_dynamicsResponse_time(0.);
  elementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObject_rss_dynamics.response_time = elementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementObject_rss_dynamics.max_speed_on_acceleration = elementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementObject_rss_dynamics.unstructured_settings = elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementObject_rss_dynamics.min_longitudinal_safety_distance
    = elementObject_rss_dynamicsMin_longitudinal_safety_distance;
  element.object_rss_dynamics = elementObject_rss_dynamics;
  ::ad::rss::world::RoadArea elementIntersecting_road;
  ::ad::rss::world::RoadSegment elementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType elementIntersecting_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementIntersecting_roadElement.type = elementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersecting_roadElementLane_segmentsElement.id = elementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementIntersecting_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersecting_roadElementLane_segmentsElement.driving_direction
    = elementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLength.minimum;
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLength.maximum;
  elementIntersecting_roadElementLane_segmentsElement.length
    = elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  elementIntersecting_roadElementLane_segmentsElement.width = elementIntersecting_roadElementLane_segmentsElementWidth;
  elementIntersecting_roadElementLane_segments.resize(1, elementIntersecting_roadElementLane_segmentsElement);
  elementIntersecting_roadElement.lane_segments = elementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_after_intersecting_area
    = elementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_before_intersecting_area
    = elementIntersecting_roadElementMinimum_length_before_intersecting_area;
  elementIntersecting_road.resize(1, elementIntersecting_roadElement);
  element.intersecting_road = elementIntersecting_road;
  ::ad::rss::world::RoadArea elementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment elementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType elementEgo_vehicle_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementEgo_vehicle_roadElement.type = elementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicle_roadElementLane_segmentsElement.id = elementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.length = elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.width = elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  elementEgo_vehicle_roadElementLane_segments.resize(1, elementEgo_vehicle_roadElementLane_segmentsElement);
  elementEgo_vehicle_roadElement.lane_segments = elementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  elementEgo_vehicle_road.resize(1, elementEgo_vehicle_roadElement);
  element.ego_vehicle_road = elementEgo_vehicle_road;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::ConstellationVector value;
  ::ad::rss::world::Constellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(static_cast<::ad::rss::world::ConstellationType>(-1));
  element.constellation_type = elementConstellation_type;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::ConstellationVector value;
  ::ad::rss::world::Constellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::world::Object elementEgo_vehicle;
  ::ad::rss::world::ObjectId elementEgo_vehicleObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgo_vehicle.object_id = elementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType elementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_vehicle.object_type = elementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicleOccupied_regionsElement.segment_id = elementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lon_range = elementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  elementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  elementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  elementEgo_vehicleOccupied_regionsElement.lat_range = elementEgo_vehicleOccupied_regionsElementLat_range;
  elementEgo_vehicleOccupied_regions.resize(1, elementEgo_vehicleOccupied_regionsElement);
  elementEgo_vehicle.occupied_regions = elementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity elementEgo_vehicleVelocity;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_min(-100.);
  elementEgo_vehicleVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lon_max(-100.);
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_min(-100.);
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_vehicleVelocitySpeed_lat_max(-100.);
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocitySpeed_lat_max;
  elementEgo_vehicleVelocity.speed_lon_max = elementEgo_vehicleVelocity.speed_lon_min;
  elementEgo_vehicleVelocity.speed_lat_max = elementEgo_vehicleVelocity.speed_lat_min;
  elementEgo_vehicleVelocity.speed_lon_min = elementEgo_vehicleVelocity.speed_lon_max;
  elementEgo_vehicleVelocity.speed_lat_min = elementEgo_vehicleVelocity.speed_lat_max;
  elementEgo_vehicle.velocity = elementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState elementEgo_vehicleState;
  ::ad::physics::Angle elementEgo_vehicleStateYaw(-6.283185308);
  elementEgo_vehicleState.yaw = elementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D elementEgo_vehicleStateDimension;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionLength(-1e9);
  elementEgo_vehicleStateDimension.length = elementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance elementEgo_vehicleStateDimensionWidth(-1e9);
  elementEgo_vehicleStateDimension.width = elementEgo_vehicleStateDimensionWidth;
  elementEgo_vehicleState.dimension = elementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgo_vehicleStateYaw_rate(-100.);
  elementEgo_vehicleState.yaw_rate = elementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D elementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointX(-1e9);
  elementEgo_vehicleStateCenter_point.x = elementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance elementEgo_vehicleStateCenter_pointY(-1e9);
  elementEgo_vehicleStateCenter_point.y = elementEgo_vehicleStateCenter_pointY;
  elementEgo_vehicleState.center_point = elementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_rangeMaximum;
  elementEgo_vehicleStateSpeed_range.maximum = elementEgo_vehicleStateSpeed_range.minimum;
  elementEgo_vehicleStateSpeed_range.minimum = elementEgo_vehicleStateSpeed_range.maximum;
  elementEgo_vehicleState.speed_range = elementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle elementEgo_vehicleStateSteering_angle(-6.283185308);
  elementEgo_vehicleState.steering_angle = elementEgo_vehicleStateSteering_angle;
  elementEgo_vehicle.state = elementEgo_vehicleState;
  element.ego_vehicle = elementEgo_vehicle;
  ::ad::rss::world::RssDynamics elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = elementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lon = elementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max = elementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min = elementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementEgo_vehicle_rss_dynamics.alpha_lat = elementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsResponse_time(0.);
  elementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_vehicle_rss_dynamics.response_time = elementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementEgo_vehicle_rss_dynamics.max_speed_on_acceleration = elementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_vehicle_rss_dynamics.unstructured_settings = elementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  element.ego_vehicle_rss_dynamics = elementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.object_id = elementObjectObject_id;
  ::ad::rss::world::ObjectType elementObjectObject_type(::ad::rss::world::ObjectType::Invalid);
  elementObject.object_type = elementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupied_regionsElement.segment_id = elementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLon_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_rangeMaximum;
  elementObjectOccupied_regionsElementLon_range.maximum = elementObjectOccupied_regionsElementLon_range.minimum;
  elementObjectOccupied_regionsElementLon_range.minimum = elementObjectOccupied_regionsElementLon_range.maximum;
  elementObjectOccupied_regionsElement.lon_range = elementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMinimum(0.);
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupied_regionsElementLat_rangeMaximum(0.);
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_rangeMaximum;
  elementObjectOccupied_regionsElementLat_range.maximum = elementObjectOccupied_regionsElementLat_range.minimum;
  elementObjectOccupied_regionsElementLat_range.minimum = elementObjectOccupied_regionsElementLat_range.maximum;
  elementObjectOccupied_regionsElement.lat_range = elementObjectOccupied_regionsElementLat_range;
  elementObjectOccupied_regions.resize(1, elementObjectOccupied_regionsElement);
  elementObject.occupied_regions = elementObjectOccupied_regions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_min(-100.);
  elementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speed_lon_min = elementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lon_max(-100.);
  elementObjectVelocity.speed_lon_max = elementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_min(-100.);
  elementObjectVelocity.speed_lat_min = elementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed elementObjectVelocitySpeed_lat_max(-100.);
  elementObjectVelocity.speed_lat_max = elementObjectVelocitySpeed_lat_max;
  elementObjectVelocity.speed_lon_max = elementObjectVelocity.speed_lon_min;
  elementObjectVelocity.speed_lat_max = elementObjectVelocity.speed_lat_min;
  elementObjectVelocity.speed_lon_min = elementObjectVelocity.speed_lon_max;
  elementObjectVelocity.speed_lat_min = elementObjectVelocity.speed_lat_max;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYaw_rate(-100.);
  elementObjectState.yaw_rate = elementObjectStateYaw_rate;
  ::ad::physics::Distance2D elementObjectStateCenter_point;
  ::ad::physics::Distance elementObjectStateCenter_pointX(-1e9);
  elementObjectStateCenter_point.x = elementObjectStateCenter_pointX;
  ::ad::physics::Distance elementObjectStateCenter_pointY(-1e9);
  elementObjectStateCenter_point.y = elementObjectStateCenter_pointY;
  elementObjectState.center_point = elementObjectStateCenter_point;
  ::ad::physics::SpeedRange elementObjectStateSpeed_range;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMinimum(-100.);
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementObjectStateSpeed_rangeMaximum(-100.);
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_rangeMaximum;
  elementObjectStateSpeed_range.maximum = elementObjectStateSpeed_range.minimum;
  elementObjectStateSpeed_range.minimum = elementObjectStateSpeed_range.maximum;
  elementObjectState.speed_range = elementObjectStateSpeed_range;
  ::ad::physics::Angle elementObjectStateSteering_angle(-6.283185308);
  elementObjectState.steering_angle = elementObjectStateSteering_angle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lon.accel_max = elementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_max;
  elementObject_rss_dynamicsAlpha_lon.brake_min_correct = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamicsAlpha_lon.brake_min = elementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  elementObject_rss_dynamicsAlpha_lon.brake_max = elementObject_rss_dynamicsAlpha_lon.brake_min;
  elementObject_rss_dynamics.alpha_lon = elementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementObject_rss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObject_rss_dynamicsAlpha_lat.accel_max = elementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementObject_rss_dynamicsAlpha_lat.brake_min = elementObject_rss_dynamicsAlpha_latBrake_min;
  elementObject_rss_dynamics.alpha_lat = elementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementObject_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementObject_rss_dynamics.lateral_fluctuation_margin = elementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementObject_rss_dynamicsResponse_time(0.);
  elementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObject_rss_dynamics.response_time = elementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementObject_rss_dynamics.max_speed_on_acceleration = elementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementObject_rss_dynamics.unstructured_settings = elementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementObject_rss_dynamics.min_longitudinal_safety_distance
    = elementObject_rss_dynamicsMin_longitudinal_safety_distance;
  element.object_rss_dynamics = elementObject_rss_dynamics;
  ::ad::rss::world::RoadArea elementIntersecting_road;
  ::ad::rss::world::RoadSegment elementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType elementIntersecting_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementIntersecting_roadElement.type = elementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersecting_roadElementLane_segmentsElement.id = elementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementIntersecting_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersecting_roadElementLane_segmentsElement.driving_direction
    = elementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  elementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementIntersecting_roadElementLane_segmentsElementLength.minimum;
  elementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementIntersecting_roadElementLane_segmentsElementLength.maximum;
  elementIntersecting_roadElementLane_segmentsElement.length
    = elementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  elementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  elementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  elementIntersecting_roadElementLane_segmentsElement.width = elementIntersecting_roadElementLane_segmentsElementWidth;
  elementIntersecting_roadElementLane_segments.resize(1, elementIntersecting_roadElementLane_segmentsElement);
  elementIntersecting_roadElement.lane_segments = elementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_after_intersecting_area
    = elementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementIntersecting_roadElement.minimum_length_before_intersecting_area
    = elementIntersecting_roadElementMinimum_length_before_intersecting_area;
  elementIntersecting_road.resize(1, elementIntersecting_roadElement);
  element.intersecting_road = elementIntersecting_road;
  ::ad::rss::world::RoadArea elementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment elementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType elementEgo_vehicle_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
  elementEgo_vehicle_roadElement.type = elementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgo_vehicle_roadElementLane_segmentsElement.id = elementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = elementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.length = elementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  elementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  elementEgo_vehicle_roadElementLane_segmentsElement.width = elementEgo_vehicle_roadElementLane_segmentsElementWidth;
  elementEgo_vehicle_roadElementLane_segments.resize(1, elementEgo_vehicle_roadElementLane_segmentsElement);
  elementEgo_vehicle_roadElement.lane_segments = elementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = elementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  elementEgo_vehicle_road.resize(1, elementEgo_vehicle_roadElement);
  element.ego_vehicle_road = elementEgo_vehicle_road;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ConstellationVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::ConstellationVector value;
  ::ad::rss::world::Constellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(static_cast<::ad::rss::world::ConstellationType>(-1));
  element.constellation_type = elementConstellation_type;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
