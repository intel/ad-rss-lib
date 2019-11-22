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

#include "ad_rss/world/LaneDrivingDirectionValidInputRange.hpp"

TEST(LaneDrivingDirectionValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::LaneDrivingDirection::Bidirectional));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::LaneDrivingDirection::Positive));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::LaneDrivingDirection::Negative));
}

TEST(LaneDrivingDirectionValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Bidirectional));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Positive));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::LaneDrivingDirection::Negative));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::world::LaneDrivingDirection>(minValue - 1)));
}
