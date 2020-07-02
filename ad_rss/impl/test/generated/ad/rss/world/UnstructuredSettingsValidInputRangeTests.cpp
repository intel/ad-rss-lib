/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangePedestrianTurningRadiusTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.pedestrianTurningRadius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangePedestrianTurningRadiusTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.pedestrianTurningRadius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangepedestrianTurningRadiusDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valueDefault;
  value.pedestrianTurningRadius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeDriveAwayMaxAngleTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.driveAwayMaxAngle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeDriveAwayMaxAngleTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.driveAwayMaxAngle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangedriveAwayMaxAngleDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Angle valueDefault;
  value.driveAwayMaxAngle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleYawRateChangeTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value below input range minimum
  ::ad::physics::AngularAcceleration invalidInitializedMember(-1e2 * 1.1);
  value.vehicleYawRateChange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleYawRateChangeTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value above input range maximum
  ::ad::physics::AngularAcceleration invalidInitializedMember(1e2 * 1.1);
  value.vehicleYawRateChange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicleYawRateChangeDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::AngularAcceleration valueDefault;
  value.vehicleYawRateChange = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleMinRadiusTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.vehicleMinRadius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleMinRadiusTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.vehicleMinRadius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicleMinRadiusDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valueDefault;
  value.vehicleMinRadius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleTrajectoryCalculationStepTooSmall)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value below input range minimum
  ::ad::physics::Duration invalidInitializedMember(0. - ::ad::physics::Duration::cPrecisionValue);
  value.vehicleTrajectoryCalculationStep = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangeVehicleTrajectoryCalculationStepTooBig)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Distance valuePedestrianTurningRadius(-1e9);
  value.pedestrianTurningRadius = valuePedestrianTurningRadius;
  ::ad::physics::Angle valueDriveAwayMaxAngle(-6.283185308);
  value.driveAwayMaxAngle = valueDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueVehicleYawRateChange(-1e2);
  value.vehicleYawRateChange = valueVehicleYawRateChange;
  ::ad::physics::Distance valueVehicleMinRadius(-1e9);
  value.vehicleMinRadius = valueVehicleMinRadius;
  ::ad::physics::Duration valueVehicleTrajectoryCalculationStep(0.);
  value.vehicleTrajectoryCalculationStep = valueVehicleTrajectoryCalculationStep;

  // override member with data type value above input range maximum
  ::ad::physics::Duration invalidInitializedMember(1e6 * 1.1);
  value.vehicleTrajectoryCalculationStep = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSettingsValidInputRangeTests, testValidInputRangevehicleTrajectoryCalculationStepDefault)
{
  ::ad::rss::world::UnstructuredSettings value;
  ::ad::physics::Duration valueDefault;
  value.vehicleTrajectoryCalculationStep = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
