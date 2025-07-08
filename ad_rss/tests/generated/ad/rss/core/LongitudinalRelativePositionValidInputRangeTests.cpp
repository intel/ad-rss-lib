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

#include "ad/rss/core/LongitudinalRelativePositionValidInputRange.hpp"

TEST(LongitudinalRelativePositionValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LongitudinalRelativePosition::InFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LongitudinalRelativePosition::OverlapFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LongitudinalRelativePosition::Overlap));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LongitudinalRelativePosition::OverlapBack));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LongitudinalRelativePosition::AtBack));
}

TEST(LongitudinalRelativePositionValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::InFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::Overlap));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapBack));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::AtBack));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::core::LongitudinalRelativePosition>(minValue - 1)));
}
