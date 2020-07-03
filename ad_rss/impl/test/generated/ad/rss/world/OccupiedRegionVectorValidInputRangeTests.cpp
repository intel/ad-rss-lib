/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
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

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementValid)
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
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::physics::ParametricRange elementLonRange;
  ::ad::physics::ParametricValue elementLonRangeMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  elementLonRange.minimum = elementLonRangeMinimum;
  element.lonRange = elementLonRange;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
