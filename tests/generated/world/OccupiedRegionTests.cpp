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
#include "ad_rss/world/OccupiedRegion.hpp"

class OccupiedRegionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::OccupiedRegion value;
    ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
    value.segmentId = valueSegmentId;
    ::ad_rss::physics::ParametricRange valueLonRange;
    ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
    valueLonRange.minimum = valueLonRangeMinimum;
    ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
    valueLonRange.maximum = valueLonRangeMaximum;
    valueLonRange.maximum = valueLonRange.minimum;
    valueLonRange.minimum = valueLonRange.maximum;
    value.lonRange = valueLonRange;
    ::ad_rss::physics::ParametricRange valueLatRange;
    ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
    valueLatRange.minimum = valueLatRangeMinimum;
    ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
    valueLatRange.maximum = valueLatRangeMaximum;
    valueLatRange.maximum = valueLatRange.minimum;
    valueLatRange.minimum = valueLatRange.maximum;
    value.latRange = valueLatRange;
    mValue = value;
  }

  ::ad_rss::world::OccupiedRegion mValue;
};

TEST_F(OccupiedRegionTests, copyConstruction)
{
  ::ad_rss::world::OccupiedRegion value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, moveConstruction)
{
  ::ad_rss::world::OccupiedRegion value(std::move(::ad_rss::world::OccupiedRegion(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, copyAssignment)
{
  ::ad_rss::world::OccupiedRegion value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, moveAssignment)
{
  ::ad_rss::world::OccupiedRegion value;
  value = std::move(::ad_rss::world::OccupiedRegion(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, comparisonOperatorEqual)
{
  ::ad_rss::world::OccupiedRegion valueA = mValue;
  ::ad_rss::world::OccupiedRegion valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorSegmentIdDiffers)
{
  ::ad_rss::world::OccupiedRegion valueA = mValue;
  ::ad_rss::world::LaneSegmentId segmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  valueA.segmentId = segmentId;
  ::ad_rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLonRangeDiffers)
{
  ::ad_rss::world::OccupiedRegion valueA = mValue;
  ::ad_rss::physics::ParametricRange lonRange;
  ::ad_rss::physics::ParametricValue lonRangeMinimum(1.);
  lonRange.minimum = lonRangeMinimum;
  ::ad_rss::physics::ParametricValue lonRangeMaximum(1.);
  lonRange.maximum = lonRangeMaximum;
  lonRange.maximum = lonRange.minimum;
  lonRange.minimum = lonRange.maximum;
  valueA.lonRange = lonRange;
  ::ad_rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLatRangeDiffers)
{
  ::ad_rss::world::OccupiedRegion valueA = mValue;
  ::ad_rss::physics::ParametricRange latRange;
  ::ad_rss::physics::ParametricValue latRangeMinimum(1.);
  latRange.minimum = latRangeMinimum;
  ::ad_rss::physics::ParametricValue latRangeMaximum(1.);
  latRange.maximum = latRangeMaximum;
  latRange.maximum = latRange.minimum;
  latRange.minimum = latRange.maximum;
  valueA.latRange = latRange;
  ::ad_rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
