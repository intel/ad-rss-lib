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
#include "ad_rss/world/LaneSegmentType.hpp"

TEST(LaneSegmentTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::world::LaneSegmentType>("Normal"), ::ad_rss::world::LaneSegmentType::Normal);
  ASSERT_EQ(fromString<::ad_rss::world::LaneSegmentType>("::ad_rss::world::LaneSegmentType::Normal"),
            ::ad_rss::world::LaneSegmentType::Normal);

  ASSERT_EQ(fromString<::ad_rss::world::LaneSegmentType>("Intersection"),
            ::ad_rss::world::LaneSegmentType::Intersection);
  ASSERT_EQ(fromString<::ad_rss::world::LaneSegmentType>("::ad_rss::world::LaneSegmentType::Intersection"),
            ::ad_rss::world::LaneSegmentType::Intersection);

  EXPECT_ANY_THROW({ fromString<::ad_rss::world::LaneSegmentType>("NOT A VALID ENUM LITERAL"); });
}

TEST(LaneSegmentTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::world::LaneSegmentType::Normal), "::ad_rss::world::LaneSegmentType::Normal");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Normal));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Normal));

  ASSERT_EQ(toString(::ad_rss::world::LaneSegmentType::Intersection), "::ad_rss::world::LaneSegmentType::Intersection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Intersection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::LaneSegmentType::Intersection));

  ASSERT_EQ(toString(static_cast<::ad_rss::world::LaneSegmentType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::world::LaneSegmentType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
