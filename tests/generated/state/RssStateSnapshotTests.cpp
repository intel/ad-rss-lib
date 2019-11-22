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
#include "ad_rss/state/RssStateSnapshot.hpp"

class RssStateSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::RssStateSnapshot value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::state::RssStateVector valueIndividualResponses;
    value.individualResponses = valueIndividualResponses;
    mValue = value;
  }

  ::ad_rss::state::RssStateSnapshot mValue;
};

TEST_F(RssStateSnapshotTests, copyConstruction)
{
  ::ad_rss::state::RssStateSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveConstruction)
{
  ::ad_rss::state::RssStateSnapshot value(std::move(::ad_rss::state::RssStateSnapshot(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, copyAssignment)
{
  ::ad_rss::state::RssStateSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveAssignment)
{
  ::ad_rss::state::RssStateSnapshot value;
  value = std::move(::ad_rss::state::RssStateSnapshot(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorEqual)
{
  ::ad_rss::state::RssStateSnapshot valueA = mValue;
  ::ad_rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::state::RssStateSnapshot valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorIndividualResponsesDiffers)
{
  ::ad_rss::state::RssStateSnapshot valueA = mValue;
  ::ad_rss::state::RssStateVector individualResponses;
  ::ad_rss::state::RssState individualResponsesElement;
  ::ad_rss::world::ObjectId individualResponsesElementObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  individualResponsesElement.objectId = individualResponsesElementObjectId;
  ::ad_rss::situation::SituationId individualResponsesElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::max());
  individualResponsesElement.situationId = individualResponsesElementSituationId;
  ::ad_rss::state::LongitudinalRssState individualResponsesElementLongitudinalState;
  bool individualResponsesElementLongitudinalStateIsSafe{false};
  individualResponsesElementLongitudinalState.isSafe = individualResponsesElementLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse individualResponsesElementLongitudinalStateResponse(
    ::ad_rss::state::LongitudinalResponse::BrakeMin);
  individualResponsesElementLongitudinalState.response = individualResponsesElementLongitudinalStateResponse;
  ::ad_rss::state::RssStateInformation individualResponsesElementLongitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationSafeDistance(1e6);
  individualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = individualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator individualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = individualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  individualResponsesElementLongitudinalState.rssStateInformation
    = individualResponsesElementLongitudinalStateRssStateInformation;
  individualResponsesElement.longitudinalState = individualResponsesElementLongitudinalState;
  ::ad_rss::state::LateralRssState individualResponsesElementLateralStateRight;
  bool individualResponsesElementLateralStateRightIsSafe{false};
  individualResponsesElementLateralStateRight.isSafe = individualResponsesElementLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse individualResponsesElementLateralStateRightResponse(
    ::ad_rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateRight.response = individualResponsesElementLateralStateRightResponse;
  ::ad_rss::state::RssStateInformation individualResponsesElementLateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance individualResponsesElementLateralStateRightRssStateInformationSafeDistance(1e6);
  individualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = individualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance individualResponsesElementLateralStateRightRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = individualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator individualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateRightRssStateInformation.evaluator
    = individualResponsesElementLateralStateRightRssStateInformationEvaluator;
  individualResponsesElementLateralStateRight.rssStateInformation
    = individualResponsesElementLateralStateRightRssStateInformation;
  individualResponsesElement.lateralStateRight = individualResponsesElementLateralStateRight;
  ::ad_rss::state::LateralRssState individualResponsesElementLateralStateLeft;
  bool individualResponsesElementLateralStateLeftIsSafe{false};
  individualResponsesElementLateralStateLeft.isSafe = individualResponsesElementLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse individualResponsesElementLateralStateLeftResponse(
    ::ad_rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateLeft.response = individualResponsesElementLateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation individualResponsesElementLateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationSafeDistance(1e6);
  individualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = individualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(1e6);
  individualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator individualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = individualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  individualResponsesElementLateralStateLeft.rssStateInformation
    = individualResponsesElementLateralStateLeftRssStateInformation;
  individualResponsesElement.lateralStateLeft = individualResponsesElementLateralStateLeft;
  individualResponses.resize(0 + 1, individualResponsesElement);
  valueA.individualResponses = individualResponses;
  ::ad_rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
