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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/RssDynamicsValidInputRange.hpp"

TEST(RssDynamicsValidInputRangeTests, testValidInputRange)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Distance(0. - ::ad::physics::Distance::cPrecisionValue); // set to invalid value within struct
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1. * 1.1); // set to invalid value within struct
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangelateralFluctuationMarginDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Distance valueDefault;
  value.lateralFluctuationMargin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::physics::Duration invalidInitializedMember(0. - ::ad::physics::Duration::cPrecisionValue);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Duration(0.); // set to valid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::physics::Duration invalidInitializedMember(1e6 * 1.1);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Duration(10. * 1.1); // set to invalid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeresponseTimeDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Duration valueDefault;
  value.responseTime = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMaxSpeedOnAccelerationTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.maxSpeedOnAcceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMaxSpeedOnAccelerationTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.maxSpeedOnAcceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangemaxSpeedOnAccelerationDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Speed valueDefault;
  value.maxSpeedOnAcceleration = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeUnstructuredSettingsTooSmall)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value below input range minimum
  ::ad::rss::world::UnstructuredSettings invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberPedestrianTurningRadius(-1e9 * 1.1);
  invalidInitializedMember.pedestrianTurningRadius = invalidInitializedMemberPedestrianTurningRadius;
  value.unstructuredSettings = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeUnstructuredSettingsTooBig)
{
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
  uint32_t valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = valueUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = valueUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = valueUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  value.unstructuredSettings = valueUnstructuredSettings;

  // override member with data type value above input range maximum
  ::ad::rss::world::UnstructuredSettings invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberPedestrianTurningRadius(1e9 * 1.1);
  invalidInitializedMember.pedestrianTurningRadius = invalidInitializedMemberPedestrianTurningRadius;
  value.unstructuredSettings = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
