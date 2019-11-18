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

#include "ad_rss/state/LateralResponseValidInputRange.hpp"

TEST(LateralResponseValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::state::LateralResponse::None));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::state::LateralResponse::BrakeMin));
}

TEST(LateralResponseValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::None));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::BrakeMin));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::state::LateralResponse>(minValue - 1)));
}
