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

#include "ad_rss/world/LaneSegmentTypeValidInputRange.hpp"

TEST(LaneSegmentTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::LaneSegmentType::Normal));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::LaneSegmentType::Intersection));
}

TEST(LaneSegmentTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Normal));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Intersection));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::world::LaneSegmentType>(minValue - 1)));
}
