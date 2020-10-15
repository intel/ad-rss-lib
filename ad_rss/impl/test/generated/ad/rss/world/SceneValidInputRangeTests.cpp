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

#include "ad/rss/world/SceneValidInputRange.hpp"

TEST(SceneValidInputRangeTests, testValidInputRange)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooSmall)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooBig)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooSmall)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooBig)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooSmall)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooBig)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooSmall)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooBig)
{
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
  valueEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
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
  valueObjectRssDynamics.unstructuredSettings = valueObjectRssDynamicsUnstructuredSettings;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad::rss::world::RoadArea valueIntersectingRoad;
  ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
