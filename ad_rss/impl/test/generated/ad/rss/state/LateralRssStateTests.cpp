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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/state/LateralRssState.hpp"

class LateralRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::LateralRssState value;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
    value.response = valueResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
    ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
    valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLat.accelMax = valueAlphaLatAccelMax;
    ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
    valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
    value.alphaLat = valueAlphaLat;
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

  ::ad::rss::state::LateralRssState mValue;
};

TEST_F(LateralRssStateTests, copyConstruction)
{
  ::ad::rss::state::LateralRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveConstruction)
{
  ::ad::rss::state::LateralRssState tmpValue(mValue);
  ::ad::rss::state::LateralRssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, copyAssignment)
{
  ::ad::rss::state::LateralRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveAssignment)
{
  ::ad::rss::state::LateralRssState tmpValue(mValue);
  ::ad::rss::state::LateralRssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LateralRssStateTests, comparisonOperatorIsSafeDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::LateralResponse response(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.response = response;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorAlphaLatDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alphaLat;
  ::ad::physics::Acceleration alphaLatAccelMax(1e2);
  alphaLat.accelMax = alphaLatAccelMax;
  ::ad::physics::Acceleration alphaLatBrakeMin(1e2);
  alphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alphaLat.brakeMin = alphaLatBrakeMin;
  valueA.alphaLat = alphaLat;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorRssStateInformationDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::RssStateInformation rssStateInformation;
  ::ad::physics::Distance rssStateInformationSafeDistance(1e9);
  rssStateInformation.safeDistance = rssStateInformationSafeDistance;
  ::ad::physics::Distance rssStateInformationCurrentDistance(1e9);
  rssStateInformation.currentDistance = rssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator rssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rssStateInformation.evaluator = rssStateInformationEvaluator;
  valueA.rssStateInformation = rssStateInformation;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
