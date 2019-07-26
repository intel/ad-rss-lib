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

#include "ad/rss/world/OccupiedRegionVectorValidInputRange.hpp"

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::rss::world::LaneSegmentId elementSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.segmentId = elementSegmentId;
  ::ad::physics::ParametricRange elementLonRange;
  ::ad::physics::ParametricValue elementLonRangeMinimum(0.);
  elementLonRange.minimum = elementLonRangeMinimum;
  ::ad::physics::ParametricValue elementLonRangeMaximum(0.);
  elementLonRange.maximum = elementLonRangeMaximum;
  elementLonRange.maximum = elementLonRange.minimum;
  elementLonRange.minimum = elementLonRange.maximum;
  element.lonRange = elementLonRange;
  ::ad::physics::ParametricRange elementLatRange;
  ::ad::physics::ParametricValue elementLatRangeMinimum(0.);
  elementLatRange.minimum = elementLatRangeMinimum;
  ::ad::physics::ParametricValue elementLatRangeMaximum(0.);
  elementLatRange.maximum = elementLatRangeMaximum;
  elementLatRange.maximum = elementLatRange.minimum;
  elementLatRange.minimum = elementLatRange.maximum;
  element.latRange = elementLatRange;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::rss::world::LaneSegmentId elementSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.segmentId = elementSegmentId;
  ::ad::physics::ParametricRange elementLonRange;
  ::ad::physics::ParametricValue elementLonRangeMinimum(0.);
  elementLonRange.minimum = elementLonRangeMinimum;
  ::ad::physics::ParametricValue elementLonRangeMaximum(0.);
  elementLonRange.maximum = elementLonRangeMaximum;
  elementLonRange.maximum = elementLonRange.minimum;
  elementLonRange.minimum = elementLonRange.maximum;
  element.lonRange = elementLonRange;
  ::ad::physics::ParametricRange elementLatRange;
  ::ad::physics::ParametricValue elementLatRangeMinimum(0.);
  elementLatRange.minimum = elementLatRangeMinimum;
  ::ad::physics::ParametricValue elementLatRangeMaximum(0.);
  elementLatRange.maximum = elementLatRangeMaximum;
  elementLatRange.maximum = elementLatRange.minimum;
  elementLatRange.minimum = elementLatRange.maximum;
  element.latRange = elementLatRange;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::physics::ParametricRange elementLonRange;
  ::ad::physics::ParametricValue elementLonRangeMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  elementLonRange.minimum = elementLonRangeMinimum;
  element.lonRange = elementLonRange;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
