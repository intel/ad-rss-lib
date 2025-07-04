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
#include "ad/rss/core/RelativePosition.hpp"

class RelativePositionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::core::RelativePosition value;
    ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
    value.longitudinal_position = valueLongitudinal_position;
    ::ad::physics::Distance valueLongitudinal_distance(-1e9);
    value.longitudinal_distance = valueLongitudinal_distance;
    ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
    value.lateral_position = valueLateral_position;
    ::ad::physics::Distance valueLateral_distance(-1e9);
    value.lateral_distance = valueLateral_distance;
    mValue = value;
  }

  ::ad::rss::core::RelativePosition mValue;
};

TEST_F(RelativePositionTests, copyConstruction)
{
  ::ad::rss::core::RelativePosition value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveConstruction)
{
  ::ad::rss::core::RelativePosition tmpValue(mValue);
  ::ad::rss::core::RelativePosition value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, copyAssignment)
{
  ::ad::rss::core::RelativePosition value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveAssignment)
{
  ::ad::rss::core::RelativePosition tmpValue(mValue);
  ::ad::rss::core::RelativePosition value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, comparisonOperatorEqual)
{
  ::ad::rss::core::RelativePosition valueA = mValue;
  ::ad::rss::core::RelativePosition valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RelativePositionTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RelativePositionTests, comparisonOperatorLongitudinal_positionDiffers)
{
  ::ad::rss::core::RelativePosition valueA = mValue;
  ::ad::rss::core::LongitudinalRelativePosition longitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::AtBack);
  valueA.longitudinal_position = longitudinal_position;
  ::ad::rss::core::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLongitudinal_distanceDiffers)
{
  ::ad::rss::core::RelativePosition valueA = mValue;
  ::ad::physics::Distance longitudinal_distance(1e9);
  valueA.longitudinal_distance = longitudinal_distance;
  ::ad::rss::core::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateral_positionDiffers)
{
  ::ad::rss::core::RelativePosition valueA = mValue;
  ::ad::rss::core::LateralRelativePosition lateral_position(::ad::rss::core::LateralRelativePosition::AtRight);
  valueA.lateral_position = lateral_position;
  ::ad::rss::core::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateral_distanceDiffers)
{
  ::ad::rss::core::RelativePosition valueA = mValue;
  ::ad::physics::Distance lateral_distance(1e9);
  valueA.lateral_distance = lateral_distance;
  ::ad::rss::core::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
