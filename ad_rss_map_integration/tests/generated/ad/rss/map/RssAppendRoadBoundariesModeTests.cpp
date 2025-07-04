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
#include "ad/rss/map/RssAppendRoadBoundariesMode.hpp"

TEST(RssAppendRoadBoundariesModeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("Off"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::Off);
  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("::ad::rss::map::RssAppendRoadBoundariesMode::Off"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::Off);

  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("RouteOnly"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly);
  ASSERT_EQ(
    fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly"),
    ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly);

  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("ExpandRouteToOppositeLanes"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes);
  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>(
              "::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes);

  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("ExpandRouteToAllNeighbors"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors);
  ASSERT_EQ(fromString<::ad::rss::map::RssAppendRoadBoundariesMode>(
              "::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors"),
            ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors);

  EXPECT_ANY_THROW({ fromString<::ad::rss::map::RssAppendRoadBoundariesMode>("NOT A VALID ENUM LITERAL"); });
}

TEST(RssAppendRoadBoundariesModeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::map::RssAppendRoadBoundariesMode::Off),
            "::ad::rss::map::RssAppendRoadBoundariesMode::Off");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::Off));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::Off));

  ASSERT_EQ(toString(::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly),
            "::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));

  ASSERT_EQ(toString(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes),
            "::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes));

  ASSERT_EQ(toString(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors),
            "::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors));

  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssAppendRoadBoundariesMode>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssAppendRoadBoundariesMode>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(RssAppendRoadBoundariesModeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::map::RssAppendRoadBoundariesMode value(::ad::rss::map::RssAppendRoadBoundariesMode::Off);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
