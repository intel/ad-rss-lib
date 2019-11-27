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

#include "ad/rss/state/LongitudinalResponseValidInputRange.hpp"

TEST(LongitudinalResponseValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::LongitudinalResponse::None));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::LongitudinalResponse::BrakeMinCorrect));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::LongitudinalResponse::BrakeMin));
}

TEST(LongitudinalResponseValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::None));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMinCorrect));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMin));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::state::LongitudinalResponse>(minValue - 1)));
}
