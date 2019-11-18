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
#include "ad_rss/world/RssDynamics.hpp"

class RssDynamicsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::RssDynamics value;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
    ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
    valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLon.accelMax = valueAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
    valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
    valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
    valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
    valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
    valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
    value.alphaLon = valueAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
    ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
    valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLat.accelMax = valueAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
    valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
    value.alphaLat = valueAlphaLat;
    ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
    value.lateralFluctuationMargin = valueLateralFluctuationMargin;
    ::ad_rss::physics::Duration valueResponseTime(0.);
    valueResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    value.responseTime = valueResponseTime;
    mValue = value;
  }

  ::ad_rss::world::RssDynamics mValue;
};

TEST_F(RssDynamicsTests, copyConstruction)
{
  ::ad_rss::world::RssDynamics value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveConstruction)
{
  ::ad_rss::world::RssDynamics value(std::move(::ad_rss::world::RssDynamics(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, copyAssignment)
{
  ::ad_rss::world::RssDynamics value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveAssignment)
{
  ::ad_rss::world::RssDynamics value;
  value = std::move(::ad_rss::world::RssDynamics(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, comparisonOperatorEqual)
{
  ::ad_rss::world::RssDynamics valueA = mValue;
  ::ad_rss::world::RssDynamics valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLonDiffers)
{
  ::ad_rss::world::RssDynamics valueA = mValue;
  ::ad_rss::world::LongitudinalRssAccelerationValues alphaLon;
  ::ad_rss::physics::Acceleration alphaLonAccelMax(1e2);
  alphaLon.accelMax = alphaLonAccelMax;
  ::ad_rss::physics::Acceleration alphaLonBrakeMax(1e2);
  alphaLon.brakeMax = alphaLonBrakeMax;
  ::ad_rss::physics::Acceleration alphaLonBrakeMin(1e2);
  alphaLon.brakeMin = alphaLonBrakeMin;
  ::ad_rss::physics::Acceleration alphaLonBrakeMinCorrect(1e2);
  alphaLon.brakeMinCorrect = alphaLonBrakeMinCorrect;
  alphaLon.brakeMax = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMinCorrect;
  alphaLon.brakeMinCorrect = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMax;
  valueA.alphaLon = alphaLon;
  ::ad_rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLatDiffers)
{
  ::ad_rss::world::RssDynamics valueA = mValue;
  ::ad_rss::world::LateralRssAccelerationValues alphaLat;
  ::ad_rss::physics::Acceleration alphaLatAccelMax(1e2);
  alphaLat.accelMax = alphaLatAccelMax;
  ::ad_rss::physics::Acceleration alphaLatBrakeMin(1e2);
  alphaLat.brakeMin = alphaLatBrakeMin;
  valueA.alphaLat = alphaLat;
  ::ad_rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorLateralFluctuationMarginDiffers)
{
  ::ad_rss::world::RssDynamics valueA = mValue;
  ::ad_rss::physics::Distance lateralFluctuationMargin(1e6);
  valueA.lateralFluctuationMargin = lateralFluctuationMargin;
  ::ad_rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorResponseTimeDiffers)
{
  ::ad_rss::world::RssDynamics valueA = mValue;
  ::ad_rss::physics::Duration responseTime(100.);
  valueA.responseTime = responseTime;
  ::ad_rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
