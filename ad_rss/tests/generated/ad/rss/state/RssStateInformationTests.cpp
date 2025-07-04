/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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
#include "ad/rss/state/RssStateInformation.hpp"

class RssStateInformationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::RssStateInformation value;
    ::ad::physics::Distance valueSafe_distance(-1e9);
    value.safe_distance = valueSafe_distance;
    ::ad::physics::Distance valueCurrent_distance(-1e9);
    value.current_distance = valueCurrent_distance;
    ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
    value.evaluator = valueEvaluator;
    mValue = value;
  }

  ::ad::rss::state::RssStateInformation mValue;
};

TEST_F(RssStateInformationTests, copyConstruction)
{
  ::ad::rss::state::RssStateInformation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveConstruction)
{
  ::ad::rss::state::RssStateInformation tmpValue(mValue);
  ::ad::rss::state::RssStateInformation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, copyAssignment)
{
  ::ad::rss::state::RssStateInformation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveAssignment)
{
  ::ad::rss::state::RssStateInformation tmpValue(mValue);
  ::ad::rss::state::RssStateInformation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssStateInformation valueA = mValue;
  ::ad::rss::state::RssStateInformation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateInformationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssStateInformationTests, comparisonOperatorSafe_distanceDiffers)
{
  ::ad::rss::state::RssStateInformation valueA = mValue;
  ::ad::physics::Distance safe_distance(1e9);
  valueA.safe_distance = safe_distance;
  ::ad::rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorCurrent_distanceDiffers)
{
  ::ad::rss::state::RssStateInformation valueA = mValue;
  ::ad::physics::Distance current_distance(1e9);
  valueA.current_distance = current_distance;
  ::ad::rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorEvaluatorDiffers)
{
  ::ad::rss::state::RssStateInformation valueA = mValue;
  ::ad::rss::state::RssStateEvaluator evaluator(::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  valueA.evaluator = evaluator;
  ::ad::rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
