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
  ::ad::physics::Distance longitudinalDistance(1e6);
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
  ::ad::physics::Distance lateralDistance(1e6);
  valueA.lateralDistance = lateralDistance;
  ::ad::rss::situation::RelativePosition valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
