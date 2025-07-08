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
#include "ad/rss/map/RssVehicleAccelerationRestrictions.hpp"

class RssVehicleAccelerationRestrictionsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssVehicleAccelerationRestrictions value;
    ::ad::physics::AccelerationRange valueLongitudinal_range;
    ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
    valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
    ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
    valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
    valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
    valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
    value.longitudinal_range = valueLongitudinal_range;
    ::ad::physics::AccelerationRange valueLateral_combined_range;
    ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
    valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
    ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
    valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
    valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
    valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
    value.lateral_combined_range = valueLateral_combined_range;
    mValue = value;
  }

  ::ad::rss::map::RssVehicleAccelerationRestrictions mValue;
};

TEST_F(RssVehicleAccelerationRestrictionsTests, copyConstruction)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, moveConstruction)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions tmpValue(mValue);
  ::ad::rss::map::RssVehicleAccelerationRestrictions value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, copyAssignment)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, moveAssignment)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions tmpValue(mValue);
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueA = mValue;
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, comparisonOperatorLongitudinal_rangeDiffers)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueA = mValue;
  ::ad::physics::AccelerationRange longitudinal_range;
  ::ad::physics::Acceleration longitudinal_rangeMinimum(1e2);
  longitudinal_range.minimum = longitudinal_rangeMinimum;
  ::ad::physics::Acceleration longitudinal_rangeMaximum(1e2);
  longitudinal_range.maximum = longitudinal_rangeMaximum;
  longitudinal_range.maximum = longitudinal_range.minimum;
  longitudinal_range.minimum = longitudinal_range.maximum;
  valueA.longitudinal_range = longitudinal_range;
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssVehicleAccelerationRestrictionsTests, comparisonOperatorLateral_combined_rangeDiffers)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueA = mValue;
  ::ad::physics::AccelerationRange lateral_combined_range;
  ::ad::physics::Acceleration lateral_combined_rangeMinimum(1e2);
  lateral_combined_range.minimum = lateral_combined_rangeMinimum;
  ::ad::physics::Acceleration lateral_combined_rangeMaximum(1e2);
  lateral_combined_range.maximum = lateral_combined_rangeMaximum;
  lateral_combined_range.maximum = lateral_combined_range.minimum;
  lateral_combined_range.minimum = lateral_combined_range.maximum;
  valueA.lateral_combined_range = lateral_combined_range;
  ::ad::rss::map::RssVehicleAccelerationRestrictions valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
