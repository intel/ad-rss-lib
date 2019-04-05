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

#include "ad_rss/state/ResponseStateValidInputRange.hpp"

TEST(ResponseStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooSmall)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLongitudinalStateTooBig)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinalState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLateralStateRightTooSmall)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLateralStateRightTooBig)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooSmall)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateValidInputRangeTests, testValidInputRangeLateralStateLeftTooBig)
{
  ::ad_rss::state::ResponseState value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  value.situationId = valueSituationId;
  ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
  bool valueLongitudinalStateIsSafe{true};
  valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  valueLongitudinalState.response = valueLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation valueLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationSafeDistance(0.);
  valueLongitudinalStateResponseInformation.safeDistance = valueLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLongitudinalStateResponseInformationCurrentDistance(0.);
  valueLongitudinalStateResponseInformation.currentDistance = valueLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLongitudinalStateResponseInformation.responseEvaluator
    = valueLongitudinalStateResponseInformationResponseEvaluator;
  valueLongitudinalState.responseInformation = valueLongitudinalStateResponseInformation;
  value.longitudinalState = valueLongitudinalState;
  ::ad_rss::state::LateralRssState valueLateralStateRight;
  bool valueLateralStateRightIsSafe{true};
  valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateRight.response = valueLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationSafeDistance(0.);
  valueLateralStateRightResponseInformation.safeDistance = valueLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateRightResponseInformationCurrentDistance(0.);
  valueLateralStateRightResponseInformation.currentDistance = valueLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateRightResponseInformation.responseEvaluator
    = valueLateralStateRightResponseInformationResponseEvaluator;
  valueLateralStateRight.responseInformation = valueLateralStateRightResponseInformation;
  value.lateralStateRight = valueLateralStateRight;
  ::ad_rss::state::LateralRssState valueLateralStateLeft;
  bool valueLateralStateLeftIsSafe{true};
  valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  valueLateralStateLeft.response = valueLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation valueLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationSafeDistance(0.);
  valueLateralStateLeftResponseInformation.safeDistance = valueLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueLateralStateLeftResponseInformationCurrentDistance(0.);
  valueLateralStateLeftResponseInformation.currentDistance = valueLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueLateralStateLeftResponseInformation.responseEvaluator
    = valueLateralStateLeftResponseInformationResponseEvaluator;
  valueLateralStateLeft.responseInformation = valueLateralStateLeftResponseInformation;
  value.lateralStateLeft = valueLateralStateLeft;

  // override member with invalid value
  ::ad_rss::state::LateralRssState invalidInitializedMember;
  ::ad_rss::state::LateralResponse invalidInitializedMemberResponse(static_cast<::ad_rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateralStateLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
