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
#include "ad/rss/state/AccelerationRestriction.hpp"

class AccelerationRestrictionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::AccelerationRestriction value;
    ::ad::physics::AccelerationRange valueLateral_left_range;
    ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
    valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
    ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
    valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
    valueLateral_left_range.maximum = valueLateral_left_range.minimum;
    valueLateral_left_range.minimum = valueLateral_left_range.maximum;
    value.lateral_left_range = valueLateral_left_range;
    ::ad::physics::AccelerationRange valueLongitudinal_range;
    ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
    valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
    ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
    valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
    valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
    valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
    value.longitudinal_range = valueLongitudinal_range;
    ::ad::physics::AccelerationRange valueLateral_right_range;
    ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
    valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
    ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
    valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
    valueLateral_right_range.maximum = valueLateral_right_range.minimum;
    valueLateral_right_range.minimum = valueLateral_right_range.maximum;
    value.lateral_right_range = valueLateral_right_range;
    mValue = value;
  }

  ::ad::rss::state::AccelerationRestriction mValue;
};

TEST_F(AccelerationRestrictionTests, copyConstruction)
{
  ::ad::rss::state::AccelerationRestriction value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveConstruction)
{
  ::ad::rss::state::AccelerationRestriction tmpValue(mValue);
  ::ad::rss::state::AccelerationRestriction value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, copyAssignment)
{
  ::ad::rss::state::AccelerationRestriction value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveAssignment)
{
  ::ad::rss::state::AccelerationRestriction tmpValue(mValue);
  ::ad::rss::state::AccelerationRestriction value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorEqual)
{
  ::ad::rss::state::AccelerationRestriction valueA = mValue;
  ::ad::rss::state::AccelerationRestriction valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateral_left_rangeDiffers)
{
  ::ad::rss::state::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateral_left_range;
  ::ad::physics::Acceleration lateral_left_rangeMinimum(1e2);
  lateral_left_range.minimum = lateral_left_rangeMinimum;
  ::ad::physics::Acceleration lateral_left_rangeMaximum(1e2);
  lateral_left_range.maximum = lateral_left_rangeMaximum;
  lateral_left_range.maximum = lateral_left_range.minimum;
  lateral_left_range.minimum = lateral_left_range.maximum;
  valueA.lateral_left_range = lateral_left_range;
  ::ad::rss::state::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLongitudinal_rangeDiffers)
{
  ::ad::rss::state::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange longitudinal_range;
  ::ad::physics::Acceleration longitudinal_rangeMinimum(1e2);
  longitudinal_range.minimum = longitudinal_rangeMinimum;
  ::ad::physics::Acceleration longitudinal_rangeMaximum(1e2);
  longitudinal_range.maximum = longitudinal_rangeMaximum;
  longitudinal_range.maximum = longitudinal_range.minimum;
  longitudinal_range.minimum = longitudinal_range.maximum;
  valueA.longitudinal_range = longitudinal_range;
  ::ad::rss::state::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateral_right_rangeDiffers)
{
  ::ad::rss::state::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateral_right_range;
  ::ad::physics::Acceleration lateral_right_rangeMinimum(1e2);
  lateral_right_range.minimum = lateral_right_rangeMinimum;
  ::ad::physics::Acceleration lateral_right_rangeMaximum(1e2);
  lateral_right_range.maximum = lateral_right_rangeMaximum;
  lateral_right_range.maximum = lateral_right_range.minimum;
  lateral_right_range.minimum = lateral_right_range.maximum;
  valueA.lateral_right_range = lateral_right_range;
  ::ad::rss::state::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
