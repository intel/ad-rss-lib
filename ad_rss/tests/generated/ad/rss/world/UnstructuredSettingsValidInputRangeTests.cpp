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

#include "ad/rss/world/UnstructuredSettingsValidInputRange.hpp"

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangePedestrian_turning_radiusTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.pedestrian_turning_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangePedestrian_turning_radiusTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.pedestrian_turning_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangepedestrian_turning_radiusDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valueDefault;
  value.pedestrian_turning_radius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeDrive_away_max_angleTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.drive_away_max_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeDrive_away_max_angleTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.drive_away_max_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangedrive_away_max_angleDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Angle valueDefault;
  value.drive_away_max_angle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_yaw_rate_changeTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value below input range minimum
  ::ad::physics::AngularAcceleration invalidInitializedMember(-1e2 * 1.1);
  value.vehicle_yaw_rate_change = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_yaw_rate_changeTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value above input range maximum
  ::ad::physics::AngularAcceleration invalidInitializedMember(1e2 * 1.1);
  value.vehicle_yaw_rate_change = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicle_yaw_rate_changeDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::AngularAcceleration valueDefault;
  value.vehicle_yaw_rate_change = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_min_radiusTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.vehicle_min_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_min_radiusTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.vehicle_min_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicle_min_radiusDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valueDefault;
  value.vehicle_min_radius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_trajectory_calculation_stepTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value below input range minimum
  ::ad::physics::Duration invalidInitializedMember(0. - ::ad::physics::Duration::cPrecisionValue);
  value.vehicle_trajectory_calculation_step = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicle_trajectory_calculation_stepTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
  value.pedestrian_turning_radius = valuePedestrian_turning_radius;
  ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
  value.drive_away_max_angle = valueDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
  value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
  ::ad::physics::Distance valueVehicle_min_radius(-1e9);
  value.vehicle_min_radius = valueVehicle_min_radius;
  ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
  value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
  uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_acceleration_steps
    = valueVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_continue_forward_intermediate_acceleration_steps
    = valuePedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
  uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_front_intermediate_heading_change_ratio_steps
    = valuePedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
  value.pedestrian_back_intermediate_heading_change_ratio_steps
    = valuePedestrian_back_intermediate_heading_change_ratio_steps;

  // override member with data type value above input range maximum
  ::ad::physics::Duration invalidInitializedMember(1e6 * 1.1);
  value.vehicle_trajectory_calculation_step = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicle_trajectory_calculation_stepDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Duration valueDefault;
  value.vehicle_trajectory_calculation_step = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
