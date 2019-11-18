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
#include "ad_rss/situation/LateralRelativePosition.hpp"

TEST(LateralRelativePositionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>("AtLeft"),
            ::ad_rss::situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(
    fromString<::ad_rss::situation::LateralRelativePosition>("::ad_rss::situation::LateralRelativePosition::AtLeft"),
    ::ad_rss::situation::LateralRelativePosition::AtLeft);

  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>("OverlapLeft"),
            ::ad_rss::situation::LateralRelativePosition::OverlapLeft);
  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>(
              "::ad_rss::situation::LateralRelativePosition::OverlapLeft"),
            ::ad_rss::situation::LateralRelativePosition::OverlapLeft);

  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>("Overlap"),
            ::ad_rss::situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(
    fromString<::ad_rss::situation::LateralRelativePosition>("::ad_rss::situation::LateralRelativePosition::Overlap"),
    ::ad_rss::situation::LateralRelativePosition::Overlap);

  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>("OverlapRight"),
            ::ad_rss::situation::LateralRelativePosition::OverlapRight);
  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>(
              "::ad_rss::situation::LateralRelativePosition::OverlapRight"),
            ::ad_rss::situation::LateralRelativePosition::OverlapRight);

  ASSERT_EQ(fromString<::ad_rss::situation::LateralRelativePosition>("AtRight"),
            ::ad_rss::situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(
    fromString<::ad_rss::situation::LateralRelativePosition>("::ad_rss::situation::LateralRelativePosition::AtRight"),
    ::ad_rss::situation::LateralRelativePosition::AtRight);

  EXPECT_ANY_THROW({ fromString<::ad_rss::situation::LateralRelativePosition>("NOT A VALID ENUM LITERAL"); });
}

TEST(LateralRelativePositionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::situation::LateralRelativePosition::AtLeft),
            "::ad_rss::situation::LateralRelativePosition::AtLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtLeft));

  ASSERT_EQ(toString(::ad_rss::situation::LateralRelativePosition::OverlapLeft),
            "::ad_rss::situation::LateralRelativePosition::OverlapLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapLeft));

  ASSERT_EQ(toString(::ad_rss::situation::LateralRelativePosition::Overlap),
            "::ad_rss::situation::LateralRelativePosition::Overlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::Overlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::Overlap));

  ASSERT_EQ(toString(::ad_rss::situation::LateralRelativePosition::OverlapRight),
            "::ad_rss::situation::LateralRelativePosition::OverlapRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::OverlapRight));

  ASSERT_EQ(toString(::ad_rss::situation::LateralRelativePosition::AtRight),
            "::ad_rss::situation::LateralRelativePosition::AtRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LateralRelativePosition::AtRight));

  ASSERT_EQ(toString(static_cast<::ad_rss::situation::LateralRelativePosition>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::situation::LateralRelativePosition>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
