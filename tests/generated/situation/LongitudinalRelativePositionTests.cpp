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
#include "ad_rss/situation/LongitudinalRelativePosition.hpp"

TEST(LongitudinalRelativePositionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>("InFront"),
            ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>(
              "::ad_rss::situation::LongitudinalRelativePosition::InFront"),
            ::ad_rss::situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>("OverlapFront"),
            ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront);
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>(
              "::ad_rss::situation::LongitudinalRelativePosition::OverlapFront"),
            ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront);

  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>("Overlap"),
            ::ad_rss::situation::LongitudinalRelativePosition::Overlap);
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>(
              "::ad_rss::situation::LongitudinalRelativePosition::Overlap"),
            ::ad_rss::situation::LongitudinalRelativePosition::Overlap);

  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>("OverlapBack"),
            ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack);
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>(
              "::ad_rss::situation::LongitudinalRelativePosition::OverlapBack"),
            ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack);

  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>("AtBack"),
            ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
  ASSERT_EQ(fromString<::ad_rss::situation::LongitudinalRelativePosition>(
              "::ad_rss::situation::LongitudinalRelativePosition::AtBack"),
            ::ad_rss::situation::LongitudinalRelativePosition::AtBack);

  EXPECT_ANY_THROW({ fromString<::ad_rss::situation::LongitudinalRelativePosition>("NOT A VALID ENUM LITERAL"); });
}

TEST(LongitudinalRelativePositionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::situation::LongitudinalRelativePosition::InFront),
            "::ad_rss::situation::LongitudinalRelativePosition::InFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::InFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::InFront));

  ASSERT_EQ(toString(::ad_rss::situation::LongitudinalRelativePosition::OverlapFront),
            "::ad_rss::situation::LongitudinalRelativePosition::OverlapFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::OverlapFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::OverlapFront));

  ASSERT_EQ(toString(::ad_rss::situation::LongitudinalRelativePosition::Overlap),
            "::ad_rss::situation::LongitudinalRelativePosition::Overlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::Overlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::Overlap));

  ASSERT_EQ(toString(::ad_rss::situation::LongitudinalRelativePosition::OverlapBack),
            "::ad_rss::situation::LongitudinalRelativePosition::OverlapBack");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::OverlapBack));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::OverlapBack));

  ASSERT_EQ(toString(::ad_rss::situation::LongitudinalRelativePosition::AtBack),
            "::ad_rss::situation::LongitudinalRelativePosition::AtBack");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::AtBack));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::LongitudinalRelativePosition::AtBack));

  ASSERT_EQ(toString(static_cast<::ad_rss::situation::LongitudinalRelativePosition>(minValue - 1)),
            "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::situation::LongitudinalRelativePosition>(maxValue + 1)),
            "UNKNOWN ENUM VALUE");
}
