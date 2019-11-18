/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/world/OccupiedRegionVectorValidInputRange.hpp"

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::OccupiedRegionVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::OccupiedRegionVector value;
  ::ad_rss::world::OccupiedRegion element;
  ::ad_rss::world::LaneSegmentId elementSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.segmentId = elementSegmentId;
  ::ad_rss::physics::ParametricRange elementLonRange;
  ::ad_rss::physics::ParametricValue elementLonRangeMinimum(0.);
  elementLonRange.minimum = elementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue elementLonRangeMaximum(0.);
  elementLonRange.maximum = elementLonRangeMaximum;
  elementLonRange.maximum = elementLonRange.minimum;
  elementLonRange.minimum = elementLonRange.maximum;
  element.lonRange = elementLonRange;
  ::ad_rss::physics::ParametricRange elementLatRange;
  ::ad_rss::physics::ParametricValue elementLatRangeMinimum(0.);
  elementLatRange.minimum = elementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue elementLatRangeMaximum(0.);
  elementLatRange.maximum = elementLatRangeMaximum;
  elementLatRange.maximum = elementLatRange.minimum;
  elementLatRange.minimum = elementLatRange.maximum;
  element.latRange = elementLatRange;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::OccupiedRegionVector value;
  ::ad_rss::world::OccupiedRegion element;
  ::ad_rss::world::LaneSegmentId elementSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.segmentId = elementSegmentId;
  ::ad_rss::physics::ParametricRange elementLonRange;
  ::ad_rss::physics::ParametricValue elementLonRangeMinimum(0.);
  elementLonRange.minimum = elementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue elementLonRangeMaximum(0.);
  elementLonRange.maximum = elementLonRangeMaximum;
  elementLonRange.maximum = elementLonRange.minimum;
  elementLonRange.minimum = elementLonRange.maximum;
  element.lonRange = elementLonRange;
  ::ad_rss::physics::ParametricRange elementLatRange;
  ::ad_rss::physics::ParametricValue elementLatRangeMinimum(0.);
  elementLatRange.minimum = elementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue elementLatRangeMaximum(0.);
  elementLatRange.maximum = elementLatRangeMaximum;
  elementLatRange.maximum = elementLatRange.minimum;
  elementLatRange.minimum = elementLatRange.maximum;
  element.latRange = elementLatRange;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::world::OccupiedRegionVector value;
  ::ad_rss::world::OccupiedRegion element;
  ::ad_rss::physics::ParametricRange elementLonRange;
  ::ad_rss::physics::ParametricValue elementLonRangeMinimum(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  elementLonRange.minimum = elementLonRangeMinimum;
  element.lonRange = elementLonRange;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
