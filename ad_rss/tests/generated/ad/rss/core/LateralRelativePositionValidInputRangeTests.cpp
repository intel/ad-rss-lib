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

#include "ad/rss/core/LateralRelativePositionValidInputRange.hpp"

TEST(LateralRelativePositionValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LateralRelativePosition::AtLeft));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LateralRelativePosition::OverlapLeft));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LateralRelativePosition::Overlap));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LateralRelativePosition::OverlapRight));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::core::LateralRelativePosition::AtRight));
}

TEST(LateralRelativePositionValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtLeft));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapLeft));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::Overlap));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapRight));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtRight));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::core::LateralRelativePosition>(minValue - 1)));
}
