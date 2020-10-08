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
#include "ad/rss/world/WorldModel.hpp"

class WorldModelTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::WorldModel value;
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
    uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
      = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
    uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
      = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
    uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    valueDefaultEgoVehicleRssDynamics.unstructuredSettings = valueDefaultEgoVehicleRssDynamicsUnstructuredSettings;
    value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
    ::ad::rss::world::SceneVector valueScenes;
    ::ad::rss::world::Scene valueScenesElement;
    ::ad::rss::situation::SituationType valueScenesElementSituationType(
      ::ad::rss::situation::SituationType::NotRelevant);
    valueScenesElement.situationType = valueScenesElementSituationType;
    ::ad::rss::world::Object valueScenesElementEgoVehicle;
    ::ad::rss::world::ObjectId valueScenesElementEgoVehicleObjectId(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueScenesElementEgoVehicle.objectId = valueScenesElementEgoVehicleObjectId;
    ::ad::rss::world::ObjectType valueScenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
    valueScenesElementEgoVehicle.objectType = valueScenesElementEgoVehicleObjectType;
    ::ad::rss::world::OccupiedRegionVector valueScenesElementEgoVehicleOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueScenesElementEgoVehicleOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueScenesElementEgoVehicleOccupiedRegionsElement.segmentId
      = valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
    valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
    valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
    valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
    valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
    valueScenesElementEgoVehicleOccupiedRegionsElement.lonRange
      = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
    valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
    valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
    valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
    valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
      = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
    valueScenesElementEgoVehicleOccupiedRegionsElement.latRange
      = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
    valueScenesElementEgoVehicleOccupiedRegions.resize(1, valueScenesElementEgoVehicleOccupiedRegionsElement);
    valueScenesElementEgoVehicle.occupiedRegions = valueScenesElementEgoVehicleOccupiedRegions;
    ::ad::rss::world::Velocity valueScenesElementEgoVehicleVelocity;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLonMin(-100.);
    valueScenesElementEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueScenesElementEgoVehicleVelocity.speedLonMin = valueScenesElementEgoVehicleVelocitySpeedLonMin;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLonMax(-100.);
    valueScenesElementEgoVehicleVelocity.speedLonMax = valueScenesElementEgoVehicleVelocitySpeedLonMax;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLatMin(-100.);
    valueScenesElementEgoVehicleVelocity.speedLatMin = valueScenesElementEgoVehicleVelocitySpeedLatMin;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLatMax(-100.);
    valueScenesElementEgoVehicleVelocity.speedLatMax = valueScenesElementEgoVehicleVelocitySpeedLatMax;
    valueScenesElementEgoVehicleVelocity.speedLonMax = valueScenesElementEgoVehicleVelocity.speedLonMin;
    valueScenesElementEgoVehicleVelocity.speedLatMax = valueScenesElementEgoVehicleVelocity.speedLatMin;
    valueScenesElementEgoVehicleVelocity.speedLonMin = valueScenesElementEgoVehicleVelocity.speedLonMax;
    valueScenesElementEgoVehicleVelocity.speedLatMin = valueScenesElementEgoVehicleVelocity.speedLatMax;
    valueScenesElementEgoVehicle.velocity = valueScenesElementEgoVehicleVelocity;
    ::ad::rss::world::ObjectState valueScenesElementEgoVehicleState;
    ::ad::physics::Angle valueScenesElementEgoVehicleStateYaw(-6.283185308);
    valueScenesElementEgoVehicleState.yaw = valueScenesElementEgoVehicleStateYaw;
    ::ad::physics::Dimension2D valueScenesElementEgoVehicleStateDimension;
    ::ad::physics::Distance valueScenesElementEgoVehicleStateDimensionLength(-1e9);
    valueScenesElementEgoVehicleStateDimension.length = valueScenesElementEgoVehicleStateDimensionLength;
    ::ad::physics::Distance valueScenesElementEgoVehicleStateDimensionWidth(-1e9);
    valueScenesElementEgoVehicleStateDimension.width = valueScenesElementEgoVehicleStateDimensionWidth;
    valueScenesElementEgoVehicleState.dimension = valueScenesElementEgoVehicleStateDimension;
    ::ad::physics::AngularVelocity valueScenesElementEgoVehicleStateYawRate(-100.);
    valueScenesElementEgoVehicleState.yawRate = valueScenesElementEgoVehicleStateYawRate;
    ::ad::physics::Distance2D valueScenesElementEgoVehicleStateCenterPoint;
    ::ad::physics::Distance valueScenesElementEgoVehicleStateCenterPointX(-1e9);
    valueScenesElementEgoVehicleStateCenterPoint.x = valueScenesElementEgoVehicleStateCenterPointX;
    ::ad::physics::Distance valueScenesElementEgoVehicleStateCenterPointY(-1e9);
    valueScenesElementEgoVehicleStateCenterPoint.y = valueScenesElementEgoVehicleStateCenterPointY;
    valueScenesElementEgoVehicleState.centerPoint = valueScenesElementEgoVehicleStateCenterPoint;
    ::ad::physics::Speed valueScenesElementEgoVehicleStateSpeed(-100.);
    valueScenesElementEgoVehicleState.speed = valueScenesElementEgoVehicleStateSpeed;
    ::ad::physics::Angle valueScenesElementEgoVehicleStateSteeringAngle(-6.283185308);
    valueScenesElementEgoVehicleState.steeringAngle = valueScenesElementEgoVehicleStateSteeringAngle;
    valueScenesElementEgoVehicle.state = valueScenesElementEgoVehicleState;
    valueScenesElement.egoVehicle = valueScenesElementEgoVehicle;
    ::ad::rss::world::RssDynamics valueScenesElementEgoVehicleRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueScenesElementEgoVehicleRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.accelMax = valueScenesElementEgoVehicleRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax = valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin = valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect
      = valueScenesElementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin = valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax;
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect
      = valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin
      = valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
    valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax = valueScenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueScenesElementEgoVehicleRssDynamics.alphaLon = valueScenesElementEgoVehicleRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueScenesElementEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueScenesElementEgoVehicleRssDynamicsAlphaLat.accelMax = valueScenesElementEgoVehicleRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueScenesElementEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
    valueScenesElementEgoVehicleRssDynamicsAlphaLat.brakeMin = valueScenesElementEgoVehicleRssDynamicsAlphaLatBrakeMin;
    valueScenesElementEgoVehicleRssDynamics.alphaLat = valueScenesElementEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Distance valueScenesElementEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
    valueScenesElementEgoVehicleRssDynamicsLateralFluctuationMargin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementEgoVehicleRssDynamics.lateralFluctuationMargin
      = valueScenesElementEgoVehicleRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueScenesElementEgoVehicleRssDynamicsResponseTime(0.);
    valueScenesElementEgoVehicleRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueScenesElementEgoVehicleRssDynamics.responseTime = valueScenesElementEgoVehicleRssDynamicsResponseTime;
    ::ad::physics::Speed valueScenesElementEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
    valueScenesElementEgoVehicleRssDynamics.maxSpeedOnAcceleration
      = valueScenesElementEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(
      -1e2);
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(
      0.);
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
    uint32_t valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
    uint32_t
      valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
        std::numeric_limits<uint32_t>::min()};
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
    uint32_t valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t
      valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
        std::numeric_limits<uint32_t>::min()};
    valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    valueScenesElementEgoVehicleRssDynamics.unstructuredSettings
      = valueScenesElementEgoVehicleRssDynamicsUnstructuredSettings;
    valueScenesElement.egoVehicleRssDynamics = valueScenesElementEgoVehicleRssDynamics;
    ::ad::rss::world::Object valueScenesElementObject;
    ::ad::rss::world::ObjectId valueScenesElementObjectObjectId(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueScenesElementObject.objectId = valueScenesElementObjectObjectId;
    ::ad::rss::world::ObjectType valueScenesElementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
    valueScenesElementObject.objectType = valueScenesElementObjectObjectType;
    ::ad::rss::world::OccupiedRegionVector valueScenesElementObjectOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueScenesElementObjectOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueScenesElementObjectOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueScenesElementObjectOccupiedRegionsElement.segmentId = valueScenesElementObjectOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum(0.);
    valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
      = valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum(0.);
    valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
      = valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum;
    valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
      = valueScenesElementObjectOccupiedRegionsElementLonRange.minimum;
    valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
      = valueScenesElementObjectOccupiedRegionsElementLonRange.maximum;
    valueScenesElementObjectOccupiedRegionsElement.lonRange = valueScenesElementObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum(0.);
    valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
      = valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum(0.);
    valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
      = valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum;
    valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
      = valueScenesElementObjectOccupiedRegionsElementLatRange.minimum;
    valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
      = valueScenesElementObjectOccupiedRegionsElementLatRange.maximum;
    valueScenesElementObjectOccupiedRegionsElement.latRange = valueScenesElementObjectOccupiedRegionsElementLatRange;
    valueScenesElementObjectOccupiedRegions.resize(1, valueScenesElementObjectOccupiedRegionsElement);
    valueScenesElementObject.occupiedRegions = valueScenesElementObjectOccupiedRegions;
    ::ad::rss::world::Velocity valueScenesElementObjectVelocity;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLonMin(-100.);
    valueScenesElementObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueScenesElementObjectVelocity.speedLonMin = valueScenesElementObjectVelocitySpeedLonMin;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLonMax(-100.);
    valueScenesElementObjectVelocity.speedLonMax = valueScenesElementObjectVelocitySpeedLonMax;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLatMin(-100.);
    valueScenesElementObjectVelocity.speedLatMin = valueScenesElementObjectVelocitySpeedLatMin;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLatMax(-100.);
    valueScenesElementObjectVelocity.speedLatMax = valueScenesElementObjectVelocitySpeedLatMax;
    valueScenesElementObjectVelocity.speedLonMax = valueScenesElementObjectVelocity.speedLonMin;
    valueScenesElementObjectVelocity.speedLatMax = valueScenesElementObjectVelocity.speedLatMin;
    valueScenesElementObjectVelocity.speedLonMin = valueScenesElementObjectVelocity.speedLonMax;
    valueScenesElementObjectVelocity.speedLatMin = valueScenesElementObjectVelocity.speedLatMax;
    valueScenesElementObject.velocity = valueScenesElementObjectVelocity;
    ::ad::rss::world::ObjectState valueScenesElementObjectState;
    ::ad::physics::Angle valueScenesElementObjectStateYaw(-6.283185308);
    valueScenesElementObjectState.yaw = valueScenesElementObjectStateYaw;
    ::ad::physics::Dimension2D valueScenesElementObjectStateDimension;
    ::ad::physics::Distance valueScenesElementObjectStateDimensionLength(-1e9);
    valueScenesElementObjectStateDimension.length = valueScenesElementObjectStateDimensionLength;
    ::ad::physics::Distance valueScenesElementObjectStateDimensionWidth(-1e9);
    valueScenesElementObjectStateDimension.width = valueScenesElementObjectStateDimensionWidth;
    valueScenesElementObjectState.dimension = valueScenesElementObjectStateDimension;
    ::ad::physics::AngularVelocity valueScenesElementObjectStateYawRate(-100.);
    valueScenesElementObjectState.yawRate = valueScenesElementObjectStateYawRate;
    ::ad::physics::Distance2D valueScenesElementObjectStateCenterPoint;
    ::ad::physics::Distance valueScenesElementObjectStateCenterPointX(-1e9);
    valueScenesElementObjectStateCenterPoint.x = valueScenesElementObjectStateCenterPointX;
    ::ad::physics::Distance valueScenesElementObjectStateCenterPointY(-1e9);
    valueScenesElementObjectStateCenterPoint.y = valueScenesElementObjectStateCenterPointY;
    valueScenesElementObjectState.centerPoint = valueScenesElementObjectStateCenterPoint;
    ::ad::physics::Speed valueScenesElementObjectStateSpeed(-100.);
    valueScenesElementObjectState.speed = valueScenesElementObjectStateSpeed;
    ::ad::physics::Angle valueScenesElementObjectStateSteeringAngle(-6.283185308);
    valueScenesElementObjectState.steeringAngle = valueScenesElementObjectStateSteeringAngle;
    valueScenesElementObject.state = valueScenesElementObjectState;
    valueScenesElement.object = valueScenesElementObject;
    ::ad::rss::world::RssDynamics valueScenesElementObjectRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueScenesElementObjectRssDynamicsAlphaLon.accelMax = valueScenesElementObjectRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect
      = valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMax;
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
    valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
    valueScenesElementObjectRssDynamics.alphaLon = valueScenesElementObjectRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueScenesElementObjectRssDynamicsAlphaLat.accelMax = valueScenesElementObjectRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
    valueScenesElementObjectRssDynamicsAlphaLat.brakeMin = valueScenesElementObjectRssDynamicsAlphaLatBrakeMin;
    valueScenesElementObjectRssDynamics.alphaLat = valueScenesElementObjectRssDynamicsAlphaLat;
    ::ad::physics::Distance valueScenesElementObjectRssDynamicsLateralFluctuationMargin(-1e9);
    valueScenesElementObjectRssDynamicsLateralFluctuationMargin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementObjectRssDynamics.lateralFluctuationMargin
      = valueScenesElementObjectRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueScenesElementObjectRssDynamicsResponseTime(0.);
    valueScenesElementObjectRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueScenesElementObjectRssDynamics.responseTime = valueScenesElementObjectRssDynamicsResponseTime;
    ::ad::physics::Speed valueScenesElementObjectRssDynamicsMaxSpeedOnAcceleration(-100.);
    valueScenesElementObjectRssDynamics.maxSpeedOnAcceleration
      = valueScenesElementObjectRssDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueScenesElementObjectRssDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueScenesElementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueScenesElementObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueScenesElementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueScenesElementObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(
      -1e2);
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
    uint32_t valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
    uint32_t valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
    uint32_t valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueScenesElementObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    valueScenesElementObjectRssDynamics.unstructuredSettings = valueScenesElementObjectRssDynamicsUnstructuredSettings;
    valueScenesElement.objectRssDynamics = valueScenesElementObjectRssDynamics;
    ::ad::rss::world::RoadArea valueScenesElementIntersectingRoad;
    ::ad::rss::world::RoadSegment valueScenesElementIntersectingRoadElement;
    ::ad::rss::world::LaneSegment valueScenesElementIntersectingRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueScenesElementIntersectingRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueScenesElementIntersectingRoadElementElement.id = valueScenesElementIntersectingRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueScenesElementIntersectingRoadElementElementType(
      ::ad::rss::world::LaneSegmentType::Normal);
    valueScenesElementIntersectingRoadElementElement.type = valueScenesElementIntersectingRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueScenesElementIntersectingRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueScenesElementIntersectingRoadElementElement.drivingDirection
      = valueScenesElementIntersectingRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementLength;
    ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMinimum(-1e9);
    valueScenesElementIntersectingRoadElementElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementIntersectingRoadElementElementLength.minimum
      = valueScenesElementIntersectingRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMaximum(-1e9);
    valueScenesElementIntersectingRoadElementElementLength.maximum
      = valueScenesElementIntersectingRoadElementElementLengthMaximum;
    valueScenesElementIntersectingRoadElementElementLength.maximum
      = valueScenesElementIntersectingRoadElementElementLength.minimum;
    valueScenesElementIntersectingRoadElementElementLength.minimum
      = valueScenesElementIntersectingRoadElementElementLength.maximum;
    valueScenesElementIntersectingRoadElementElement.length = valueScenesElementIntersectingRoadElementElementLength;
    ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementWidth;
    ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMinimum(-1e9);
    valueScenesElementIntersectingRoadElementElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementIntersectingRoadElementElementWidth.minimum
      = valueScenesElementIntersectingRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMaximum(-1e9);
    valueScenesElementIntersectingRoadElementElementWidth.maximum
      = valueScenesElementIntersectingRoadElementElementWidthMaximum;
    valueScenesElementIntersectingRoadElementElementWidth.maximum
      = valueScenesElementIntersectingRoadElementElementWidth.minimum;
    valueScenesElementIntersectingRoadElementElementWidth.minimum
      = valueScenesElementIntersectingRoadElementElementWidth.maximum;
    valueScenesElementIntersectingRoadElementElement.width = valueScenesElementIntersectingRoadElementElementWidth;
    valueScenesElementIntersectingRoadElement.resize(1, valueScenesElementIntersectingRoadElementElement);
    valueScenesElementIntersectingRoad.resize(1, valueScenesElementIntersectingRoadElement);
    valueScenesElement.intersectingRoad = valueScenesElementIntersectingRoad;
    ::ad::rss::world::RoadArea valueScenesElementEgoVehicleRoad;
    ::ad::rss::world::RoadSegment valueScenesElementEgoVehicleRoadElement;
    ::ad::rss::world::LaneSegment valueScenesElementEgoVehicleRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueScenesElementEgoVehicleRoadElementElement.id = valueScenesElementEgoVehicleRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueScenesElementEgoVehicleRoadElementElementType(
      ::ad::rss::world::LaneSegmentType::Normal);
    valueScenesElementEgoVehicleRoadElementElement.type = valueScenesElementEgoVehicleRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueScenesElementEgoVehicleRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueScenesElementEgoVehicleRoadElementElement.drivingDirection
      = valueScenesElementEgoVehicleRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementLength;
    ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMinimum(-1e9);
    valueScenesElementEgoVehicleRoadElementElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementEgoVehicleRoadElementElementLength.minimum
      = valueScenesElementEgoVehicleRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMaximum(-1e9);
    valueScenesElementEgoVehicleRoadElementElementLength.maximum
      = valueScenesElementEgoVehicleRoadElementElementLengthMaximum;
    valueScenesElementEgoVehicleRoadElementElementLength.maximum
      = valueScenesElementEgoVehicleRoadElementElementLength.minimum;
    valueScenesElementEgoVehicleRoadElementElementLength.minimum
      = valueScenesElementEgoVehicleRoadElementElementLength.maximum;
    valueScenesElementEgoVehicleRoadElementElement.length = valueScenesElementEgoVehicleRoadElementElementLength;
    ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementWidth;
    ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMinimum(-1e9);
    valueScenesElementEgoVehicleRoadElementElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueScenesElementEgoVehicleRoadElementElementWidth.minimum
      = valueScenesElementEgoVehicleRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMaximum(-1e9);
    valueScenesElementEgoVehicleRoadElementElementWidth.maximum
      = valueScenesElementEgoVehicleRoadElementElementWidthMaximum;
    valueScenesElementEgoVehicleRoadElementElementWidth.maximum
      = valueScenesElementEgoVehicleRoadElementElementWidth.minimum;
    valueScenesElementEgoVehicleRoadElementElementWidth.minimum
      = valueScenesElementEgoVehicleRoadElementElementWidth.maximum;
    valueScenesElementEgoVehicleRoadElementElement.width = valueScenesElementEgoVehicleRoadElementElementWidth;
    valueScenesElementEgoVehicleRoadElement.resize(1, valueScenesElementEgoVehicleRoadElementElement);
    valueScenesElementEgoVehicleRoad.resize(1, valueScenesElementEgoVehicleRoadElement);
    valueScenesElement.egoVehicleRoad = valueScenesElementEgoVehicleRoad;
    valueScenes.resize(1, valueScenesElement);
    value.scenes = valueScenes;
    mValue = value;
  }

  ::ad::rss::world::WorldModel mValue;
};

TEST_F(WorldModelTests, copyConstruction)
{
  ::ad::rss::world::WorldModel value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveConstruction)
{
  ::ad::rss::world::WorldModel tmpValue(mValue);
  ::ad::rss::world::WorldModel value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, copyAssignment)
{
  ::ad::rss::world::WorldModel value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveAssignment)
{
  ::ad::rss::world::WorldModel tmpValue(mValue);
  ::ad::rss::world::WorldModel value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, comparisonOperatorEqual)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(WorldModelTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(WorldModelTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorDefaultEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
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
  uint32_t defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  defaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = defaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  defaultEgoVehicleRssDynamics.unstructuredSettings = defaultEgoVehicleRssDynamicsUnstructuredSettings;
  valueA.defaultEgoVehicleRssDynamics = defaultEgoVehicleRssDynamics;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorScenesDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::SceneVector scenes;
  ::ad::rss::world::Scene scenesElement;
  ::ad::rss::situation::SituationType scenesElementSituationType(::ad::rss::situation::SituationType::Unstructured);
  scenesElement.situationType = scenesElementSituationType;
  ::ad::rss::world::Object scenesElementEgoVehicle;
  ::ad::rss::world::ObjectId scenesElementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  scenesElementEgoVehicle.objectId = scenesElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType scenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  scenesElementEgoVehicle.objectType = scenesElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector scenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion scenesElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId scenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleOccupiedRegionsElement.segmentId = scenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.lonRange = scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.latRange = scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  scenesElementEgoVehicleOccupiedRegions.resize(0 + 1, scenesElementEgoVehicleOccupiedRegionsElement);
  scenesElementEgoVehicle.occupiedRegions = scenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity scenesElementEgoVehicleVelocity;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLonMin(100.);
  scenesElementEgoVehicleVelocity.speedLonMin = scenesElementEgoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLonMax(100.);
  scenesElementEgoVehicleVelocity.speedLonMax = scenesElementEgoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLatMin(100.);
  scenesElementEgoVehicleVelocity.speedLatMin = scenesElementEgoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLatMax(100.);
  scenesElementEgoVehicleVelocity.speedLatMax = scenesElementEgoVehicleVelocitySpeedLatMax;
  scenesElementEgoVehicleVelocity.speedLatMax = scenesElementEgoVehicleVelocity.speedLatMin;
  scenesElementEgoVehicleVelocity.speedLonMax = scenesElementEgoVehicleVelocity.speedLonMin;
  scenesElementEgoVehicleVelocity.speedLatMin = scenesElementEgoVehicleVelocity.speedLatMax;
  scenesElementEgoVehicleVelocity.speedLonMin = scenesElementEgoVehicleVelocity.speedLonMax;
  scenesElementEgoVehicle.velocity = scenesElementEgoVehicleVelocity;
  ::ad::rss::world::ObjectState scenesElementEgoVehicleState;
  ::ad::physics::Angle scenesElementEgoVehicleStateYaw(6.283185308);
  scenesElementEgoVehicleState.yaw = scenesElementEgoVehicleStateYaw;
  ::ad::physics::Dimension2D scenesElementEgoVehicleStateDimension;
  ::ad::physics::Distance scenesElementEgoVehicleStateDimensionLength(1e9);
  scenesElementEgoVehicleStateDimension.length = scenesElementEgoVehicleStateDimensionLength;
  ::ad::physics::Distance scenesElementEgoVehicleStateDimensionWidth(1e9);
  scenesElementEgoVehicleStateDimension.width = scenesElementEgoVehicleStateDimensionWidth;
  scenesElementEgoVehicleState.dimension = scenesElementEgoVehicleStateDimension;
  ::ad::physics::AngularVelocity scenesElementEgoVehicleStateYawRate(100.);
  scenesElementEgoVehicleState.yawRate = scenesElementEgoVehicleStateYawRate;
  ::ad::physics::Distance2D scenesElementEgoVehicleStateCenterPoint;
  ::ad::physics::Distance scenesElementEgoVehicleStateCenterPointX(1e9);
  scenesElementEgoVehicleStateCenterPoint.x = scenesElementEgoVehicleStateCenterPointX;
  ::ad::physics::Distance scenesElementEgoVehicleStateCenterPointY(1e9);
  scenesElementEgoVehicleStateCenterPoint.y = scenesElementEgoVehicleStateCenterPointY;
  scenesElementEgoVehicleState.centerPoint = scenesElementEgoVehicleStateCenterPoint;
  ::ad::physics::Speed scenesElementEgoVehicleStateSpeed(100.);
  scenesElementEgoVehicleState.speed = scenesElementEgoVehicleStateSpeed;
  ::ad::physics::Angle scenesElementEgoVehicleStateSteeringAngle(6.283185308);
  scenesElementEgoVehicleState.steeringAngle = scenesElementEgoVehicleStateSteeringAngle;
  scenesElementEgoVehicle.state = scenesElementEgoVehicleState;
  scenesElement.egoVehicle = scenesElementEgoVehicle;
  ::ad::rss::world::RssDynamics scenesElementEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues scenesElementEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLon.accelMax = scenesElementEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax = scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin = scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect
    = scenesElementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin = scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax;
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMax = scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMin = scenesElementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  scenesElementEgoVehicleRssDynamics.alphaLon = scenesElementEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues scenesElementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLat.accelMax = scenesElementEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration scenesElementEgoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  scenesElementEgoVehicleRssDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  scenesElementEgoVehicleRssDynamicsAlphaLat.brakeMin = scenesElementEgoVehicleRssDynamicsAlphaLatBrakeMin;
  scenesElementEgoVehicleRssDynamics.alphaLat = scenesElementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance scenesElementEgoVehicleRssDynamicsLateralFluctuationMargin(1e9);
  scenesElementEgoVehicleRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  scenesElementEgoVehicleRssDynamics.lateralFluctuationMargin
    = scenesElementEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration scenesElementEgoVehicleRssDynamicsResponseTime(1e6);
  scenesElementEgoVehicleRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  scenesElementEgoVehicleRssDynamics.responseTime = scenesElementEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed scenesElementEgoVehicleRssDynamicsMaxSpeedOnAcceleration(100.);
  scenesElementEgoVehicleRssDynamics.maxSpeedOnAcceleration = scenesElementEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings scenesElementEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance scenesElementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle scenesElementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = scenesElementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  scenesElementEgoVehicleRssDynamics.unstructuredSettings = scenesElementEgoVehicleRssDynamicsUnstructuredSettings;
  scenesElement.egoVehicleRssDynamics = scenesElementEgoVehicleRssDynamics;
  ::ad::rss::world::Object scenesElementObject;
  ::ad::rss::world::ObjectId scenesElementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  scenesElementObject.objectId = scenesElementObjectObjectId;
  ::ad::rss::world::ObjectType scenesElementObjectObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  scenesElementObject.objectType = scenesElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector scenesElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion scenesElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId scenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementObjectOccupiedRegionsElement.segmentId = scenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRange.minimum;
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRange.maximum;
  scenesElementObjectOccupiedRegionsElement.lonRange = scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRange.minimum;
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRange.maximum;
  scenesElementObjectOccupiedRegionsElement.latRange = scenesElementObjectOccupiedRegionsElementLatRange;
  scenesElementObjectOccupiedRegions.resize(0 + 1, scenesElementObjectOccupiedRegionsElement);
  scenesElementObject.occupiedRegions = scenesElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity scenesElementObjectVelocity;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLonMin(100.);
  scenesElementObjectVelocity.speedLonMin = scenesElementObjectVelocitySpeedLonMin;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLonMax(100.);
  scenesElementObjectVelocity.speedLonMax = scenesElementObjectVelocitySpeedLonMax;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLatMin(100.);
  scenesElementObjectVelocity.speedLatMin = scenesElementObjectVelocitySpeedLatMin;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLatMax(100.);
  scenesElementObjectVelocity.speedLatMax = scenesElementObjectVelocitySpeedLatMax;
  scenesElementObjectVelocity.speedLatMax = scenesElementObjectVelocity.speedLatMin;
  scenesElementObjectVelocity.speedLonMax = scenesElementObjectVelocity.speedLonMin;
  scenesElementObjectVelocity.speedLatMin = scenesElementObjectVelocity.speedLatMax;
  scenesElementObjectVelocity.speedLonMin = scenesElementObjectVelocity.speedLonMax;
  scenesElementObject.velocity = scenesElementObjectVelocity;
  ::ad::rss::world::ObjectState scenesElementObjectState;
  ::ad::physics::Angle scenesElementObjectStateYaw(6.283185308);
  scenesElementObjectState.yaw = scenesElementObjectStateYaw;
  ::ad::physics::Dimension2D scenesElementObjectStateDimension;
  ::ad::physics::Distance scenesElementObjectStateDimensionLength(1e9);
  scenesElementObjectStateDimension.length = scenesElementObjectStateDimensionLength;
  ::ad::physics::Distance scenesElementObjectStateDimensionWidth(1e9);
  scenesElementObjectStateDimension.width = scenesElementObjectStateDimensionWidth;
  scenesElementObjectState.dimension = scenesElementObjectStateDimension;
  ::ad::physics::AngularVelocity scenesElementObjectStateYawRate(100.);
  scenesElementObjectState.yawRate = scenesElementObjectStateYawRate;
  ::ad::physics::Distance2D scenesElementObjectStateCenterPoint;
  ::ad::physics::Distance scenesElementObjectStateCenterPointX(1e9);
  scenesElementObjectStateCenterPoint.x = scenesElementObjectStateCenterPointX;
  ::ad::physics::Distance scenesElementObjectStateCenterPointY(1e9);
  scenesElementObjectStateCenterPoint.y = scenesElementObjectStateCenterPointY;
  scenesElementObjectState.centerPoint = scenesElementObjectStateCenterPoint;
  ::ad::physics::Speed scenesElementObjectStateSpeed(100.);
  scenesElementObjectState.speed = scenesElementObjectStateSpeed;
  ::ad::physics::Angle scenesElementObjectStateSteeringAngle(6.283185308);
  scenesElementObjectState.steeringAngle = scenesElementObjectStateSteeringAngle;
  scenesElementObject.state = scenesElementObjectState;
  scenesElement.object = scenesElementObject;
  ::ad::rss::world::RssDynamics scenesElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues scenesElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.accelMax = scenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMax;
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  scenesElementObjectRssDynamics.alphaLon = scenesElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues scenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLat.accelMax = scenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  scenesElementObjectRssDynamicsAlphaLat.brakeMin = scenesElementObjectRssDynamicsAlphaLatBrakeMin;
  scenesElementObjectRssDynamics.alphaLat = scenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance scenesElementObjectRssDynamicsLateralFluctuationMargin(1e9);
  scenesElementObjectRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  scenesElementObjectRssDynamics.lateralFluctuationMargin = scenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration scenesElementObjectRssDynamicsResponseTime(1e6);
  scenesElementObjectRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  scenesElementObjectRssDynamics.responseTime = scenesElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed scenesElementObjectRssDynamicsMaxSpeedOnAcceleration(100.);
  scenesElementObjectRssDynamics.maxSpeedOnAcceleration = scenesElementObjectRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings scenesElementObjectRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance scenesElementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  scenesElementObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = scenesElementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle scenesElementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  scenesElementObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = scenesElementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration scenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance scenesElementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration scenesElementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t scenesElementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t scenesElementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t scenesElementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t scenesElementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t scenesElementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  scenesElementObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = scenesElementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  scenesElementObjectRssDynamics.unstructuredSettings = scenesElementObjectRssDynamicsUnstructuredSettings;
  scenesElement.objectRssDynamics = scenesElementObjectRssDynamics;
  ::ad::rss::world::RoadArea scenesElementIntersectingRoad;
  ::ad::rss::world::RoadSegment scenesElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment scenesElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId scenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementIntersectingRoadElementElement.id = scenesElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType scenesElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  scenesElementIntersectingRoadElementElement.type = scenesElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection scenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  scenesElementIntersectingRoadElementElement.drivingDirection
    = scenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange scenesElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementLengthMinimum(1e9);
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementLengthMaximum(1e9);
  scenesElementIntersectingRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLengthMaximum;
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLength.minimum;
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLength.maximum;
  scenesElementIntersectingRoadElementElement.length = scenesElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange scenesElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementWidthMinimum(1e9);
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementWidthMaximum(1e9);
  scenesElementIntersectingRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidthMaximum;
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidth.minimum;
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidth.maximum;
  scenesElementIntersectingRoadElementElement.width = scenesElementIntersectingRoadElementElementWidth;
  scenesElementIntersectingRoadElement.resize(1 + 1, scenesElementIntersectingRoadElementElement);
  scenesElementIntersectingRoad.resize(0 + 1, scenesElementIntersectingRoadElement);
  scenesElement.intersectingRoad = scenesElementIntersectingRoad;
  ::ad::rss::world::RoadArea scenesElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment scenesElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment scenesElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId scenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleRoadElementElement.id = scenesElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType scenesElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  scenesElementEgoVehicleRoadElementElement.type = scenesElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection scenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  scenesElementEgoVehicleRoadElementElement.drivingDirection
    = scenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange scenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMinimum(1e9);
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMaximum(1e9);
  scenesElementEgoVehicleRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLengthMaximum;
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLength.minimum;
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLength.maximum;
  scenesElementEgoVehicleRoadElementElement.length = scenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange scenesElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMinimum(1e9);
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMaximum(1e9);
  scenesElementEgoVehicleRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidthMaximum;
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidth.minimum;
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidth.maximum;
  scenesElementEgoVehicleRoadElementElement.width = scenesElementEgoVehicleRoadElementElementWidth;
  scenesElementEgoVehicleRoadElement.resize(1 + 1, scenesElementEgoVehicleRoadElementElement);
  scenesElementEgoVehicleRoad.resize(0 + 1, scenesElementEgoVehicleRoadElement);
  scenesElement.egoVehicleRoad = scenesElementEgoVehicleRoad;
  scenes.resize(0 + 1, scenesElement);
  valueA.scenes = scenes;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
