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

#include "ad/rss/map/RssObjectResultListValidInputRange.hpp"

TEST(RssObjectResultListValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::map::RssObjectResultList value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssObjectResultListValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::map::RssObjectResultList value;
  ::ad::rss::map::RssObjectResult element;
  ::ad::rss::map::RssObjectData elementObject_data;
  std::chrono::system_clock::time_point elementObject_dataLast_update{std::chrono::hours(0)};
  elementObject_data.last_update = elementObject_dataLast_update;
  ::ad::rss::world::ObjectId elementObject_dataId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject_data.id = elementObject_dataId;
  ::ad::rss::world::ObjectType elementObject_dataType(::ad::rss::world::ObjectType::Invalid);
  elementObject_data.type = elementObject_dataType;
  ::ad::map::match::Object elementObject_dataMatch_object;
  ::ad::map::match::ENUObjectPosition elementObject_dataMatch_objectEnu_position;
  ::ad::map::point::ENUPoint elementObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate elementObject_dataMatch_objectEnu_positionCenter_pointX(-1e8);
  elementObject_dataMatch_objectEnu_positionCenter_point.x = elementObject_dataMatch_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate elementObject_dataMatch_objectEnu_positionCenter_pointY(-1e8);
  elementObject_dataMatch_objectEnu_positionCenter_point.y = elementObject_dataMatch_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate elementObject_dataMatch_objectEnu_positionCenter_pointZ(-1e8);
  elementObject_dataMatch_objectEnu_positionCenter_point.z = elementObject_dataMatch_objectEnu_positionCenter_pointZ;
  elementObject_dataMatch_objectEnu_position.center_point = elementObject_dataMatch_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading elementObject_dataMatch_objectEnu_positionHeading(-3.141592655);
  elementObject_dataMatch_objectEnu_position.heading = elementObject_dataMatch_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint elementObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude elementObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude(-180);
  elementObject_dataMatch_objectEnu_positionEnu_reference_point.longitude
    = elementObject_dataMatch_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude elementObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude(-90);
  elementObject_dataMatch_objectEnu_positionEnu_reference_point.latitude
    = elementObject_dataMatch_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude elementObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
  elementObject_dataMatch_objectEnu_positionEnu_reference_point.altitude
    = elementObject_dataMatch_objectEnu_positionEnu_reference_pointAltitude;
  elementObject_dataMatch_objectEnu_position.enu_reference_point
    = elementObject_dataMatch_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D elementObject_dataMatch_objectEnu_positionDimension;
  ::ad::physics::Distance elementObject_dataMatch_objectEnu_positionDimensionLength(-1e9);
  elementObject_dataMatch_objectEnu_positionDimension.length
    = elementObject_dataMatch_objectEnu_positionDimensionLength;
  ::ad::physics::Distance elementObject_dataMatch_objectEnu_positionDimensionWidth(-1e9);
  elementObject_dataMatch_objectEnu_positionDimension.width = elementObject_dataMatch_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance elementObject_dataMatch_objectEnu_positionDimensionHeight(-1e9);
  elementObject_dataMatch_objectEnu_positionDimension.height
    = elementObject_dataMatch_objectEnu_positionDimensionHeight;
  elementObject_dataMatch_objectEnu_position.dimension = elementObject_dataMatch_objectEnu_positionDimension;
  elementObject_dataMatch_object.enu_position = elementObject_dataMatch_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox elementObject_dataMatch_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(1);
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue
    elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    1, elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  elementObject_dataMatch_objectMap_matched_bounding_box.lane_occupied_regions
    = elementObject_dataMatch_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(
      1);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .lane_id
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
    .parametric_offset
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::lowest());
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(
      -1e9);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(
      -1e9);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::INVALID);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(
      -6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(
      -6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(
      -6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(0.);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(-6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(-6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(-6400000);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(
      -1e9);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    1, elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions.resize(
    1, elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positionsElement);
  elementObject_dataMatch_objectMap_matched_bounding_box.reference_point_positions
    = elementObject_dataMatch_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance elementObject_dataMatch_objectMap_matched_bounding_boxSampling_distance(-1e9);
  elementObject_dataMatch_objectMap_matched_bounding_box.sampling_distance
    = elementObject_dataMatch_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance elementObject_dataMatch_objectMap_matched_bounding_boxMatch_radius(-1e9);
  elementObject_dataMatch_objectMap_matched_bounding_box.match_radius
    = elementObject_dataMatch_objectMap_matched_bounding_boxMatch_radius;
  elementObject_dataMatch_object.map_matched_bounding_box = elementObject_dataMatch_objectMap_matched_bounding_box;
  elementObject_data.match_object = elementObject_dataMatch_object;
  ::ad::physics::SpeedRange elementObject_dataSpeed_range;
  ::ad::physics::Speed elementObject_dataSpeed_rangeMinimum(-100.);
  elementObject_dataSpeed_range.minimum = elementObject_dataSpeed_rangeMinimum;
  ::ad::physics::Speed elementObject_dataSpeed_rangeMaximum(-100.);
  elementObject_dataSpeed_range.maximum = elementObject_dataSpeed_rangeMaximum;
  elementObject_dataSpeed_range.maximum = elementObject_dataSpeed_range.minimum;
  elementObject_dataSpeed_range.minimum = elementObject_dataSpeed_range.maximum;
  elementObject_data.speed_range = elementObject_dataSpeed_range;
  ::ad::physics::AngularVelocity elementObject_dataYaw_rate(-100.);
  elementObject_data.yaw_rate = elementObject_dataYaw_rate;
  ::ad::physics::Angle elementObject_dataSteering_angle(-6.283185308);
  elementObject_data.steering_angle = elementObject_dataSteering_angle;
  ::ad::rss::world::RssDynamics elementObject_dataRss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObject_dataRss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_lonAccel_max(-1e2);
  elementObject_dataRss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementObject_dataRss_dynamicsAlpha_lon.accel_max = elementObject_dataRss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_lonBrake_max(-1e2);
  elementObject_dataRss_dynamicsAlpha_lon.brake_max = elementObject_dataRss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_lonBrake_min(-1e2);
  elementObject_dataRss_dynamicsAlpha_lon.brake_min = elementObject_dataRss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementObject_dataRss_dynamicsAlpha_lon.brake_min_correct = elementObject_dataRss_dynamicsAlpha_lonBrake_min_correct;
  elementObject_dataRss_dynamicsAlpha_lon.brake_min = elementObject_dataRss_dynamicsAlpha_lon.brake_max;
  elementObject_dataRss_dynamicsAlpha_lon.brake_min_correct = elementObject_dataRss_dynamicsAlpha_lon.brake_min;
  elementObject_dataRss_dynamicsAlpha_lon.brake_min = elementObject_dataRss_dynamicsAlpha_lon.brake_min_correct;
  elementObject_dataRss_dynamicsAlpha_lon.brake_max = elementObject_dataRss_dynamicsAlpha_lon.brake_min;
  elementObject_dataRss_dynamics.alpha_lon = elementObject_dataRss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_latAccel_max(-1e2);
  elementObject_dataRss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementObject_dataRss_dynamicsAlpha_lat.accel_max = elementObject_dataRss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementObject_dataRss_dynamicsAlpha_latBrake_min(-1e2);
  elementObject_dataRss_dynamicsAlpha_lat.brake_min = elementObject_dataRss_dynamicsAlpha_latBrake_min;
  elementObject_dataRss_dynamics.alpha_lat = elementObject_dataRss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementObject_dataRss_dynamicsLateral_fluctuation_margin(-1e9);
  elementObject_dataRss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementObject_dataRss_dynamics.lateral_fluctuation_margin = elementObject_dataRss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementObject_dataRss_dynamicsResponse_time(0.);
  elementObject_dataRss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObject_dataRss_dynamics.response_time = elementObject_dataRss_dynamicsResponse_time;
  ::ad::physics::Speed elementObject_dataRss_dynamicsMax_speed_on_acceleration(-100.);
  elementObject_dataRss_dynamics.max_speed_on_acceleration = elementObject_dataRss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementObject_dataRss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementObject_dataRss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementObject_dataRss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementObject_dataRss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementObject_dataRss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementObject_dataRss_dynamics.unstructured_settings = elementObject_dataRss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementObject_dataRss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementObject_dataRss_dynamics.min_longitudinal_safety_distance
    = elementObject_dataRss_dynamicsMin_longitudinal_safety_distance;
  elementObject_data.rss_dynamics = elementObject_dataRss_dynamics;
  element.object_data = elementObject_data;
  ::ad::rss::map::RssRouteCheckResultList elementSituation_check_results;
  ::ad::rss::map::RssRouteCheckResult elementSituation_check_resultsElement;
  ::ad::rss::map::RssRoute elementSituation_check_resultsElementRss_route;
  ::ad::rss::map::RssRouteId elementSituation_check_resultsElementRss_routeRoute_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  elementSituation_check_resultsElementRss_route.route_id = elementSituation_check_resultsElementRss_routeRoute_id;
  ::ad::map::route::FullRoute elementSituation_check_resultsElementRss_routeRoute;
  ::ad::map::route::RoadSegmentList elementSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(
      1);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(
      1);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
      1);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1,
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
      1);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1,
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
      1);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .lane_id
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(
      0.);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .start
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
      0.);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{
      true};
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval
    .wrong_way
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.drivable_lane_segments
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate
    elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.center
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius(
    -1e9);
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere.radius
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElement.bounding_sphere
    = elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElementBounding_sphere;
  elementSituation_check_resultsElementRss_routeRouteRoad_segments.resize(
    1, elementSituation_check_resultsElementRss_routeRouteRoad_segmentsElement);
  elementSituation_check_resultsElementRss_routeRoute.road_segments
    = elementSituation_check_resultsElementRss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter elementSituation_check_resultsElementRss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  elementSituation_check_resultsElementRss_routeRoute.route_planning_counter
    = elementSituation_check_resultsElementRss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter elementSituation_check_resultsElementRss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementSituation_check_resultsElementRss_routeRoute.full_route_segment_count
    = elementSituation_check_resultsElementRss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset elementSituation_check_resultsElementRss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementSituation_check_resultsElementRss_routeRoute.destination_lane_offset
    = elementSituation_check_resultsElementRss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset elementSituation_check_resultsElementRss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementSituation_check_resultsElementRss_routeRoute.min_lane_offset
    = elementSituation_check_resultsElementRss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset elementSituation_check_resultsElementRss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementSituation_check_resultsElementRss_routeRoute.max_lane_offset
    = elementSituation_check_resultsElementRss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode elementSituation_check_resultsElementRss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::Undefined);
  elementSituation_check_resultsElementRss_routeRoute.route_creation_mode
    = elementSituation_check_resultsElementRss_routeRouteRoute_creation_mode;
  elementSituation_check_resultsElementRss_route.route = elementSituation_check_resultsElementRss_routeRoute;
  ::ad::physics::Probability elementSituation_check_resultsElementRss_routeLikelihood(0.);
  elementSituation_check_resultsElementRss_route.likelihood = elementSituation_check_resultsElementRss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point
    elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.last_update
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon(
    -1e2);
  elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lon
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat(
    -1e2);
  elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.route_accel_lat
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(-1e2);
  elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(-1e2);
  elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  elementSituation_check_resultsElementRss_route.vehicle_dynamics_on_route
    = elementSituation_check_resultsElementRss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId elementSituation_check_resultsElementRss_routeParent_route_id(
    std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  elementSituation_check_resultsElementRss_route.parent_route_id
    = elementSituation_check_resultsElementRss_routeParent_route_id;
  ::ad::physics::Distance elementSituation_check_resultsElementRss_routeProgress_on_route(-1e9);
  elementSituation_check_resultsElementRss_route.progress_on_route
    = elementSituation_check_resultsElementRss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute elementSituation_check_resultsElementRss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading(
    -3.141592655);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.route_heading
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius(-1e9);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.route_radius
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta(
    -6.283185308);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.route_heading_delta
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat(-100.);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lat
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon(-100.);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.route_speed_lon
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeRoute_speed_lon;
  bool elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route{true};
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_center_within_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_within_route;
  bool elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route{true};
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_within_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_center_position_projected_on_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool elementSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid{true};
  elementSituation_check_resultsElementRss_routeObject_data_on_route.is_valid
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_to_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction
    .z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route
    .object_center_position_projected_on_lane_in_nominal_route_direction
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_center_distance_along_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
      -1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction
    .z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route
    .nominal_center_position_of_lane_in_nominal_route_direction
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_leftZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_left
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_rightZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_front_right
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_leftZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_left
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_rightZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_route_section_back_right
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.x
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.y
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate
    elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
  elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center.z
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_centerZ;
  elementSituation_check_resultsElementRss_routeObject_data_on_route.object_turning_center
    = elementSituation_check_resultsElementRss_routeObject_data_on_routeObject_turning_center;
  elementSituation_check_resultsElementRss_route.object_data_on_route
    = elementSituation_check_resultsElementRss_routeObject_data_on_route;
  elementSituation_check_resultsElement.rss_route = elementSituation_check_resultsElementRss_route;
  bool elementSituation_check_resultsElementIs_valid{true};
  elementSituation_check_resultsElement.is_valid = elementSituation_check_resultsElementIs_valid;
  ::ad::rss::world::WorldModel elementSituation_check_resultsElementWorld_model;
  ::ad::rss::world::TimeIndex elementSituation_check_resultsElementWorld_modelTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementSituation_check_resultsElementWorld_modelTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementSituation_check_resultsElementWorld_model.time_index
    = elementSituation_check_resultsElementWorld_modelTime_index;
  ::ad::rss::world::RssDynamics elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(
    0.);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementWorld_model.default_ego_vehicle_rss_dynamics
    = elementSituation_check_resultsElementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector elementSituation_check_resultsElementWorld_modelConstellations;
  ::ad::rss::world::Constellation elementSituation_check_resultsElementWorld_modelConstellationsElement;
  ::ad::rss::world::ConstellationType
    elementSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  elementSituation_check_resultsElementWorld_modelConstellationsElement.constellation_type
    = elementSituation_check_resultsElementWorld_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.object_type
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    1, elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.occupied_regions
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.velocity
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw(
    -6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.length
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension.width
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.dimension
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.center_point
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.speed_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState.steering_angle
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle.state
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicleState;
  elementSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .lateral_fluctuation_margin
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .max_speed_on_acceleration
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object elementSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject.object_id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType elementSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject.object_type
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions.resize(
    1, elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regionsElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject.occupied_regions
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(
    -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(
    -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(
    -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(
    -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject.velocity
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  ::ad::physics::Angle elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw(
    -6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.length
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth(-1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension.width
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimensionWidth;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.dimension
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.yaw_rate
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX(
    -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.x
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY(
    -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point.y
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_pointY;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.center_point
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(-100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.speed_range
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle(
    -6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState.steering_angle
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectStateSteering_angle;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject.state
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObjectState;
  elementSituation_check_resultsElementWorld_modelConstellationsElement.object
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.response_time
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementWorld_modelConstellationsElement.object_rss_dynamics
    = elementSituation_check_resultsElementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.type
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .driving_direction
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .length
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement
    .width
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1,
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_after_intersecting_area
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement
    .minimum_length_before_intersecting_area
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road.resize(
    1, elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_roadElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElement.intersecting_road
    = elementSituation_check_resultsElementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.type
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement
    .driving_direction
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement
    .length
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .maximum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .minimum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
    .minimum
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth
        .maximum;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1,
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_after_intersecting_area
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(
      -1e9);
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement
    .minimum_length_before_intersecting_area
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road.resize(
    1, elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_roadElement);
  elementSituation_check_resultsElementWorld_modelConstellationsElement.ego_vehicle_road
    = elementSituation_check_resultsElementWorld_modelConstellationsElementEgo_vehicle_road;
  elementSituation_check_resultsElementWorld_modelConstellations.resize(
    1, elementSituation_check_resultsElementWorld_modelConstellationsElement);
  elementSituation_check_resultsElementWorld_model.constellations
    = elementSituation_check_resultsElementWorld_modelConstellations;
  elementSituation_check_resultsElement.world_model = elementSituation_check_resultsElementWorld_model;
  ::ad::rss::core::RssSituationSnapshot elementSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::world::TimeIndex elementSituation_check_resultsElementRss_situation_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementSituation_check_resultsElementRss_situation_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshot.time_index
    = elementSituation_check_resultsElementRss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementRss_situation_snapshot.default_ego_vehicle_rss_dynamics
    = elementSituation_check_resultsElementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector
    elementSituation_check_resultsElementRss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_id
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.object_id
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_id
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.constellation_type
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.object_type
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .lateral_fluctuation_margin
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .max_speed_on_acceleration
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .unstructured_settings
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.dynamics
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .length
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension
    .width
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .dimension
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .yaw_rate
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .x
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point
    .y
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .center_point
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .maximum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .minimum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
    .minimum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range
        .maximum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .speed_range
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state
    .steering_angle
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lon_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lon_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
    .speed_lat_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity
        .speed_lat_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .velocity
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{
      true};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .has_priority
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{
      true};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .is_in_correct_lane
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_leave_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_enter_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
    .distance_to_enter_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state
        .distance_to_leave_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.ego_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.object_type
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .lateral_fluctuation_margin
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(
      0.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .max_speed_on_acceleration
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .unstructured_settings
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.dynamics
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .yaw
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .length
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension
    .width
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .dimension
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .yaw_rate
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .x
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point
    .y
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .center_point
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .maximum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .minimum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
    .minimum
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range
        .maximum;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .speed_range
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state
    .steering_angle
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(
      -100.);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_max
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_min;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lon_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lon_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
    .speed_lat_min
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity
        .speed_lat_max;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .velocity
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{
      true};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .has_priority
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{
      true};
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .is_in_correct_lane
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_leave_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_enter_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
    .distance_to_enter_intersection
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_leave_intersection;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.other_state
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position
    .longitudinal_position
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position
    .longitudinal_distance
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
      ::ad::rss::core::LateralRelativePosition::AtLeft);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(
      -1e9);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.relative_position
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex
    elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
      std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    1, elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement.world_model_indices
    = elementSituation_check_resultsElementRss_situation_snapshotConstellationsElementWorld_model_indices;
  elementSituation_check_resultsElementRss_situation_snapshotConstellations.resize(
    1, elementSituation_check_resultsElementRss_situation_snapshotConstellationsElement);
  elementSituation_check_resultsElementRss_situation_snapshot.constellations
    = elementSituation_check_resultsElementRss_situation_snapshotConstellations;
  elementSituation_check_resultsElement.rss_situation_snapshot
    = elementSituation_check_resultsElementRss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot elementSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::world::TimeIndex elementSituation_check_resultsElementRss_state_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementSituation_check_resultsElementRss_state_snapshotTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshot.time_index
    = elementSituation_check_resultsElementRss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(
      -100.);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_turning_radius
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .drive_away_max_angle
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_yaw_rate_change
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_min_radius
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics
    .min_longitudinal_safety_distance
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementSituation_check_resultsElementRss_state_snapshot.default_ego_vehicle_rss_dynamics
    = elementSituation_check_resultsElementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector elementSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.ego_id
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.object_id
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_id
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{
    true};
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .accel_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_max;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
    .brake_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .safe_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .current_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information
    .evaluator
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state
    .rss_state_information
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.longitudinal_state
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{
    true};
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat
    .accel_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .safe_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .current_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information
    .evaluator
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right
    .rss_state_information
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_right
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{
    true};
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat
    .accel_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .safe_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .current_distance
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information
    .evaluator
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left
    .rss_state_information
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.lateral_state_left
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{
      true};
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .is_safe
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .response
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .begin
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(
      -6.283185308);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range
    .end
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .heading_range
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      1,
      elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      1,
      elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .rss_state_information
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .accel_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
      -1e2);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_max;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min_correct
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_min
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min_correct;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
    .brake_max
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon
        .brake_min;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state
    .alpha_lon
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType
    elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement.constellation_type
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElementConstellation_type;
  elementSituation_check_resultsElementRss_state_snapshotIndividual_responses.resize(
    1, elementSituation_check_resultsElementRss_state_snapshotIndividual_responsesElement);
  elementSituation_check_resultsElementRss_state_snapshot.individual_responses
    = elementSituation_check_resultsElementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .x
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement
    .y
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set
    .resize(
      1,
      elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .x
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(
      -1e9);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement
    .y
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set
    .resize(
      1,
      elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .continue_forward_trajectory_set
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information
    .considered_drive_away_steering_angle
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  elementSituation_check_resultsElementRss_state_snapshot.unstructured_constellation_ego_information
    = elementSituation_check_resultsElementRss_state_snapshotUnstructured_constellation_ego_information;
  elementSituation_check_resultsElement.rss_state_snapshot = elementSituation_check_resultsElementRss_state_snapshot;
  ::ad::rss::state::ProperResponse elementSituation_check_resultsElementProper_response;
  ::ad::rss::world::TimeIndex elementSituation_check_resultsElementProper_responseTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementSituation_check_resultsElementProper_responseTime_index
    = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementSituation_check_resultsElementProper_response.time_index
    = elementSituation_check_resultsElementProper_responseTime_index;
  bool elementSituation_check_resultsElementProper_responseIs_safe{true};
  elementSituation_check_resultsElementProper_response.is_safe
    = elementSituation_check_resultsElementProper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector elementSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::world::ObjectId elementSituation_check_resultsElementProper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementSituation_check_resultsElementProper_responseDangerous_objects.resize(
    1, elementSituation_check_resultsElementProper_responseDangerous_objectsElement);
  elementSituation_check_resultsElementProper_response.dangerous_objects
    = elementSituation_check_resultsElementProper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse elementSituation_check_resultsElementProper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::None);
  elementSituation_check_resultsElementProper_response.longitudinal_response
    = elementSituation_check_resultsElementProper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse elementSituation_check_resultsElementProper_responseLateral_response_right(
    ::ad::rss::state::LateralResponse::None);
  elementSituation_check_resultsElementProper_response.lateral_response_right
    = elementSituation_check_resultsElementProper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse elementSituation_check_resultsElementProper_responseLateral_response_left(
    ::ad::rss::state::LateralResponse::None);
  elementSituation_check_resultsElementProper_response.lateral_response_left
    = elementSituation_check_resultsElementProper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector elementSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::geometry::HeadingRange elementSituation_check_resultsElementProper_responseHeading_rangesElement;
  ::ad::physics::Angle elementSituation_check_resultsElementProper_responseHeading_rangesElementBegin(-6.283185308);
  elementSituation_check_resultsElementProper_responseHeading_rangesElement.begin
    = elementSituation_check_resultsElementProper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle elementSituation_check_resultsElementProper_responseHeading_rangesElementEnd(-6.283185308);
  elementSituation_check_resultsElementProper_responseHeading_rangesElement.end
    = elementSituation_check_resultsElementProper_responseHeading_rangesElementEnd;
  elementSituation_check_resultsElementProper_responseHeading_ranges.resize(
    1, elementSituation_check_resultsElementProper_responseHeading_rangesElement);
  elementSituation_check_resultsElementProper_response.heading_ranges
    = elementSituation_check_resultsElementProper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction
    elementSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range.maximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_left_range
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictions.longitudinal_range
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration
    elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range.maximum;
  elementSituation_check_resultsElementProper_responseAcceleration_restrictions.lateral_right_range
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictionsLateral_right_range;
  elementSituation_check_resultsElementProper_response.acceleration_restrictions
    = elementSituation_check_resultsElementProper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse
    elementSituation_check_resultsElementProper_responseUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementSituation_check_resultsElementProper_response.unstructured_constellation_response
    = elementSituation_check_resultsElementProper_responseUnstructured_constellation_response;
  elementSituation_check_resultsElement.proper_response = elementSituation_check_resultsElementProper_response;
  ::ad::rss::map::RssRouteCheckResultAnalysis elementSituation_check_resultsElementResult_analysis;
  bool elementSituation_check_resultsElementResult_analysisDangerous_state{true};
  elementSituation_check_resultsElementResult_analysis.dangerous_state
    = elementSituation_check_resultsElementResult_analysisDangerous_state;
  bool elementSituation_check_resultsElementResult_analysisDangerous_vehicle{true};
  elementSituation_check_resultsElementResult_analysis.dangerous_vehicle
    = elementSituation_check_resultsElementResult_analysisDangerous_vehicle;
  bool elementSituation_check_resultsElementResult_analysisDangerous_opposite_state{true};
  elementSituation_check_resultsElementResult_analysis.dangerous_opposite_state
    = elementSituation_check_resultsElementResult_analysisDangerous_opposite_state;
  bool elementSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries{true};
  elementSituation_check_resultsElementResult_analysis.vehicle_crossing_road_boundaries
    = elementSituation_check_resultsElementResult_analysisVehicle_crossing_road_boundaries;
  elementSituation_check_resultsElement.result_analysis = elementSituation_check_resultsElementResult_analysis;
  elementSituation_check_results.resize(1, elementSituation_check_resultsElement);
  element.situation_check_results = elementSituation_check_results;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssObjectResultListValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::map::RssObjectResultList value;
  ::ad::rss::map::RssObjectResult element;
  ::ad::rss::map::RssObjectData elementObject_data;
  ::ad::rss::world::ObjectType elementObject_dataType(static_cast<::ad::rss::world::ObjectType>(-1));
  elementObject_data.type = elementObject_dataType;
  element.object_data = elementObject_data;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
