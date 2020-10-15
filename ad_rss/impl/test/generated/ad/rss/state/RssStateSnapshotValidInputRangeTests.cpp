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

#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssStateSnapshot value;
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
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
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
  ::ad::rss::state::RssStateVector valueIndividualResponses;
  ::ad::rss::state::RssState valueIndividualResponsesElement;
  ::ad::rss::world::ObjectId valueIndividualResponsesElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueIndividualResponsesElement.objectId = valueIndividualResponsesElementObjectId;
  ::ad::rss::situation::SituationId valueIndividualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueIndividualResponsesElement.situationId = valueIndividualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState valueIndividualResponsesElementLongitudinalState;
  bool valueIndividualResponsesElementLongitudinalStateIsSafe{true};
  valueIndividualResponsesElementLongitudinalState.isSafe = valueIndividualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueIndividualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  valueIndividualResponsesElementLongitudinalState.response = valueIndividualResponsesElementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLongitudinalStateAlphaLon.accelMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalState.alphaLon = valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  valueIndividualResponsesElementLongitudinalState.rssStateInformation
    = valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  valueIndividualResponsesElement.longitudinalState = valueIndividualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateRight;
  bool valueIndividualResponsesElementLateralStateRightIsSafe{true};
  valueIndividualResponsesElementLateralStateRight.isSafe = valueIndividualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateRight.response = valueIndividualResponsesElementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateRightAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateRight.alphaLat = valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateRight.rssStateInformation
    = valueIndividualResponsesElementLateralStateRightRssStateInformation;
  valueIndividualResponsesElement.lateralStateRight = valueIndividualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateLeft;
  bool valueIndividualResponsesElementLateralStateLeftIsSafe{true};
  valueIndividualResponsesElementLateralStateLeft.isSafe = valueIndividualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateLeft.response = valueIndividualResponsesElementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateLeftAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateLeft.alphaLat = valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueIndividualResponsesElementUnstructuredSceneState;
  bool valueIndividualResponsesElementUnstructuredSceneStateIsSafe{true};
  valueIndividualResponsesElementUnstructuredSceneState.isSafe
    = valueIndividualResponsesElementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueIndividualResponsesElementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueIndividualResponsesElementUnstructuredSceneState.response
    = valueIndividualResponsesElementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.begin
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.end
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd;
  valueIndividualResponsesElementUnstructuredSceneState.headingRange
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueIndividualResponsesElementUnstructuredSceneState.rssStateInformation
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.accelMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneState.alphaLon
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  valueIndividualResponsesElement.unstructuredSceneState = valueIndividualResponsesElementUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueIndividualResponsesElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueIndividualResponsesElement.situationType = valueIndividualResponsesElementSituationType;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneEgoInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.brakeTrajectorySet = valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  value.unstructuredSceneEgoInformation = valueUnstructuredSceneEgoInformation;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooSmall)
{
  ::ad::rss::state::RssStateSnapshot value;
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
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
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
  ::ad::rss::state::RssStateVector valueIndividualResponses;
  ::ad::rss::state::RssState valueIndividualResponsesElement;
  ::ad::rss::world::ObjectId valueIndividualResponsesElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueIndividualResponsesElement.objectId = valueIndividualResponsesElementObjectId;
  ::ad::rss::situation::SituationId valueIndividualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueIndividualResponsesElement.situationId = valueIndividualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState valueIndividualResponsesElementLongitudinalState;
  bool valueIndividualResponsesElementLongitudinalStateIsSafe{true};
  valueIndividualResponsesElementLongitudinalState.isSafe = valueIndividualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueIndividualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  valueIndividualResponsesElementLongitudinalState.response = valueIndividualResponsesElementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLongitudinalStateAlphaLon.accelMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalState.alphaLon = valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  valueIndividualResponsesElementLongitudinalState.rssStateInformation
    = valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  valueIndividualResponsesElement.longitudinalState = valueIndividualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateRight;
  bool valueIndividualResponsesElementLateralStateRightIsSafe{true};
  valueIndividualResponsesElementLateralStateRight.isSafe = valueIndividualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateRight.response = valueIndividualResponsesElementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateRightAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateRight.alphaLat = valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateRight.rssStateInformation
    = valueIndividualResponsesElementLateralStateRightRssStateInformation;
  valueIndividualResponsesElement.lateralStateRight = valueIndividualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateLeft;
  bool valueIndividualResponsesElementLateralStateLeftIsSafe{true};
  valueIndividualResponsesElementLateralStateLeft.isSafe = valueIndividualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateLeft.response = valueIndividualResponsesElementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateLeftAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateLeft.alphaLat = valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueIndividualResponsesElementUnstructuredSceneState;
  bool valueIndividualResponsesElementUnstructuredSceneStateIsSafe{true};
  valueIndividualResponsesElementUnstructuredSceneState.isSafe
    = valueIndividualResponsesElementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueIndividualResponsesElementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueIndividualResponsesElementUnstructuredSceneState.response
    = valueIndividualResponsesElementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.begin
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.end
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd;
  valueIndividualResponsesElementUnstructuredSceneState.headingRange
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueIndividualResponsesElementUnstructuredSceneState.rssStateInformation
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.accelMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneState.alphaLon
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  valueIndividualResponsesElement.unstructuredSceneState = valueIndividualResponsesElementUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueIndividualResponsesElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueIndividualResponsesElement.situationType = valueIndividualResponsesElementSituationType;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneEgoInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.brakeTrajectorySet = valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  value.unstructuredSceneEgoInformation = valueUnstructuredSceneEgoInformation;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooBig)
{
  ::ad::rss::state::RssStateSnapshot value;
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
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleFrontIntermediateYawRateChangeRatioSteps;
  uint32_t valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps{
    std::numeric_limits<uint32_t>::min()};
  valueDefaultEgoVehicleRssDynamicsUnstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps
    = valueDefaultEgoVehicleRssDynamicsUnstructuredSettingsVehicleBackIntermediateYawRateChangeRatioSteps;
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
  ::ad::rss::state::RssStateVector valueIndividualResponses;
  ::ad::rss::state::RssState valueIndividualResponsesElement;
  ::ad::rss::world::ObjectId valueIndividualResponsesElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueIndividualResponsesElement.objectId = valueIndividualResponsesElementObjectId;
  ::ad::rss::situation::SituationId valueIndividualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueIndividualResponsesElement.situationId = valueIndividualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState valueIndividualResponsesElementLongitudinalState;
  bool valueIndividualResponsesElementLongitudinalStateIsSafe{true};
  valueIndividualResponsesElementLongitudinalState.isSafe = valueIndividualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueIndividualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  valueIndividualResponsesElementLongitudinalState.response = valueIndividualResponsesElementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLongitudinalStateAlphaLon.accelMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  valueIndividualResponsesElementLongitudinalState.alphaLon = valueIndividualResponsesElementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  valueIndividualResponsesElementLongitudinalState.rssStateInformation
    = valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  valueIndividualResponsesElement.longitudinalState = valueIndividualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateRight;
  bool valueIndividualResponsesElementLateralStateRightIsSafe{true};
  valueIndividualResponsesElementLateralStateRight.isSafe = valueIndividualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateRight.response = valueIndividualResponsesElementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateRightAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateRightAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateRight.alphaLat = valueIndividualResponsesElementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateRight.rssStateInformation
    = valueIndividualResponsesElementLateralStateRightRssStateInformation;
  valueIndividualResponsesElement.lateralStateRight = valueIndividualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateLeft;
  bool valueIndividualResponsesElementLateralStateLeftIsSafe{true};
  valueIndividualResponsesElementLateralStateLeft.isSafe = valueIndividualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateLeft.response = valueIndividualResponsesElementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementLateralStateLeftAlphaLat.accelMax
    = valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueIndividualResponsesElementLateralStateLeftAlphaLat.brakeMin
    = valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin;
  valueIndividualResponsesElementLateralStateLeft.alphaLat = valueIndividualResponsesElementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueIndividualResponsesElementUnstructuredSceneState;
  bool valueIndividualResponsesElementUnstructuredSceneStateIsSafe{true};
  valueIndividualResponsesElementUnstructuredSceneState.isSafe
    = valueIndividualResponsesElementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueIndividualResponsesElementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueIndividualResponsesElementUnstructuredSceneState.response
    = valueIndividualResponsesElementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.begin
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueIndividualResponsesElementUnstructuredSceneStateHeadingRange.end
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRangeEnd;
  valueIndividualResponsesElementUnstructuredSceneState.headingRange
    = valueIndividualResponsesElementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance
    valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueIndividualResponsesElementUnstructuredSceneState.rssStateInformation
    = valueIndividualResponsesElementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.accelMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMax
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon.brakeMin;
  valueIndividualResponsesElementUnstructuredSceneState.alphaLon
    = valueIndividualResponsesElementUnstructuredSceneStateAlphaLon;
  valueIndividualResponsesElement.unstructuredSceneState = valueIndividualResponsesElementUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueIndividualResponsesElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  valueIndividualResponsesElement.situationType = valueIndividualResponsesElementSituationType;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneEgoInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.brakeTrajectorySet = valueUnstructuredSceneEgoInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneEgoInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneEgoInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneEgoInformationContinueForwardTrajectorySet;
  value.unstructuredSceneEgoInformation = valueUnstructuredSceneEgoInformation;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
