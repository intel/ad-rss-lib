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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/map/RssObjectData.hpp"

class RssObjectDataTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    valueMatch_objectEnu_positionEnu_reference_point.latitude
      = valueMatch_objectEnu_positionEnu_reference_pointLatitude;
    ::ad::map::point::Altitude valueMatch_objectEnu_positionEnu_reference_pointAltitude(-11000);
    valueMatch_objectEnu_positionEnu_reference_point.altitude
      = valueMatch_objectEnu_positionEnu_reference_pointAltitude;
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
    ::ad::map::match::MapMatchedPosition
      valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElement;
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
    valueMatch_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point
      .parametric_offset
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
    valueRss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueRss_dynamicsUnstructured_settingsVehicle_min_radius;
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
    mValue = value;
  }

  ::ad::rss::map::RssObjectData mValue;
};

TEST_F(RssObjectDataTests, copyConstruction)
{
  ::ad::rss::map::RssObjectData value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataTests, moveConstruction)
{
  ::ad::rss::map::RssObjectData tmpValue(mValue);
  ::ad::rss::map::RssObjectData value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataTests, copyAssignment)
{
  ::ad::rss::map::RssObjectData value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataTests, moveAssignment)
{
  ::ad::rss::map::RssObjectData tmpValue(mValue);
  ::ad::rss::map::RssObjectData value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssObjectDataTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssObjectDataTests, comparisonOperatorLast_updateDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  std::chrono::system_clock::time_point last_update{std::chrono::hours(1)};
  valueA.last_update = last_update;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorIdDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::rss::world::ObjectId id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.id = id;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorTypeDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::rss::world::ObjectType type(::ad::rss::world::ObjectType::OtherObject);
  valueA.type = type;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorMatch_objectDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::map::match::Object match_object;
  ::ad::map::match::ENUObjectPosition match_objectEnu_position;
  ::ad::map::point::ENUPoint match_objectEnu_positionCenter_point;
  ::ad::map::point::ENUCoordinate match_objectEnu_positionCenter_pointX(1e8);
  match_objectEnu_positionCenter_point.x = match_objectEnu_positionCenter_pointX;
  ::ad::map::point::ENUCoordinate match_objectEnu_positionCenter_pointY(1e8);
  match_objectEnu_positionCenter_point.y = match_objectEnu_positionCenter_pointY;
  ::ad::map::point::ENUCoordinate match_objectEnu_positionCenter_pointZ(1e8);
  match_objectEnu_positionCenter_point.z = match_objectEnu_positionCenter_pointZ;
  match_objectEnu_position.center_point = match_objectEnu_positionCenter_point;
  ::ad::map::point::ENUHeading match_objectEnu_positionHeading(3.141592655);
  match_objectEnu_position.heading = match_objectEnu_positionHeading;
  ::ad::map::point::GeoPoint match_objectEnu_positionEnu_reference_point;
  ::ad::map::point::Longitude match_objectEnu_positionEnu_reference_pointLongitude(180);
  match_objectEnu_positionEnu_reference_point.longitude = match_objectEnu_positionEnu_reference_pointLongitude;
  ::ad::map::point::Latitude match_objectEnu_positionEnu_reference_pointLatitude(90);
  match_objectEnu_positionEnu_reference_point.latitude = match_objectEnu_positionEnu_reference_pointLatitude;
  ::ad::map::point::Altitude match_objectEnu_positionEnu_reference_pointAltitude(9000);
  match_objectEnu_positionEnu_reference_point.altitude = match_objectEnu_positionEnu_reference_pointAltitude;
  match_objectEnu_position.enu_reference_point = match_objectEnu_positionEnu_reference_point;
  ::ad::physics::Dimension3D match_objectEnu_positionDimension;
  ::ad::physics::Distance match_objectEnu_positionDimensionLength(1e9);
  match_objectEnu_positionDimension.length = match_objectEnu_positionDimensionLength;
  ::ad::physics::Distance match_objectEnu_positionDimensionWidth(1e9);
  match_objectEnu_positionDimension.width = match_objectEnu_positionDimensionWidth;
  ::ad::physics::Distance match_objectEnu_positionDimensionHeight(1e9);
  match_objectEnu_positionDimension.height = match_objectEnu_positionDimensionHeight;
  match_objectEnu_position.dimension = match_objectEnu_positionDimension;
  match_object.enu_position = match_objectEnu_position;
  ::ad::map::match::MapMatchedObjectBoundingBox match_objectMap_matched_bounding_box;
  ::ad::map::match::LaneOccupiedRegionList match_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::LaneOccupiedRegion match_objectMap_matched_bounding_boxLane_occupied_regionsElement;
  ::ad::map::lane::LaneId match_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  match_objectMap_matched_bounding_boxLane_occupied_regionsElement.lane_id
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLane_id;
  ::ad::physics::ParametricRange match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricValue
    match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum(1.);
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMinimum;
  ::ad::physics::ParametricValue
    match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum(1.);
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_rangeMaximum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.minimum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range.maximum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElement.longitudinal_range
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLongitudinal_range;
  ::ad::physics::ParametricRange match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  ::ad::physics::ParametricValue match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum(
    1.);
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMinimum;
  ::ad::physics::ParametricValue match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum(
    1.);
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_rangeMaximum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.minimum
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range.maximum;
  match_objectMap_matched_bounding_boxLane_occupied_regionsElement.lateral_range
    = match_objectMap_matched_bounding_boxLane_occupied_regionsElementLateral_range;
  match_objectMap_matched_bounding_boxLane_occupied_regions.resize(
    2, match_objectMap_matched_bounding_boxLane_occupied_regionsElement);
  match_objectMap_matched_bounding_box.lane_occupied_regions
    = match_objectMap_matched_bounding_boxLane_occupied_regions;
  ::ad::map::match::MapMatchedObjectReferencePositionList match_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::map::match::MapMatchedPositionConfidenceList
    match_objectMap_matched_bounding_boxReference_point_positionsElement;
  ::ad::map::match::MapMatchedPosition match_objectMap_matched_bounding_boxReference_point_positionsElementElement;
  ::ad::map::match::LanePoint match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::point::ParaPoint
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::map::lane::LaneId
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id(
      std::numeric_limits<::ad::map::lane::LaneId>::max());
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.lane_id
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointLane_id;
  ::ad::physics::ParametricValue
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset(
      1.);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point.parametric_offset
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_pointParametric_offset;
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.para_point
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointPara_point;
  ::ad::physics::RatioValue
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t(
      std::numeric_limits<::ad::physics::RatioValue>::max());
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lateral_t
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLateral_t;
  ::ad::physics::Distance
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length(1e9);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_length
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_length;
  ::ad::physics::Distance
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width(1e9);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point.lane_width
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_pointLane_width;
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.lane_point
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementLane_point;
  ::ad::map::match::MapMatchedPositionType
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementType(
      ::ad::map::match::MapMatchedPositionType::LANE_RIGHT);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.type
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementType;
  ::ad::map::point::ECEFPoint match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.x
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointX;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.y
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointY;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point.z
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_pointZ;
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point;
  ::ad::physics::Probability match_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability(1.);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.probability
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementProbability;
  ::ad::map::point::ECEFPoint match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.x
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointX;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.y
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointY;
  ::ad::map::point::ECEFCoordinate
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ(6400000);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point.z
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_pointZ;
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.query_point
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementQuery_point;
  ::ad::physics::Distance
    match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance(1e9);
  match_objectMap_matched_bounding_boxReference_point_positionsElementElement.matched_point_distance
    = match_objectMap_matched_bounding_boxReference_point_positionsElementElementMatched_point_distance;
  match_objectMap_matched_bounding_boxReference_point_positionsElement.resize(
    2, match_objectMap_matched_bounding_boxReference_point_positionsElementElement);
  match_objectMap_matched_bounding_boxReference_point_positions.resize(
    2, match_objectMap_matched_bounding_boxReference_point_positionsElement);
  match_objectMap_matched_bounding_box.reference_point_positions
    = match_objectMap_matched_bounding_boxReference_point_positions;
  ::ad::physics::Distance match_objectMap_matched_bounding_boxSampling_distance(1e9);
  match_objectMap_matched_bounding_box.sampling_distance = match_objectMap_matched_bounding_boxSampling_distance;
  ::ad::physics::Distance match_objectMap_matched_bounding_boxMatch_radius(1e9);
  match_objectMap_matched_bounding_box.match_radius = match_objectMap_matched_bounding_boxMatch_radius;
  match_object.map_matched_bounding_box = match_objectMap_matched_bounding_box;
  valueA.match_object = match_object;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorSpeed_rangeDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::physics::SpeedRange speed_range;
  ::ad::physics::Speed speed_rangeMinimum(100.);
  speed_range.minimum = speed_rangeMinimum;
  ::ad::physics::Speed speed_rangeMaximum(100.);
  speed_range.maximum = speed_rangeMaximum;
  speed_range.maximum = speed_range.minimum;
  speed_range.minimum = speed_range.maximum;
  valueA.speed_range = speed_range;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorYaw_rateDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::physics::AngularVelocity yaw_rate(100.);
  valueA.yaw_rate = yaw_rate;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorSteering_angleDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::physics::Angle steering_angle(6.283185308);
  valueA.steering_angle = steering_angle;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataTests, comparisonOperatorRss_dynamicsDiffers)
{
  ::ad::rss::map::RssObjectData valueA = mValue;
  ::ad::rss::world::RssDynamics rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration rss_dynamicsAlpha_lonAccel_max(1e2);
  rss_dynamicsAlpha_lon.accel_max = rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_dynamicsAlpha_lonBrake_max(1e2);
  rss_dynamicsAlpha_lon.brake_max = rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_dynamicsAlpha_lonBrake_min(1e2);
  rss_dynamicsAlpha_lon.brake_min = rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  rss_dynamicsAlpha_lonBrake_min_correct = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_dynamicsAlpha_lon.brake_min_correct = rss_dynamicsAlpha_lonBrake_min_correct;
  rss_dynamicsAlpha_lon.brake_min_correct = rss_dynamicsAlpha_lon.brake_min;
  rss_dynamicsAlpha_lon.brake_min = rss_dynamicsAlpha_lon.brake_max;
  rss_dynamicsAlpha_lon.brake_max = rss_dynamicsAlpha_lon.brake_min;
  rss_dynamicsAlpha_lon.brake_min = rss_dynamicsAlpha_lon.brake_min_correct;
  rss_dynamics.alpha_lon = rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration rss_dynamicsAlpha_latAccel_max(1e2);
  rss_dynamicsAlpha_lat.accel_max = rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_dynamicsAlpha_latBrake_min(1e2);
  rss_dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_dynamicsAlpha_lat.brake_min = rss_dynamicsAlpha_latBrake_min;
  rss_dynamics.alpha_lat = rss_dynamicsAlpha_lat;
  ::ad::physics::Distance rss_dynamicsLateral_fluctuation_margin(1e9);
  rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  rss_dynamics.lateral_fluctuation_margin = rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration rss_dynamicsResponse_time(1e6);
  rss_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  rss_dynamics.response_time = rss_dynamicsResponse_time;
  ::ad::physics::Speed rss_dynamicsMax_speed_on_acceleration(100.);
  rss_dynamics.max_speed_on_acceleration = rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  rss_dynamicsUnstructured_settings.drive_away_max_angle = rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change = rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  rss_dynamicsUnstructured_settings.vehicle_min_radius = rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  rss_dynamics.unstructured_settings = rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance rss_dynamicsMin_longitudinal_safety_distance(1e9);
  rss_dynamics.min_longitudinal_safety_distance = rss_dynamicsMin_longitudinal_safety_distance;
  valueA.rss_dynamics = rss_dynamics;
  ::ad::rss::map::RssObjectData valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
