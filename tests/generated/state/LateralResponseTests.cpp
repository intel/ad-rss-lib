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
#include "ad_rss/state/LateralResponse.hpp"

TEST(LateralResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::state::LateralResponse>("None"), ::ad_rss::state::LateralResponse::None);
  ASSERT_EQ(fromString<::ad_rss::state::LateralResponse>("::ad_rss::state::LateralResponse::None"),
            ::ad_rss::state::LateralResponse::None);

  ASSERT_EQ(fromString<::ad_rss::state::LateralResponse>("BrakeMin"), ::ad_rss::state::LateralResponse::BrakeMin);
  ASSERT_EQ(fromString<::ad_rss::state::LateralResponse>("::ad_rss::state::LateralResponse::BrakeMin"),
            ::ad_rss::state::LateralResponse::BrakeMin);

  EXPECT_ANY_THROW({ fromString<::ad_rss::state::LateralResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(LateralResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::state::LateralResponse::None), "::ad_rss::state::LateralResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::None));

  ASSERT_EQ(toString(::ad_rss::state::LateralResponse::BrakeMin), "::ad_rss::state::LateralResponse::BrakeMin");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::BrakeMin));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::LateralResponse::BrakeMin));

  ASSERT_EQ(toString(static_cast<::ad_rss::state::LateralResponse>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::state::LateralResponse>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
