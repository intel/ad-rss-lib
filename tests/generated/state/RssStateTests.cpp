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
#include "ad_rss/state/RssState.hpp"

class RssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    valueLongitudinalStateRssStateInformation.currentDistance
      = valueLongitudinalStateRssStateInformationCurrentDistance;
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
    valueLateralStateRightRssStateInformation.currentDistance
      = valueLateralStateRightRssStateInformationCurrentDistance;
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
    mValue = value;
  }

  ::ad_rss::state::RssState mValue;
};

TEST_F(RssStateTests, copyConstruction)
{
  ::ad_rss::state::RssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveConstruction)
{
  ::ad_rss::state::RssState value(std::move(::ad_rss::state::RssState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, copyAssignment)
{
  ::ad_rss::state::RssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveAssignment)
{
  ::ad_rss::state::RssState value;
  value = std::move(::ad_rss::state::RssState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, comparisonOperatorEqual)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorObjectIdDiffers)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::world::ObjectId objectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorSituationIdDiffers)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::situation::SituationId situationId(std::numeric_limits<::ad_rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLongitudinalStateDiffers)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::state::LongitudinalRssState longitudinalState;
  bool longitudinalStateIsSafe{false};
  longitudinalState.isSafe = longitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse longitudinalStateResponse(::ad_rss::state::LongitudinalResponse::BrakeMin);
  longitudinalState.response = longitudinalStateResponse;
  ::ad_rss::state::RssStateInformation longitudinalStateRssStateInformation;
  ::ad_rss::physics::Distance longitudinalStateRssStateInformationSafeDistance(1e6);
  longitudinalStateRssStateInformation.safeDistance = longitudinalStateRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance longitudinalStateRssStateInformationCurrentDistance(1e6);
  longitudinalStateRssStateInformation.currentDistance = longitudinalStateRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator longitudinalStateRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  longitudinalStateRssStateInformation.evaluator = longitudinalStateRssStateInformationEvaluator;
  longitudinalState.rssStateInformation = longitudinalStateRssStateInformation;
  valueA.longitudinalState = longitudinalState;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateRightDiffers)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::state::LateralRssState lateralStateRight;
  bool lateralStateRightIsSafe{false};
  lateralStateRight.isSafe = lateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse lateralStateRightResponse(::ad_rss::state::LateralResponse::BrakeMin);
  lateralStateRight.response = lateralStateRightResponse;
  ::ad_rss::state::RssStateInformation lateralStateRightRssStateInformation;
  ::ad_rss::physics::Distance lateralStateRightRssStateInformationSafeDistance(1e6);
  lateralStateRightRssStateInformation.safeDistance = lateralStateRightRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance lateralStateRightRssStateInformationCurrentDistance(1e6);
  lateralStateRightRssStateInformation.currentDistance = lateralStateRightRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator lateralStateRightRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateRightRssStateInformation.evaluator = lateralStateRightRssStateInformationEvaluator;
  lateralStateRight.rssStateInformation = lateralStateRightRssStateInformation;
  valueA.lateralStateRight = lateralStateRight;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateLeftDiffers)
{
  ::ad_rss::state::RssState valueA = mValue;
  ::ad_rss::state::LateralRssState lateralStateLeft;
  bool lateralStateLeftIsSafe{false};
  lateralStateLeft.isSafe = lateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse lateralStateLeftResponse(::ad_rss::state::LateralResponse::BrakeMin);
  lateralStateLeft.response = lateralStateLeftResponse;
  ::ad_rss::state::RssStateInformation lateralStateLeftRssStateInformation;
  ::ad_rss::physics::Distance lateralStateLeftRssStateInformationSafeDistance(1e6);
  lateralStateLeftRssStateInformation.safeDistance = lateralStateLeftRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance lateralStateLeftRssStateInformationCurrentDistance(1e6);
  lateralStateLeftRssStateInformation.currentDistance = lateralStateLeftRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator lateralStateLeftRssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateLeftRssStateInformation.evaluator = lateralStateLeftRssStateInformationEvaluator;
  lateralStateLeft.rssStateInformation = lateralStateLeftRssStateInformation;
  valueA.lateralStateLeft = lateralStateLeft;
  ::ad_rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
