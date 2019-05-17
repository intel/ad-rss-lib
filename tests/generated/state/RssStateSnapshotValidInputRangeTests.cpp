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

#include "ad_rss/state/RssStateSnapshotValidInputRange.hpp"

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::RssStateSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::state::RssStateVector valueIndividualResponses;
  value.individualResponses = valueIndividualResponses;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRangeIndividualResponsesTooSmall)
{
  ::ad_rss::state::RssStateSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::state::RssStateVector valueIndividualResponses;
  value.individualResponses = valueIndividualResponses;

  // override member with invalid value
  ::ad_rss::state::RssStateVector invalidInitializedMember;
  ::ad_rss::state::RssState invalidInitializedMemberRssStateVectorElement;
  ::ad_rss::world::ObjectId invalidInitializedMemberRssStateVectorElementObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  invalidInitializedMemberRssStateVectorElement.objectId = invalidInitializedMemberRssStateVectorElementObjectId;
  ::ad_rss::situation::SituationId invalidInitializedMemberRssStateVectorElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  invalidInitializedMemberRssStateVectorElement.situationId = invalidInitializedMemberRssStateVectorElementSituationId;
  ::ad_rss::state::LongitudinalRssState invalidInitializedMemberRssStateVectorElementLongitudinalState;
  bool invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLongitudinalState.isSafe
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse(
    ::ad_rss::state::LongitudinalResponse::None);
  invalidInitializedMemberRssStateVectorElementLongitudinalState.response
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance(0.);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::None);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLongitudinalState.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.longitudinalState
    = invalidInitializedMemberRssStateVectorElementLongitudinalState;
  ::ad_rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateRight;
  bool invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLateralStateRight.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateRightResponse(
    ::ad_rss::state::LateralResponse::None);
  invalidInitializedMemberRssStateVectorElementLateralStateRight.response
    = invalidInitializedMemberRssStateVectorElementLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::None);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateRight.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateRight
    = invalidInitializedMemberRssStateVectorElementLateralStateRight;
  ::ad_rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  bool invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse(
    ::ad_rss::state::LateralResponse::None);
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.response
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::None);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateLeft
    = invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  invalidInitializedMember.resize(1001, invalidInitializedMemberRssStateVectorElement);
  value.individualResponses = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRangeIndividualResponsesTooBig)
{
  ::ad_rss::state::RssStateSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::state::RssStateVector valueIndividualResponses;
  value.individualResponses = valueIndividualResponses;

  // override member with invalid value
  ::ad_rss::state::RssStateVector invalidInitializedMember;
  ::ad_rss::state::RssState invalidInitializedMemberRssStateVectorElement;
  ::ad_rss::world::ObjectId invalidInitializedMemberRssStateVectorElementObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::max());
  invalidInitializedMemberRssStateVectorElement.objectId = invalidInitializedMemberRssStateVectorElementObjectId;
  ::ad_rss::situation::SituationId invalidInitializedMemberRssStateVectorElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::max());
  invalidInitializedMemberRssStateVectorElement.situationId = invalidInitializedMemberRssStateVectorElementSituationId;
  ::ad_rss::state::LongitudinalRssState invalidInitializedMemberRssStateVectorElementLongitudinalState;
  bool invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLongitudinalState.isSafe
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse(
    ::ad_rss::state::LongitudinalResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLongitudinalState.response
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLongitudinalState.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.longitudinalState
    = invalidInitializedMemberRssStateVectorElementLongitudinalState;
  ::ad_rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateRight;
  bool invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLateralStateRight.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateRightResponse(
    ::ad_rss::state::LateralResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLateralStateRight.response
    = invalidInitializedMemberRssStateVectorElementLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateRight.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateRight
    = invalidInitializedMemberRssStateVectorElementLateralStateRight;
  ::ad_rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  bool invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse(
    ::ad_rss::state::LateralResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.response
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator(
      ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateLeft
    = invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  invalidInitializedMember.resize(1001, invalidInitializedMemberRssStateVectorElement);
  value.individualResponses = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
