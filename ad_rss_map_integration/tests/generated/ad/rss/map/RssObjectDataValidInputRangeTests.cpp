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

#include "ad/rss/map/RssObjectDataValidInputRange.hpp"

TEST(RssObjectDataValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeTypeTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeTypeTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeMatch_objectTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::map::match::Object invalidInitializedMember;
  ::ad::map::match::ENUObjectPosition invalidInitializedMemberEnu_position;
  ::ad::map::point::ENUPoint invalidInitializedMemberEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberEnu_positionCenter_pointX(-1e8 * 1.1);
  invalidInitializedMemberEnu_positionCenter_point.x = invalidInitializedMemberEnu_positionCenter_pointX;
  invalidInitializedMemberEnu_position.center_point = invalidInitializedMemberEnu_positionCenter_point;
  invalidInitializedMember.enu_position = invalidInitializedMemberEnu_position;
  value.match_object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeMatch_objectTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::map::match::Object invalidInitializedMember;
  ::ad::map::match::ENUObjectPosition invalidInitializedMemberEnu_position;
  ::ad::map::point::ENUPoint invalidInitializedMemberEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberEnu_positionCenter_pointX(1e8 * 1.1);
  invalidInitializedMemberEnu_positionCenter_point.x = invalidInitializedMemberEnu_positionCenter_pointX;
  invalidInitializedMemberEnu_position.center_point = invalidInitializedMemberEnu_positionCenter_point;
  invalidInitializedMember.enu_position = invalidInitializedMemberEnu_position;
  value.match_object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeSpeed_rangeTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speed_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeSpeed_rangeTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speed_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeYaw_rateTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::physics::AngularVelocity invalidInitializedMember(-100. * 1.1);
  value.yaw_rate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeYaw_rateTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::physics::AngularVelocity invalidInitializedMember(100. * 1.1);
  value.yaw_rate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeyaw_rateDefault)
{
  ::ad::rss::map::RssObjectData value;
  ::ad::physics::AngularVelocity valueDefault;
  value.yaw_rate = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeSteering_angleTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeSteering_angleTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangesteering_angleDefault)
{
  ::ad::rss::map::RssObjectData value;
  ::ad::physics::Angle valueDefault;
  value.steering_angle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeRss_dynamicsTooSmall)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(-1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.rss_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataValidInputRangeTests, testValidInputRangeRss_dynamicsTooBig)
{
  ::ad::rss::map::RssObjectData value;
  std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
  value.last_update = valueLast_update;
  ::ad::rss::world::ObjectId valueId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.id = valueId;
  ::ad::rss::world::ObjectType valueType(::ad::rss::world::ObjectType::Invalid);
  value.type = valueType;
  ::ad::map::match::Object valueMatch_object;
  ::ad::map::match::ENUObjectPosition valueMatch_objectEnu_position;
  ::ad::map::point::ENUPoint valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointX(-1e8);
  valueMatch_objectEnu_positionCenter_point.x = valueMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointY(-1e8);
  valueMatch_objectEnu_positionCenter_point.y = valueMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate valueMatch_objectEnu_positionCenter_pointZ(-1e8);
  valueMatch_objectEnu_positionCenter_point.z = valueMatch_objectEnu_positionCenter_pointZ;
  valueMatch_objectEnu_position.center_point = valueMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading valueMatch_objectEnu_positionHeading(-3.141592655);
  valueMatch_objectEnu_position.heading = valueMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude valueMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  valueMatch_objectEnu_positionEnu_reference_point.longitude
    = valueMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude valueMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  valueMatch_objectEnu_positionEnu_reference_point.latitude = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  valueMatch_objectEnu_positionEnu_reference_point.altitude = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
  valueMatch_objectEnu_position.enu_reference_point = valueMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D valueMatch_objectEnu_positionDimension;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionLength(-1e9);
  valueMatch_objectEnu_positionDimension.length = valueMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionWidth(-1e9);
  valueMatch_objectEnu_positionDimension.width = valueMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance valueMatch_objectEnu_positionDimensionHeight(-1e9);
  valueMatch_objectEnu_positionDimension.height = valueMatch_objectEnu_positionDimensionHeight;
  valueMatch_objectEnu_position.dimension = valueMatch_objectEnu_positionDimension;
  valueMatch_object.enu_position = valueMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox valueMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  valueMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, valueMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  valueMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = valueMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(1);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(-1e9);
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  valueMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, valueMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  valueMatch_objectMap_matched_bounding_box.reference_point_positions
    = valueMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  valueMatch_objectMap_matched_bounding_box.sampling_distance
    = valueMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance valueMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  valueMatch_objectMap_matched_bounding_box.match_radius = valueMatch_objectMap_matched_bounding_boxMatch_radius;
  valueMatch_object.map_matched_bounding_box = valueMatch_objectMap_matched_bounding_box;
  value.match_object = valueMatch_object;
  ::ad::physics::SpeedRange valueSpeed_range;
  ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
  valueSpeed_range.minimum = valueSpeed_rangeMinimum;
  ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
  valueSpeed_range.maximum = valueSpeed_rangeMaximum;
  valueSpeed_range.maximum = valueSpeed_range.minimum;
  valueSpeed_range.minimum = valueSpeed_range.maximum;
  value.speed_range = valueSpeed_range;
  ::ad::physics::AngularVelocity valueYaw_rate(-100.);
  value.yaw_rate = valueYaw_rate;
  ::ad::physics::Angle valueSteering_angle(-6.283185308);
  value.steering_angle = valueSteering_angle;
  ::ad::rss::world::RssDynamics valueRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonAccel_max(-1e2);
  valueRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lon.accel_max = valueRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_max(-1e2);
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lonBrake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_max;
  valueRss_dynamicsAlpha_lon.brake_min_correct = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamicsAlpha_lon.brake_min = valueRss_dynamicsAlpha_lon.brake_min_correct;
  valueRss_dynamicsAlpha_lon.brake_max = valueRss_dynamicsAlpha_lon.brake_min;
  valueRss_dynamics.alpha_lon = valueRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latAccel_max(-1e2);
  valueRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueRss_dynamicsAlpha_lat.accel_max = valueRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueRss_dynamicsAlpha_latBrake_min(-1e2);
  valueRss_dynamicsAlpha_lat.brake_min = valueRss_dynamicsAlpha_latBrake_min;
  valueRss_dynamics.alpha_lat = valueRss_dynamicsAlpha_lat;
  ::ad::physics::Distance valueRss_dynamicsLateral_fluctuation_margin(-1e9);
  valueRss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueRss_dynamics.lateral_fluctuation_margin = valueRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueRss_dynamicsResponse_time(0.);
  valueRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueRss_dynamics.response_time = valueRss_dynamicsResponse_time;
  ::ad::physics::Speed valueRss_dynamicsMax_speed_on_acceleration(-100.);
  valueRss_dynamics.max_speed_on_acceleration = valueRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueRss_dynamicsUnstructured_settings.drive_away_max_angle
    = valueRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueRss_dynamicsUnstructured_settings.vehicle_min_radius = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueRss_dynamics.unstructured_settings = valueRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueRss_dynamics.min_longitudinal_safety_distance = valueRss_dynamicsMin_longitudinal_safety_distance;
  value.rss_dynamics = valueRss_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.rss_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
