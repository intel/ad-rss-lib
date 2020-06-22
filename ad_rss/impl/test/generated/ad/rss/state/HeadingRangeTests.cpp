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
#include "ad/rss/state/HeadingRange.hpp"

class HeadingRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::HeadingRange value;
    ::ad::physics::Angle valueBegin(-6.283185308);
    value.begin = valueBegin;
    ::ad::physics::Angle valueEnd(-6.283185308);
    value.end = valueEnd;
    mValue = value;
  }

  ::ad::rss::state::HeadingRange mValue;
};

TEST_F(HeadingRangeTests, copyConstruction)
{
  ::ad::rss::state::HeadingRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(HeadingRangeTests, moveConstruction)
{
  ::ad::rss::state::HeadingRange tmpValue(mValue);
  ::ad::rss::state::HeadingRange value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(HeadingRangeTests, copyAssignment)
{
  ::ad::rss::state::HeadingRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(HeadingRangeTests, moveAssignment)
{
  ::ad::rss::state::HeadingRange tmpValue(mValue);
  ::ad::rss::state::HeadingRange value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(HeadingRangeTests, comparisonOperatorEqual)
{
  ::ad::rss::state::HeadingRange valueA = mValue;
  ::ad::rss::state::HeadingRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(HeadingRangeTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(HeadingRangeTests, comparisonOperatorBeginDiffers)
{
  ::ad::rss::state::HeadingRange valueA = mValue;
  ::ad::physics::Angle begin(6.283185308);
  valueA.begin = begin;
  ::ad::rss::state::HeadingRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(HeadingRangeTests, comparisonOperatorEndDiffers)
{
  ::ad::rss::state::HeadingRange valueA = mValue;
  ::ad::physics::Angle end(6.283185308);
  valueA.end = end;
  ::ad::rss::state::HeadingRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
