/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/LaneSegmentTypeValidInputRange.hpp"

TEST(LaneSegmentTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::LaneSegmentType::Normal));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::LaneSegmentType::Intersection));
}

TEST(LaneSegmentTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Normal));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Intersection));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::world::LaneSegmentType>(minValue - 1)));
}
