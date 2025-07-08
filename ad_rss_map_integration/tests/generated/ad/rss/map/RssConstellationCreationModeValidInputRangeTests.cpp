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

#include "ad/rss/map/RssConstellationCreationModeValidInputRange.hpp"

TEST(RssConstellationCreationModeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssConstellationCreationMode::Ignore));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssConstellationCreationMode::NotRelevant));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssConstellationCreationMode::Structured));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::map::RssConstellationCreationMode::Unstructured));
}

TEST(RssConstellationCreationModeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Ignore));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::NotRelevant));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Structured));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Unstructured));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::map::RssConstellationCreationMode>(minValue - 1)));
}
