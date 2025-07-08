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

#include "ad/rss/map/RssAppendRoadBoundariesModeValidInputRange.hpp"

TEST(RssAppendRoadBoundariesModeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssAppendRoadBoundariesMode::Off));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors));
}

TEST(RssAppendRoadBoundariesModeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::Off));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes));
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::map::RssAppendRoadBoundariesMode>(minValue - 1)));
}
