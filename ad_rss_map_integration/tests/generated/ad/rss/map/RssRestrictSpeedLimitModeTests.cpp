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
#include "ad/rss/map/RssRestrictSpeedLimitMode.hpp"

TEST(RssRestrictSpeedLimitModeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("None"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("::ad::rss::map::RssRestrictSpeedLimitMode::None"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::None);

  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("ExactSpeedLimit"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit);
  ASSERT_EQ(
    fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit"),
    ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit);

  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("IncreasedSpeedLimit5"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5);
  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>(
              "::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5);

  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("IncreasedSpeedLimit10"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10);
  ASSERT_EQ(fromString<::ad::rss::map::RssRestrictSpeedLimitMode>(
              "::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10"),
            ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10);

  EXPECT_ANY_THROW({ fromString<::ad::rss::map::RssRestrictSpeedLimitMode>("NOT A VALID ENUM LITERAL"); });
}

TEST(RssRestrictSpeedLimitModeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::map::RssRestrictSpeedLimitMode::None),
            "::ad::rss::map::RssRestrictSpeedLimitMode::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::None));

  ASSERT_EQ(toString(::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit),
            "::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit));

  ASSERT_EQ(toString(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5),
            "::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5));

  ASSERT_EQ(toString(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10),
            "::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10));

  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssRestrictSpeedLimitMode>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssRestrictSpeedLimitMode>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(RssRestrictSpeedLimitModeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::map::RssRestrictSpeedLimitMode value(::ad::rss::map::RssRestrictSpeedLimitMode::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
