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
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"

class LongitudinalRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::LongitudinalRssAccelerationValues value;
    ::ad::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad::physics::Acceleration valueBrakeMax(-1e2);
    value.brakeMax = valueBrakeMax;
    ::ad::physics::Acceleration valueBrakeMin(-1e2);
    value.brakeMin = valueBrakeMin;
    ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
    valueBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    value.brakeMinCorrect = valueBrakeMinCorrect;
    value.brakeMin = value.brakeMinCorrect;
    value.brakeMax = value.brakeMin;
    value.brakeMin = value.brakeMax;
    value.brakeMinCorrect = value.brakeMin;
    mValue = value;
  }

  ::ad::rss::world::LongitudinalRssAccelerationValues mValue;
};

TEST_F(LongitudinalRssAccelerationValuesTests, copyConstruction)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveConstruction)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value(
    std::move(::ad::rss::world::LongitudinalRssAccelerationValues(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, copyAssignment)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveAssignment)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  value = std::move(::ad::rss::world::LongitudinalRssAccelerationValues(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorAccelMaxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration accelMax(1e2);
  valueA.accelMax = accelMax;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMaxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMax(1e2);
  valueA.brakeMax = brakeMax;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMin(1e2);
  valueA.brakeMin = brakeMin;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinCorrectDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMinCorrect(1e2);
  valueA.brakeMinCorrect = brakeMinCorrect;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
