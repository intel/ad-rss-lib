/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

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
