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

#include "ad/rss/world/LaneSegmentValidInputRange.hpp"

TEST(LaneSegmentValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(0. - ::ad::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(1e6 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(0. - ::ad::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(1e6 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
