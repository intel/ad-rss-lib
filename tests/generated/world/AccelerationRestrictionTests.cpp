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
#include "ad_rss/world/AccelerationRestriction.hpp"

class AccelerationRestrictionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::AccelerationRestriction value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    value.timeIndex = valueTimeIndex;
    ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
    ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-10);
    valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
    ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-10);
    valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
    valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
    valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
    value.lateralLeftRange = valueLateralLeftRange;
    ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
    ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-10);
    valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
    ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-10);
    valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
    valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
    valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
    value.longitudinalRange = valueLongitudinalRange;
    ::ad_rss::physics::AccelerationRange valueLateralRightRange;
    ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-10);
    valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
    ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-10);
    valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
    valueLateralRightRange.maximum = valueLateralRightRange.minimum;
    valueLateralRightRange.minimum = valueLateralRightRange.maximum;
    value.lateralRightRange = valueLateralRightRange;
    mValue = value;
  }

  ::ad_rss::world::AccelerationRestriction mValue;
};

TEST_F(AccelerationRestrictionTests, copyConstruction)
{
  ::ad_rss::world::AccelerationRestriction value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveConstruction)
{
  ::ad_rss::world::AccelerationRestriction value(std::move(::ad_rss::world::AccelerationRestriction(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, copyAssignment)
{
  ::ad_rss::world::AccelerationRestriction value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveAssignment)
{
  ::ad_rss::world::AccelerationRestriction value;
  value = std::move(::ad_rss::world::AccelerationRestriction(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorEqual)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralLeftRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange lateralLeftRange;
  ::ad_rss::physics::Acceleration lateralLeftRangeMinimum(10);
  lateralLeftRange.minimum = lateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration lateralLeftRangeMaximum(10);
  lateralLeftRange.maximum = lateralLeftRangeMaximum;
  lateralLeftRange.maximum = lateralLeftRange.minimum;
  lateralLeftRange.minimum = lateralLeftRange.maximum;
  valueA.lateralLeftRange = lateralLeftRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLongitudinalRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange longitudinalRange;
  ::ad_rss::physics::Acceleration longitudinalRangeMinimum(10);
  longitudinalRange.minimum = longitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration longitudinalRangeMaximum(10);
  longitudinalRange.maximum = longitudinalRangeMaximum;
  longitudinalRange.maximum = longitudinalRange.minimum;
  longitudinalRange.minimum = longitudinalRange.maximum;
  valueA.longitudinalRange = longitudinalRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralRightRangeDiffers)
{
  ::ad_rss::world::AccelerationRestriction valueA = mValue;
  ::ad_rss::physics::AccelerationRange lateralRightRange;
  ::ad_rss::physics::Acceleration lateralRightRangeMinimum(10);
  lateralRightRange.minimum = lateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration lateralRightRangeMaximum(10);
  lateralRightRange.maximum = lateralRightRangeMaximum;
  lateralRightRange.maximum = lateralRightRange.minimum;
  lateralRightRange.minimum = lateralRightRange.maximum;
  valueA.lateralRightRange = lateralRightRange;
  ::ad_rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
