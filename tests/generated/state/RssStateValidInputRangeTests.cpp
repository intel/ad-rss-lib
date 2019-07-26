/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
