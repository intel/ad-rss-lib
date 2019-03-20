/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/world/Dynamics.hpp"

class DynamicsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::Dynamics value;
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
    mValue = value;
  }

  ::ad_rss::world::Dynamics mValue;
};

TEST_F(DynamicsTests, copyConstruction)
{
  ::ad_rss::world::Dynamics value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(DynamicsTests, moveConstruction)
{
  ::ad_rss::world::Dynamics value(std::move(::ad_rss::world::Dynamics(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(DynamicsTests, copyAssignment)
{
  ::ad_rss::world::Dynamics value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(DynamicsTests, moveAssignment)
{
  ::ad_rss::world::Dynamics value;
  value = std::move(::ad_rss::world::Dynamics(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(DynamicsTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Dynamics valueA = mValue;
  ::ad_rss::world::Dynamics valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(DynamicsTests, comparisonOperatorAlphaLonDiffers)
{
  ::ad_rss::world::Dynamics valueA = mValue;
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
  ::ad_rss::world::Dynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(DynamicsTests, comparisonOperatorAlphaLatDiffers)
{
  ::ad_rss::world::Dynamics valueA = mValue;
  ::ad_rss::world::LateralRssAccelerationValues alphaLat;
  ::ad_rss::physics::Acceleration alphaLatAccelMax(1e2);
  alphaLat.accelMax = alphaLatAccelMax;
  ::ad_rss::physics::Acceleration alphaLatBrakeMin(1e2);
  alphaLat.brakeMin = alphaLatBrakeMin;
  valueA.alphaLat = alphaLat;
  ::ad_rss::world::Dynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(DynamicsTests, comparisonOperatorLateralFluctuationMarginDiffers)
{
  ::ad_rss::world::Dynamics valueA = mValue;
  ::ad_rss::physics::Distance lateralFluctuationMargin(1e6);
  valueA.lateralFluctuationMargin = lateralFluctuationMargin;
  ::ad_rss::world::Dynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
