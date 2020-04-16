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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

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

TEST(LaneSegmentTypeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::LaneSegmentType value(::ad::rss::world::LaneSegmentType::Normal);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
