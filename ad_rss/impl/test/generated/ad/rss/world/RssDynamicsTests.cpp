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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/RssDynamics.hpp"

class RssDynamicsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::RssDynamics value;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
    ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
    valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLon.accelMax = valueAlphaLonAccelMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
    valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
    valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
    valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
    valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
    valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
    value.alphaLon = valueAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
    ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
    valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLat.accelMax = valueAlphaLatAccelMax;
    ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
    valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
    value.alphaLat = valueAlphaLat;
    ::ad::physics::Distance valueLateralFluctuationMargin(-1e9);
    valueLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
    value.lateralFluctuationMargin = valueLateralFluctuationMargin;
    ::ad::physics::Duration valueResponseTime(0.);
    valueResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    value.responseTime = valueResponseTime;
    ::ad::physics::Speed valueMaxSpeedOnAcceleration(-100.);
    value.maxSpeedOnAcceleration = valueMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueUnstructuredSettings;
    ::ad::physics::Distance valueUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueUnstructuredSettings.pedestrianTurningRadius = valueUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueUnstructuredSettings.driveAwayMaxAngle = valueUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueUnstructuredSettingsVehicleYawRateChange(-1e2);
    valueUnstructuredSettings.vehicleYawRateChange = valueUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueUnstructuredSettingsVehicleMinRadius(-1e9);
    valueUnstructuredSettings.vehicleMinRadius = valueUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
    valueUnstructuredSettings.vehicleFrontIntermediateRatioSteps
      = valueUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
    uint32_t valueUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
    valueUnstructuredSettings.vehicleBackIntermediateRatioSteps
      = valueUnstructuredSettingsVehicleBackIntermediateRatioSteps;
    uint32_t valueUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
      = valueUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
    uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
    valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    value.unstructuredSettings = valueUnstructuredSettings;
    mValue = value;
  }

  ::ad::rss::world::RssDynamics mValue;
};

TEST_F(RssDynamicsTests, copyConstruction)
{
  ::ad::rss::world::RssDynamics value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveConstruction)
{
  ::ad::rss::world::RssDynamics tmpValue(mValue);
  ::ad::rss::world::RssDynamics value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, copyAssignment)
{
  ::ad::rss::world::RssDynamics value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveAssignment)
{
  ::ad::rss::world::RssDynamics tmpValue(mValue);
  ::ad::rss::world::RssDynamics value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, comparisonOperatorEqual)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssDynamicsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLonDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues alphaLon;
  ::ad::physics::Acceleration alphaLonAccelMax(1e2);
  alphaLon.accelMax = alphaLonAccelMax;
  ::ad::physics::Acceleration alphaLonBrakeMax(1e2);
  alphaLon.brakeMax = alphaLonBrakeMax;
  ::ad::physics::Acceleration alphaLonBrakeMin(1e2);
  alphaLon.brakeMin = alphaLonBrakeMin;
  ::ad::physics::Acceleration alphaLonBrakeMinCorrect(1e2);
  alphaLonBrakeMinCorrect = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alphaLon.brakeMinCorrect = alphaLonBrakeMinCorrect;
  alphaLon.brakeMinCorrect = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMax;
  alphaLon.brakeMax = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMinCorrect;
  valueA.alphaLon = alphaLon;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLatDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alphaLat;
  ::ad::physics::Acceleration alphaLatAccelMax(1e2);
  alphaLat.accelMax = alphaLatAccelMax;
  ::ad::physics::Acceleration alphaLatBrakeMin(1e2);
  alphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alphaLat.brakeMin = alphaLatBrakeMin;
  valueA.alphaLat = alphaLat;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorLateralFluctuationMarginDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Distance lateralFluctuationMargin(1e9);
  valueA.lateralFluctuationMargin = lateralFluctuationMargin;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorResponseTimeDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Duration responseTime(1e6);
  valueA.responseTime = responseTime;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorMaxSpeedOnAccelerationDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Speed maxSpeedOnAcceleration(100.);
  valueA.maxSpeedOnAcceleration = maxSpeedOnAcceleration;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorUnstructuredSettingsDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::UnstructuredSettings unstructuredSettings;
  ::ad::physics::Distance unstructuredSettingsPedestrianTurningRadius(1e9);
  unstructuredSettings.pedestrianTurningRadius = unstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle unstructuredSettingsDriveAwayMaxAngle(6.283185308);
  unstructuredSettings.driveAwayMaxAngle = unstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration unstructuredSettingsVehicleYawRateChange(1e2);
  unstructuredSettings.vehicleYawRateChange = unstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance unstructuredSettingsVehicleMinRadius(1e9);
  unstructuredSettings.vehicleMinRadius = unstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration unstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  unstructuredSettings.vehicleTrajectoryCalculationStep = unstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t unstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::max()};
  unstructuredSettings.vehicleFrontIntermediateRatioSteps = unstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t unstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::max()};
  unstructuredSettings.vehicleBackIntermediateRatioSteps = unstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t unstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  unstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = unstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t unstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::max()};
  unstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = unstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t unstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  unstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = unstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueA.unstructuredSettings = unstructuredSettings;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
