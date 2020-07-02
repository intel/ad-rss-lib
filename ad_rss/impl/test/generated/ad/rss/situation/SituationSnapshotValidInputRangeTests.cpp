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

#include "ad/rss/situation/SituationSnapshotValidInputRange.hpp"

TEST(SituationSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueDefaultEgoVehicleRssDynamics.unstructuredSettings = valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituationsElement.objectId = valueSituationsElementObjectId;
  ::ad::rss::situation::SituationType valueSituationsElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueSituationsElement.situationType = valueSituationsElementSituationType;
  ::ad::rss::situation::VehicleState valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLon = valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLat = valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  valueSituationsElementEgoVehicleState.velocity = valueSituationsElementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLon = valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLat = valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementEgoVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.responseTime
    = valueSituationsElementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementEgoVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementEgoVehicleState.dynamics = valueSituationsElementEgoVehicleStateDynamics;
  bool valueSituationsElementEgoVehicleStateHasPriority{true};
  valueSituationsElementEgoVehicleState.hasPriority = valueSituationsElementEgoVehicleStateHasPriority;
  bool valueSituationsElementEgoVehicleStateIsInCorrectLane{true};
  valueSituationsElementEgoVehicleState.isInCorrectLane = valueSituationsElementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementEgoVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementEgoVehicleState.objectType = valueSituationsElementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementEgoVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementEgoVehicleStateObjectState.yaw = valueSituationsElementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.length
    = valueSituationsElementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.width
    = valueSituationsElementEgoVehicleStateObjectStateDimensionWidth;
  valueSituationsElementEgoVehicleStateObjectState.dimension
    = valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementEgoVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementEgoVehicleStateObjectState.yawRate = valueSituationsElementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointY;
  valueSituationsElementEgoVehicleStateObjectState.centerPoint
    = valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementEgoVehicleStateObjectState.speed = valueSituationsElementEgoVehicleStateObjectStateSpeed;
  valueSituationsElementEgoVehicleState.objectState = valueSituationsElementEgoVehicleStateObjectState;
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleState.distanceToEnterIntersection;
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.egoVehicleState = valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VehicleState valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLon = valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLat = valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  valueSituationsElementOtherVehicleState.velocity = valueSituationsElementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLon = valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLat = valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementOtherVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.responseTime
    = valueSituationsElementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(
    -6.283185308);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementOtherVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementOtherVehicleState.dynamics = valueSituationsElementOtherVehicleStateDynamics;
  bool valueSituationsElementOtherVehicleStateHasPriority{true};
  valueSituationsElementOtherVehicleState.hasPriority = valueSituationsElementOtherVehicleStateHasPriority;
  bool valueSituationsElementOtherVehicleStateIsInCorrectLane{true};
  valueSituationsElementOtherVehicleState.isInCorrectLane = valueSituationsElementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementOtherVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementOtherVehicleState.objectType = valueSituationsElementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementOtherVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementOtherVehicleStateObjectState.yaw = valueSituationsElementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.length
    = valueSituationsElementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.width
    = valueSituationsElementOtherVehicleStateObjectStateDimensionWidth;
  valueSituationsElementOtherVehicleStateObjectState.dimension
    = valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementOtherVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementOtherVehicleStateObjectState.yawRate
    = valueSituationsElementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointY;
  valueSituationsElementOtherVehicleStateObjectState.centerPoint
    = valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementOtherVehicleStateObjectState.speed = valueSituationsElementOtherVehicleStateObjectStateSpeed;
  valueSituationsElementOtherVehicleState.objectState = valueSituationsElementOtherVehicleStateObjectState;
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleState.distanceToEnterIntersection;
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.otherVehicleState = valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition valueSituationsElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition valueSituationsElementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  valueSituationsElementRelativePosition.longitudinalPosition
    = valueSituationsElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLongitudinalDistance(-1e9);
  valueSituationsElementRelativePosition.longitudinalDistance
    = valueSituationsElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueSituationsElementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  valueSituationsElementRelativePosition.lateralPosition = valueSituationsElementRelativePositionLateralPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLateralDistance(-1e9);
  valueSituationsElementRelativePosition.lateralDistance = valueSituationsElementRelativePositionLateralDistance;
  valueSituationsElement.relativePosition = valueSituationsElementRelativePosition;
  valueSituations.resize(1, valueSituationsElement);
  value.situations = valueSituations;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooSmall)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueDefaultEgoVehicleRssDynamics.unstructuredSettings = valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituationsElement.objectId = valueSituationsElementObjectId;
  ::ad::rss::situation::SituationType valueSituationsElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueSituationsElement.situationType = valueSituationsElementSituationType;
  ::ad::rss::situation::VehicleState valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLon = valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLat = valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  valueSituationsElementEgoVehicleState.velocity = valueSituationsElementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLon = valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLat = valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementEgoVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.responseTime
    = valueSituationsElementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementEgoVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementEgoVehicleState.dynamics = valueSituationsElementEgoVehicleStateDynamics;
  bool valueSituationsElementEgoVehicleStateHasPriority{true};
  valueSituationsElementEgoVehicleState.hasPriority = valueSituationsElementEgoVehicleStateHasPriority;
  bool valueSituationsElementEgoVehicleStateIsInCorrectLane{true};
  valueSituationsElementEgoVehicleState.isInCorrectLane = valueSituationsElementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementEgoVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementEgoVehicleState.objectType = valueSituationsElementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementEgoVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementEgoVehicleStateObjectState.yaw = valueSituationsElementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.length
    = valueSituationsElementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.width
    = valueSituationsElementEgoVehicleStateObjectStateDimensionWidth;
  valueSituationsElementEgoVehicleStateObjectState.dimension
    = valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementEgoVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementEgoVehicleStateObjectState.yawRate = valueSituationsElementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointY;
  valueSituationsElementEgoVehicleStateObjectState.centerPoint
    = valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementEgoVehicleStateObjectState.speed = valueSituationsElementEgoVehicleStateObjectStateSpeed;
  valueSituationsElementEgoVehicleState.objectState = valueSituationsElementEgoVehicleStateObjectState;
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleState.distanceToEnterIntersection;
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.egoVehicleState = valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VehicleState valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLon = valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLat = valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  valueSituationsElementOtherVehicleState.velocity = valueSituationsElementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLon = valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLat = valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementOtherVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.responseTime
    = valueSituationsElementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(
    -6.283185308);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementOtherVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementOtherVehicleState.dynamics = valueSituationsElementOtherVehicleStateDynamics;
  bool valueSituationsElementOtherVehicleStateHasPriority{true};
  valueSituationsElementOtherVehicleState.hasPriority = valueSituationsElementOtherVehicleStateHasPriority;
  bool valueSituationsElementOtherVehicleStateIsInCorrectLane{true};
  valueSituationsElementOtherVehicleState.isInCorrectLane = valueSituationsElementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementOtherVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementOtherVehicleState.objectType = valueSituationsElementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementOtherVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementOtherVehicleStateObjectState.yaw = valueSituationsElementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.length
    = valueSituationsElementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.width
    = valueSituationsElementOtherVehicleStateObjectStateDimensionWidth;
  valueSituationsElementOtherVehicleStateObjectState.dimension
    = valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementOtherVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementOtherVehicleStateObjectState.yawRate
    = valueSituationsElementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointY;
  valueSituationsElementOtherVehicleStateObjectState.centerPoint
    = valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementOtherVehicleStateObjectState.speed = valueSituationsElementOtherVehicleStateObjectStateSpeed;
  valueSituationsElementOtherVehicleState.objectState = valueSituationsElementOtherVehicleStateObjectState;
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleState.distanceToEnterIntersection;
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.otherVehicleState = valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition valueSituationsElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition valueSituationsElementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  valueSituationsElementRelativePosition.longitudinalPosition
    = valueSituationsElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLongitudinalDistance(-1e9);
  valueSituationsElementRelativePosition.longitudinalDistance
    = valueSituationsElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueSituationsElementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  valueSituationsElementRelativePosition.lateralPosition = valueSituationsElementRelativePositionLateralPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLateralDistance(-1e9);
  valueSituationsElementRelativePosition.lateralDistance = valueSituationsElementRelativePositionLateralDistance;
  valueSituationsElement.relativePosition = valueSituationsElementRelativePosition;
  valueSituations.resize(1, valueSituationsElement);
  value.situations = valueSituations;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooBig)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = valueDefaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueDefaultEgoVehicleRssDynamics.unstructuredSettings = valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueSituationsElement.objectId = valueSituationsElementObjectId;
  ::ad::rss::situation::SituationType valueSituationsElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueSituationsElement.situationType = valueSituationsElementSituationType;
  ::ad::rss::situation::VehicleState valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLon = valueSituationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementEgoVehicleStateVelocity.speedLat = valueSituationsElementEgoVehicleStateVelocitySpeedLat;
  valueSituationsElementEgoVehicleState.velocity = valueSituationsElementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLon = valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementEgoVehicleStateDynamics.alphaLat = valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementEgoVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementEgoVehicleStateDynamics.responseTime
    = valueSituationsElementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementEgoVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementEgoVehicleState.dynamics = valueSituationsElementEgoVehicleStateDynamics;
  bool valueSituationsElementEgoVehicleStateHasPriority{true};
  valueSituationsElementEgoVehicleState.hasPriority = valueSituationsElementEgoVehicleStateHasPriority;
  bool valueSituationsElementEgoVehicleStateIsInCorrectLane{true};
  valueSituationsElementEgoVehicleState.isInCorrectLane = valueSituationsElementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementEgoVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementEgoVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementEgoVehicleState.objectType = valueSituationsElementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementEgoVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementEgoVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementEgoVehicleStateObjectState.yaw = valueSituationsElementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.length
    = valueSituationsElementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateDimension.width
    = valueSituationsElementEgoVehicleStateObjectStateDimensionWidth;
  valueSituationsElementEgoVehicleStateObjectState.dimension
    = valueSituationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementEgoVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementEgoVehicleStateObjectState.yawRate = valueSituationsElementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementEgoVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementEgoVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementEgoVehicleStateObjectStateCenterPointY;
  valueSituationsElementEgoVehicleStateObjectState.centerPoint
    = valueSituationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementEgoVehicleStateObjectState.speed = valueSituationsElementEgoVehicleStateObjectStateSpeed;
  valueSituationsElementEgoVehicleState.objectState = valueSituationsElementEgoVehicleStateObjectState;
  valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
    = valueSituationsElementEgoVehicleState.distanceToEnterIntersection;
  valueSituationsElementEgoVehicleState.distanceToEnterIntersection
    = valueSituationsElementEgoVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.egoVehicleState = valueSituationsElementEgoVehicleState;
  ::ad::rss::situation::VehicleState valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange valueSituationsElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLon = valueSituationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  valueSituationsElementOtherVehicleStateVelocity.speedLat = valueSituationsElementOtherVehicleStateVelocitySpeedLat;
  valueSituationsElementOtherVehicleState.velocity = valueSituationsElementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics valueSituationsElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLon = valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  valueSituationsElementOtherVehicleStateDynamics.alphaLat = valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueSituationsElementOtherVehicleStateDynamicsResponseTime(0.);
  valueSituationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueSituationsElementOtherVehicleStateDynamics.responseTime
    = valueSituationsElementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeedOnAcceleration
    = valueSituationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(
    -1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(
    -6.283185308);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  valueSituationsElementOtherVehicleStateDynamics.unstructuredSettings
    = valueSituationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  valueSituationsElementOtherVehicleState.dynamics = valueSituationsElementOtherVehicleStateDynamics;
  bool valueSituationsElementOtherVehicleStateHasPriority{true};
  valueSituationsElementOtherVehicleState.hasPriority = valueSituationsElementOtherVehicleStateHasPriority;
  bool valueSituationsElementOtherVehicleStateIsInCorrectLane{true};
  valueSituationsElementOtherVehicleState.isInCorrectLane = valueSituationsElementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToEnterIntersection(-1e9);
  valueSituationsElementOtherVehicleStateDistanceToEnterIntersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection(-1e9);
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType valueSituationsElementOtherVehicleStateObjectType(::ad::rss::world::ObjectType::Invalid);
  valueSituationsElementOtherVehicleState.objectType = valueSituationsElementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState valueSituationsElementOtherVehicleStateObjectState;
  ::ad::physics::Angle valueSituationsElementOtherVehicleStateObjectStateYaw(-6.283185308);
  valueSituationsElementOtherVehicleStateObjectState.yaw = valueSituationsElementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionLength(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.length
    = valueSituationsElementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateDimensionWidth(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateDimension.width
    = valueSituationsElementOtherVehicleStateObjectStateDimensionWidth;
  valueSituationsElementOtherVehicleStateObjectState.dimension
    = valueSituationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity valueSituationsElementOtherVehicleStateObjectStateYawRate(-100.);
  valueSituationsElementOtherVehicleStateObjectState.yawRate
    = valueSituationsElementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointX(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.x
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance valueSituationsElementOtherVehicleStateObjectStateCenterPointY(-1e9);
  valueSituationsElementOtherVehicleStateObjectStateCenterPoint.y
    = valueSituationsElementOtherVehicleStateObjectStateCenterPointY;
  valueSituationsElementOtherVehicleStateObjectState.centerPoint
    = valueSituationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateObjectStateSpeed(-100.);
  valueSituationsElementOtherVehicleStateObjectState.speed = valueSituationsElementOtherVehicleStateObjectStateSpeed;
  valueSituationsElementOtherVehicleState.objectState = valueSituationsElementOtherVehicleStateObjectState;
  valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
    = valueSituationsElementOtherVehicleState.distanceToEnterIntersection;
  valueSituationsElementOtherVehicleState.distanceToEnterIntersection
    = valueSituationsElementOtherVehicleState.distanceToLeaveIntersection;
  valueSituationsElement.otherVehicleState = valueSituationsElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition valueSituationsElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition valueSituationsElementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  valueSituationsElementRelativePosition.longitudinalPosition
    = valueSituationsElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLongitudinalDistance(-1e9);
  valueSituationsElementRelativePosition.longitudinalDistance
    = valueSituationsElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueSituationsElementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  valueSituationsElementRelativePosition.lateralPosition = valueSituationsElementRelativePositionLateralPosition;
  ::ad::physics::Distance valueSituationsElementRelativePositionLateralDistance(-1e9);
  valueSituationsElementRelativePosition.lateralDistance = valueSituationsElementRelativePositionLateralDistance;
  valueSituationsElement.relativePosition = valueSituationsElementRelativePosition;
  valueSituations.resize(1, valueSituationsElement);
  value.situations = valueSituations;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
