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

#include "ad/rss/state/RssStateValidInputRange.hpp"

TEST(RssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateRightTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateRightTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeUnstructuredSceneStateTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredSceneRssState invalidInitializedMember;
  ::ad::rss::state::UnstructuredSceneResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::UnstructuredSceneResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.unstructuredSceneState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeUnstructuredSceneStateTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredSceneRssState invalidInitializedMember;
  ::ad::rss::state::UnstructuredSceneResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::UnstructuredSceneResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.unstructuredSceneState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value below input range minimum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
  valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
  valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
  valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
  valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad::rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
  valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
  valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
  valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad::rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
  valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
  valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
  valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
  bool valueUnstructuredSceneStateIsSafe{true};
  valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
  valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
  valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
  valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
  value.unstructuredSceneState = valueUnstructuredSceneState;
  ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;

  // override member with data type value above input range maximum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
