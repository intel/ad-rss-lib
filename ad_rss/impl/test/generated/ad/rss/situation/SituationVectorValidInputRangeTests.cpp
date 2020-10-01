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

#include "ad/rss/situation/SituationVectorValidInputRange.hpp"

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::situation::SituationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleStateDynamics.maxSpeedOnAcceleration = elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleStateDynamics.unstructuredSettings = elementEgoVehicleStateDynamicsUnstructuredSettings;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  elementEgoVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicleState.objectType = elementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementEgoVehicleStateObjectState;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateYaw(-6.283185308);
  elementEgoVehicleStateObjectState.yaw = elementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionLength(-1e9);
  elementEgoVehicleStateObjectStateDimension.length = elementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  elementEgoVehicleStateObjectStateDimension.width = elementEgoVehicleStateObjectStateDimensionWidth;
  elementEgoVehicleStateObjectState.dimension = elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateObjectStateYawRate(-100.);
  elementEgoVehicleStateObjectState.yawRate = elementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointX(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.x = elementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointY(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.y = elementEgoVehicleStateObjectStateCenterPointY;
  elementEgoVehicleStateObjectState.centerPoint = elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateObjectStateSpeed(-100.);
  elementEgoVehicleStateObjectState.speed = elementEgoVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementEgoVehicleStateObjectState.steeringAngle = elementEgoVehicleStateObjectStateSteeringAngle;
  elementEgoVehicleState.objectState = elementEgoVehicleStateObjectState;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementOtherVehicleStateDynamics.maxSpeedOnAcceleration = elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementOtherVehicleStateDynamics.unstructuredSettings = elementOtherVehicleStateDynamicsUnstructuredSettings;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  elementOtherVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementOtherVehicleState.objectType = elementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementOtherVehicleStateObjectState;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateYaw(-6.283185308);
  elementOtherVehicleStateObjectState.yaw = elementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionLength(-1e9);
  elementOtherVehicleStateObjectStateDimension.length = elementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  elementOtherVehicleStateObjectStateDimension.width = elementOtherVehicleStateObjectStateDimensionWidth;
  elementOtherVehicleStateObjectState.dimension = elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementOtherVehicleStateObjectStateYawRate(-100.);
  elementOtherVehicleStateObjectState.yawRate = elementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointX(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.x = elementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointY(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.y = elementOtherVehicleStateObjectStateCenterPointY;
  elementOtherVehicleStateObjectState.centerPoint = elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementOtherVehicleStateObjectStateSpeed(-100.);
  elementOtherVehicleStateObjectState.speed = elementOtherVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementOtherVehicleStateObjectState.steeringAngle = elementOtherVehicleStateObjectStateSteeringAngle;
  elementOtherVehicleState.objectState = elementOtherVehicleStateObjectState;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(-1e9);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(-1e9);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleStateDynamics.maxSpeedOnAcceleration = elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleStateDynamics.unstructuredSettings = elementEgoVehicleStateDynamicsUnstructuredSettings;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  elementEgoVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicleState.objectType = elementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementEgoVehicleStateObjectState;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateYaw(-6.283185308);
  elementEgoVehicleStateObjectState.yaw = elementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionLength(-1e9);
  elementEgoVehicleStateObjectStateDimension.length = elementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  elementEgoVehicleStateObjectStateDimension.width = elementEgoVehicleStateObjectStateDimensionWidth;
  elementEgoVehicleStateObjectState.dimension = elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateObjectStateYawRate(-100.);
  elementEgoVehicleStateObjectState.yawRate = elementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointX(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.x = elementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointY(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.y = elementEgoVehicleStateObjectStateCenterPointY;
  elementEgoVehicleStateObjectState.centerPoint = elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateObjectStateSpeed(-100.);
  elementEgoVehicleStateObjectState.speed = elementEgoVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementEgoVehicleStateObjectState.steeringAngle = elementEgoVehicleStateObjectStateSteeringAngle;
  elementEgoVehicleState.objectState = elementEgoVehicleStateObjectState;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementOtherVehicleStateDynamics.maxSpeedOnAcceleration = elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementOtherVehicleStateDynamics.unstructuredSettings = elementOtherVehicleStateDynamicsUnstructuredSettings;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  elementOtherVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementOtherVehicleState.objectType = elementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementOtherVehicleStateObjectState;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateYaw(-6.283185308);
  elementOtherVehicleStateObjectState.yaw = elementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionLength(-1e9);
  elementOtherVehicleStateObjectStateDimension.length = elementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  elementOtherVehicleStateObjectStateDimension.width = elementOtherVehicleStateObjectStateDimensionWidth;
  elementOtherVehicleStateObjectState.dimension = elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementOtherVehicleStateObjectStateYawRate(-100.);
  elementOtherVehicleStateObjectState.yawRate = elementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointX(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.x = elementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointY(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.y = elementOtherVehicleStateObjectStateCenterPointY;
  elementOtherVehicleStateObjectState.centerPoint = elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementOtherVehicleStateObjectStateSpeed(-100.);
  elementOtherVehicleStateObjectState.speed = elementOtherVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementOtherVehicleStateObjectState.steeringAngle = elementOtherVehicleStateObjectStateSteeringAngle;
  elementOtherVehicleState.objectState = elementOtherVehicleStateObjectState;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(-1e9);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(-1e9);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleStateDynamics.maxSpeedOnAcceleration = elementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleStateDynamics.unstructuredSettings = elementEgoVehicleStateDynamicsUnstructuredSettings;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  elementEgoVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicleState.objectType = elementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementEgoVehicleStateObjectState;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateYaw(-6.283185308);
  elementEgoVehicleStateObjectState.yaw = elementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionLength(-1e9);
  elementEgoVehicleStateObjectStateDimension.length = elementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  elementEgoVehicleStateObjectStateDimension.width = elementEgoVehicleStateObjectStateDimensionWidth;
  elementEgoVehicleStateObjectState.dimension = elementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateObjectStateYawRate(-100.);
  elementEgoVehicleStateObjectState.yawRate = elementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointX(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.x = elementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateObjectStateCenterPointY(-1e9);
  elementEgoVehicleStateObjectStateCenterPoint.y = elementEgoVehicleStateObjectStateCenterPointY;
  elementEgoVehicleStateObjectState.centerPoint = elementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateObjectStateSpeed(-100.);
  elementEgoVehicleStateObjectState.speed = elementEgoVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementEgoVehicleStateObjectState.steeringAngle = elementEgoVehicleStateObjectStateSteeringAngle;
  elementEgoVehicleState.objectState = elementEgoVehicleStateObjectState;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  elementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  elementOtherVehicleStateDynamics.maxSpeedOnAcceleration = elementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementOtherVehicleStateDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementOtherVehicleStateDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementOtherVehicleStateDynamics.unstructuredSettings = elementOtherVehicleStateDynamicsUnstructuredSettings;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  elementOtherVehicleStateDistanceToEnterIntersection = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType elementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  elementOtherVehicleState.objectType = elementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState elementOtherVehicleStateObjectState;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateYaw(-6.283185308);
  elementOtherVehicleStateObjectState.yaw = elementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionLength(-1e9);
  elementOtherVehicleStateObjectStateDimension.length = elementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  elementOtherVehicleStateObjectStateDimension.width = elementOtherVehicleStateObjectStateDimensionWidth;
  elementOtherVehicleStateObjectState.dimension = elementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity elementOtherVehicleStateObjectStateYawRate(-100.);
  elementOtherVehicleStateObjectState.yawRate = elementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointX(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.x = elementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance elementOtherVehicleStateObjectStateCenterPointY(-1e9);
  elementOtherVehicleStateObjectStateCenterPoint.y = elementOtherVehicleStateObjectStateCenterPointY;
  elementOtherVehicleStateObjectState.centerPoint = elementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed elementOtherVehicleStateObjectStateSpeed(-100.);
  elementOtherVehicleStateObjectState.speed = elementOtherVehicleStateObjectStateSpeed;
  ::ad::physics::Angle elementOtherVehicleStateObjectStateSteeringAngle(-6.283185308);
  elementOtherVehicleStateObjectState.steeringAngle = elementOtherVehicleStateObjectStateSteeringAngle;
  elementOtherVehicleState.objectState = elementOtherVehicleStateObjectState;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(-1e9);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(-1e9);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
