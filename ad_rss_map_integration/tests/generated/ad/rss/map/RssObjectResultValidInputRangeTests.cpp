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

#include "ad/rss/map/RssObjectResultValidInputRange.hpp"

TEST(RssObjectResultValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::map::RssObjectResult value;
  ::ad::rss::map::RssObjectData valueObject_data;
  std::chrono::system_clock::time_point valueObject_dataLast_update{std::chrono::hours(0)};
  valueObject_data.last_update = valueObject_dataLast_update;
  ::ad::rss::world::ObjectId valueObject_dataId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueObject_data.id = valueObject_dataId;
  ::ad::rss::world::ObjectType valueObject_dataType(::ad::rss::world::ObjectType::Invalid);
  valueObject_data.type = valueObject_dataType;
  ::ad::map::match::Object valueObject_dataMatch_object;
  ::ad::map::match::ENUObjectPosition valueObject_dataMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointX(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.x = valueObject_dataMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointY(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.y = valueObject_dataMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.z = valueObject_dataMatch_objectEnu_positionCenter_pointZ;
  valueObject_dataMatch_objectEnu_position.center_point = valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueObject_dataMatch_objectEnu_positionHeading(-3.141592655);
  valueObject_dataMatch_objectEnu_position.heading = valueObject_dataMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.longitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.latitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.altitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueObject_dataMatch_objectEnu_position.enu_reference_point
    = valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueObject_dataMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionLength(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.length = valueObject_dataMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionWidth(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.width = valueObject_dataMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionHeight(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.height = valueObject_dataMatch_objectEnu_positionDimensionHeight;
  valueObject_dataMatch_objectEnu_position.dimension = valueObject_dataMatch_objectEnu_positionDimension;
  valueObject_dataMatch_object.enu_position = valueObject_dataMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueObject_dataMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(
      1);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .parametric_offset
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.sampling_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.match_radius
    = valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius;
  valueObject_dataMatch_object.map_matched_bounding_box = valueObject_dataMatch_objectMap_matched_bounding_box;
  valueObject_data.match_object = valueObject_dataMatch_object;
  ::ad::physics::SpeedRange valueObject_dataSpeed_range;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMinimum(-100.);
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_rangeMinimum;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMaximum(-100.);
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_rangeMaximum;
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_range.minimum;
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_range.maximum;
  valueObject_data.speed_range = valueObject_dataSpeed_range;
  ::ad::physics::AngularVelocity valueObject_dataYaw_rate(-100.);
  valueObject_data.yaw_rate = valueObject_dataYaw_rate;
  ::ad::physics::Angle valueObject_dataSteering_angle(-6.283185308);
  valueObject_data.steering_angle = valueObject_dataSteering_angle;
  ::ad::rss::world::RssDynamics valueObject_dataRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lon.accel_max = valueObject_dataRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_max;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamics.alpha_lon = valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lat.accel_max = valueObject_dataRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lat.brake_min = valueObject_dataRss_dynamicsAlpha_latBrake_min;
  valueObject_dataRss_dynamics.alpha_lat = valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dataRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dataRss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dataRss_dynamics.lateral_fluctuation_margin = valueObject_dataRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dataRss_dynamicsResponse_time(0.);
  valueObject_dataRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dataRss_dynamics.response_time = valueObject_dataRss_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dataRss_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dataRss_dynamics.max_speed_on_acceleration = valueObject_dataRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dataRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dataRss_dynamics.unstructured_settings = valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dataRss_dynamics.min_longitudinal_safety_distance
    = valueObject_dataRss_dynamicsMin_longitudinal_safety_distance;
  valueObject_data.rss_dynamics = valueObject_dataRss_dynamics;
  value.object_data = valueObject_data;
  ::ad::rss::map::RssRouteCheckResultList valueSituation_check_results;
  ::ad::rss::map::RssRouteCheckResult valueSituation_check_resultsElement;
  ::ad::rss::map::RssRoute valueSituation_check_resultsElementRss_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeRoute_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.route_id = valueSituation_check_resultsElementRss_routeRoute_id;
  ::ad::map::route::FullRoute valueSituation_check_resultsElementRss_routeRoute;
  ::ad::map::route::RoadSegmentList valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .lane_id
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{
      true};
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .wrong_way
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.drivable_lane_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.center
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius(
    -1e9);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.radius
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.bounding_sphere
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  valueSituation_check_resultsElementRss_routeRouteRoad_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement);
  valueSituation_check_resultsElementRss_routeRoute.road_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.route_planning_counter
    = valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.full_route_segment_count
    = valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.destination_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.min_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.max_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::Undefined);
  valueSituation_check_resultsElementRss_routeRoute.route_creation_mode
    = valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode;
  valueSituation_check_resultsElementRss_route.route = valueSituation_check_resultsElementRss_routeRoute;
  ::ad::physics::Probability valueSituation_check_resultsElementRss_routeLikelihood(0.);
  valueSituation_check_resultsElementRss_route.likelihood = valueSituation_check_resultsElementRss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point
    valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.last_update
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  valueSituation_check_resultsElementRss_route.vehicle_dynamics_on_route
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeParent_route_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.parent_route_id
    = valueSituation_check_resultsElementRss_routeParent_route_id;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeProgress_on_route(-1e9);
  valueSituation_check_resultsElementRss_route.progress_on_route
    = valueSituation_check_resultsElementRss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute valueSituation_check_resultsElementRss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading(
    -3.141592655);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_radius
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta(
    -6.283185308);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading_delta
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lat
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lon
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_position_projected_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.is_valid
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_to_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .object_center_position_projected_on_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_along_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .nominal_center_position_of_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_turning_center
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  valueSituation_check_resultsElementRss_route.object_data_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_route;
  valueSituation_check_resultsElement.rss_route = valueSituation_check_resultsElementRss_route;
  bool valueSituation_check_resultsElementIs_valid{true};
  valueSituation_check_resultsElement.is_valid = valueSituation_check_resultsElementIs_valid;
  ::ad::rss::world::WorldModel valueSituation_check_resultsElementWorld_model;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementWorld_modelTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementWorld_modelTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementWorld_model.time_index = valueSituation_check_resultsElementWorld_modelTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(
    0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_model.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector valueSituation_check_resultsElementWorld_modelConstellations;
  ::ad::rss::world::Constellation valueSituation_check_resultsElementWorld_modelConstellationsElement;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.constellation_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.intersecting_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  valueSituation_check_resultsElementWorld_modelConstellations.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElement);
  valueSituation_check_resultsElementWorld_model.constellations
    = valueSituation_check_resultsElementWorld_modelConstellations;
  valueSituation_check_resultsElement.world_model = valueSituation_check_resultsElementWorld_model;
  ::ad::rss::core::RssSituationSnapshot valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_situation_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshot.time_index
    = valueSituation_check_resultsElementRss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.object_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.other_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
      ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.relative_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
      std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.world_model_indices
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  valueSituation_check_resultsElementRss_situation_snapshotConstellations.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement);
  valueSituation_check_resultsElementRss_situation_snapshot.constellations
    = valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  valueSituation_check_resultsElement.rss_situation_snapshot
    = valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_state_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshot.time_index
    = valueSituation_check_resultsElementRss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_state_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.ego_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.object_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.longitudinal_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_right
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_left
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{
      true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .begin
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .end
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .heading_range
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_type
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responses.resize(
    1, valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement);
  valueSituation_check_resultsElementRss_state_snapshot.individual_responses
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshot.unstructured_constellation_ego_information
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  valueSituation_check_resultsElement.rss_state_snapshot = valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::state::ProperResponse valueSituation_check_resultsElementProper_response;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementProper_responseTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementProper_responseTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementProper_response.time_index
    = valueSituation_check_resultsElementProper_responseTime_index;
  bool valueSituation_check_resultsElementProper_responseIs_safe{true};
  valueSituation_check_resultsElementProper_response.is_safe
    = valueSituation_check_resultsElementProper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementProper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementProper_responseDangerous_objects.resize(
    1, valueSituation_check_resultsElementProper_responseDangerous_objectsElement);
  valueSituation_check_resultsElementProper_response.dangerous_objects
    = valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse valueSituation_check_resultsElementProper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementProper_response.longitudinal_response
    = valueSituation_check_resultsElementProper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_right(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_right
    = valueSituation_check_resultsElementProper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_left(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_left
    = valueSituation_check_resultsElementProper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::geometry::HeadingRange valueSituation_check_resultsElementProper_responseHeading_rangesElement;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.begin
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.end
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd;
  valueSituation_check_resultsElementProper_responseHeading_ranges.resize(
    1, valueSituation_check_resultsElementProper_responseHeading_rangesElement);
  valueSituation_check_resultsElementProper_response.heading_ranges
    = valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_left_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.longitudinal_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_right_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  valueSituation_check_resultsElementProper_response.acceleration_restrictions
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementProper_responseUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementProper_response.unstructured_constellation_response
    = valueSituation_check_resultsElementProper_responseUnstructured_constellation_response;
  valueSituation_check_resultsElement.proper_response = valueSituation_check_resultsElementProper_response;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueSituation_check_resultsElementResult_analysis;
  bool valueSituation_check_resultsElementResult_analysisDangerous_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_state
    = valueSituation_check_resultsElementResult_analysisDangerous_state;
  bool valueSituation_check_resultsElementResult_analysisDangerous_vehicle{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_vehicle
    = valueSituation_check_resultsElementResult_analysisDangerous_vehicle;
  bool valueSituation_check_resultsElementResult_analysisDangerous_opposite_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_opposite_state
    = valueSituation_check_resultsElementResult_analysisDangerous_opposite_state;
  bool valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries{true};
  valueSituation_check_resultsElementResult_analysis.vehicle_crossing_road_boundaries
    = valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries;
  valueSituation_check_resultsElement.result_analysis = valueSituation_check_resultsElementResult_analysis;
  valueSituation_check_results.resize(1, valueSituation_check_resultsElement);
  value.situation_check_results = valueSituation_check_results;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssObjectResultValidInputRangeTests, testValidInputRangeObject_dataTooSmall)
{
  ::ad::rss::map::RssObjectResult value;
  ::ad::rss::map::RssObjectData valueObject_data;
  std::chrono::system_clock::time_point valueObject_dataLast_update{std::chrono::hours(0)};
  valueObject_data.last_update = valueObject_dataLast_update;
  ::ad::rss::world::ObjectId valueObject_dataId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueObject_data.id = valueObject_dataId;
  ::ad::rss::world::ObjectType valueObject_dataType(::ad::rss::world::ObjectType::Invalid);
  valueObject_data.type = valueObject_dataType;
  ::ad::map::match::Object valueObject_dataMatch_object;
  ::ad::map::match::ENUObjectPosition valueObject_dataMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointX(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.x = valueObject_dataMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointY(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.y = valueObject_dataMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.z = valueObject_dataMatch_objectEnu_positionCenter_pointZ;
  valueObject_dataMatch_objectEnu_position.center_point = valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueObject_dataMatch_objectEnu_positionHeading(-3.141592655);
  valueObject_dataMatch_objectEnu_position.heading = valueObject_dataMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.longitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.latitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.altitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueObject_dataMatch_objectEnu_position.enu_reference_point
    = valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueObject_dataMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionLength(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.length = valueObject_dataMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionWidth(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.width = valueObject_dataMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionHeight(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.height = valueObject_dataMatch_objectEnu_positionDimensionHeight;
  valueObject_dataMatch_objectEnu_position.dimension = valueObject_dataMatch_objectEnu_positionDimension;
  valueObject_dataMatch_object.enu_position = valueObject_dataMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueObject_dataMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(
      1);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .parametric_offset
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.sampling_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.match_radius
    = valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius;
  valueObject_dataMatch_object.map_matched_bounding_box = valueObject_dataMatch_objectMap_matched_bounding_box;
  valueObject_data.match_object = valueObject_dataMatch_object;
  ::ad::physics::SpeedRange valueObject_dataSpeed_range;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMinimum(-100.);
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_rangeMinimum;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMaximum(-100.);
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_rangeMaximum;
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_range.minimum;
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_range.maximum;
  valueObject_data.speed_range = valueObject_dataSpeed_range;
  ::ad::physics::AngularVelocity valueObject_dataYaw_rate(-100.);
  valueObject_data.yaw_rate = valueObject_dataYaw_rate;
  ::ad::physics::Angle valueObject_dataSteering_angle(-6.283185308);
  valueObject_data.steering_angle = valueObject_dataSteering_angle;
  ::ad::rss::world::RssDynamics valueObject_dataRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lon.accel_max = valueObject_dataRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_max;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamics.alpha_lon = valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lat.accel_max = valueObject_dataRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lat.brake_min = valueObject_dataRss_dynamicsAlpha_latBrake_min;
  valueObject_dataRss_dynamics.alpha_lat = valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dataRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dataRss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dataRss_dynamics.lateral_fluctuation_margin = valueObject_dataRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dataRss_dynamicsResponse_time(0.);
  valueObject_dataRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dataRss_dynamics.response_time = valueObject_dataRss_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dataRss_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dataRss_dynamics.max_speed_on_acceleration = valueObject_dataRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dataRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dataRss_dynamics.unstructured_settings = valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dataRss_dynamics.min_longitudinal_safety_distance
    = valueObject_dataRss_dynamicsMin_longitudinal_safety_distance;
  valueObject_data.rss_dynamics = valueObject_dataRss_dynamics;
  value.object_data = valueObject_data;
  ::ad::rss::map::RssRouteCheckResultList valueSituation_check_results;
  ::ad::rss::map::RssRouteCheckResult valueSituation_check_resultsElement;
  ::ad::rss::map::RssRoute valueSituation_check_resultsElementRss_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeRoute_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.route_id = valueSituation_check_resultsElementRss_routeRoute_id;
  ::ad::map::route::FullRoute valueSituation_check_resultsElementRss_routeRoute;
  ::ad::map::route::RoadSegmentList valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .lane_id
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{
      true};
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .wrong_way
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.drivable_lane_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.center
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius(
    -1e9);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.radius
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.bounding_sphere
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  valueSituation_check_resultsElementRss_routeRouteRoad_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement);
  valueSituation_check_resultsElementRss_routeRoute.road_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.route_planning_counter
    = valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.full_route_segment_count
    = valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.destination_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.min_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.max_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::Undefined);
  valueSituation_check_resultsElementRss_routeRoute.route_creation_mode
    = valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode;
  valueSituation_check_resultsElementRss_route.route = valueSituation_check_resultsElementRss_routeRoute;
  ::ad::physics::Probability valueSituation_check_resultsElementRss_routeLikelihood(0.);
  valueSituation_check_resultsElementRss_route.likelihood = valueSituation_check_resultsElementRss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point
    valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.last_update
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  valueSituation_check_resultsElementRss_route.vehicle_dynamics_on_route
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeParent_route_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.parent_route_id
    = valueSituation_check_resultsElementRss_routeParent_route_id;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeProgress_on_route(-1e9);
  valueSituation_check_resultsElementRss_route.progress_on_route
    = valueSituation_check_resultsElementRss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute valueSituation_check_resultsElementRss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading(
    -3.141592655);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_radius
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta(
    -6.283185308);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading_delta
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lat
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lon
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_position_projected_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.is_valid
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_to_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .object_center_position_projected_on_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_along_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .nominal_center_position_of_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_turning_center
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  valueSituation_check_resultsElementRss_route.object_data_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_route;
  valueSituation_check_resultsElement.rss_route = valueSituation_check_resultsElementRss_route;
  bool valueSituation_check_resultsElementIs_valid{true};
  valueSituation_check_resultsElement.is_valid = valueSituation_check_resultsElementIs_valid;
  ::ad::rss::world::WorldModel valueSituation_check_resultsElementWorld_model;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementWorld_modelTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementWorld_modelTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementWorld_model.time_index = valueSituation_check_resultsElementWorld_modelTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(
    0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_model.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector valueSituation_check_resultsElementWorld_modelConstellations;
  ::ad::rss::world::Constellation valueSituation_check_resultsElementWorld_modelConstellationsElement;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.constellation_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.intersecting_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  valueSituation_check_resultsElementWorld_modelConstellations.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElement);
  valueSituation_check_resultsElementWorld_model.constellations
    = valueSituation_check_resultsElementWorld_modelConstellations;
  valueSituation_check_resultsElement.world_model = valueSituation_check_resultsElementWorld_model;
  ::ad::rss::core::RssSituationSnapshot valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_situation_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshot.time_index
    = valueSituation_check_resultsElementRss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.object_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.other_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
      ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.relative_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
      std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.world_model_indices
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  valueSituation_check_resultsElementRss_situation_snapshotConstellations.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement);
  valueSituation_check_resultsElementRss_situation_snapshot.constellations
    = valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  valueSituation_check_resultsElement.rss_situation_snapshot
    = valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_state_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshot.time_index
    = valueSituation_check_resultsElementRss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_state_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.ego_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.object_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.longitudinal_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_right
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_left
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{
      true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .begin
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .end
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .heading_range
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_type
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responses.resize(
    1, valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement);
  valueSituation_check_resultsElementRss_state_snapshot.individual_responses
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshot.unstructured_constellation_ego_information
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  valueSituation_check_resultsElement.rss_state_snapshot = valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::state::ProperResponse valueSituation_check_resultsElementProper_response;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementProper_responseTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementProper_responseTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementProper_response.time_index
    = valueSituation_check_resultsElementProper_responseTime_index;
  bool valueSituation_check_resultsElementProper_responseIs_safe{true};
  valueSituation_check_resultsElementProper_response.is_safe
    = valueSituation_check_resultsElementProper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementProper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementProper_responseDangerous_objects.resize(
    1, valueSituation_check_resultsElementProper_responseDangerous_objectsElement);
  valueSituation_check_resultsElementProper_response.dangerous_objects
    = valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse valueSituation_check_resultsElementProper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementProper_response.longitudinal_response
    = valueSituation_check_resultsElementProper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_right(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_right
    = valueSituation_check_resultsElementProper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_left(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_left
    = valueSituation_check_resultsElementProper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::geometry::HeadingRange valueSituation_check_resultsElementProper_responseHeading_rangesElement;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.begin
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.end
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd;
  valueSituation_check_resultsElementProper_responseHeading_ranges.resize(
    1, valueSituation_check_resultsElementProper_responseHeading_rangesElement);
  valueSituation_check_resultsElementProper_response.heading_ranges
    = valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_left_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.longitudinal_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_right_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  valueSituation_check_resultsElementProper_response.acceleration_restrictions
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementProper_responseUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementProper_response.unstructured_constellation_response
    = valueSituation_check_resultsElementProper_responseUnstructured_constellation_response;
  valueSituation_check_resultsElement.proper_response = valueSituation_check_resultsElementProper_response;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueSituation_check_resultsElementResult_analysis;
  bool valueSituation_check_resultsElementResult_analysisDangerous_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_state
    = valueSituation_check_resultsElementResult_analysisDangerous_state;
  bool valueSituation_check_resultsElementResult_analysisDangerous_vehicle{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_vehicle
    = valueSituation_check_resultsElementResult_analysisDangerous_vehicle;
  bool valueSituation_check_resultsElementResult_analysisDangerous_opposite_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_opposite_state
    = valueSituation_check_resultsElementResult_analysisDangerous_opposite_state;
  bool valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries{true};
  valueSituation_check_resultsElementResult_analysis.vehicle_crossing_road_boundaries
    = valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries;
  valueSituation_check_resultsElement.result_analysis = valueSituation_check_resultsElementResult_analysis;
  valueSituation_check_results.resize(1, valueSituation_check_resultsElement);
  value.situation_check_results = valueSituation_check_results;

  // override member with data type value below input range minimum
  ::ad::rss::map::RssObjectData invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.type = invalidInitializedMemberType;
  value.object_data = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectResultValidInputRangeTests, testValidInputRangeObject_dataTooBig)
{
  ::ad::rss::map::RssObjectResult value;
  ::ad::rss::map::RssObjectData valueObject_data;
  std::chrono::system_clock::time_point valueObject_dataLast_update{std::chrono::hours(0)};
  valueObject_data.last_update = valueObject_dataLast_update;
  ::ad::rss::world::ObjectId valueObject_dataId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueObject_data.id = valueObject_dataId;
  ::ad::rss::world::ObjectType valueObject_dataType(::ad::rss::world::ObjectType::Invalid);
  valueObject_data.type = valueObject_dataType;
  ::ad::map::match::Object valueObject_dataMatch_object;
  ::ad::map::match::ENUObjectPosition valueObject_dataMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointX(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.x = valueObject_dataMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointY(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.y = valueObject_dataMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueObject_dataMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueObject_dataMatch_objectEnu_positionCenter_point.z = valueObject_dataMatch_objectEnu_positionCenter_pointZ;
  valueObject_dataMatch_objectEnu_position.center_point = valueObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueObject_dataMatch_objectEnu_positionHeading(-3.141592655);
  valueObject_dataMatch_objectEnu_position.heading = valueObject_dataMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.longitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.latitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueObject_dataMatch_objectEnu_positionEnu_reference_point.altitude
    = valueObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueObject_dataMatch_objectEnu_position.enu_reference_point
    = valueObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueObject_dataMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionLength(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.length = valueObject_dataMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionWidth(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.width = valueObject_dataMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueObject_dataMatch_objectEnu_positionDimensionHeight(-1e9);
  valueObject_dataMatch_objectEnu_positionDimension.height = valueObject_dataMatch_objectEnu_positionDimensionHeight;
  valueObject_dataMatch_objectEnu_position.dimension = valueObject_dataMatch_objectEnu_positionDimension;
  valueObject_dataMatch_object.enu_position = valueObject_dataMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueObject_dataMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(
      1);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .lane_id
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .parametric_offset
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(
      -1e9);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueObject_dataMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.sampling_distance
    = valueObject_dataMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueObject_dataMatch_objectMap_matched_bounding_box.match_radius
    = valueObject_dataMatch_objectMap_matched_bounding_boxMatch_radius;
  valueObject_dataMatch_object.map_matched_bounding_box = valueObject_dataMatch_objectMap_matched_bounding_box;
  valueObject_data.match_object = valueObject_dataMatch_object;
  ::ad::physics::SpeedRange valueObject_dataSpeed_range;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMinimum(-100.);
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_rangeMinimum;
  ::ad::physics::Speed valueObject_dataSpeed_rangeMaximum(-100.);
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_rangeMaximum;
  valueObject_dataSpeed_range.maximum = valueObject_dataSpeed_range.minimum;
  valueObject_dataSpeed_range.minimum = valueObject_dataSpeed_range.maximum;
  valueObject_data.speed_range = valueObject_dataSpeed_range;
  ::ad::physics::AngularVelocity valueObject_dataYaw_rate(-100.);
  valueObject_data.yaw_rate = valueObject_dataYaw_rate;
  ::ad::physics::Angle valueObject_dataSteering_angle(-6.283185308);
  valueObject_data.steering_angle = valueObject_dataSteering_angle;
  ::ad::rss::world::RssDynamics valueObject_dataRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lon.accel_max = valueObject_dataRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_max;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamicsAlpha_lon.brake_min = valueObject_dataRss_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dataRss_dynamicsAlpha_lon.brake_max = valueObject_dataRss_dynamicsAlpha_lon.brake_min;
  valueObject_dataRss_dynamics.alpha_lon = valueObject_dataRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dataRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dataRss_dynamicsAlpha_lat.accel_max = valueObject_dataRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dataRss_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dataRss_dynamicsAlpha_lat.brake_min = valueObject_dataRss_dynamicsAlpha_latBrake_min;
  valueObject_dataRss_dynamics.alpha_lat = valueObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dataRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dataRss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dataRss_dynamics.lateral_fluctuation_margin = valueObject_dataRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dataRss_dynamicsResponse_time(0.);
  valueObject_dataRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dataRss_dynamics.response_time = valueObject_dataRss_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dataRss_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dataRss_dynamics.max_speed_on_acceleration = valueObject_dataRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dataRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dataRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dataRss_dynamics.unstructured_settings = valueObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dataRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dataRss_dynamics.min_longitudinal_safety_distance
    = valueObject_dataRss_dynamicsMin_longitudinal_safety_distance;
  valueObject_data.rss_dynamics = valueObject_dataRss_dynamics;
  value.object_data = valueObject_data;
  ::ad::rss::map::RssRouteCheckResultList valueSituation_check_results;
  ::ad::rss::map::RssRouteCheckResult valueSituation_check_resultsElement;
  ::ad::rss::map::RssRoute valueSituation_check_resultsElementRss_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeRoute_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.route_id = valueSituation_check_resultsElementRss_routeRoute_id;
  ::ad::map::route::FullRoute valueSituation_check_resultsElementRss_routeRoute;
  ::ad::map::route::RoadSegmentList valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1,
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
      1);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .lane_id
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
      0.);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{
      true};
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .wrong_way
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.drivable_lane_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate
    valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.center
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius(
    -1e9);
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.radius
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.bounding_sphere
    = valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  valueSituation_check_resultsElementRss_routeRouteRoad_segments.resize(
    1, valueSituation_check_resultsElementRss_routeRouteRoad_segmentsElement);
  valueSituation_check_resultsElementRss_routeRoute.road_segments
    = valueSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.route_planning_counter
    = valueSituation_check_resultsElementRss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.full_route_segment_count
    = valueSituation_check_resultsElementRss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.destination_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.min_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset valueSituation_check_resultsElementRss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  valueSituation_check_resultsElementRss_routeRoute.max_lane_offset
    = valueSituation_check_resultsElementRss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::Undefined);
  valueSituation_check_resultsElementRss_routeRoute.route_creation_mode
    = valueSituation_check_resultsElementRss_routeRouteRoute_creation_mode;
  valueSituation_check_resultsElementRss_route.route = valueSituation_check_resultsElementRss_routeRoute;
  ::ad::physics::Probability valueSituation_check_resultsElementRss_routeLikelihood(0.);
  valueSituation_check_resultsElementRss_route.likelihood = valueSituation_check_resultsElementRss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point
    valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.last_update
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(
    -1e2);
  valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  valueSituation_check_resultsElementRss_route.vehicle_dynamics_on_route
    = valueSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId valueSituation_check_resultsElementRss_routeParent_route_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  valueSituation_check_resultsElementRss_route.parent_route_id
    = valueSituation_check_resultsElementRss_routeParent_route_id;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeProgress_on_route(-1e9);
  valueSituation_check_resultsElementRss_route.progress_on_route
    = valueSituation_check_resultsElementRss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute valueSituation_check_resultsElementRss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading(
    -3.141592655);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_radius
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta(
    -6.283185308);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_heading_delta
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lat
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon(-100.);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lon
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_within_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_position_projected_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid{true};
  valueSituation_check_resultsElementRss_routeObject_data_on_route.is_valid
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_to_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .object_center_position_projected_on_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_along_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
      -1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route
    .nominal_center_position_of_lane_in_nominal_route_direction
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_left
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_right
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.x
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.y
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate
    valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
  valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.z
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ;
  valueSituation_check_resultsElementRss_routeObject_data_on_route.object_turning_center
    = valueSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  valueSituation_check_resultsElementRss_route.object_data_on_route
    = valueSituation_check_resultsElementRss_routeObject_data_on_route;
  valueSituation_check_resultsElement.rss_route = valueSituation_check_resultsElementRss_route;
  bool valueSituation_check_resultsElementIs_valid{true};
  valueSituation_check_resultsElement.is_valid = valueSituation_check_resultsElementIs_valid;
  ::ad::rss::world::WorldModel valueSituation_check_resultsElementWorld_model;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementWorld_modelTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementWorld_modelTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementWorld_model.time_index = valueSituation_check_resultsElementWorld_modelTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(
    0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_model.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector valueSituation_check_resultsElementWorld_modelConstellations;
  ::ad::rss::world::Constellation valueSituation_check_resultsElementWorld_modelConstellationsElement;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.constellation_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.object_type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.occupied_regions
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.velocity
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw(-6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.dimension
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw_rate
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.x
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY(
    -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.y
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.center_point
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(
    -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.speed_range
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle(
    -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState.steering_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject.state
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.response_time
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementWorld_modelConstellationsElement.object_rss_dynamics
    = valueSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.intersecting_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.type
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement
    .driving_direction
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .minimum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .maximum;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_after_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_before_intersecting_area
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement);
  valueSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_road
    = valueSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  valueSituation_check_resultsElementWorld_modelConstellations.resize(
    1, valueSituation_check_resultsElementWorld_modelConstellationsElement);
  valueSituation_check_resultsElementWorld_model.constellations
    = valueSituation_check_resultsElementWorld_modelConstellations;
  valueSituation_check_resultsElement.world_model = valueSituation_check_resultsElementWorld_model;
  ::ad::rss::core::RssSituationSnapshot valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_situation_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshot.time_index
    = valueSituation_check_resultsElementRss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.object_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_id
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.object_type
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .unstructured_settings
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.dynamics
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .length
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .width
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .dimension
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .yaw_rate
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .x
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .y
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .center_point
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .minimum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .maximum;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .speed_range
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .steering_angle
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_min;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_max;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .velocity
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .has_priority
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{
      true};
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .is_in_correct_lane
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_enter_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_leave_intersection;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.other_state
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
      ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(
      -1e9);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.relative_position
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex
    valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
      std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement.world_model_indices
    = valueSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  valueSituation_check_resultsElementRss_situation_snapshotConstellations.resize(
    1, valueSituation_check_resultsElementRss_situation_snapshotConstellationsElement);
  valueSituation_check_resultsElementRss_situation_snapshot.constellations
    = valueSituation_check_resultsElementRss_situation_snapshotConstellations;
  valueSituation_check_resultsElement.rss_situation_snapshot
    = valueSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementRss_state_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshot.time_index
    = valueSituation_check_resultsElementRss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueSituation_check_resultsElementRss_state_snapshot.default_ego_vehicle_rss_dynamics
    = valueSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.ego_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.object_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_id
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.longitudinal_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_right
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .safe_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .current_distance
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .evaluator
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_left
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{
      true};
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .is_safe
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .response
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .begin
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .end
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .heading_range
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .rss_state_information
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .accel_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
      -1e2);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_max;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min_correct;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .alpha_lon
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType
    valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_type
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type;
  valueSituation_check_resultsElementRss_state_snapshotIndividual_responses.resize(
    1, valueSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement);
  valueSituation_check_resultsElementRss_state_snapshot.individual_responses
    = valueSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .x
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(
      -1e9);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .y
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set
    .resize(
      1,
      valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .continue_forward_trajectory_set
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .considered_drive_away_steering_angle
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  valueSituation_check_resultsElementRss_state_snapshot.unstructured_constellation_ego_information
    = valueSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  valueSituation_check_resultsElement.rss_state_snapshot = valueSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::state::ProperResponse valueSituation_check_resultsElementProper_response;
  ::ad::rss::world::TimeIndex valueSituation_check_resultsElementProper_responseTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueSituation_check_resultsElementProper_responseTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  valueSituation_check_resultsElementProper_response.time_index
    = valueSituation_check_resultsElementProper_responseTime_index;
  bool valueSituation_check_resultsElementProper_responseIs_safe{true};
  valueSituation_check_resultsElementProper_response.is_safe
    = valueSituation_check_resultsElementProper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::world::ObjectId valueSituation_check_resultsElementProper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituation_check_resultsElementProper_responseDangerous_objects.resize(
    1, valueSituation_check_resultsElementProper_responseDangerous_objectsElement);
  valueSituation_check_resultsElementProper_response.dangerous_objects
    = valueSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse valueSituation_check_resultsElementProper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::None);
  valueSituation_check_resultsElementProper_response.longitudinal_response
    = valueSituation_check_resultsElementProper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_right(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_right
    = valueSituation_check_resultsElementProper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse valueSituation_check_resultsElementProper_responseLateral_response_left(
    ::ad::rss::state::LateralResponse::None);
  valueSituation_check_resultsElementProper_response.lateral_response_left
    = valueSituation_check_resultsElementProper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::geometry::HeadingRange valueSituation_check_resultsElementProper_responseHeading_rangesElement;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.begin
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd(-6.283185308);
  valueSituation_check_resultsElementProper_responseHeading_rangesElement.end
    = valueSituation_check_resultsElementProper_responseHeading_rangesElementEnd;
  valueSituation_check_resultsElementProper_responseHeading_ranges.resize(
    1, valueSituation_check_resultsElementProper_responseHeading_rangesElement);
  valueSituation_check_resultsElementProper_response.heading_ranges
    = valueSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_left_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.longitudinal_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration
    valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum;
  valueSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_right_range
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  valueSituation_check_resultsElementProper_response.acceleration_restrictions
    = valueSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse
    valueSituation_check_resultsElementProper_responseUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueSituation_check_resultsElementProper_response.unstructured_constellation_response
    = valueSituation_check_resultsElementProper_responseUnstructured_constellation_response;
  valueSituation_check_resultsElement.proper_response = valueSituation_check_resultsElementProper_response;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueSituation_check_resultsElementResult_analysis;
  bool valueSituation_check_resultsElementResult_analysisDangerous_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_state
    = valueSituation_check_resultsElementResult_analysisDangerous_state;
  bool valueSituation_check_resultsElementResult_analysisDangerous_vehicle{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_vehicle
    = valueSituation_check_resultsElementResult_analysisDangerous_vehicle;
  bool valueSituation_check_resultsElementResult_analysisDangerous_opposite_state{true};
  valueSituation_check_resultsElementResult_analysis.dangerous_opposite_state
    = valueSituation_check_resultsElementResult_analysisDangerous_opposite_state;
  bool valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries{true};
  valueSituation_check_resultsElementResult_analysis.vehicle_crossing_road_boundaries
    = valueSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries;
  valueSituation_check_resultsElement.result_analysis = valueSituation_check_resultsElementResult_analysis;
  valueSituation_check_results.resize(1, valueSituation_check_resultsElement);
  value.situation_check_results = valueSituation_check_results;

  // override member with data type value above input range maximum
  ::ad::rss::map::RssObjectData invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.type = invalidInitializedMemberType;
  value.object_data = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
