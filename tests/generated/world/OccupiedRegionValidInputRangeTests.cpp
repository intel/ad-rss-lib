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

#include "ad_rss/world/OccupiedRegionValidInputRange.hpp"

TEST(OccupiedRegionValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(
    0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooBig)
{
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

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(
    0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooBig)
{
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

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
