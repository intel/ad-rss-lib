/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/state/RssStateValidInputRange.hpp"

TEST(RssStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooSmall)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooBig)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateRightTooSmall)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateRightTooBig)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooSmall)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooBig)
{
  ::ad_rss::state::RssState value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
  valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueLongitudinalStateRssStateInformation.currentDistance = valueLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
  valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
  valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
  valueLateralStateRightRssStateInformation.currentDistance = valueLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
  valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
  valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::None);
  valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
  valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
