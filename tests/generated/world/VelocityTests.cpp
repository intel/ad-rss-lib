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
#include "ad_rss/world/Velocity.hpp"

class VelocityTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::Velocity value;
    ::ad_rss::physics::Speed valueSpeedLon(-100.);
    valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    value.speedLon = valueSpeedLon;
    ::ad_rss::physics::Speed valueSpeedLat(-100.);
    valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    value.speedLat = valueSpeedLat;
    mValue = value;
  }

  ::ad_rss::world::Velocity mValue;
};

TEST_F(VelocityTests, copyConstruction)
{
  ::ad_rss::world::Velocity value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveConstruction)
{
  ::ad_rss::world::Velocity value(std::move(::ad_rss::world::Velocity(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, copyAssignment)
{
  ::ad_rss::world::Velocity value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveAssignment)
{
  ::ad_rss::world::Velocity value;
  value = std::move(::ad_rss::world::Velocity(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLonDiffers)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::physics::Speed speedLon(100.);
  valueA.speedLon = speedLon;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLatDiffers)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::physics::Speed speedLat(100.);
  valueA.speedLat = speedLat;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
