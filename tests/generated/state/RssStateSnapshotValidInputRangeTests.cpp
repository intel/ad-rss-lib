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

#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssStateSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRangeIndividualResponsesTooSmall)
{
  ::ad::rss::state::RssStateSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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

  // override member with invalid value
  ::ad::rss::state::RssStateVector invalidInitializedMember;
  ::ad::rss::state::RssState invalidInitializedMemberRssStateVectorElement;
  ::ad::rss::world::ObjectId invalidInitializedMemberRssStateVectorElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  invalidInitializedMemberRssStateVectorElement.objectId = invalidInitializedMemberRssStateVectorElementObjectId;
  ::ad::rss::situation::SituationId invalidInitializedMemberRssStateVectorElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  invalidInitializedMemberRssStateVectorElement.situationId = invalidInitializedMemberRssStateVectorElementSituationId;
  ::ad::rss::state::LongitudinalRssState invalidInitializedMemberRssStateVectorElementLongitudinalState;
  bool invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLongitudinalState.isSafe
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  invalidInitializedMemberRssStateVectorElementLongitudinalState.response
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance(
    0.);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLongitudinalState.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.longitudinalState
    = invalidInitializedMemberRssStateVectorElementLongitudinalState;
  ::ad::rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateRight;
  bool invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLateralStateRight.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::None);
  invalidInitializedMemberRssStateVectorElementLateralStateRight.response
    = invalidInitializedMemberRssStateVectorElementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance(
    0.);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateRight.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateRight
    = invalidInitializedMemberRssStateVectorElementLateralStateRight;
  ::ad::rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  bool invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe{true};
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::None);
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.response
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance(
    0.);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
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
  ::ad::rss::state::RssStateSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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

  // override member with invalid value
  ::ad::rss::state::RssStateVector invalidInitializedMember;
  ::ad::rss::state::RssState invalidInitializedMemberRssStateVectorElement;
  ::ad::rss::world::ObjectId invalidInitializedMemberRssStateVectorElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  invalidInitializedMemberRssStateVectorElement.objectId = invalidInitializedMemberRssStateVectorElementObjectId;
  ::ad::rss::situation::SituationId invalidInitializedMemberRssStateVectorElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  invalidInitializedMemberRssStateVectorElement.situationId = invalidInitializedMemberRssStateVectorElementSituationId;
  ::ad::rss::state::LongitudinalRssState invalidInitializedMemberRssStateVectorElementLongitudinalState;
  bool invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLongitudinalState.isSafe
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLongitudinalState.response
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance(
    1e6);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLongitudinalState.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLongitudinalStateRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.longitudinalState
    = invalidInitializedMemberRssStateVectorElementLongitudinalState;
  ::ad::rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateRight;
  bool invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLateralStateRight.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLateralStateRight.response
    = invalidInitializedMemberRssStateVectorElementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance(
    1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation.evaluator
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformationEvaluator;
  invalidInitializedMemberRssStateVectorElementLateralStateRight.rssStateInformation
    = invalidInitializedMemberRssStateVectorElementLateralStateRightRssStateInformation;
  invalidInitializedMemberRssStateVectorElement.lateralStateRight
    = invalidInitializedMemberRssStateVectorElementLateralStateRight;
  ::ad::rss::state::LateralRssState invalidInitializedMemberRssStateVectorElementLateralStateLeft;
  bool invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe{false};
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.isSafe
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  invalidInitializedMemberRssStateVectorElementLateralStateLeft.response
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance(
    1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.safeDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance(1e6);
  invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformation.currentDistance
    = invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator
    invalidInitializedMemberRssStateVectorElementLateralStateLeftRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
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
