/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
#include "ad/rss/state/LongitudinalResponse.hpp"

TEST(LongitudinalResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::state::LongitudinalResponse>("None"), ::ad::rss::state::LongitudinalResponse::None);
  ASSERT_EQ(fromString<::ad::rss::state::LongitudinalResponse>("::ad::rss::state::LongitudinalResponse::None"),
            ::ad::rss::state::LongitudinalResponse::None);

  ASSERT_EQ(fromString<::ad::rss::state::LongitudinalResponse>("BrakeMinCorrect"),
            ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(
    fromString<::ad::rss::state::LongitudinalResponse>("::ad::rss::state::LongitudinalResponse::BrakeMinCorrect"),
    ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect);

  ASSERT_EQ(fromString<::ad::rss::state::LongitudinalResponse>("BrakeMin"),
            ::ad::rss::state::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(fromString<::ad::rss::state::LongitudinalResponse>("::ad::rss::state::LongitudinalResponse::BrakeMin"),
            ::ad::rss::state::LongitudinalResponse::BrakeMin);

  EXPECT_ANY_THROW({ fromString<::ad::rss::state::LongitudinalResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(LongitudinalResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::state::LongitudinalResponse::None), "::ad::rss::state::LongitudinalResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::None));

  ASSERT_EQ(toString(::ad::rss::state::LongitudinalResponse::BrakeMinCorrect),
            "::ad::rss::state::LongitudinalResponse::BrakeMinCorrect");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMinCorrect));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMinCorrect));

  ASSERT_EQ(toString(::ad::rss::state::LongitudinalResponse::BrakeMin),
            "::ad::rss::state::LongitudinalResponse::BrakeMin");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMin));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::LongitudinalResponse::BrakeMin));

  ASSERT_EQ(toString(static_cast<::ad::rss::state::LongitudinalResponse>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::state::LongitudinalResponse>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LongitudinalResponseTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::LongitudinalResponse value(::ad::rss::state::LongitudinalResponse::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
