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
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
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
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;
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
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
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
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;

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
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
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
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
