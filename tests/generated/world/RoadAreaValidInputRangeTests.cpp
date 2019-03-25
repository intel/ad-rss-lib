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

#include "ad_rss/world/RoadAreaValidInputRange.hpp"

TEST(RoadAreaValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::RoadArea value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::RoadArea value;
  ::ad_rss::world::RoadSegment element;
  ::ad_rss::world::LaneSegment elementElement;
  ::ad_rss::world::LaneSegmentId elementElementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  elementElement.id = elementElementId;
  ::ad_rss::world::LaneSegmentType elementElementType(::ad_rss::world::LaneSegmentType::Normal);
  elementElement.type = elementElementType;
  ::ad_rss::world::LaneDrivingDirection elementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  elementElement.drivingDirection = elementElementDrivingDirection;
  ::ad_rss::physics::MetricRange elementElementLength;
  ::ad_rss::physics::Distance elementElementLengthMinimum(0.);
  elementElementLength.minimum = elementElementLengthMinimum;
  ::ad_rss::physics::Distance elementElementLengthMaximum(0.);
  elementElementLength.maximum = elementElementLengthMaximum;
  elementElementLength.maximum = elementElementLength.minimum;
  elementElementLength.minimum = elementElementLength.maximum;
  elementElement.length = elementElementLength;
  ::ad_rss::physics::MetricRange elementElementWidth;
  ::ad_rss::physics::Distance elementElementWidthMinimum(0.);
  elementElementWidth.minimum = elementElementWidthMinimum;
  ::ad_rss::physics::Distance elementElementWidthMaximum(0.);
  elementElementWidth.maximum = elementElementWidthMaximum;
  elementElementWidth.maximum = elementElementWidth.minimum;
  elementElementWidth.minimum = elementElementWidth.maximum;
  elementElement.width = elementElementWidth;
  element.resize(1, elementElement);
  value.resize(50, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::RoadArea value;
  ::ad_rss::world::RoadSegment element;
  ::ad_rss::world::LaneSegment elementElement;
  ::ad_rss::world::LaneSegmentId elementElementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  elementElement.id = elementElementId;
  ::ad_rss::world::LaneSegmentType elementElementType(::ad_rss::world::LaneSegmentType::Normal);
  elementElement.type = elementElementType;
  ::ad_rss::world::LaneDrivingDirection elementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  elementElement.drivingDirection = elementElementDrivingDirection;
  ::ad_rss::physics::MetricRange elementElementLength;
  ::ad_rss::physics::Distance elementElementLengthMinimum(0.);
  elementElementLength.minimum = elementElementLengthMinimum;
  ::ad_rss::physics::Distance elementElementLengthMaximum(0.);
  elementElementLength.maximum = elementElementLengthMaximum;
  elementElementLength.maximum = elementElementLength.minimum;
  elementElementLength.minimum = elementElementLength.maximum;
  elementElement.length = elementElementLength;
  ::ad_rss::physics::MetricRange elementElementWidth;
  ::ad_rss::physics::Distance elementElementWidthMinimum(0.);
  elementElementWidth.minimum = elementElementWidthMinimum;
  ::ad_rss::physics::Distance elementElementWidthMaximum(0.);
  elementElementWidth.maximum = elementElementWidthMaximum;
  elementElementWidth.maximum = elementElementWidth.minimum;
  elementElementWidth.minimum = elementElementWidth.maximum;
  elementElement.width = elementElementWidth;
  element.resize(1, elementElement);
  value.resize(51, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::world::RoadArea value;
  ::ad_rss::world::RoadSegment element;
  ::ad_rss::world::LaneSegment elementRoadSegmentElement;
  ::ad_rss::world::LaneSegmentId elementRoadSegmentElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  elementRoadSegmentElement.id = elementRoadSegmentElementId;
  ::ad_rss::world::LaneSegmentType elementRoadSegmentElementType(::ad_rss::world::LaneSegmentType::Normal);
  elementRoadSegmentElement.type = elementRoadSegmentElementType;
  ::ad_rss::world::LaneDrivingDirection elementRoadSegmentElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  elementRoadSegmentElement.drivingDirection = elementRoadSegmentElementDrivingDirection;
  ::ad_rss::physics::MetricRange elementRoadSegmentElementLength;
  ::ad_rss::physics::Distance elementRoadSegmentElementLengthMinimum(0.);
  elementRoadSegmentElementLength.minimum = elementRoadSegmentElementLengthMinimum;
  ::ad_rss::physics::Distance elementRoadSegmentElementLengthMaximum(0.);
  elementRoadSegmentElementLength.maximum = elementRoadSegmentElementLengthMaximum;
  elementRoadSegmentElementLength.maximum = elementRoadSegmentElementLength.minimum;
  elementRoadSegmentElementLength.minimum = elementRoadSegmentElementLength.maximum;
  elementRoadSegmentElement.length = elementRoadSegmentElementLength;
  ::ad_rss::physics::MetricRange elementRoadSegmentElementWidth;
  ::ad_rss::physics::Distance elementRoadSegmentElementWidthMinimum(0.);
  elementRoadSegmentElementWidth.minimum = elementRoadSegmentElementWidthMinimum;
  ::ad_rss::physics::Distance elementRoadSegmentElementWidthMaximum(0.);
  elementRoadSegmentElementWidth.maximum = elementRoadSegmentElementWidthMaximum;
  elementRoadSegmentElementWidth.maximum = elementRoadSegmentElementWidth.minimum;
  elementRoadSegmentElementWidth.minimum = elementRoadSegmentElementWidth.maximum;
  elementRoadSegmentElement.width = elementRoadSegmentElementWidth;
  element.resize(21, elementRoadSegmentElement);
  value.resize(49, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
