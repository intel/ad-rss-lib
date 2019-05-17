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
#include "ad_rss/physics/SpeedRange.hpp"

class SpeedRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::physics::SpeedRange value;
    ::ad_rss::physics::Speed valueMinimum(-100.);
    value.minimum = valueMinimum;
    ::ad_rss::physics::Speed valueMaximum(-100.);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad_rss::physics::SpeedRange mValue;
};

TEST_F(SpeedRangeTests, copyConstruction)
{
  ::ad_rss::physics::SpeedRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, moveConstruction)
{
  ::ad_rss::physics::SpeedRange value(std::move(::ad_rss::physics::SpeedRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, copyAssignment)
{
  ::ad_rss::physics::SpeedRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, moveAssignment)
{
  ::ad_rss::physics::SpeedRange value;
  value = std::move(::ad_rss::physics::SpeedRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, comparisonOperatorEqual)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SpeedRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::Speed minimum(100.);
  valueA.minimum = minimum;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SpeedRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::Speed maximum(100.);
  valueA.maximum = maximum;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
