/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
#include "ad/rss/state/LongitudinalRssState.hpp"

class LongitudinalRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::LongitudinalRssState value;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
    value.response = valueResponse;
    ::ad::rss::state::RssStateInformation valueRssStateInformation;
    ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
    valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
    ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
    valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
    valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
    value.rssStateInformation = valueRssStateInformation;
    mValue = value;
  }

  ::ad::rss::state::LongitudinalRssState mValue;
};

TEST_F(LongitudinalRssStateTests, copyConstruction)
{
  ::ad::rss::state::LongitudinalRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveConstruction)
{
  ::ad::rss::state::LongitudinalRssState value(std::move(::ad::rss::state::LongitudinalRssState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, copyAssignment)
{
  ::ad::rss::state::LongitudinalRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveAssignment)
{
  ::ad::rss::state::LongitudinalRssState value;
  value = std::move(::ad::rss::state::LongitudinalRssState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorIsSafeDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::LongitudinalResponse response(::ad::rss::state::LongitudinalResponse::BrakeMin);
  valueA.response = response;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorRssStateInformationDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::RssStateInformation rssStateInformation;
  ::ad::physics::Distance rssStateInformationSafeDistance(1e9);
  rssStateInformation.safeDistance = rssStateInformationSafeDistance;
  ::ad::physics::Distance rssStateInformationCurrentDistance(1e9);
  rssStateInformation.currentDistance = rssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator rssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rssStateInformation.evaluator = rssStateInformationEvaluator;
  valueA.rssStateInformation = rssStateInformation;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
