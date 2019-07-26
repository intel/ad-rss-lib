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
#include "ad/rss/world/AccelerationRestriction.hpp"

class AccelerationRestrictionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::AccelerationRestriction value;
    ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad::physics::AccelerationRange valueLateralLeftRange;
    ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
    valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
    ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
    valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
    valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
    valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
    value.lateralLeftRange = valueLateralLeftRange;
    ::ad::physics::AccelerationRange valueLongitudinalRange;
    ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
    valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
    ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
    valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
    valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
    valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
    value.longitudinalRange = valueLongitudinalRange;
    ::ad::physics::AccelerationRange valueLateralRightRange;
    ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
    valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
    ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
    valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
    valueLateralRightRange.maximum = valueLateralRightRange.minimum;
    valueLateralRightRange.minimum = valueLateralRightRange.maximum;
    value.lateralRightRange = valueLateralRightRange;
    mValue = value;
  }

  ::ad::rss::world::AccelerationRestriction mValue;
};

TEST_F(AccelerationRestrictionTests, copyConstruction)
{
  ::ad::rss::world::AccelerationRestriction value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveConstruction)
{
  ::ad::rss::world::AccelerationRestriction value(std::move(::ad::rss::world::AccelerationRestriction(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, copyAssignment)
{
  ::ad::rss::world::AccelerationRestriction value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, moveAssignment)
{
  ::ad::rss::world::AccelerationRestriction value;
  value = std::move(::ad::rss::world::AccelerationRestriction(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorEqual)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralLeftRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateralLeftRange;
  ::ad::physics::Acceleration lateralLeftRangeMinimum(1e2);
  lateralLeftRange.minimum = lateralLeftRangeMinimum;
  ::ad::physics::Acceleration lateralLeftRangeMaximum(1e2);
  lateralLeftRange.maximum = lateralLeftRangeMaximum;
  lateralLeftRange.maximum = lateralLeftRange.minimum;
  lateralLeftRange.minimum = lateralLeftRange.maximum;
  valueA.lateralLeftRange = lateralLeftRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLongitudinalRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange longitudinalRange;
  ::ad::physics::Acceleration longitudinalRangeMinimum(1e2);
  longitudinalRange.minimum = longitudinalRangeMinimum;
  ::ad::physics::Acceleration longitudinalRangeMaximum(1e2);
  longitudinalRange.maximum = longitudinalRangeMaximum;
  longitudinalRange.maximum = longitudinalRange.minimum;
  longitudinalRange.minimum = longitudinalRange.maximum;
  valueA.longitudinalRange = longitudinalRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRestrictionTests, comparisonOperatorLateralRightRangeDiffers)
{
  ::ad::rss::world::AccelerationRestriction valueA = mValue;
  ::ad::physics::AccelerationRange lateralRightRange;
  ::ad::physics::Acceleration lateralRightRangeMinimum(1e2);
  lateralRightRange.minimum = lateralRightRangeMinimum;
  ::ad::physics::Acceleration lateralRightRangeMaximum(1e2);
  lateralRightRange.maximum = lateralRightRangeMaximum;
  lateralRightRange.maximum = lateralRightRange.minimum;
  lateralRightRange.minimum = lateralRightRange.maximum;
  valueA.lateralRightRange = lateralRightRange;
  ::ad::rss::world::AccelerationRestriction valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
