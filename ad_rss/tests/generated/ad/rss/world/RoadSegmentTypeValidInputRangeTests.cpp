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

#include "ad/rss/world/RoadSegmentTypeValidInputRange.hpp"

TEST(RoadSegmentTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::RoadSegmentType::Normal));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::RoadSegmentType::Intersection));
}

TEST(RoadSegmentTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Normal));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Intersection));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::world::RoadSegmentType>(minValue - 1)));
}
