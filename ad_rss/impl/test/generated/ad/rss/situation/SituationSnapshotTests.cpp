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
#include "ad/rss/situation/SituationSnapshot.hpp"

class SituationSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect
      = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
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
    ::ad::rss::world::ObjectId valueSituationsElementObjectId(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
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
    ::ad::physics::Angle valueSituationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(
      -6.283185308);
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
    ::ad::rss::world::ObjectType valueSituationsElementOtherVehicleStateObjectType(
      ::ad::rss::world::ObjectType::Invalid);
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
    mValue = value;
  }

  ::ad::rss::situation::SituationSnapshot mValue;
};

TEST_F(SituationSnapshotTests, copyConstruction)
{
  ::ad::rss::situation::SituationSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveConstruction)
{
  ::ad::rss::situation::SituationSnapshot tmpValue(mValue);
  ::ad::rss::situation::SituationSnapshot value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, copyAssignment)
{
  ::ad::rss::situation::SituationSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveAssignment)
{
  ::ad::rss::situation::SituationSnapshot tmpValue(mValue);
  ::ad::rss::situation::SituationSnapshot value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(SituationSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorDefaultEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::world::RssDynamics defaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues defaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.accelMax = defaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMax = defaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = defaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMax = defaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  defaultEgoVehicleRssDynamics.alphaLon = defaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues defaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLat.accelMax = defaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  defaultEgoVehicleRssDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  defaultEgoVehicleRssDynamicsAlphaLat.brakeMin = defaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  defaultEgoVehicleRssDynamics.alphaLat = defaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance defaultEgoVehicleRssDynamicsLateralFluctuationMargin(1e9);
  defaultEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within
                                                                                      // struct
  defaultEgoVehicleRssDynamics.lateralFluctuationMargin = defaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration defaultEgoVehicleRssDynamicsResponseTime(1e6);
  defaultEgoVehicleRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  defaultEgoVehicleRssDynamics.responseTime = defaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed defaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration(100.);
  defaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = defaultEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings defaultEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance defaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  defaultEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle defaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  defaultEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  defaultEgoVehicleRssDynamics.unstructuredSettings = defaultEgoVehicleRssDynamicsUnstructuredSettings;
  valueA.defaultEgoVehicleRssDynamics = defaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorSituationsDiffers)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::situation::SituationVector situations;
  ::ad::rss::situation::Situation situationsElement;
  ::ad::rss::situation::SituationId situationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  situationsElement.situationId = situationsElementSituationId;
  ::ad::rss::world::ObjectId situationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  situationsElement.objectId = situationsElementObjectId;
  ::ad::rss::situation::SituationType situationsElementSituationType(::ad::rss::situation::SituationType::Unstructured);
  situationsElement.situationType = situationsElementSituationType;
  ::ad::rss::situation::VehicleState situationsElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange situationsElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  situationsElementEgoVehicleStateVelocity.speedLon = situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  situationsElementEgoVehicleStateVelocity.speedLat = situationsElementEgoVehicleStateVelocitySpeedLat;
  situationsElementEgoVehicleState.velocity = situationsElementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics situationsElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  situationsElementEgoVehicleStateDynamics.alphaLon = situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLat.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  situationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementEgoVehicleStateDynamics.alphaLat = situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(1e9);
  situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration situationsElementEgoVehicleStateDynamicsResponseTime(1e6);
  situationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.responseTime = situationsElementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed situationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration(100.);
  situationsElementEgoVehicleStateDynamics.maxSpeedOnAcceleration
    = situationsElementEgoVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings situationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance situationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  situationsElementEgoVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle situationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  situationsElementEgoVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(
    1e2);
  situationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  situationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(
    1e6);
  situationsElementEgoVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  situationsElementEgoVehicleStateDynamics.unstructuredSettings
    = situationsElementEgoVehicleStateDynamicsUnstructuredSettings;
  situationsElementEgoVehicleState.dynamics = situationsElementEgoVehicleStateDynamics;
  bool situationsElementEgoVehicleStateHasPriority{false};
  situationsElementEgoVehicleState.hasPriority = situationsElementEgoVehicleStateHasPriority;
  bool situationsElementEgoVehicleStateIsInCorrectLane{false};
  situationsElementEgoVehicleState.isInCorrectLane = situationsElementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance situationsElementEgoVehicleStateDistanceToEnterIntersection(1e9);
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance situationsElementEgoVehicleStateDistanceToLeaveIntersection(1e9);
  situationsElementEgoVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType situationsElementEgoVehicleStateObjectType(
    ::ad::rss::world::ObjectType::ArtificialObject);
  situationsElementEgoVehicleState.objectType = situationsElementEgoVehicleStateObjectType;
  ::ad::rss::world::ObjectState situationsElementEgoVehicleStateObjectState;
  ::ad::physics::Angle situationsElementEgoVehicleStateObjectStateYaw(6.283185308);
  situationsElementEgoVehicleStateObjectState.yaw = situationsElementEgoVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D situationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::Distance situationsElementEgoVehicleStateObjectStateDimensionLength(1e9);
  situationsElementEgoVehicleStateObjectStateDimension.length
    = situationsElementEgoVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance situationsElementEgoVehicleStateObjectStateDimensionWidth(1e9);
  situationsElementEgoVehicleStateObjectStateDimension.width
    = situationsElementEgoVehicleStateObjectStateDimensionWidth;
  situationsElementEgoVehicleStateObjectState.dimension = situationsElementEgoVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity situationsElementEgoVehicleStateObjectStateYawRate(100.);
  situationsElementEgoVehicleStateObjectState.yawRate = situationsElementEgoVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D situationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance situationsElementEgoVehicleStateObjectStateCenterPointX(1e9);
  situationsElementEgoVehicleStateObjectStateCenterPoint.x = situationsElementEgoVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance situationsElementEgoVehicleStateObjectStateCenterPointY(1e9);
  situationsElementEgoVehicleStateObjectStateCenterPoint.y = situationsElementEgoVehicleStateObjectStateCenterPointY;
  situationsElementEgoVehicleStateObjectState.centerPoint = situationsElementEgoVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed situationsElementEgoVehicleStateObjectStateSpeed(100.);
  situationsElementEgoVehicleStateObjectState.speed = situationsElementEgoVehicleStateObjectStateSpeed;
  situationsElementEgoVehicleState.objectState = situationsElementEgoVehicleStateObjectState;
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleState.distanceToEnterIntersection;
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleState.distanceToLeaveIntersection;
  situationsElement.egoVehicleState = situationsElementEgoVehicleState;
  ::ad::rss::situation::VehicleState situationsElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange situationsElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  situationsElementOtherVehicleStateVelocity.speedLon = situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  situationsElementOtherVehicleStateVelocity.speedLat = situationsElementOtherVehicleStateVelocitySpeedLat;
  situationsElementOtherVehicleState.velocity = situationsElementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics situationsElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  situationsElementOtherVehicleStateDynamics.alphaLon = situationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  situationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementOtherVehicleStateDynamics.alphaLat = situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(1e9);
  situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration situationsElementOtherVehicleStateDynamicsResponseTime(1e6);
  situationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.responseTime = situationsElementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed situationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration(100.);
  situationsElementOtherVehicleStateDynamics.maxSpeedOnAcceleration
    = situationsElementOtherVehicleStateDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings situationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  ::ad::physics::Distance situationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  situationsElementOtherVehicleStateDynamicsUnstructuredSettings.pedestrianTurningRadius
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle situationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  situationsElementOtherVehicleStateDynamicsUnstructuredSettings.driveAwayMaxAngle
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange(
    1e2);
  situationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleYawRateChange
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  situationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleMinRadius
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration
    situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  situationsElementOtherVehicleStateDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  situationsElementOtherVehicleStateDynamics.unstructuredSettings
    = situationsElementOtherVehicleStateDynamicsUnstructuredSettings;
  situationsElementOtherVehicleState.dynamics = situationsElementOtherVehicleStateDynamics;
  bool situationsElementOtherVehicleStateHasPriority{false};
  situationsElementOtherVehicleState.hasPriority = situationsElementOtherVehicleStateHasPriority;
  bool situationsElementOtherVehicleStateIsInCorrectLane{false};
  situationsElementOtherVehicleState.isInCorrectLane = situationsElementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance situationsElementOtherVehicleStateDistanceToEnterIntersection(1e9);
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance situationsElementOtherVehicleStateDistanceToLeaveIntersection(1e9);
  situationsElementOtherVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleStateDistanceToLeaveIntersection;
  ::ad::rss::world::ObjectType situationsElementOtherVehicleStateObjectType(
    ::ad::rss::world::ObjectType::ArtificialObject);
  situationsElementOtherVehicleState.objectType = situationsElementOtherVehicleStateObjectType;
  ::ad::rss::world::ObjectState situationsElementOtherVehicleStateObjectState;
  ::ad::physics::Angle situationsElementOtherVehicleStateObjectStateYaw(6.283185308);
  situationsElementOtherVehicleStateObjectState.yaw = situationsElementOtherVehicleStateObjectStateYaw;
  ::ad::physics::Dimension2D situationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::Distance situationsElementOtherVehicleStateObjectStateDimensionLength(1e9);
  situationsElementOtherVehicleStateObjectStateDimension.length
    = situationsElementOtherVehicleStateObjectStateDimensionLength;
  ::ad::physics::Distance situationsElementOtherVehicleStateObjectStateDimensionWidth(1e9);
  situationsElementOtherVehicleStateObjectStateDimension.width
    = situationsElementOtherVehicleStateObjectStateDimensionWidth;
  situationsElementOtherVehicleStateObjectState.dimension = situationsElementOtherVehicleStateObjectStateDimension;
  ::ad::physics::AngularVelocity situationsElementOtherVehicleStateObjectStateYawRate(100.);
  situationsElementOtherVehicleStateObjectState.yawRate = situationsElementOtherVehicleStateObjectStateYawRate;
  ::ad::physics::Distance2D situationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Distance situationsElementOtherVehicleStateObjectStateCenterPointX(1e9);
  situationsElementOtherVehicleStateObjectStateCenterPoint.x
    = situationsElementOtherVehicleStateObjectStateCenterPointX;
  ::ad::physics::Distance situationsElementOtherVehicleStateObjectStateCenterPointY(1e9);
  situationsElementOtherVehicleStateObjectStateCenterPoint.y
    = situationsElementOtherVehicleStateObjectStateCenterPointY;
  situationsElementOtherVehicleStateObjectState.centerPoint = situationsElementOtherVehicleStateObjectStateCenterPoint;
  ::ad::physics::Speed situationsElementOtherVehicleStateObjectStateSpeed(100.);
  situationsElementOtherVehicleStateObjectState.speed = situationsElementOtherVehicleStateObjectStateSpeed;
  situationsElementOtherVehicleState.objectState = situationsElementOtherVehicleStateObjectState;
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleState.distanceToEnterIntersection;
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleState.distanceToLeaveIntersection;
  situationsElement.otherVehicleState = situationsElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition situationsElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition situationsElementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  situationsElementRelativePosition.longitudinalPosition = situationsElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance situationsElementRelativePositionLongitudinalDistance(1e9);
  situationsElementRelativePosition.longitudinalDistance = situationsElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition situationsElementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtRight);
  situationsElementRelativePosition.lateralPosition = situationsElementRelativePositionLateralPosition;
  ::ad::physics::Distance situationsElementRelativePositionLateralDistance(1e9);
  situationsElementRelativePosition.lateralDistance = situationsElementRelativePositionLateralDistance;
  situationsElement.relativePosition = situationsElementRelativePosition;
  situations.resize(0 + 1, situationsElement);
  valueA.situations = situations;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
