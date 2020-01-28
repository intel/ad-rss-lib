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
#include "ad/rss/situation/RelativePosition.hpp"

class RelativePositionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::RelativePosition value;
    ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::InFront);
    value.longitudinalPosition = valueLongitudinalPosition;
    ::ad::physics::Distance valueLongitudinalDistance(0.);
    value.longitudinalDistance = valueLongitudinalDistance;
    ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtLeft);
    value.lateralPosition = valueLateralPosition;
    ::ad::physics::Distance valueLateralDistance(0.);
    value.lateralDistance = valueLateralDistance;
    mValue = value;
  }

  ::ad::rss::situation::RelativePosition mValue;
};

TEST_F(RelativePositionTests, copyConstruction)
{
  ::ad::rss::situation::RelativePosition value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveConstruction)
{
  ::ad::rss::situation::RelativePosition value(std::move(::ad::rss::situation::RelativePosition(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, copyAssignment)
{
  ::ad::rss::situation::RelativePosition value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveAssignment)
{
  ::ad::rss::situation::RelativePosition value;
  value = std::move(::ad::rss::situation::RelativePosition(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::RelativePosition valueA = mValue;
  ::ad::rss::situation::RelativePosition valueB = mValue;

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

TEST_F(RelativePositionTests, comparisonOperatorLongitudinalPositionDiffers)
{
  ::ad::rss::situation::RelativePosition valueA = mValue;
  ::ad::rss::situation::LongitudinalRelativePosition longitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  valueA.longitudinalPosition = longitudinalPosition;
  ::ad::rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLongitudinalDistanceDiffers)
{
  ::ad::rss::situation::RelativePosition valueA = mValue;
  ::ad::physics::Distance longitudinalDistance(1e9);
  valueA.longitudinalDistance = longitudinalDistance;
  ::ad::rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateralPositionDiffers)
{
  ::ad::rss::situation::RelativePosition valueA = mValue;
  ::ad::rss::situation::LateralRelativePosition lateralPosition(::ad::rss::situation::LateralRelativePosition::AtRight);
  valueA.lateralPosition = lateralPosition;
  ::ad::rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateralDistanceDiffers)
{
  ::ad::rss::situation::RelativePosition valueA = mValue;
  ::ad::physics::Distance lateralDistance(1e9);
  valueA.lateralDistance = lateralDistance;
  ::ad::rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
