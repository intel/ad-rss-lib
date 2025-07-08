/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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
  ::ad::rss::world::LaneSegmentId elementSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.segment_id = elementSegment_id;
  ::ad::physics::ParametricRange elementLon_range;
  ::ad::physics::ParametricValue elementLon_rangeMinimum(0.);
  elementLon_range.minimum = elementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementLon_rangeMaximum(0.);
  elementLon_range.maximum = elementLon_rangeMaximum;
  elementLon_range.maximum = elementLon_range.minimum;
  elementLon_range.minimum = elementLon_range.maximum;
  element.lon_range = elementLon_range;
  ::ad::physics::ParametricRange elementLat_range;
  ::ad::physics::ParametricValue elementLat_rangeMinimum(0.);
  elementLat_range.minimum = elementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementLat_rangeMaximum(0.);
  elementLat_range.maximum = elementLat_rangeMaximum;
  elementLat_range.maximum = elementLat_range.minimum;
  elementLat_range.minimum = elementLat_range.maximum;
  element.lat_range = elementLat_range;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::rss::world::LaneSegmentId elementSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.segment_id = elementSegment_id;
  ::ad::physics::ParametricRange elementLon_range;
  ::ad::physics::ParametricValue elementLon_rangeMinimum(0.);
  elementLon_range.minimum = elementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementLon_rangeMaximum(0.);
  elementLon_range.maximum = elementLon_rangeMaximum;
  elementLon_range.maximum = elementLon_range.minimum;
  elementLon_range.minimum = elementLon_range.maximum;
  element.lon_range = elementLon_range;
  ::ad::physics::ParametricRange elementLat_range;
  ::ad::physics::ParametricValue elementLat_rangeMinimum(0.);
  elementLat_range.minimum = elementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementLat_rangeMaximum(0.);
  elementLat_range.maximum = elementLat_rangeMaximum;
  elementLat_range.maximum = elementLat_range.minimum;
  elementLat_range.minimum = elementLat_range.maximum;
  element.lat_range = elementLat_range;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::physics::ParametricRange elementLon_range;
  ::ad::physics::ParametricValue elementLon_rangeMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  elementLon_range.minimum = elementLon_rangeMinimum;
  element.lon_range = elementLon_range;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::rss::world::LaneSegmentId elementSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.segment_id = elementSegment_id;
  ::ad::physics::ParametricRange elementLon_range;
  ::ad::physics::ParametricValue elementLon_rangeMinimum(0.);
  elementLon_range.minimum = elementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementLon_rangeMaximum(0.);
  elementLon_range.maximum = elementLon_rangeMaximum;
  elementLon_range.maximum = elementLon_range.minimum;
  elementLon_range.minimum = elementLon_range.maximum;
  element.lon_range = elementLon_range;
  ::ad::physics::ParametricRange elementLat_range;
  ::ad::physics::ParametricValue elementLat_rangeMinimum(0.);
  elementLat_range.minimum = elementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementLat_rangeMaximum(0.);
  elementLat_range.maximum = elementLat_rangeMaximum;
  elementLat_range.maximum = elementLat_range.minimum;
  elementLat_range.minimum = elementLat_range.maximum;
  element.lat_range = elementLat_range;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::OccupiedRegionVector value;
  ::ad::rss::world::OccupiedRegion element;
  ::ad::physics::ParametricRange elementLon_range;
  ::ad::physics::ParametricValue elementLon_rangeMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  elementLon_range.minimum = elementLon_rangeMinimum;
  element.lon_range = elementLon_range;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
