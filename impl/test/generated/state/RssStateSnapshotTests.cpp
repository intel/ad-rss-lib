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
#include "ad/rss/state/RssStateSnapshot.hpp"

class RssStateSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    valueIndividualResponsesElementLongitudinalState.response
      = valueIndividualResponsesElementLongitudinalStateResponse;
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
    valueIndividualResponsesElementLateralStateRight.response
      = valueIndividualResponsesElementLateralStateRightResponse;
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
    mValue = value;
  }

  ::ad::rss::state::RssStateSnapshot mValue;
};

TEST_F(RssStateSnapshotTests, copyConstruction)
{
  ::ad::rss::state::RssStateSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveConstruction)
{
  ::ad::rss::state::RssStateSnapshot value(std::move(::ad::rss::state::RssStateSnapshot(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, copyAssignment)
{
  ::ad::rss::state::RssStateSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveAssignment)
{
  ::ad::rss::state::RssStateSnapshot value;
  value = std::move(::ad::rss::state::RssStateSnapshot(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorIndividualResponsesDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateVector individualResponses;
  ::ad::rss::state::RssState individualResponsesElement;
  ::ad::rss::world::ObjectId individualResponsesElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  individualResponsesElement.objectId = individualResponsesElementObjectId;
  ::ad::rss::situation::SituationId individualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  individualResponsesElement.situationId = individualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState individualResponsesElementLongitudinalState;
  bool individualResponsesElementLongitudinalStateIsSafe{false};
  individualResponsesElementLongitudinalState.isSafe = individualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse individualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  individualResponsesElementLongitudinalState.response = individualResponsesElementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation individualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationSafeDistance(1e6);
  individualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = individualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = individualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  individualResponsesElementLongitudinalState.rssStateInformation
    = individualResponsesElementLongitudinalStateRssStateInformation;
  individualResponsesElement.longitudinalState = individualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState individualResponsesElementLateralStateRight;
  bool individualResponsesElementLateralStateRightIsSafe{false};
  individualResponsesElementLateralStateRight.isSafe = individualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse individualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateRight.response = individualResponsesElementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation individualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationSafeDistance(1e6);
  individualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = individualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = individualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateRightRssStateInformation.evaluator
    = individualResponsesElementLateralStateRightRssStateInformationEvaluator;
  individualResponsesElementLateralStateRight.rssStateInformation
    = individualResponsesElementLateralStateRightRssStateInformation;
  individualResponsesElement.lateralStateRight = individualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState individualResponsesElementLateralStateLeft;
  bool individualResponsesElementLateralStateLeftIsSafe{false};
  individualResponsesElementLateralStateLeft.isSafe = individualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse individualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateLeft.response = individualResponsesElementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation individualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationSafeDistance(1e6);
  individualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = individualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = individualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  individualResponsesElementLateralStateLeft.rssStateInformation
    = individualResponsesElementLateralStateLeftRssStateInformation;
  individualResponsesElement.lateralStateLeft = individualResponsesElementLateralStateLeft;
  individualResponses.resize(0 + 1, individualResponsesElement);
  valueA.individualResponses = individualResponses;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
