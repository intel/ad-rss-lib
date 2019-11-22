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
#include "ad_rss/situation/RelativePosition.hpp"

class RelativePositionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::situation::RelativePosition value;
    ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
      ::ad_rss::situation::LongitudinalRelativePosition::InFront);
    value.longitudinalPosition = valueLongitudinalPosition;
    ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
    value.longitudinalDistance = valueLongitudinalDistance;
    ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
      ::ad_rss::situation::LateralRelativePosition::AtLeft);
    value.lateralPosition = valueLateralPosition;
    ::ad_rss::physics::Distance valueLateralDistance(0.);
    value.lateralDistance = valueLateralDistance;
    mValue = value;
  }

  ::ad_rss::situation::RelativePosition mValue;
};

TEST_F(RelativePositionTests, copyConstruction)
{
  ::ad_rss::situation::RelativePosition value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveConstruction)
{
  ::ad_rss::situation::RelativePosition value(std::move(::ad_rss::situation::RelativePosition(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, copyAssignment)
{
  ::ad_rss::situation::RelativePosition value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, moveAssignment)
{
  ::ad_rss::situation::RelativePosition value;
  value = std::move(::ad_rss::situation::RelativePosition(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativePositionTests, comparisonOperatorEqual)
{
  ::ad_rss::situation::RelativePosition valueA = mValue;
  ::ad_rss::situation::RelativePosition valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLongitudinalPositionDiffers)
{
  ::ad_rss::situation::RelativePosition valueA = mValue;
  ::ad_rss::situation::LongitudinalRelativePosition longitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
  valueA.longitudinalPosition = longitudinalPosition;
  ::ad_rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLongitudinalDistanceDiffers)
{
  ::ad_rss::situation::RelativePosition valueA = mValue;
  ::ad_rss::physics::Distance longitudinalDistance(1e6);
  valueA.longitudinalDistance = longitudinalDistance;
  ::ad_rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateralPositionDiffers)
{
  ::ad_rss::situation::RelativePosition valueA = mValue;
  ::ad_rss::situation::LateralRelativePosition lateralPosition(::ad_rss::situation::LateralRelativePosition::AtRight);
  valueA.lateralPosition = lateralPosition;
  ::ad_rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativePositionTests, comparisonOperatorLateralDistanceDiffers)
{
  ::ad_rss::situation::RelativePosition valueA = mValue;
  ::ad_rss::physics::Distance lateralDistance(1e6);
  valueA.lateralDistance = lateralDistance;
  ::ad_rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
