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
    ::ad::physics::AngleRange valueOuterRange;
    ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
    valueOuterRange.minimum = valueOuterRangeMinimum;
    ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
    valueOuterRange.maximum = valueOuterRangeMaximum;
    value.outerRange = valueOuterRange;
    ::ad::physics::AngleRange valueInnerRange;
    ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
    valueInnerRange.minimum = valueInnerRangeMinimum;
    ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
    valueInnerRange.maximum = valueInnerRangeMaximum;
    value.innerRange = valueInnerRange;
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

TEST_F(HeadingRangeTests, comparisonOperatorOuterRangeDiffers)
{
  ::ad::rss::state::HeadingRange valueA = mValue;
  ::ad::physics::AngleRange outerRange;
  ::ad::physics::Angle outerRangeMinimum(6.283185308);
  outerRange.minimum = outerRangeMinimum;
  ::ad::physics::Angle outerRangeMaximum(6.283185308);
  outerRange.maximum = outerRangeMaximum;
  valueA.outerRange = outerRange;
  ::ad::rss::state::HeadingRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(HeadingRangeTests, comparisonOperatorInnerRangeDiffers)
{
  ::ad::rss::state::HeadingRange valueA = mValue;
  ::ad::physics::AngleRange innerRange;
  ::ad::physics::Angle innerRangeMinimum(6.283185308);
  innerRange.minimum = innerRangeMinimum;
  ::ad::physics::Angle innerRangeMaximum(6.283185308);
  innerRange.maximum = innerRangeMaximum;
  valueA.innerRange = innerRange;
  ::ad::rss::state::HeadingRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
