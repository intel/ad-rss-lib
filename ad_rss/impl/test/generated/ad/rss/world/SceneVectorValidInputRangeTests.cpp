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

#include "ad/rss/world/SceneVectorValidInputRange.hpp"

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::SceneVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::world::Object elementEgoVehicle;
  ::ad::rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType elementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleOccupiedRegionsElement.segmentId = elementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.lonRange = elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.latRange = elementEgoVehicleOccupiedRegionsElementLatRange;
  elementEgoVehicleOccupiedRegions.resize(1, elementEgoVehicleOccupiedRegionsElement);
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity elementEgoVehicleVelocity;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMin(-100.);
  elementEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMax(-100.);
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMin(-100.);
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMax(-100.);
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocitySpeedLatMax;
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocity.speedLonMin;
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocity.speedLatMin;
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocity.speedLonMax;
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocity.speedLatMax;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  ::ad::rss::world::ObjectState elementEgoVehicleState;
  ::ad::physics::Angle elementEgoVehicleStateYaw(-6.283185308);
  elementEgoVehicleState.yaw = elementEgoVehicleStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateDimensionLength(-1e9);
  elementEgoVehicleStateDimension.length = elementEgoVehicleStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateDimensionWidth(-1e9);
  elementEgoVehicleStateDimension.width = elementEgoVehicleStateDimensionWidth;
  elementEgoVehicleState.dimension = elementEgoVehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateYawRate(-100.);
  elementEgoVehicleState.yawRate = elementEgoVehicleStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointX(-1e9);
  elementEgoVehicleStateCenterPoint.x = elementEgoVehicleStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointY(-1e9);
  elementEgoVehicleStateCenterPoint.y = elementEgoVehicleStateCenterPointY;
  elementEgoVehicleState.centerPoint = elementEgoVehicleStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateSpeed(-100.);
  elementEgoVehicleState.speed = elementEgoVehicleStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateSteeringAngle(-6.283185308);
  elementEgoVehicleState.steeringAngle = elementEgoVehicleStateSteeringAngle;
  elementEgoVehicle.state = elementEgoVehicleState;
  element.egoVehicle = elementEgoVehicle;
  ::ad::rss::world::RssDynamics elementEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLon.accelMax = elementEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMax;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamics.alphaLon = elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLat.accelMax = elementEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLat.brakeMin = elementEgoVehicleRssDynamicsAlphaLatBrakeMin;
  elementEgoVehicleRssDynamics.alphaLat = elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementEgoVehicleRssDynamics.lateralFluctuationMargin = elementEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsResponseTime(0.);
  elementEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleRssDynamics.responseTime = elementEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleRssDynamics.maxSpeedOnAcceleration = elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleRssDynamics.unstructuredSettings = elementEgoVehicleRssDynamicsUnstructuredSettings;
  element.egoVehicleRssDynamics = elementEgoVehicleRssDynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad::rss::world::ObjectType elementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupiedRegionsElement.segmentId = elementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRangeMaximum;
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRange.minimum;
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRange.maximum;
  elementObjectOccupiedRegionsElement.lonRange = elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRangeMaximum;
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRange.minimum;
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRange.maximum;
  elementObjectOccupiedRegionsElement.latRange = elementObjectOccupiedRegionsElementLatRange;
  elementObjectOccupiedRegions.resize(1, elementObjectOccupiedRegionsElement);
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMin(-100.);
  elementObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLonMin = elementObjectVelocitySpeedLonMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMax(-100.);
  elementObjectVelocity.speedLonMax = elementObjectVelocitySpeedLonMax;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMin(-100.);
  elementObjectVelocity.speedLatMin = elementObjectVelocitySpeedLatMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMax(-100.);
  elementObjectVelocity.speedLatMax = elementObjectVelocitySpeedLatMax;
  elementObjectVelocity.speedLonMax = elementObjectVelocity.speedLonMin;
  elementObjectVelocity.speedLatMax = elementObjectVelocity.speedLatMin;
  elementObjectVelocity.speedLonMin = elementObjectVelocity.speedLonMax;
  elementObjectVelocity.speedLatMin = elementObjectVelocity.speedLatMax;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYawRate(-100.);
  elementObjectState.yawRate = elementObjectStateYawRate;
  ::ad::physics::Distance2D elementObjectStateCenterPoint;
  ::ad::physics::Distance elementObjectStateCenterPointX(-1e9);
  elementObjectStateCenterPoint.x = elementObjectStateCenterPointX;
  ::ad::physics::Distance elementObjectStateCenterPointY(-1e9);
  elementObjectStateCenterPoint.y = elementObjectStateCenterPointY;
  elementObjectState.centerPoint = elementObjectStateCenterPoint;
  ::ad::physics::Speed elementObjectStateSpeed(-100.);
  elementObjectState.speed = elementObjectStateSpeed;
  ::ad::physics::Angle elementObjectStateSteeringAngle(-6.283185308);
  elementObjectState.steeringAngle = elementObjectStateSteeringAngle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(-1e9);
  elementObjectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed elementObjectRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementObjectRssDynamics.maxSpeedOnAcceleration = elementObjectRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementObjectRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementObjectRssDynamics.unstructuredSettings = elementObjectRssDynamicsUnstructuredSettings;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad::rss::world::RoadArea elementIntersectingRoad;
  ::ad::rss::world::RoadSegment elementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment elementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersectingRoadElementElement.id = elementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  elementIntersectingRoadElementElement.type = elementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersectingRoadElementElement.drivingDirection = elementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementLength;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMinimum(-1e9);
  elementIntersectingRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMaximum(-1e9);
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLengthMaximum;
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLength.minimum;
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLength.maximum;
  elementIntersectingRoadElementElement.length = elementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMinimum(-1e9);
  elementIntersectingRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMaximum(-1e9);
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidthMaximum;
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidth.minimum;
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidth.maximum;
  elementIntersectingRoadElementElement.width = elementIntersectingRoadElementElementWidth;
  elementIntersectingRoadElement.resize(1, elementIntersectingRoadElementElement);
  elementIntersectingRoad.resize(1, elementIntersectingRoadElement);
  element.intersectingRoad = elementIntersectingRoad;
  ::ad::rss::world::RoadArea elementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment elementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment elementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleRoadElementElement.id = elementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementEgoVehicleRoadElementElement.type = elementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgoVehicleRoadElementElement.drivingDirection = elementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMinimum(-1e9);
  elementEgoVehicleRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMaximum(-1e9);
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLengthMaximum;
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLength.minimum;
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLength.maximum;
  elementEgoVehicleRoadElementElement.length = elementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMinimum(-1e9);
  elementEgoVehicleRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMaximum(-1e9);
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidthMaximum;
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidth.minimum;
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidth.maximum;
  elementEgoVehicleRoadElementElement.width = elementEgoVehicleRoadElementElementWidth;
  elementEgoVehicleRoadElement.resize(1, elementEgoVehicleRoadElementElement);
  elementEgoVehicleRoad.resize(1, elementEgoVehicleRoadElement);
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::world::Object elementEgoVehicle;
  ::ad::rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType elementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleOccupiedRegionsElement.segmentId = elementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.lonRange = elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.latRange = elementEgoVehicleOccupiedRegionsElementLatRange;
  elementEgoVehicleOccupiedRegions.resize(1, elementEgoVehicleOccupiedRegionsElement);
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity elementEgoVehicleVelocity;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMin(-100.);
  elementEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMax(-100.);
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMin(-100.);
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMax(-100.);
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocitySpeedLatMax;
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocity.speedLonMin;
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocity.speedLatMin;
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocity.speedLonMax;
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocity.speedLatMax;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  ::ad::rss::world::ObjectState elementEgoVehicleState;
  ::ad::physics::Angle elementEgoVehicleStateYaw(-6.283185308);
  elementEgoVehicleState.yaw = elementEgoVehicleStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateDimensionLength(-1e9);
  elementEgoVehicleStateDimension.length = elementEgoVehicleStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateDimensionWidth(-1e9);
  elementEgoVehicleStateDimension.width = elementEgoVehicleStateDimensionWidth;
  elementEgoVehicleState.dimension = elementEgoVehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateYawRate(-100.);
  elementEgoVehicleState.yawRate = elementEgoVehicleStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointX(-1e9);
  elementEgoVehicleStateCenterPoint.x = elementEgoVehicleStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointY(-1e9);
  elementEgoVehicleStateCenterPoint.y = elementEgoVehicleStateCenterPointY;
  elementEgoVehicleState.centerPoint = elementEgoVehicleStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateSpeed(-100.);
  elementEgoVehicleState.speed = elementEgoVehicleStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateSteeringAngle(-6.283185308);
  elementEgoVehicleState.steeringAngle = elementEgoVehicleStateSteeringAngle;
  elementEgoVehicle.state = elementEgoVehicleState;
  element.egoVehicle = elementEgoVehicle;
  ::ad::rss::world::RssDynamics elementEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLon.accelMax = elementEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMax;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamics.alphaLon = elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLat.accelMax = elementEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLat.brakeMin = elementEgoVehicleRssDynamicsAlphaLatBrakeMin;
  elementEgoVehicleRssDynamics.alphaLat = elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementEgoVehicleRssDynamics.lateralFluctuationMargin = elementEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsResponseTime(0.);
  elementEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleRssDynamics.responseTime = elementEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleRssDynamics.maxSpeedOnAcceleration = elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleRssDynamics.unstructuredSettings = elementEgoVehicleRssDynamicsUnstructuredSettings;
  element.egoVehicleRssDynamics = elementEgoVehicleRssDynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad::rss::world::ObjectType elementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupiedRegionsElement.segmentId = elementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRangeMaximum;
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRange.minimum;
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRange.maximum;
  elementObjectOccupiedRegionsElement.lonRange = elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRangeMaximum;
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRange.minimum;
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRange.maximum;
  elementObjectOccupiedRegionsElement.latRange = elementObjectOccupiedRegionsElementLatRange;
  elementObjectOccupiedRegions.resize(1, elementObjectOccupiedRegionsElement);
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMin(-100.);
  elementObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLonMin = elementObjectVelocitySpeedLonMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMax(-100.);
  elementObjectVelocity.speedLonMax = elementObjectVelocitySpeedLonMax;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMin(-100.);
  elementObjectVelocity.speedLatMin = elementObjectVelocitySpeedLatMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMax(-100.);
  elementObjectVelocity.speedLatMax = elementObjectVelocitySpeedLatMax;
  elementObjectVelocity.speedLonMax = elementObjectVelocity.speedLonMin;
  elementObjectVelocity.speedLatMax = elementObjectVelocity.speedLatMin;
  elementObjectVelocity.speedLonMin = elementObjectVelocity.speedLonMax;
  elementObjectVelocity.speedLatMin = elementObjectVelocity.speedLatMax;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYawRate(-100.);
  elementObjectState.yawRate = elementObjectStateYawRate;
  ::ad::physics::Distance2D elementObjectStateCenterPoint;
  ::ad::physics::Distance elementObjectStateCenterPointX(-1e9);
  elementObjectStateCenterPoint.x = elementObjectStateCenterPointX;
  ::ad::physics::Distance elementObjectStateCenterPointY(-1e9);
  elementObjectStateCenterPoint.y = elementObjectStateCenterPointY;
  elementObjectState.centerPoint = elementObjectStateCenterPoint;
  ::ad::physics::Speed elementObjectStateSpeed(-100.);
  elementObjectState.speed = elementObjectStateSpeed;
  ::ad::physics::Angle elementObjectStateSteeringAngle(-6.283185308);
  elementObjectState.steeringAngle = elementObjectStateSteeringAngle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(-1e9);
  elementObjectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed elementObjectRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementObjectRssDynamics.maxSpeedOnAcceleration = elementObjectRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementObjectRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementObjectRssDynamics.unstructuredSettings = elementObjectRssDynamicsUnstructuredSettings;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad::rss::world::RoadArea elementIntersectingRoad;
  ::ad::rss::world::RoadSegment elementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment elementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersectingRoadElementElement.id = elementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  elementIntersectingRoadElementElement.type = elementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersectingRoadElementElement.drivingDirection = elementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementLength;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMinimum(-1e9);
  elementIntersectingRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMaximum(-1e9);
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLengthMaximum;
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLength.minimum;
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLength.maximum;
  elementIntersectingRoadElementElement.length = elementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMinimum(-1e9);
  elementIntersectingRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMaximum(-1e9);
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidthMaximum;
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidth.minimum;
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidth.maximum;
  elementIntersectingRoadElementElement.width = elementIntersectingRoadElementElementWidth;
  elementIntersectingRoadElement.resize(1, elementIntersectingRoadElementElement);
  elementIntersectingRoad.resize(1, elementIntersectingRoadElement);
  element.intersectingRoad = elementIntersectingRoad;
  ::ad::rss::world::RoadArea elementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment elementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment elementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleRoadElementElement.id = elementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementEgoVehicleRoadElementElement.type = elementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgoVehicleRoadElementElement.drivingDirection = elementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMinimum(-1e9);
  elementEgoVehicleRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMaximum(-1e9);
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLengthMaximum;
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLength.minimum;
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLength.maximum;
  elementEgoVehicleRoadElementElement.length = elementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMinimum(-1e9);
  elementEgoVehicleRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMaximum(-1e9);
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidthMaximum;
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidth.minimum;
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidth.maximum;
  elementEgoVehicleRoadElementElement.width = elementEgoVehicleRoadElementElementWidth;
  elementEgoVehicleRoadElement.resize(1, elementEgoVehicleRoadElementElement);
  elementEgoVehicleRoad.resize(1, elementEgoVehicleRoadElement);
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::world::Object elementEgoVehicle;
  ::ad::rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType elementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleOccupiedRegionsElement.segmentId = elementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.lonRange = elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.latRange = elementEgoVehicleOccupiedRegionsElementLatRange;
  elementEgoVehicleOccupiedRegions.resize(1, elementEgoVehicleOccupiedRegionsElement);
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity elementEgoVehicleVelocity;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMin(-100.);
  elementEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLonMax(-100.);
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMin(-100.);
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLatMax(-100.);
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocitySpeedLatMax;
  elementEgoVehicleVelocity.speedLonMax = elementEgoVehicleVelocity.speedLonMin;
  elementEgoVehicleVelocity.speedLatMax = elementEgoVehicleVelocity.speedLatMin;
  elementEgoVehicleVelocity.speedLonMin = elementEgoVehicleVelocity.speedLonMax;
  elementEgoVehicleVelocity.speedLatMin = elementEgoVehicleVelocity.speedLatMax;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  ::ad::rss::world::ObjectState elementEgoVehicleState;
  ::ad::physics::Angle elementEgoVehicleStateYaw(-6.283185308);
  elementEgoVehicleState.yaw = elementEgoVehicleStateYaw;
  ::ad::physics::Dimension2D elementEgoVehicleStateDimension;
  ::ad::physics::Distance elementEgoVehicleStateDimensionLength(-1e9);
  elementEgoVehicleStateDimension.length = elementEgoVehicleStateDimensionLength;
  ::ad::physics::Distance elementEgoVehicleStateDimensionWidth(-1e9);
  elementEgoVehicleStateDimension.width = elementEgoVehicleStateDimensionWidth;
  elementEgoVehicleState.dimension = elementEgoVehicleStateDimension;
  ::ad::physics::AngularVelocity elementEgoVehicleStateYawRate(-100.);
  elementEgoVehicleState.yawRate = elementEgoVehicleStateYawRate;
  ::ad::physics::Distance2D elementEgoVehicleStateCenterPoint;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointX(-1e9);
  elementEgoVehicleStateCenterPoint.x = elementEgoVehicleStateCenterPointX;
  ::ad::physics::Distance elementEgoVehicleStateCenterPointY(-1e9);
  elementEgoVehicleStateCenterPoint.y = elementEgoVehicleStateCenterPointY;
  elementEgoVehicleState.centerPoint = elementEgoVehicleStateCenterPoint;
  ::ad::physics::Speed elementEgoVehicleStateSpeed(-100.);
  elementEgoVehicleState.speed = elementEgoVehicleStateSpeed;
  ::ad::physics::Angle elementEgoVehicleStateSteeringAngle(-6.283185308);
  elementEgoVehicleState.steeringAngle = elementEgoVehicleStateSteeringAngle;
  elementEgoVehicle.state = elementEgoVehicleState;
  element.egoVehicle = elementEgoVehicle;
  ::ad::rss::world::RssDynamics elementEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLon.accelMax = elementEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMax;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMin = elementEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleRssDynamicsAlphaLon.brakeMax = elementEgoVehicleRssDynamicsAlphaLon.brakeMin;
  elementEgoVehicleRssDynamics.alphaLon = elementEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleRssDynamicsAlphaLat.accelMax = elementEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleRssDynamicsAlphaLat.brakeMin = elementEgoVehicleRssDynamicsAlphaLatBrakeMin;
  elementEgoVehicleRssDynamics.alphaLat = elementEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsLateralFluctuationMargin(-1e9);
  elementEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementEgoVehicleRssDynamics.lateralFluctuationMargin = elementEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsResponseTime(0.);
  elementEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleRssDynamics.responseTime = elementEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementEgoVehicleRssDynamics.maxSpeedOnAcceleration = elementEgoVehicleRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementEgoVehicleRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementEgoVehicleRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementEgoVehicleRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementEgoVehicleRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementEgoVehicleRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementEgoVehicleRssDynamics.unstructuredSettings = elementEgoVehicleRssDynamicsUnstructuredSettings;
  element.egoVehicleRssDynamics = elementEgoVehicleRssDynamics;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad::rss::world::ObjectType elementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupiedRegionsElement.segmentId = elementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRangeMaximum;
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRange.minimum;
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRange.maximum;
  elementObjectOccupiedRegionsElement.lonRange = elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRangeMaximum;
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRange.minimum;
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRange.maximum;
  elementObjectOccupiedRegionsElement.latRange = elementObjectOccupiedRegionsElementLatRange;
  elementObjectOccupiedRegions.resize(1, elementObjectOccupiedRegionsElement);
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMin(-100.);
  elementObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLonMin = elementObjectVelocitySpeedLonMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLonMax(-100.);
  elementObjectVelocity.speedLonMax = elementObjectVelocitySpeedLonMax;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMin(-100.);
  elementObjectVelocity.speedLatMin = elementObjectVelocitySpeedLatMin;
  ::ad::physics::Speed elementObjectVelocitySpeedLatMax(-100.);
  elementObjectVelocity.speedLatMax = elementObjectVelocitySpeedLatMax;
  elementObjectVelocity.speedLonMax = elementObjectVelocity.speedLonMin;
  elementObjectVelocity.speedLatMax = elementObjectVelocity.speedLatMin;
  elementObjectVelocity.speedLonMin = elementObjectVelocity.speedLonMax;
  elementObjectVelocity.speedLatMin = elementObjectVelocity.speedLatMax;
  elementObject.velocity = elementObjectVelocity;
  ::ad::rss::world::ObjectState elementObjectState;
  ::ad::physics::Angle elementObjectStateYaw(-6.283185308);
  elementObjectState.yaw = elementObjectStateYaw;
  ::ad::physics::Dimension2D elementObjectStateDimension;
  ::ad::physics::Distance elementObjectStateDimensionLength(-1e9);
  elementObjectStateDimension.length = elementObjectStateDimensionLength;
  ::ad::physics::Distance elementObjectStateDimensionWidth(-1e9);
  elementObjectStateDimension.width = elementObjectStateDimensionWidth;
  elementObjectState.dimension = elementObjectStateDimension;
  ::ad::physics::AngularVelocity elementObjectStateYawRate(-100.);
  elementObjectState.yawRate = elementObjectStateYawRate;
  ::ad::physics::Distance2D elementObjectStateCenterPoint;
  ::ad::physics::Distance elementObjectStateCenterPointX(-1e9);
  elementObjectStateCenterPoint.x = elementObjectStateCenterPointX;
  ::ad::physics::Distance elementObjectStateCenterPointY(-1e9);
  elementObjectStateCenterPoint.y = elementObjectStateCenterPointY;
  elementObjectState.centerPoint = elementObjectStateCenterPoint;
  ::ad::physics::Speed elementObjectStateSpeed(-100.);
  elementObjectState.speed = elementObjectStateSpeed;
  ::ad::physics::Angle elementObjectStateSteeringAngle(-6.283185308);
  elementObjectState.steeringAngle = elementObjectStateSteeringAngle;
  elementObject.state = elementObjectState;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(-1e9);
  elementObjectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed elementObjectRssDynamicsMaxSpeedOnAcceleration(-100.);
  elementObjectRssDynamics.maxSpeedOnAcceleration = elementObjectRssDynamicsMaxSpeedOnAcceleration;
  ::ad::rss::world::UnstructuredSettings elementObjectRssDynamicsUnstructuredSettings;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.pedestrianTurningRadius
    = elementObjectRssDynamicsUnstructuredSettingsPedestrianTurningRadius;
  ::ad::physics::Angle elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle(-6.283185308);
  elementObjectRssDynamicsUnstructuredSettings.driveAwayMaxAngle
    = elementObjectRssDynamicsUnstructuredSettingsDriveAwayMaxAngle;
  ::ad::physics::AngularAcceleration elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange(-1e2);
  elementObjectRssDynamicsUnstructuredSettings.vehicleYawRateChange
    = elementObjectRssDynamicsUnstructuredSettingsVehicleYawRateChange;
  ::ad::physics::Distance elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius(-1e9);
  elementObjectRssDynamicsUnstructuredSettings.vehicleMinRadius
    = elementObjectRssDynamicsUnstructuredSettingsVehicleMinRadius;
  ::ad::physics::Duration elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep(0.);
  elementObjectRssDynamicsUnstructuredSettings.vehicleTrajectoryCalculationStep
    = elementObjectRssDynamicsUnstructuredSettingsVehicleTrajectoryCalculationStep;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleFrontIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleFrontIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBackIntermediateRatioSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBackIntermediateRatioSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleResponseTimeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleBrakeIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleBrakeIntermediateAccelerationSteps;
  uint32_t elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps{
    std::numeric_limits<uint32_t>::min()};
  elementObjectRssDynamicsUnstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps
    = elementObjectRssDynamicsUnstructuredSettingsVehicleContinueForwardIntermediateAccelerationSteps;
  elementObjectRssDynamics.unstructuredSettings = elementObjectRssDynamicsUnstructuredSettings;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad::rss::world::RoadArea elementIntersectingRoad;
  ::ad::rss::world::RoadSegment elementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment elementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersectingRoadElementElement.id = elementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  elementIntersectingRoadElementElement.type = elementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersectingRoadElementElement.drivingDirection = elementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementLength;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMinimum(-1e9);
  elementIntersectingRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMaximum(-1e9);
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLengthMaximum;
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLength.minimum;
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLength.maximum;
  elementIntersectingRoadElementElement.length = elementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMinimum(-1e9);
  elementIntersectingRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMaximum(-1e9);
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidthMaximum;
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidth.minimum;
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidth.maximum;
  elementIntersectingRoadElementElement.width = elementIntersectingRoadElementElementWidth;
  elementIntersectingRoadElement.resize(1, elementIntersectingRoadElementElement);
  elementIntersectingRoad.resize(1, elementIntersectingRoadElement);
  element.intersectingRoad = elementIntersectingRoad;
  ::ad::rss::world::RoadArea elementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment elementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment elementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleRoadElementElement.id = elementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementEgoVehicleRoadElementElement.type = elementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgoVehicleRoadElementElement.drivingDirection = elementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMinimum(-1e9);
  elementEgoVehicleRoadElementElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMaximum(-1e9);
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLengthMaximum;
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLength.minimum;
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLength.maximum;
  elementEgoVehicleRoadElementElement.length = elementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMinimum(-1e9);
  elementEgoVehicleRoadElementElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMaximum(-1e9);
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidthMaximum;
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidth.minimum;
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidth.maximum;
  elementEgoVehicleRoadElementElement.width = elementEgoVehicleRoadElementElementWidth;
  elementEgoVehicleRoadElement.resize(1, elementEgoVehicleRoadElementElement);
  elementEgoVehicleRoad.resize(1, elementEgoVehicleRoadElement);
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
