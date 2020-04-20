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
#include "ad/rss/world/AccelerationRestriction.hpp"

class AccelerationRestrictionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::AccelerationRestriction value;
    ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad::physics::AccelerationRange valueLateralLeftRange;
    ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
    valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
    ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
    valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
    valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
    valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
    value.lateralLeftRange = valueLateralLeftRange;
    ::ad::physics::AccelerationRange valueLongitudinalRange;
    ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
    valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
    ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
    valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
    valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
    valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
    value.longitudinalRange = valueLongitudinalRange;
    ::ad::physics::AccelerationRange valueLateralRightRange;
    ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
    valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
    ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
    valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
    valueLateralRightRange.maximum = valueLateralRightRange.minimum;
    valueLateralRightRange.minimum = valueLateralRightRange.maximum;
    value.lateralRightRange = valueLateralRightRange;
    mValue = value;
  }

  ::ad::rss::world::AccelerationRestriction mValue;
};

TEST_F(AccelerationRestrictionTests, copyConstruction)
{
  ::ad::rss::world::AccelerationRestriction value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveConstruction)
{
  ::ad::rss::world::AccelerationRestriction tmpValue(mValue);
  ::ad::rss::world::AccelerationRestriction value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, copyAssignment)
{
  ::ad::rss::world::AccelerationRestriction value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveAssignment)
{
  ::ad::rss::world::AccelerationRestriction tmpValue(mValue);
  ::ad::rss::world::AccelerationRestriction value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorEqual)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

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

TEST_F(AccelerationRestrictionTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralLeftRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateralLeftRange;
  ::ad::physics::Acceleration lateralLeftRangeMinimum(1e2);
  lateralLeftRange.minimum = lateralLeftRangeMinimum;
  ::ad::physics::Acceleration lateralLeftRangeMaximum(1e2);
  lateralLeftRange.maximum = lateralLeftRangeMaximum;
  lateralLeftRange.maximum = lateralLeftRange.minimum;
  lateralLeftRange.minimum = lateralLeftRange.maximum;
  valueA.lateralLeftRange = lateralLeftRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLongitudinalRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange longitudinalRange;
  ::ad::physics::Acceleration longitudinalRangeMinimum(1e2);
  longitudinalRange.minimum = longitudinalRangeMinimum;
  ::ad::physics::Acceleration longitudinalRangeMaximum(1e2);
  longitudinalRange.maximum = longitudinalRangeMaximum;
  longitudinalRange.maximum = longitudinalRange.minimum;
  longitudinalRange.minimum = longitudinalRange.maximum;
  valueA.longitudinalRange = longitudinalRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralRightRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateralRightRange;
  ::ad::physics::Acceleration lateralRightRangeMinimum(1e2);
  lateralRightRange.minimum = lateralRightRangeMinimum;
  ::ad::physics::Acceleration lateralRightRangeMaximum(1e2);
  lateralRightRange.maximum = lateralRightRangeMaximum;
  lateralRightRange.maximum = lateralRightRange.minimum;
  lateralRightRange.minimum = lateralRightRange.maximum;
  valueA.lateralRightRange = lateralRightRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
