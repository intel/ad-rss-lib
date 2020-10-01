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

#include "ad/rss/situation/VehicleStateValidInputRange.hpp"

TEST(VehicleStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::rss::situation::VelocityRange invalidInitializedMember;
  ::ad::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMinimum(-100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::rss::situation::VelocityRange invalidInitializedMember;
  ::ad::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMinimum(100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Distance(0. - ::ad::physics::Distance::cPrecisionValue); // set to invalid value within struct
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToEnterIntersectionDefault)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::physics::Distance valueDefault;
  value.distanceToEnterIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1e4 * 1.1); // set to invalid value within struct
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToLeaveIntersectionDefault)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::physics::Distance valueDefault;
  value.distanceToLeaveIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeObjectTypeTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeObjectTypeTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeObjectStateTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(-6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.objectState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeObjectStateTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(-1e9);
  valueDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeedOnAcceleration(-100.);
  valueDynamics.maxSpeedOnAcceleration = valueDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDynamicsUnstructuredSettings.pedestrianTurningRadius = valueDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDynamicsUnstructuredSettings.driveAwayMaxAngle = valueDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDynamicsUnstructuredSettings.vehicleYawRateChange = valueDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDynamicsUnstructuredSettings.vehicleMinRadius = valueDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = valueDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = valueDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  valueDynamics.unstructuredSettings = valueDynamicsUnstructuredSettings;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(-1e9);
  valueDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(-1e9);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad::rss::world::ObjectState valueObjectState;
  ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
  valueObjectState.yaw = valueObjectStateYaw;
  ::ad::physics::Dimension2D valueObjectStateDimension;
  ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
  valueObjectStateDimension.length = valueObjectStateDimensionLength;
  ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
  valueObjectStateDimension.width = valueObjectStateDimensionWidth;
  valueObjectState.dimension = valueObjectStateDimension;
  ::ad::physics::AngularVelocity valueObjectStateYawRate(-100.);
  valueObjectState.yawRate = valueObjectStateYawRate;
  ::ad::physics::Distance2D valueObjectStateCenterPoint;
  ::ad::physics::Distance valueObjectStateCenterPointX(-1e9);
  valueObjectStateCenterPoint.x = valueObjectStateCenterPointX;
  ::ad::physics::Distance valueObjectStateCenterPointY(-1e9);
  valueObjectStateCenterPoint.y = valueObjectStateCenterPointY;
  valueObjectState.centerPoint = valueObjectStateCenterPoint;
  ::ad::physics::Speed valueObjectStateSpeed(-100.);
  valueObjectState.speed = valueObjectStateSpeed;
  ::ad::physics::Angle valueObjectStateSteeringAngle(-6.283185308);
  valueObjectState.steeringAngle = valueObjectStateSteeringAngle;
  value.objectState = valueObjectState;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.objectState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
