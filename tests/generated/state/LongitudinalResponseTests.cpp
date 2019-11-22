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
#include "ad_rss/state/LongitudinalResponse.hpp"

TEST(LongitudinalResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("None"), ::ad_rss::state::LongitudinalResponse::None);
  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("::ad_rss::state::LongitudinalResponse::None"),
            ::ad_rss::state::LongitudinalResponse::None);

  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("BrakeMinCorrect"),
            ::ad_rss::state::LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("::ad_rss::state::LongitudinalResponse::BrakeMinCorrect"),
            ::ad_rss::state::LongitudinalResponse::BrakeMinCorrect);

  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("BrakeMin"),
            ::ad_rss::state::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(fromString<::ad_rss::state::LongitudinalResponse>("::ad_rss::state::LongitudinalResponse::BrakeMin"),
            ::ad_rss::state::LongitudinalResponse::BrakeMin);

  EXPECT_ANY_THROW({ fromString<::ad_rss::state::LongitudinalResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(LongitudinalResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::state::LongitudinalResponse::None), "::ad_rss::state::LongitudinalResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::None));

  ASSERT_EQ(toString(::ad_rss::state::LongitudinalResponse::BrakeMinCorrect),
            "::ad_rss::state::LongitudinalResponse::BrakeMinCorrect");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::BrakeMinCorrect));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::BrakeMinCorrect));

  ASSERT_EQ(toString(::ad_rss::state::LongitudinalResponse::BrakeMin),
            "::ad_rss::state::LongitudinalResponse::BrakeMin");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::BrakeMin));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::LongitudinalResponse::BrakeMin));

  ASSERT_EQ(toString(static_cast<::ad_rss::state::LongitudinalResponse>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::state::LongitudinalResponse>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
