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
#include "ad_rss/state/LongitudinalRssState.hpp"

class LongitudinalRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::LongitudinalRssState value;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
    value.response = valueResponse;
    ::ad_rss::state::RssStateInformation valueRssStateInformation;
    ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
    valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
    ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
    valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
    ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
    valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
    value.rssStateInformation = valueRssStateInformation;
    mValue = value;
  }

  ::ad_rss::state::LongitudinalRssState mValue;
};

TEST_F(LongitudinalRssStateTests, copyConstruction)
{
  ::ad_rss::state::LongitudinalRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveConstruction)
{
  ::ad_rss::state::LongitudinalRssState value(std::move(::ad_rss::state::LongitudinalRssState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, copyAssignment)
{
  ::ad_rss::state::LongitudinalRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveAssignment)
{
  ::ad_rss::state::LongitudinalRssState value;
  value = std::move(::ad_rss::state::LongitudinalRssState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorEqual)
{
  ::ad_rss::state::LongitudinalRssState valueA = mValue;
  ::ad_rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorIsSafeDiffers)
{
  ::ad_rss::state::LongitudinalRssState valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad_rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad_rss::state::LongitudinalRssState valueA = mValue;
  ::ad_rss::state::LongitudinalResponse response(::ad_rss::state::LongitudinalResponse::BrakeMin);
  valueA.response = response;
  ::ad_rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorRssStateInformationDiffers)
{
  ::ad_rss::state::LongitudinalRssState valueA = mValue;
  ::ad_rss::state::RssStateInformation rssStateInformation;
  ::ad_rss::physics::Distance rssStateInformationSafeDistance(1e6);
  rssStateInformation.safeDistance = rssStateInformationSafeDistance;
  ::ad_rss::physics::Distance rssStateInformationCurrentDistance(1e6);
  rssStateInformation.currentDistance = rssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator rssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  rssStateInformation.evaluator = rssStateInformationEvaluator;
  valueA.rssStateInformation = rssStateInformation;
  ::ad_rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
