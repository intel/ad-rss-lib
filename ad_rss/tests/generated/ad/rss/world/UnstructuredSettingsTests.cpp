/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
#include "ad/rss/world/UnstructuredSettings.hpp"

class UnstructuredSettingsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    uint32_t valueVehicleFrontIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.vehicleFrontIntermediateYawRateChangeRatioSteps = valueVehicleFrontIntermediateYawRateChangeRatioSteps;
    uint32_t valueVehicleBackIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.vehicleBackIntermediateYawRateChangeRatioSteps = valueVehicleBackIntermediateYawRateChangeRatioSteps;
    uint32_t valueVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
    value.vehicleBrakeIntermediateAccelerationSteps = valueVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueVehicleContinueForwardIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
    value.vehicleContinueForwardIntermediateAccelerationSteps
      = valueVehicleContinueForwardIntermediateAccelerationSteps;
    uint32_t valueVehicleContinueForwardIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
      = valueVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
    uint32_t valuePedestrianContinueForwardIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
      = valuePedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
    uint32_t valuePedestrianContinueForwardIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
    value.pedestrianContinueForwardIntermediateAccelerationSteps
      = valuePedestrianContinueForwardIntermediateAccelerationSteps;
    uint32_t valuePedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
    value.pedestrianBrakeIntermediateAccelerationSteps = valuePedestrianBrakeIntermediateAccelerationSteps;
    uint32_t valuePedestrianFrontIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.pedestrianFrontIntermediateHeadingChangeRatioSteps = valuePedestrianFrontIntermediateHeadingChangeRatioSteps;
    uint32_t valuePedestrianBackIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::min()};
    value.pedestrianBackIntermediateHeadingChangeRatioSteps = valuePedestrianBackIntermediateHeadingChangeRatioSteps;
    mValue = value;
  }

  ::ad::rss::world::UnstructuredSettings mValue;
};

TEST_F(UnstructuredSettingsTests, copyConstruction)
{
  ::ad::rss::world::UnstructuredSettings value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, moveConstruction)
{
  ::ad::rss::world::UnstructuredSettings tmpValue(mValue);
  ::ad::rss::world::UnstructuredSettings value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, copyAssignment)
{
  ::ad::rss::world::UnstructuredSettings value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, moveAssignment)
{
  ::ad::rss::world::UnstructuredSettings tmpValue(mValue);
  ::ad::rss::world::UnstructuredSettings value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorEqual)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianTurningRadiusDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Distance pedestrianTurningRadius(1e9);
  valueA.pedestrianTurningRadius = pedestrianTurningRadius;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorDriveAwayMaxAngleDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Angle driveAwayMaxAngle(6.283185308);
  valueA.driveAwayMaxAngle = driveAwayMaxAngle;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleYawRateChangeDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::AngularAcceleration vehicleYawRateChange(1e2);
  valueA.vehicleYawRateChange = vehicleYawRateChange;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleMinRadiusDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Distance vehicleMinRadius(1e9);
  valueA.vehicleMinRadius = vehicleMinRadius;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleTrajectoryCalculationStepDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Duration vehicleTrajectoryCalculationStep(1e6);
  valueA.vehicleTrajectoryCalculationStep = vehicleTrajectoryCalculationStep;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleFrontIntermediateYawRateChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicleFrontIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicleFrontIntermediateYawRateChangeRatioSteps = vehicleFrontIntermediateYawRateChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleBackIntermediateYawRateChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicleBackIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicleBackIntermediateYawRateChangeRatioSteps = vehicleBackIntermediateYawRateChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleBrakeIntermediateAccelerationStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicleBrakeIntermediateAccelerationSteps = vehicleBrakeIntermediateAccelerationSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleContinueForwardIntermediateAccelerationStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicleContinueForwardIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicleContinueForwardIntermediateAccelerationSteps = vehicleContinueForwardIntermediateAccelerationSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicleContinueForwardIntermediateYawRateChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicleContinueForwardIntermediateYawRateChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = vehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianContinueForwardIntermediateHeadingChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrianContinueForwardIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = pedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianContinueForwardIntermediateAccelerationStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrianContinueForwardIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrianContinueForwardIntermediateAccelerationSteps
    = pedestrianContinueForwardIntermediateAccelerationSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianBrakeIntermediateAccelerationStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrianBrakeIntermediateAccelerationSteps = pedestrianBrakeIntermediateAccelerationSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianFrontIntermediateHeadingChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrianFrontIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrianFrontIntermediateHeadingChangeRatioSteps = pedestrianFrontIntermediateHeadingChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrianBackIntermediateHeadingChangeRatioStepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrianBackIntermediateHeadingChangeRatioSteps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrianBackIntermediateHeadingChangeRatioSteps = pedestrianBackIntermediateHeadingChangeRatioSteps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
