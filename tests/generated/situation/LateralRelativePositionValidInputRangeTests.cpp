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

#include "ad_rss/situation/LateralRelativePositionValidInputRange.hpp"

TEST(LateralRelativePositionValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::situation::LateralRelativePosition::AtLeft));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::situation::LateralRelativePosition::OverlapLeft));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::situation::LateralRelativePosition::Overlap));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::situation::LateralRelativePosition::OverlapRight));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::situation::LateralRelativePosition::AtRight));
}

TEST(LateralRelativePositionValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtLeft));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapLeft));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::Overlap));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapRight));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtRight));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::situation::LateralRelativePosition>(minValue - 1)));
}
