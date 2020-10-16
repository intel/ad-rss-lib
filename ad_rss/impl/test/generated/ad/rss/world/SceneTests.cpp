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
#include "ad/rss/world/Scene.hpp"

class SceneTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Scene value;
    ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad::rss::world::Object valueEgoVehicle;
    ::ad::rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueEgoVehicle.objectId = valueEgoVehicleObjectId;
    ::ad::rss::world::ObjectType valueEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
    valueEgoVehicle.objectType = valueEgoVehicleObjectType;
    ::ad::rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueEgoVehicleOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueEgoVehicleOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgoVehicleOccupiedRegionsElement.segmentId = valueEgoVehicleOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
    valueEgoVehicleOccupiedRegionsElementLonRange.minimum = valueEgoVehicleOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
    valueEgoVehicleOccupiedRegionsElementLonRange.maximum = valueEgoVehicleOccupiedRegionsElementLonRangeMaximum;
    valueEgoVehicleOccupiedRegionsElementLonRange.maximum = valueEgoVehicleOccupiedRegionsElementLonRange.minimum;
    valueEgoVehicleOccupiedRegionsElementLonRange.minimum = valueEgoVehicleOccupiedRegionsElementLonRange.maximum;
    valueEgoVehicleOccupiedRegionsElement.lonRange = valueEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueEgoVehicleOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
    valueEgoVehicleOccupiedRegionsElementLatRange.minimum = valueEgoVehicleOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
    valueEgoVehicleOccupiedRegionsElementLatRange.maximum = valueEgoVehicleOccupiedRegionsElementLatRangeMaximum;
    valueEgoVehicleOccupiedRegionsElementLatRange.maximum = valueEgoVehicleOccupiedRegionsElementLatRange.minimum;
    valueEgoVehicleOccupiedRegionsElementLatRange.minimum = valueEgoVehicleOccupiedRegionsElementLatRange.maximum;
    valueEgoVehicleOccupiedRegionsElement.latRange = valueEgoVehicleOccupiedRegionsElementLatRange;
    valueEgoVehicleOccupiedRegions.resize(1, valueEgoVehicleOccupiedRegionsElement);
    valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
    ::ad::rss::world::Velocity valueEgoVehicleVelocity;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLonMin(-100.);
    valueEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLonMin = valueEgoVehicleVelocitySpeedLonMin;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLonMax(-100.);
    valueEgoVehicleVelocity.speedLonMax = valueEgoVehicleVelocitySpeedLonMax;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLatMin(-100.);
    valueEgoVehicleVelocity.speedLatMin = valueEgoVehicleVelocitySpeedLatMin;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLatMax(-100.);
    valueEgoVehicleVelocity.speedLatMax = valueEgoVehicleVelocitySpeedLatMax;
    valueEgoVehicleVelocity.speedLonMax = valueEgoVehicleVelocity.speedLonMin;
    valueEgoVehicleVelocity.speedLatMax = valueEgoVehicleVelocity.speedLatMin;
    valueEgoVehicleVelocity.speedLonMin = valueEgoVehicleVelocity.speedLonMax;
    valueEgoVehicleVelocity.speedLatMin = valueEgoVehicleVelocity.speedLatMax;
    valueEgoVehicle.velocity = valueEgoVehicleVelocity;
    ::ad::rss::world::ObjectState valueEgoVehicleState;
    ::ad::physics::Angle valueEgoVehicleStateYaw(-6.283185308);
    valueEgoVehicleState.yaw = valueEgoVehicleStateYaw;
    ::ad::physics::Dimension2D valueEgoVehicleStateDimension;
    ::ad::physics::Distance valueEgoVehicleStateDimensionLength(-1e9);
    valueEgoVehicleStateDimension.length = valueEgoVehicleStateDimensionLength;
    ::ad::physics::Distance valueEgoVehicleStateDimensionWidth(-1e9);
    valueEgoVehicleStateDimension.width = valueEgoVehicleStateDimensionWidth;
    valueEgoVehicleState.dimension = valueEgoVehicleStateDimension;
    ::ad::physics::AngularVelocity valueEgoVehicleStateYawRate(-100.);
    valueEgoVehicleState.yawRate = valueEgoVehicleStateYawRate;
    ::ad::physics::Distance2D valueEgoVehicleStateCenterPoint;
    ::ad::physics::Distance valueEgoVehicleStateCenterPointX(-1e9);
    valueEgoVehicleStateCenterPoint.x = valueEgoVehicleStateCenterPointX;
    ::ad::physics::Distance valueEgoVehicleStateCenterPointY(-1e9);
    valueEgoVehicleStateCenterPoint.y = valueEgoVehicleStateCenterPointY;
    valueEgoVehicleState.centerPoint = valueEgoVehicleStateCenterPoint;
    ::ad::physics::Speed valueEgoVehicleStateSpeed(-100.);
    valueEgoVehicleState.speed = valueEgoVehicleStateSpeed;
    ::ad::physics::Angle valueEgoVehicleStateSteeringAngle(-6.283185308);
    valueEgoVehicleState.steeringAngle = valueEgoVehicleStateSteeringAngle;
    valueEgoVehicle.state = valueEgoVehicleState;
    value.egoVehicle = valueEgoVehicle;
    ::ad::rss::world::RssDynamics valueEgoVehicleRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
    valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
    valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
    valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
    valueEgoVehicleRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
    ::ad::physics::Speed valueEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
    valueEgoVehicleRssDynamics.maxSpeedOnAcceleration = valueEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueEgoVehicleRssDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
    uint32_t valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueEgoVehicleRssDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
      = valueEgoVehicleRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
    valueEgoVehicleRssDynamics.unstructuredSettings = valueEgoVehicleRssDynamicsUnstructuredSettings;
    value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
    ::ad::rss::world::Object valueObject;
    ::ad::rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueObject.objectId = valueObjectObjectId;
    ::ad::rss::world::ObjectType valueObjectObjectType(::ad::rss::world::ObjectType::Invalid);
    valueObject.objectType = valueObjectObjectType;
    ::ad::rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueObjectOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueObjectOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueObjectOccupiedRegionsElement.segmentId = valueObjectOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLonRangeMinimum(0.);
    valueObjectOccupiedRegionsElementLonRange.minimum = valueObjectOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLonRangeMaximum(0.);
    valueObjectOccupiedRegionsElementLonRange.maximum = valueObjectOccupiedRegionsElementLonRangeMaximum;
    valueObjectOccupiedRegionsElementLonRange.maximum = valueObjectOccupiedRegionsElementLonRange.minimum;
    valueObjectOccupiedRegionsElementLonRange.minimum = valueObjectOccupiedRegionsElementLonRange.maximum;
    valueObjectOccupiedRegionsElement.lonRange = valueObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueObjectOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLatRangeMinimum(0.);
    valueObjectOccupiedRegionsElementLatRange.minimum = valueObjectOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLatRangeMaximum(0.);
    valueObjectOccupiedRegionsElementLatRange.maximum = valueObjectOccupiedRegionsElementLatRangeMaximum;
    valueObjectOccupiedRegionsElementLatRange.maximum = valueObjectOccupiedRegionsElementLatRange.minimum;
    valueObjectOccupiedRegionsElementLatRange.minimum = valueObjectOccupiedRegionsElementLatRange.maximum;
    valueObjectOccupiedRegionsElement.latRange = valueObjectOccupiedRegionsElementLatRange;
    valueObjectOccupiedRegions.resize(1, valueObjectOccupiedRegionsElement);
    valueObject.occupiedRegions = valueObjectOccupiedRegions;
    ::ad::rss::world::Velocity valueObjectVelocity;
    ::ad::physics::Speed valueObjectVelocitySpeedLonMin(-100.);
    valueObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueObjectVelocity.speedLonMin = valueObjectVelocitySpeedLonMin;
    ::ad::physics::Speed valueObjectVelocitySpeedLonMax(-100.);
    valueObjectVelocity.speedLonMax = valueObjectVelocitySpeedLonMax;
    ::ad::physics::Speed valueObjectVelocitySpeedLatMin(-100.);
    valueObjectVelocity.speedLatMin = valueObjectVelocitySpeedLatMin;
    ::ad::physics::Speed valueObjectVelocitySpeedLatMax(-100.);
    valueObjectVelocity.speedLatMax = valueObjectVelocitySpeedLatMax;
    valueObjectVelocity.speedLonMax = valueObjectVelocity.speedLonMin;
    valueObjectVelocity.speedLatMax = valueObjectVelocity.speedLatMin;
    valueObjectVelocity.speedLonMin = valueObjectVelocity.speedLonMax;
    valueObjectVelocity.speedLatMin = valueObjectVelocity.speedLatMax;
    valueObject.velocity = valueObjectVelocity;
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
    valueObject.state = valueObjectState;
    value.object = valueObject;
    ::ad::rss::world::RssDynamics valueObjectRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
    valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
    ::ad::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(-1e9);
    valueObjectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
    valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueObjectRssDynamicsResponseTime(0.);
    valueObjectRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
    ::ad::physics::Speed valueObjectRssDynamicsMaxSpeedOnAcceleration(-100.);
    valueObjectRssDynamics.maxSpeedOnAcceleration = valueObjectRssDynamicsMaxSpeedOnAcceleration;
    ::ad::rss::world::UnstructuredSettings valueObjectRssDynamicsUnstructuredSettings;
    ::ad::physics::Distance valueObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
    valueObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
    ::ad::physics::Angle valueObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
    valueObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
      = valueObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
    ::ad::physics::AngularAcceleration valueObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
    valueObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
      = valueObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
    ::ad::physics::Distance valueObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
    valueObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
      = valueObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
    ::ad::physics::Duration valueObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
    valueObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
      = valueObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
      = valueObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
      = valueObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
    uint32_t valueObjectRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
      std::numeric_limits<uint32_t>::min()};
    valueObjectRssDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
      = valueObjectRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
    valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
    value.objectRssDynamics = valueObjectRssDynamics;
    ::ad::rss::world::RoadArea valueIntersectingRoad;
    ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
    ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(
      ::ad::rss::world::LaneSegmentType::Normal);
    valueIntersectingRoadElementElement.type = valueIntersectingRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueIntersectingRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueIntersectingRoadElementElement.drivingDirection = valueIntersectingRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueIntersectingRoadElementElementLength;
    ::ad::physics::Distance valueIntersectingRoadElementElementLengthMinimum(-1e9);
    valueIntersectingRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueIntersectingRoadElementElementLength.minimum = valueIntersectingRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueIntersectingRoadElementElementLengthMaximum(-1e9);
    valueIntersectingRoadElementElementLength.maximum = valueIntersectingRoadElementElementLengthMaximum;
    valueIntersectingRoadElementElementLength.maximum = valueIntersectingRoadElementElementLength.minimum;
    valueIntersectingRoadElementElementLength.minimum = valueIntersectingRoadElementElementLength.maximum;
    valueIntersectingRoadElementElement.length = valueIntersectingRoadElementElementLength;
    ::ad::physics::MetricRange valueIntersectingRoadElementElementWidth;
    ::ad::physics::Distance valueIntersectingRoadElementElementWidthMinimum(-1e9);
    valueIntersectingRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueIntersectingRoadElementElementWidth.minimum = valueIntersectingRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueIntersectingRoadElementElementWidthMaximum(-1e9);
    valueIntersectingRoadElementElementWidth.maximum = valueIntersectingRoadElementElementWidthMaximum;
    valueIntersectingRoadElementElementWidth.maximum = valueIntersectingRoadElementElementWidth.minimum;
    valueIntersectingRoadElementElementWidth.minimum = valueIntersectingRoadElementElementWidth.maximum;
    valueIntersectingRoadElementElement.width = valueIntersectingRoadElementElementWidth;
    valueIntersectingRoadElement.resize(1, valueIntersectingRoadElementElement);
    valueIntersectingRoad.resize(1, valueIntersectingRoadElement);
    value.intersectingRoad = valueIntersectingRoad;
    ::ad::rss::world::RoadArea valueEgoVehicleRoad;
    ::ad::rss::world::RoadSegment valueEgoVehicleRoadElement;
    ::ad::rss::world::LaneSegment valueEgoVehicleRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueEgoVehicleRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgoVehicleRoadElementElement.id = valueEgoVehicleRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
    valueEgoVehicleRoadElementElement.type = valueEgoVehicleRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueEgoVehicleRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueEgoVehicleRoadElementElement.drivingDirection = valueEgoVehicleRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueEgoVehicleRoadElementElementLength;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementLengthMinimum(-1e9);
    valueEgoVehicleRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgoVehicleRoadElementElementLength.minimum = valueEgoVehicleRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementLengthMaximum(-1e9);
    valueEgoVehicleRoadElementElementLength.maximum = valueEgoVehicleRoadElementElementLengthMaximum;
    valueEgoVehicleRoadElementElementLength.maximum = valueEgoVehicleRoadElementElementLength.minimum;
    valueEgoVehicleRoadElementElementLength.minimum = valueEgoVehicleRoadElementElementLength.maximum;
    valueEgoVehicleRoadElementElement.length = valueEgoVehicleRoadElementElementLength;
    ::ad::physics::MetricRange valueEgoVehicleRoadElementElementWidth;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementWidthMinimum(-1e9);
    valueEgoVehicleRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgoVehicleRoadElementElementWidth.minimum = valueEgoVehicleRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementWidthMaximum(-1e9);
    valueEgoVehicleRoadElementElementWidth.maximum = valueEgoVehicleRoadElementElementWidthMaximum;
    valueEgoVehicleRoadElementElementWidth.maximum = valueEgoVehicleRoadElementElementWidth.minimum;
    valueEgoVehicleRoadElementElementWidth.minimum = valueEgoVehicleRoadElementElementWidth.maximum;
    valueEgoVehicleRoadElementElement.width = valueEgoVehicleRoadElementElementWidth;
    valueEgoVehicleRoadElement.resize(1, valueEgoVehicleRoadElementElement);
    valueEgoVehicleRoad.resize(1, valueEgoVehicleRoadElement);
    value.egoVehicleRoad = valueEgoVehicleRoad;
    mValue = value;
  }

  ::ad::rss::world::Scene mValue;
};

TEST_F(SceneTests, copyConstruction)
{
  ::ad::rss::world::Scene value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveConstruction)
{
  ::ad::rss::world::Scene tmpValue(mValue);
  ::ad::rss::world::Scene value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, copyAssignment)
{
  ::ad::rss::world::Scene value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveAssignment)
{
  ::ad::rss::world::Scene tmpValue(mValue);
  ::ad::rss::world::Scene value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SceneTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(SceneTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::situation::SituationType situationType(::ad::rss::situation::SituationType::Unstructured);
  valueA.situationType = situationType;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Object egoVehicle;
  ::ad::rss::world::ObjectId egoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  egoVehicle.objectId = egoVehicleObjectId;
  ::ad::rss::world::ObjectType egoVehicleObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  egoVehicle.objectType = egoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector egoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion egoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId egoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  egoVehicleOccupiedRegionsElement.segmentId = egoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange egoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRangeMaximum;
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRange.minimum;
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRange.maximum;
  egoVehicleOccupiedRegionsElement.lonRange = egoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange egoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRangeMaximum;
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRange.minimum;
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRange.maximum;
  egoVehicleOccupiedRegionsElement.latRange = egoVehicleOccupiedRegionsElementLatRange;
  egoVehicleOccupiedRegions.resize(0 + 1, egoVehicleOccupiedRegionsElement);
  egoVehicle.occupiedRegions = egoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity egoVehicleVelocity;
  ::ad::physics::Speed egoVehicleVelocitySpeedLonMin(100.);
  egoVehicleVelocity.speedLonMin = egoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed egoVehicleVelocitySpeedLonMax(100.);
  egoVehicleVelocity.speedLonMax = egoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed egoVehicleVelocitySpeedLatMin(100.);
  egoVehicleVelocity.speedLatMin = egoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed egoVehicleVelocitySpeedLatMax(100.);
  egoVehicleVelocity.speedLatMax = egoVehicleVelocitySpeedLatMax;
  egoVehicleVelocity.speedLatMax = egoVehicleVelocity.speedLatMin;
  egoVehicleVelocity.speedLonMax = egoVehicleVelocity.speedLonMin;
  egoVehicleVelocity.speedLatMin = egoVehicleVelocity.speedLatMax;
  egoVehicleVelocity.speedLonMin = egoVehicleVelocity.speedLonMax;
  egoVehicle.velocity = egoVehicleVelocity;
  ::ad::rss::world::ObjectState egoVehicleState;
  ::ad::physics::Angle egoVehicleStateYaw(6.283185308);
  egoVehicleState.yaw = egoVehicleStateYaw;
  ::ad::physics::Dimension2D egoVehicleStateDimension;
  ::ad::physics::Distance egoVehicleStateDimensionLength(1e9);
  egoVehicleStateDimension.length = egoVehicleStateDimensionLength;
  ::ad::physics::Distance egoVehicleStateDimensionWidth(1e9);
  egoVehicleStateDimension.width = egoVehicleStateDimensionWidth;
  egoVehicleState.dimension = egoVehicleStateDimension;
  ::ad::physics::AngularVelocity egoVehicleStateYawRate(100.);
  egoVehicleState.yawRate = egoVehicleStateYawRate;
  ::ad::physics::Distance2D egoVehicleStateCenterPoint;
  ::ad::physics::Distance egoVehicleStateCenterPointX(1e9);
  egoVehicleStateCenterPoint.x = egoVehicleStateCenterPointX;
  ::ad::physics::Distance egoVehicleStateCenterPointY(1e9);
  egoVehicleStateCenterPoint.y = egoVehicleStateCenterPointY;
  egoVehicleState.centerPoint = egoVehicleStateCenterPoint;
  ::ad::physics::Speed egoVehicleStateSpeed(100.);
  egoVehicleState.speed = egoVehicleStateSpeed;
  ::ad::physics::Angle egoVehicleStateSteeringAngle(6.283185308);
  egoVehicleState.steeringAngle = egoVehicleStateSteeringAngle;
  egoVehicle.state = egoVehicleState;
  valueA.egoVehicle = egoVehicle;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RssDynamics egoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues egoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLon.accelMax = egoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleRssDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMax;
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleRssDynamics.alphaLon = egoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues egoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLat.accelMax = egoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  egoVehicleRssDynamicsAlphaLat.brakeMin = egoVehicleRssDynamicsAlphaLatBrakeMin;
  egoVehicleRssDynamics.alphaLat = egoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance egoVehicleRssDynamicsLateralFluctuationMargin(1e9);
  egoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  egoVehicleRssDynamics.lateralFluctuationMargin = egoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration egoVehicleRssDynamicsResponseTime(1e6);
  egoVehicleRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  egoVehicleRssDynamics.responseTime = egoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed egoVehicleRssDynamicsMaxSpeedOnAcceleration(100.);
  egoVehicleRssDynamics.maxSpeedOnAcceleration = egoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings egoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance egoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle egoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  egoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = egoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration egoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  egoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance egoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  egoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration egoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  egoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t egoVehicleRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  egoVehicleRssDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = egoVehicleRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  egoVehicleRssDynamics.unstructuredSettings = egoVehicleRssDynamicsUnstructuredSettings;
  valueA.egoVehicleRssDynamics = egoVehicleRssDynamics;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Object object;
  ::ad::rss::world::ObjectId objectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  object.objectId = objectObjectId;
  ::ad::rss::world::ObjectType objectObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  object.objectType = objectObjectType;
  ::ad::rss::world::OccupiedRegionVector objectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion objectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId objectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  objectOccupiedRegionsElement.segmentId = objectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange objectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLonRangeMinimum(1.);
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLonRangeMaximum(1.);
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRangeMaximum;
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRange.minimum;
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRange.maximum;
  objectOccupiedRegionsElement.lonRange = objectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange objectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLatRangeMinimum(1.);
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLatRangeMaximum(1.);
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRangeMaximum;
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRange.minimum;
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRange.maximum;
  objectOccupiedRegionsElement.latRange = objectOccupiedRegionsElementLatRange;
  objectOccupiedRegions.resize(0 + 1, objectOccupiedRegionsElement);
  object.occupiedRegions = objectOccupiedRegions;
  ::ad::rss::world::Velocity objectVelocity;
  ::ad::physics::Speed objectVelocitySpeedLonMin(100.);
  objectVelocity.speedLonMin = objectVelocitySpeedLonMin;
  ::ad::physics::Speed objectVelocitySpeedLonMax(100.);
  objectVelocity.speedLonMax = objectVelocitySpeedLonMax;
  ::ad::physics::Speed objectVelocitySpeedLatMin(100.);
  objectVelocity.speedLatMin = objectVelocitySpeedLatMin;
  ::ad::physics::Speed objectVelocitySpeedLatMax(100.);
  objectVelocity.speedLatMax = objectVelocitySpeedLatMax;
  objectVelocity.speedLatMax = objectVelocity.speedLatMin;
  objectVelocity.speedLonMax = objectVelocity.speedLonMin;
  objectVelocity.speedLatMin = objectVelocity.speedLatMax;
  objectVelocity.speedLonMin = objectVelocity.speedLonMax;
  object.velocity = objectVelocity;
  ::ad::rss::world::ObjectState objectState;
  ::ad::physics::Angle objectStateYaw(6.283185308);
  objectState.yaw = objectStateYaw;
  ::ad::physics::Dimension2D objectStateDimension;
  ::ad::physics::Distance objectStateDimensionLength(1e9);
  objectStateDimension.length = objectStateDimensionLength;
  ::ad::physics::Distance objectStateDimensionWidth(1e9);
  objectStateDimension.width = objectStateDimensionWidth;
  objectState.dimension = objectStateDimension;
  ::ad::physics::AngularVelocity objectStateYawRate(100.);
  objectState.yawRate = objectStateYawRate;
  ::ad::physics::Distance2D objectStateCenterPoint;
  ::ad::physics::Distance objectStateCenterPointX(1e9);
  objectStateCenterPoint.x = objectStateCenterPointX;
  ::ad::physics::Distance objectStateCenterPointY(1e9);
  objectStateCenterPoint.y = objectStateCenterPointY;
  objectState.centerPoint = objectStateCenterPoint;
  ::ad::physics::Speed objectStateSpeed(100.);
  objectState.speed = objectStateSpeed;
  ::ad::physics::Angle objectStateSteeringAngle(6.283185308);
  objectState.steeringAngle = objectStateSteeringAngle;
  object.state = objectState;
  valueA.object = object;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectRssDynamicsDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RssDynamics objectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues objectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonAccelMax(1e2);
  objectRssDynamicsAlphaLon.accelMax = objectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMax(1e2);
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMin(1e2);
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  objectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLonBrakeMinCorrect;
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMax;
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMinCorrect;
  objectRssDynamics.alphaLon = objectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues objectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLatAccelMax(1e2);
  objectRssDynamicsAlphaLat.accelMax = objectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLatBrakeMin(1e2);
  objectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  objectRssDynamicsAlphaLat.brakeMin = objectRssDynamicsAlphaLatBrakeMin;
  objectRssDynamics.alphaLat = objectRssDynamicsAlphaLat;
  ::ad::physics::Distance objectRssDynamicsLateralFluctuationMargin(1e9);
  objectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  objectRssDynamics.lateralFluctuationMargin = objectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration objectRssDynamicsResponseTime(1e6);
  objectRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  objectRssDynamics.responseTime = objectRssDynamicsResponseTime;
  ::ad::physics::Speed objectRssDynamicsMaxSpeedOnAcceleration(100.);
  objectRssDynamics.maxSpeedOnAcceleration = objectRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings objectRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance objectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(1e9);
  objectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = objectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle objectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(6.283185308);
  objectRssDynamicsUnstructuredSettings.driveAwayMaxAngle = objectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration objectRssDynamicsUnstructuredSettingsVehicleYawRateChange(1e2);
  objectRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = objectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance objectRssDynamicsUnstructuredSettingsVehicleMinRadius(1e9);
  objectRssDynamicsUnstructuredSettings.vehicleMinRadius = objectRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration objectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(1e6);
  objectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = objectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t objectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = objectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = objectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateYawRateChangeRatioSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateHeadingChangeRatioSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps
    = objectRssDynamicsUnstructuredSettingsPedestrianContinueForwardIntermediateAccelerationSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps
    = objectRssDynamicsUnstructuredSettingsPedestrianBrakeIntermediateAccelerationSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsPedestrianFrontIntermediateHeadingChangeRatioSteps;
  uint32_t objectRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps{
    std::numeric_limits<uint32_t>::max()};
  objectRssDynamicsUnstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps
    = objectRssDynamicsUnstructuredSettingsPedestrianBackIntermediateHeadingChangeRatioSteps;
  objectRssDynamics.unstructuredSettings = objectRssDynamicsUnstructuredSettings;
  valueA.objectRssDynamics = objectRssDynamics;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorIntersectingRoadDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RoadArea intersectingRoad;
  ::ad::rss::world::RoadSegment intersectingRoadElement;
  ::ad::rss::world::LaneSegment intersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId intersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  intersectingRoadElementElement.id = intersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType intersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Intersection);
  intersectingRoadElementElement.type = intersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection intersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  intersectingRoadElementElement.drivingDirection = intersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange intersectingRoadElementElementLength;
  ::ad::physics::Distance intersectingRoadElementElementLengthMinimum(1e9);
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance intersectingRoadElementElementLengthMaximum(1e9);
  intersectingRoadElementElementLengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLengthMaximum;
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLength.minimum;
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLength.maximum;
  intersectingRoadElementElement.length = intersectingRoadElementElementLength;
  ::ad::physics::MetricRange intersectingRoadElementElementWidth;
  ::ad::physics::Distance intersectingRoadElementElementWidthMinimum(1e9);
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance intersectingRoadElementElementWidthMaximum(1e9);
  intersectingRoadElementElementWidthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidthMaximum;
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidth.minimum;
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidth.maximum;
  intersectingRoadElementElement.width = intersectingRoadElementElementWidth;
  intersectingRoadElement.resize(1 + 1, intersectingRoadElementElement);
  intersectingRoad.resize(0 + 1, intersectingRoadElement);
  valueA.intersectingRoad = intersectingRoad;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleRoadDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RoadArea egoVehicleRoad;
  ::ad::rss::world::RoadSegment egoVehicleRoadElement;
  ::ad::rss::world::LaneSegment egoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId egoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  egoVehicleRoadElementElement.id = egoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType egoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Intersection);
  egoVehicleRoadElementElement.type = egoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection egoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  egoVehicleRoadElementElement.drivingDirection = egoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange egoVehicleRoadElementElementLength;
  ::ad::physics::Distance egoVehicleRoadElementElementLengthMinimum(1e9);
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance egoVehicleRoadElementElementLengthMaximum(1e9);
  egoVehicleRoadElementElementLengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLengthMaximum;
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLength.minimum;
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLength.maximum;
  egoVehicleRoadElementElement.length = egoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange egoVehicleRoadElementElementWidth;
  ::ad::physics::Distance egoVehicleRoadElementElementWidthMinimum(1e9);
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance egoVehicleRoadElementElementWidthMaximum(1e9);
  egoVehicleRoadElementElementWidthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidthMaximum;
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidth.minimum;
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidth.maximum;
  egoVehicleRoadElementElement.width = egoVehicleRoadElementElementWidth;
  egoVehicleRoadElement.resize(1 + 1, egoVehicleRoadElementElement);
  egoVehicleRoad.resize(0 + 1, egoVehicleRoadElement);
  valueA.egoVehicleRoad = egoVehicleRoad;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
