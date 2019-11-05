/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/LaneSegmentType.hpp"

TEST(LaneSegmentTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::LaneSegmentType>("Normal"), ::ad::rss::world::LaneSegmentType::Normal);
  ASSERT_EQ(fromString<::ad::rss::world::LaneSegmentType>("::ad::rss::world::LaneSegmentType::Normal"),
            ::ad::rss::world::LaneSegmentType::Normal);

  ASSERT_EQ(fromString<::ad::rss::world::LaneSegmentType>("Intersection"),
            ::ad::rss::world::LaneSegmentType::Intersection);
  ASSERT_EQ(fromString<::ad::rss::world::LaneSegmentType>("::ad::rss::world::LaneSegmentType::Intersection"),
            ::ad::rss::world::LaneSegmentType::Intersection);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::LaneSegmentType>("NOT A VALID ENUM LITERAL"); });
}

TEST(LaneSegmentTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::LaneSegmentType::Normal), "::ad::rss::world::LaneSegmentType::Normal");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Normal));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Normal));

  ASSERT_EQ(toString(::ad::rss::world::LaneSegmentType::Intersection),
            "::ad::rss::world::LaneSegmentType::Intersection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Intersection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::LaneSegmentType::Intersection));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::LaneSegmentType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::LaneSegmentType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
