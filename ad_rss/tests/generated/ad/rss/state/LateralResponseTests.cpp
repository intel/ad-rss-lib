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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/state/LateralResponse.hpp"

TEST(LateralResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::state::LateralResponse>("None"), ::ad::rss::state::LateralResponse::None);
  ASSERT_EQ(fromString<::ad::rss::state::LateralResponse>("::ad::rss::state::LateralResponse::None"),
            ::ad::rss::state::LateralResponse::None);

  ASSERT_EQ(fromString<::ad::rss::state::LateralResponse>("BrakeMin"), ::ad::rss::state::LateralResponse::BrakeMin);
  ASSERT_EQ(fromString<::ad::rss::state::LateralResponse>("::ad::rss::state::LateralResponse::BrakeMin"),
            ::ad::rss::state::LateralResponse::BrakeMin);

  EXPECT_ANY_THROW({ fromString<::ad::rss::state::LateralResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(LateralResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::state::LateralResponse::None), "::ad::rss::state::LateralResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::None));

  ASSERT_EQ(toString(::ad::rss::state::LateralResponse::BrakeMin), "::ad::rss::state::LateralResponse::BrakeMin");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::BrakeMin));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::LateralResponse::BrakeMin));

  ASSERT_EQ(toString(static_cast<::ad::rss::state::LateralResponse>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::state::LateralResponse>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LateralResponseTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::LateralResponse value(::ad::rss::state::LateralResponse::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
