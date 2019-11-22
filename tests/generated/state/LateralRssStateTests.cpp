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
#include "ad_rss/state/LateralRssState.hpp"

class LateralRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::LateralRssState value;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
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

  ::ad_rss::state::LateralRssState mValue;
};

TEST_F(LateralRssStateTests, copyConstruction)
{
  ::ad_rss::state::LateralRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveConstruction)
{
  ::ad_rss::state::LateralRssState value(std::move(::ad_rss::state::LateralRssState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, copyAssignment)
{
  ::ad_rss::state::LateralRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveAssignment)
{
  ::ad_rss::state::LateralRssState value;
  value = std::move(::ad_rss::state::LateralRssState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, comparisonOperatorEqual)
{
  ::ad_rss::state::LateralRssState valueA = mValue;
  ::ad_rss::state::LateralRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorIsSafeDiffers)
{
  ::ad_rss::state::LateralRssState valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad_rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad_rss::state::LateralRssState valueA = mValue;
  ::ad_rss::state::LateralResponse response(::ad_rss::state::LateralResponse::BrakeMin);
  valueA.response = response;
  ::ad_rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorRssStateInformationDiffers)
{
  ::ad_rss::state::LateralRssState valueA = mValue;
  ::ad_rss::state::RssStateInformation rssStateInformation;
  ::ad_rss::physics::Distance rssStateInformationSafeDistance(1e6);
  rssStateInformation.safeDistance = rssStateInformationSafeDistance;
  ::ad_rss::physics::Distance rssStateInformationCurrentDistance(1e6);
  rssStateInformation.currentDistance = rssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator rssStateInformationEvaluator(
    ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  rssStateInformation.evaluator = rssStateInformationEvaluator;
  valueA.rssStateInformation = rssStateInformation;
  ::ad_rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
