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
#include "ad/rss/core/LongitudinalRelativePosition.hpp"

TEST(LongitudinalRelativePositionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>("InFront"),
            ::ad::rss::core::LongitudinalRelativePosition::InFront);
  ASSERT_EQ(
    fromString<::ad::rss::core::LongitudinalRelativePosition>("::ad::rss::core::LongitudinalRelativePosition::InFront"),
    ::ad::rss::core::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>("OverlapFront"),
            ::ad::rss::core::LongitudinalRelativePosition::OverlapFront);
  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>(
              "::ad::rss::core::LongitudinalRelativePosition::OverlapFront"),
            ::ad::rss::core::LongitudinalRelativePosition::OverlapFront);

  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>("Overlap"),
            ::ad::rss::core::LongitudinalRelativePosition::Overlap);
  ASSERT_EQ(
    fromString<::ad::rss::core::LongitudinalRelativePosition>("::ad::rss::core::LongitudinalRelativePosition::Overlap"),
    ::ad::rss::core::LongitudinalRelativePosition::Overlap);

  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>("OverlapBack"),
            ::ad::rss::core::LongitudinalRelativePosition::OverlapBack);
  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>(
              "::ad::rss::core::LongitudinalRelativePosition::OverlapBack"),
            ::ad::rss::core::LongitudinalRelativePosition::OverlapBack);

  ASSERT_EQ(fromString<::ad::rss::core::LongitudinalRelativePosition>("AtBack"),
            ::ad::rss::core::LongitudinalRelativePosition::AtBack);
  ASSERT_EQ(
    fromString<::ad::rss::core::LongitudinalRelativePosition>("::ad::rss::core::LongitudinalRelativePosition::AtBack"),
    ::ad::rss::core::LongitudinalRelativePosition::AtBack);

  EXPECT_ANY_THROW({ fromString<::ad::rss::core::LongitudinalRelativePosition>("NOT A VALID ENUM LITERAL"); });
}

TEST(LongitudinalRelativePositionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::core::LongitudinalRelativePosition::InFront),
            "::ad::rss::core::LongitudinalRelativePosition::InFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::InFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::InFront));

  ASSERT_EQ(toString(::ad::rss::core::LongitudinalRelativePosition::OverlapFront),
            "::ad::rss::core::LongitudinalRelativePosition::OverlapFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapFront));

  ASSERT_EQ(toString(::ad::rss::core::LongitudinalRelativePosition::Overlap),
            "::ad::rss::core::LongitudinalRelativePosition::Overlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::Overlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::Overlap));

  ASSERT_EQ(toString(::ad::rss::core::LongitudinalRelativePosition::OverlapBack),
            "::ad::rss::core::LongitudinalRelativePosition::OverlapBack");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapBack));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::OverlapBack));

  ASSERT_EQ(toString(::ad::rss::core::LongitudinalRelativePosition::AtBack),
            "::ad::rss::core::LongitudinalRelativePosition::AtBack");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::AtBack));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LongitudinalRelativePosition::AtBack));

  ASSERT_EQ(toString(static_cast<::ad::rss::core::LongitudinalRelativePosition>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::core::LongitudinalRelativePosition>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LongitudinalRelativePositionTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::core::LongitudinalRelativePosition value(::ad::rss::core::LongitudinalRelativePosition::InFront);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
