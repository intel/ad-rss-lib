/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/state/LateralResponseValidInputRange.hpp"

TEST(LateralResponseValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::LateralResponse::None));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::LateralResponse::BrakeMin));
}

TEST(LateralResponseValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::None));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::BrakeMin));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::state::LateralResponse>(minValue - 1)));
}
