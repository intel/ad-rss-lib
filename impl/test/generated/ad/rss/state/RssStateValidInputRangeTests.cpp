/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
