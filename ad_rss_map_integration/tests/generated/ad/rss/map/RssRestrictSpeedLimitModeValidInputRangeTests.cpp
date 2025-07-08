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

#include "ad/rss/map/RssRestrictSpeedLimitModeValidInputRange.hpp"

TEST(RssRestrictSpeedLimitModeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode::None));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10));
}

TEST(RssRestrictSpeedLimitModeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::None));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::map::RssRestrictSpeedLimitMode>(minValue - 1)));
}
