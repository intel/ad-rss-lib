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
#include "ad/rss/situation/Situation.hpp"

class SituationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::Situation value;
    ::ad::rss::situation::SituationId valueSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad::rss::situation::VehicleState valueEgoVehicleState;
    ::ad::rss::situation::VelocityRange valueEgoVehicleStateVelocity;
    ::ad::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLonMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLonMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLonMaximum;
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLon.minimum;
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLon.maximum;
    valueEgoVehicleStateVelocity.speedLon = valueEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLatMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLatMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLatMaximum;
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLat.minimum;
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLat.maximum;
    valueEgoVehicleStateVelocity.speedLat = valueEgoVehicleStateVelocitySpeedLat;
    valueEgoVehicleState.velocity = valueEgoVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueEgoVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLon.accelMax = valueEgoVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMax;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamics.alphaLon = valueEgoVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLat.accelMax = valueEgoVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLat.brakeMin = valueEgoVehicleStateDynamicsAlphaLatBrakeMin;
    valueEgoVehicleStateDynamics.alphaLat = valueEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
    valueEgoVehicleStateDynamicsLateralFluctuationMargin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgoVehicleStateDynamics.lateralFluctuationMargin = valueEgoVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueEgoVehicleStateDynamicsResponseTime(0.);
    valueEgoVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamics.responseTime = valueEgoVehicleStateDynamicsResponseTime;
    ::ad::physics::Speed valueEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
    valueEgoVehicleStateDynamics.maxSpeedOnAcceleration = valueEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueEgoVehicleStateDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
    uint32_t
      valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
        std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
    uint32_t valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleStateDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
    valueEgoVehicleStateDynamics.unstructuredSettings = valueEgoVehicleStateDynamicsUnstructuredSettings;
    valueEgoVehicleState.dynamics = valueEgoVehicleStateDynamics;
    bool valueEgoVehicleStateHasPriority{true};
    valueEgoVehicleState.hasPriority = valueEgoVehicleStateHasPriority;
    bool valueEgoVehicleStateIsInCorrectLane{true};
    valueEgoVehicleState.isInCorrectLane = valueEgoVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueEgoVehicleStateDistanceToEnterIntersection(-1e9);
    valueEgoVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueEgoVehicleStateDistanceToLeaveIntersection(-1e9);
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleStateDistanceToLeaveIntersection;
    ::ad::rss::world::ObjectType valueEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
    valueEgoVehicleState.objectType = valueEgoVehicleStateObjectType;
    ::ad::rss::world::ObjectState valueEgoVehicleStateObjectState;
    ::ad::physics::Angle valueEgoVehicleStateObjectStateYaw(-6.283185308);
    valueEgoVehicleStateObjectState.yaw = valueEgoVehicleStateObjectStateYaw;
    ::ad::physics::Dimension2D valueEgoVehicleStateObjectStateDimension;
    ::ad::physics::Distance valueEgoVehicleStateObjectStateDimensionLength(-1e9);
    valueEgoVehicleStateObjectStateDimension.length = valueEgoVehicleStateObjectStateDimensionLength;
    ::ad::physics::Distance valueEgoVehicleStateObjectStateDimensionWidth(-1e9);
    valueEgoVehicleStateObjectStateDimension.width = valueEgoVehicleStateObjectStateDimensionWidth;
    valueEgoVehicleStateObjectState.dimension = valueEgoVehicleStateObjectStateDimension;
    ::ad::physics::AngularVelocity valueEgoVehicleStateObjectStateYawRate(-100.);
    valueEgoVehicleStateObjectState.yawRate = valueEgoVehicleStateObjectStateYawRate;
    ::ad::physics::Distance2D valueEgoVehicleStateObjectStateCenterPoint;
    ::ad::physics::Distance valueEgoVehicleStateObjectStateCenterPointX(-1e9);
    valueEgoVehicleStateObjectStateCenterPoint.x = valueEgoVehicleStateObjectStateCenterPointX;
    ::ad::physics::Distance valueEgoVehicleStateObjectStateCenterPointY(-1e9);
    valueEgoVehicleStateObjectStateCenterPoint.y = valueEgoVehicleStateObjectStateCenterPointY;
    valueEgoVehicleStateObjectState.centerPoint = valueEgoVehicleStateObjectStateCenterPoint;
    ::ad::physics::Speed valueEgoVehicleStateObjectStateSpeed(-100.);
    valueEgoVehicleStateObjectState.speed = valueEgoVehicleStateObjectStateSpeed;
    ::ad::physics::Angle valueEgoVehicleStateObjectStateSteeringAngle(-6.283185308);
    valueEgoVehicleStateObjectState.steeringAngle = valueEgoVehicleStateObjectStateSteeringAngle;
    valueEgoVehicleState.objectState = valueEgoVehicleStateObjectState;
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleState.distanceToEnterIntersection;
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleState.distanceToLeaveIntersection;
    value.egoVehicleState = valueEgoVehicleState;
    ::ad::rss::situation::VehicleState valueOtherVehicleState;
    ::ad::rss::situation::VelocityRange valueOtherVehicleStateVelocity;
    ::ad::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLonMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLonMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLonMaximum;
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLon.minimum;
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLon.maximum;
    valueOtherVehicleStateVelocity.speedLon = valueOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLatMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLatMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLatMaximum;
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLat.minimum;
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLat.maximum;
    valueOtherVehicleStateVelocity.speedLat = valueOtherVehicleStateVelocitySpeedLat;
    valueOtherVehicleState.velocity = valueOtherVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueOtherVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueOtherVehicleStateDynamicsAlphaLon.accelMax = valueOtherVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMax;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamics.alphaLon = valueOtherVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueOtherVehicleStateDynamicsAlphaLat.accelMax = valueOtherVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLat.brakeMin = valueOtherVehicleStateDynamicsAlphaLatBrakeMin;
    valueOtherVehicleStateDynamics.alphaLat = valueOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
    valueOtherVehicleStateDynamicsLateralFluctuationMargin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueOtherVehicleStateDynamics.lateralFluctuationMargin = valueOtherVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueOtherVehicleStateDynamicsResponseTime(0.);
    valueOtherVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamics.responseTime = valueOtherVehicleStateDynamicsResponseTime;
    ::ad::physics::Speed valueOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
    valueOtherVehicleStateDynamics.maxSpeedOnAcceleration = valueOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueOtherVehicleStateDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    uint32_t
      valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
        std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
    uint32_t
      valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
        std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
    uint32_t valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueOtherVehicleStateDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
      = valueOtherVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
    valueOtherVehicleStateDynamics.unstructuredSettings = valueOtherVehicleStateDynamicsUnstructuredSettings;
    valueOtherVehicleState.dynamics = valueOtherVehicleStateDynamics;
    bool valueOtherVehicleStateHasPriority{true};
    valueOtherVehicleState.hasPriority = valueOtherVehicleStateHasPriority;
    bool valueOtherVehicleStateIsInCorrectLane{true};
    valueOtherVehicleState.isInCorrectLane = valueOtherVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueOtherVehicleStateDistanceToEnterIntersection(-1e9);
    valueOtherVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueOtherVehicleStateDistanceToLeaveIntersection(-1e9);
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleStateDistanceToLeaveIntersection;
    ::ad::rss::world::ObjectType valueOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
    valueOtherVehicleState.objectType = valueOtherVehicleStateObjectType;
    ::ad::rss::world::ObjectState valueOtherVehicleStateObjectState;
    ::ad::physics::Angle valueOtherVehicleStateObjectStateYaw(-6.283185308);
    valueOtherVehicleStateObjectState.yaw = valueOtherVehicleStateObjectStateYaw;
    ::ad::physics::Dimension2D valueOtherVehicleStateObjectStateDimension;
    ::ad::physics::Distance valueOtherVehicleStateObjectStateDimensionLength(-1e9);
    valueOtherVehicleStateObjectStateDimension.length = valueOtherVehicleStateObjectStateDimensionLength;
    ::ad::physics::Distance valueOtherVehicleStateObjectStateDimensionWidth(-1e9);
    valueOtherVehicleStateObjectStateDimension.width = valueOtherVehicleStateObjectStateDimensionWidth;
    valueOtherVehicleStateObjectState.dimension = valueOtherVehicleStateObjectStateDimension;
    ::ad::physics::AngularVelocity valueOtherVehicleStateObjectStateYawRate(-100.);
    valueOtherVehicleStateObjectState.yawRate = valueOtherVehicleStateObjectStateYawRate;
    ::ad::physics::Distance2D valueOtherVehicleStateObjectStateCenterPoint;
    ::ad::physics::Distance valueOtherVehicleStateObjectStateCenterPointX(-1e9);
    valueOtherVehicleStateObjectStateCenterPoint.x = valueOtherVehicleStateObjectStateCenterPointX;
    ::ad::physics::Distance valueOtherVehicleStateObjectStateCenterPointY(-1e9);
    valueOtherVehicleStateObjectStateCenterPoint.y = valueOtherVehicleStateObjectStateCenterPointY;
    valueOtherVehicleStateObjectState.centerPoint = valueOtherVehicleStateObjectStateCenterPoint;
    ::ad::physics::Speed valueOtherVehicleStateObjectStateSpeed(-100.);
    valueOtherVehicleStateObjectState.speed = valueOtherVehicleStateObjectStateSpeed;
    ::ad::physics::Angle valueOtherVehicleStateObjectStateSteeringAngle(-6.283185308);
    valueOtherVehicleStateObjectState.steeringAngle = valueOtherVehicleStateObjectStateSteeringAngle;
    valueOtherVehicleState.objectState = valueOtherVehicleStateObjectState;
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleState.distanceToEnterIntersection;
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleState.distanceToLeaveIntersection;
    value.otherVehicleState = valueOtherVehicleState;
    ::ad::rss::situation::RelativePosition valueRelativePosition;
    ::ad::rss::situation::LongitudinalRelativePosition valueRelativePositionLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::InFront);
    valueRelativePosition.longitudinalPosition = valueRelativePositionLongitudinalPosition;
    ::ad::physics::Distance valueRelativePositionLongitudinalDistance(-1e9);
    valueRelativePosition.longitudinalDistance = valueRelativePositionLongitudinalDistance;
    ::ad::rss::situation::LateralRelativePosition valueRelativePositionLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtLeft);
    valueRelativePosition.lateralPosition = valueRelativePositionLateralPosition;
    ::ad::physics::Distance valueRelativePositionLateralDistance(-1e9);
    valueRelativePosition.lateralDistance = valueRelativePositionLateralDistance;
    value.relativePosition = valueRelativePosition;
    mValue = value;
  }

  ::ad::rss::situation::Situation mValue;
};

TEST_F(SituationTests, copyConstruction)
{
  ::ad::rss::situation::Situation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveConstruction)
{
  ::ad::rss::situation::Situation tmpValue(mValue);
  ::ad::rss::situation::Situation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, copyAssignment)
{
  ::ad::rss::situation::Situation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveAssignment)
{
  ::ad::rss::situation::Situation tmpValue(mValue);
  ::ad::rss::situation::Situation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(SituationTests, comparisonOperatorSituationIdDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::SituationId situationId(std::numeric_limits<::ad::rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorObjectIdDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::world::ObjectId objectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::SituationType situationType(::ad::rss::situation::SituationType::Unstructured);
  valueA.situationType = situationType;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorEgoVehicleStateDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::VehicleState egoVehicleState;
  ::ad::rss::situation::VelocityRange egoVehicleStateVelocity;
  ::ad::physics::SpeedRange egoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLonMinimum(100.);
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLonMaximum(100.);
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLonMaximum;
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLon.minimum;
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLon.maximum;
  egoVehicleStateVelocity.speedLon = egoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange egoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLatMinimum(100.);
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLatMaximum(100.);
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLatMaximum;
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLat.minimum;
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLat.maximum;
  egoVehicleStateVelocity.speedLat = egoVehicleStateVelocitySpeedLat;
  egoVehicleState.velocity = egoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics egoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues egoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLon.accelMax = egoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMax;
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleStateDynamics.alphaLon = egoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues egoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLat.accelMax = egoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  egoVehicleStateDynamicsAlphaLat.brakeMin = egoVehicleStateDynamicsAlphaLatBrakeMin;
  egoVehicleStateDynamics.alphaLat = egoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance egoVehicleStateDynamicsLateralFluctuationMargin(1e9);
  egoVehicleStateDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  egoVehicleStateDynamics.lateralFluctuationMargin = egoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration egoVehicleStateDynamicsResponseTime(1e6);
  egoVehicleStateDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  egoVehicleStateDynamics.responseTime = egoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed egoVehicleStateDynamicsMaxSpeedOnAcceleration(100.);
  egoVehicleStateDynamics.maxSpeedOnAcceleration = egoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings egoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance egoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle egoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  egoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = egoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration egoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  egoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance egoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  egoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration egoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  egoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = egoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t egoVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleStateDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = egoVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  egoVehicleStateDynamics.unstructuredSettings = egoVehicleStateDynamicsUnstructuredSettings;
  egoVehicleState.dynamics = egoVehicleStateDynamics;
  bool egoVehicleStateHasPriority{false};
  egoVehicleState.hasPriority = egoVehicleStateHasPriority;
  bool egoVehicleStateIsInCorrectLane{false};
  egoVehicleState.isInCorrectLane = egoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance egoVehicleStateDistanceToEnterIntersection(1e9);
  egoVehicleState.distanceToEnterIntersection = egoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance egoVehicleStateDistanceToLeaveIntersection(1e9);
  egoVehicleStateDistanceToLeaveIntersection = ::ad::physics::Distance(1e4); // set to valid value within struct
  egoVehicleState.distanceToLeaveIntersection = egoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType egoVehicleStateObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  egoVehicleState.objectType = egoVehicleStateObjectType;
  ::ad::rss::world::ObjectState egoVehicleStateObjectState;
  ::ad::physics::Angle egoVehicleStateObjectStateYaw(6.283185308);
  egoVehicleStateObjectState.yaw = egoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D egoVehicleStateObjectStateDimension;
  ::ad::physics::Distance egoVehicleStateObjectStateDimensionLength(1e9);
  egoVehicleStateObjectStateDimension.length = egoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance egoVehicleStateObjectStateDimensionWidth(1e9);
  egoVehicleStateObjectStateDimension.width = egoVehicleStateObjectStateDimensionWidth;
  egoVehicleStateObjectState.dimension = egoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity egoVehicleStateObjectStateYawRate(100.);
  egoVehicleStateObjectState.yawRate = egoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D egoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance egoVehicleStateObjectStateCenterPointX(1e9);
  egoVehicleStateObjectStateCenterPoint.x = egoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance egoVehicleStateObjectStateCenterPointY(1e9);
  egoVehicleStateObjectStateCenterPoint.y = egoVehicleStateObjectStateCenterPointY;
  egoVehicleStateObjectState.centerPoint = egoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed egoVehicleStateObjectStateSpeed(100.);
  egoVehicleStateObjectState.speed = egoVehicleStateObjectStateSpeed;
  ::ad::physics::Angle egoVehicleStateObjectStateSteeringAngle(6.283185308);
  egoVehicleStateObjectState.steeringAngle = egoVehicleStateObjectStateSteeringAngle;
  egoVehicleState.objectState = egoVehicleStateObjectState;
  egoVehicleState.distanceToLeaveIntersection = egoVehicleState.distanceToEnterIntersection;
  egoVehicleState.distanceToEnterIntersection = egoVehicleState.distanceToLeaveIntersection;
  valueA.egoVehicleState = egoVehicleState;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorOtherVehicleStateDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::VehicleState otherVehicleState;
  ::ad::rss::situation::VelocityRange otherVehicleStateVelocity;
  ::ad::physics::SpeedRange otherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLonMinimum(100.);
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLonMaximum(100.);
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLonMaximum;
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLon.minimum;
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLon.maximum;
  otherVehicleStateVelocity.speedLon = otherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange otherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLatMinimum(100.);
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLatMaximum(100.);
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLatMaximum;
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLat.minimum;
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLat.maximum;
  otherVehicleStateVelocity.speedLat = otherVehicleStateVelocitySpeedLat;
  otherVehicleState.velocity = otherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics otherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues otherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLon.accelMax = otherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  otherVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMax;
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  otherVehicleStateDynamics.alphaLon = otherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues otherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLat.accelMax = otherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  otherVehicleStateDynamicsAlphaLat.brakeMin = otherVehicleStateDynamicsAlphaLatBrakeMin;
  otherVehicleStateDynamics.alphaLat = otherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance otherVehicleStateDynamicsLateralFluctuationMargin(1e9);
  otherVehicleStateDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  otherVehicleStateDynamics.lateralFluctuationMargin = otherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration otherVehicleStateDynamicsResponseTime(1e6);
  otherVehicleStateDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  otherVehicleStateDynamics.responseTime = otherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed otherVehicleStateDynamicsMaxSpeedOnAcceleration(100.);
  otherVehicleStateDynamics.maxSpeedOnAcceleration = otherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings otherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance otherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle otherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  otherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = otherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration otherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  otherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance otherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  otherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration otherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  otherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t otherVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  otherVehicleStateDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = otherVehicleStateDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  otherVehicleStateDynamics.unstructuredSettings = otherVehicleStateDynamicsUnstructuredSettings;
  otherVehicleState.dynamics = otherVehicleStateDynamics;
  bool otherVehicleStateHasPriority{false};
  otherVehicleState.hasPriority = otherVehicleStateHasPriority;
  bool otherVehicleStateIsInCorrectLane{false};
  otherVehicleState.isInCorrectLane = otherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance otherVehicleStateDistanceToEnterIntersection(1e9);
  otherVehicleState.distanceToEnterIntersection = otherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance otherVehicleStateDistanceToLeaveIntersection(1e9);
  otherVehicleStateDistanceToLeaveIntersection = ::ad::physics::Distance(1e4); // set to valid value within struct
  otherVehicleState.distanceToLeaveIntersection = otherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType otherVehicleStateObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  otherVehicleState.objectType = otherVehicleStateObjectType;
  ::ad::rss::world::ObjectState otherVehicleStateObjectState;
  ::ad::physics::Angle otherVehicleStateObjectStateYaw(6.283185308);
  otherVehicleStateObjectState.yaw = otherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D otherVehicleStateObjectStateDimension;
  ::ad::physics::Distance otherVehicleStateObjectStateDimensionLength(1e9);
  otherVehicleStateObjectStateDimension.length = otherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance otherVehicleStateObjectStateDimensionWidth(1e9);
  otherVehicleStateObjectStateDimension.width = otherVehicleStateObjectStateDimensionWidth;
  otherVehicleStateObjectState.dimension = otherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity otherVehicleStateObjectStateYawRate(100.);
  otherVehicleStateObjectState.yawRate = otherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D otherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance otherVehicleStateObjectStateCenterPointX(1e9);
  otherVehicleStateObjectStateCenterPoint.x = otherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance otherVehicleStateObjectStateCenterPointY(1e9);
  otherVehicleStateObjectStateCenterPoint.y = otherVehicleStateObjectStateCenterPointY;
  otherVehicleStateObjectState.centerPoint = otherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed otherVehicleStateObjectStateSpeed(100.);
  otherVehicleStateObjectState.speed = otherVehicleStateObjectStateSpeed;
  ::ad::physics::Angle otherVehicleStateObjectStateSteeringAngle(6.283185308);
  otherVehicleStateObjectState.steeringAngle = otherVehicleStateObjectStateSteeringAngle;
  otherVehicleState.objectState = otherVehicleStateObjectState;
  otherVehicleState.distanceToLeaveIntersection = otherVehicleState.distanceToEnterIntersection;
  otherVehicleState.distanceToEnterIntersection = otherVehicleState.distanceToLeaveIntersection;
  valueA.otherVehicleState = otherVehicleState;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorRelativePositionDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::RelativePosition relativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition relativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  relativePosition.longitudinalPosition = relativePositionLongitudinalPosition;
  ::ad::physics::Distance relativePositionLongitudinalDistance(1e9);
  relativePosition.longitudinalDistance = relativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition relativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtRight);
  relativePosition.lateralPosition = relativePositionLateralPosition;
  ::ad::physics::Distance relativePositionLateralDistance(1e9);
  relativePosition.lateralDistance = relativePositionLateralDistance;
  valueA.relativePosition = relativePosition;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
