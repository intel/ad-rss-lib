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

#include "ad_rss/world/RoadSegmentValidInputRange.hpp"

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::RoadSegment value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentId elementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad_rss::world::LaneSegmentType elementType(::ad_rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad_rss::world::LaneDrivingDirection elementDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad_rss::physics::MetricRange elementLength;
  ::ad_rss::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad_rss::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad_rss::physics::MetricRange elementWidth;
  ::ad_rss::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad_rss::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentId elementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad_rss::world::LaneSegmentType elementType(::ad_rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad_rss::world::LaneDrivingDirection elementDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad_rss::physics::MetricRange elementLength;
  ::ad_rss::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad_rss::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad_rss::physics::MetricRange elementWidth;
  ::ad_rss::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad_rss::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentType elementType(static_cast<::ad_rss::world::LaneSegmentType>(-1));
  element.type = elementType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
