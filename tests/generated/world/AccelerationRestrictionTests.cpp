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
#include "ad_rss/world/AccelerationRestriction.hpp"

class AccelerationRestrictionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::AccelerationRestriction value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
    ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
    valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
    ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
    valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
    valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
    valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
    value.lateralLeftRange = valueLateralLeftRange;
    ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
    ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
    valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
    ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
    valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
    valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
    valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
    value.longitudinalRange = valueLongitudinalRange;
    ::ad_rss::physics::AccelerationRange valueLateralRightRange;
    ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
    valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
    ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
    valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
    valueLateralRightRange.maximum = valueLateralRightRange.minimum;
    valueLateralRightRange.minimum = valueLateralRightRange.maximum;
    value.lateralRightRange = valueLateralRightRange;
    mValue = value;
  }

  ::ad_rss::world::AccelerationRestriction mValue;
};

TEST_F(AccelerationRestrictionTests, copyConstruction)
{
  ::ad_rss::world::AccelerationRestriction value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveConstruction)
{
  ::ad_rss::world::AccelerationRestriction value(std::move(::ad_rss::world::AccelerationRestriction(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, copyAssignment)
{
  ::ad_rss::world::AccelerationRestriction value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveAssignment)
{
  ::ad_rss::world::AccelerationRestriction value;
  value = std::move(::ad_rss::world::AccelerationRestriction(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorEqual)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralLeftRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange lateralLeftRange;
  ::ad_rss::physics::Acceleration lateralLeftRangeMinimum(1e2);
  lateralLeftRange.minimum = lateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration lateralLeftRangeMaximum(1e2);
  lateralLeftRange.maximum = lateralLeftRangeMaximum;
  lateralLeftRange.maximum = lateralLeftRange.minimum;
  lateralLeftRange.minimum = lateralLeftRange.maximum;
  valueA.lateralLeftRange = lateralLeftRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLongitudinalRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange longitudinalRange;
  ::ad_rss::physics::Acceleration longitudinalRangeMinimum(1e2);
  longitudinalRange.minimum = longitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration longitudinalRangeMaximum(1e2);
  longitudinalRange.maximum = longitudinalRangeMaximum;
  longitudinalRange.maximum = longitudinalRange.minimum;
  longitudinalRange.minimum = longitudinalRange.maximum;
  valueA.longitudinalRange = longitudinalRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralRightRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange lateralRightRange;
  ::ad_rss::physics::Acceleration lateralRightRangeMinimum(1e2);
  lateralRightRange.minimum = lateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration lateralRightRangeMaximum(1e2);
  lateralRightRange.maximum = lateralRightRangeMaximum;
  lateralRightRange.maximum = lateralRightRange.minimum;
  lateralRightRange.minimum = lateralRightRange.maximum;
  valueA.lateralRightRange = lateralRightRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
