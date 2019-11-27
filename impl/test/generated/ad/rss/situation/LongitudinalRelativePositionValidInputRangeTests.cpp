/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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

#include "ad/rss/situation/LongitudinalRelativePositionValidInputRange.hpp"

TEST(LongitudinalRelativePositionValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition::InFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition::OverlapFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition::Overlap));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition::OverlapBack));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition::AtBack));
}

TEST(LongitudinalRelativePositionValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LongitudinalRelativePosition::InFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LongitudinalRelativePosition::OverlapFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LongitudinalRelativePosition::Overlap));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LongitudinalRelativePosition::OverlapBack));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LongitudinalRelativePosition::AtBack));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::situation::LongitudinalRelativePosition>(minValue - 1)));
}
