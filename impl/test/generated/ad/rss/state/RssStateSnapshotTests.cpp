/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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

TEST_F(RssStateSnapshotTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::RssStateSnapshot value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
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
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationSafeDistance(1e9);
  individualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = individualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(1e9);
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
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationSafeDistance(1e9);
  individualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = individualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationCurrentDistance(1e9);
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
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationSafeDistance(1e9);
  individualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = individualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(1e9);
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
