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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/RoadSegmentType.hpp"

TEST(RoadSegmentTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::RoadSegmentType>("Normal"), ::ad::rss::world::RoadSegmentType::Normal);
  ASSERT_EQ(fromString<::ad::rss::world::RoadSegmentType>("::ad::rss::world::RoadSegmentType::Normal"),
            ::ad::rss::world::RoadSegmentType::Normal);

  ASSERT_EQ(fromString<::ad::rss::world::RoadSegmentType>("Intersection"),
            ::ad::rss::world::RoadSegmentType::Intersection);
  ASSERT_EQ(fromString<::ad::rss::world::RoadSegmentType>("::ad::rss::world::RoadSegmentType::Intersection"),
            ::ad::rss::world::RoadSegmentType::Intersection);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::RoadSegmentType>("NOT A VALID ENUM LITERAL"); });
}

TEST(RoadSegmentTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::RoadSegmentType::Normal), "::ad::rss::world::RoadSegmentType::Normal");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Normal));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Normal));

  ASSERT_EQ(toString(::ad::rss::world::RoadSegmentType::Intersection),
            "::ad::rss::world::RoadSegmentType::Intersection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Intersection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::RoadSegmentType::Intersection));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::RoadSegmentType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::RoadSegmentType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(RoadSegmentTypeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::RoadSegmentType value(::ad::rss::world::RoadSegmentType::Normal);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
