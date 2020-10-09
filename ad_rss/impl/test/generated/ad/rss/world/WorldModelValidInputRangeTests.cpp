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

#include "ad/rss/world/WorldModelValidInputRange.hpp"

TEST(WorldModelValidInputRangeTests, testValidInputRange)
{
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
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
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
  ::ad::physics::AngularAcceleration valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooSmall)
{
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
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
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
  ::ad::physics::AngularAcceleration valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooBig)
{
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
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
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
  ::ad::physics::AngularAcceleration valueScenesElementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
