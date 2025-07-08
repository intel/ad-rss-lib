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
#include "ad/rss/core/LateralRelativePosition.hpp"

TEST(LateralRelativePositionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("AtLeft"),
            ::ad::rss::core::LateralRelativePosition::AtLeft);
  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("::ad::rss::core::LateralRelativePosition::AtLeft"),
            ::ad::rss::core::LateralRelativePosition::AtLeft);

  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("OverlapLeft"),
            ::ad::rss::core::LateralRelativePosition::OverlapLeft);
  ASSERT_EQ(
    fromString<::ad::rss::core::LateralRelativePosition>("::ad::rss::core::LateralRelativePosition::OverlapLeft"),
    ::ad::rss::core::LateralRelativePosition::OverlapLeft);

  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("Overlap"),
            ::ad::rss::core::LateralRelativePosition::Overlap);
  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("::ad::rss::core::LateralRelativePosition::Overlap"),
            ::ad::rss::core::LateralRelativePosition::Overlap);

  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("OverlapRight"),
            ::ad::rss::core::LateralRelativePosition::OverlapRight);
  ASSERT_EQ(
    fromString<::ad::rss::core::LateralRelativePosition>("::ad::rss::core::LateralRelativePosition::OverlapRight"),
    ::ad::rss::core::LateralRelativePosition::OverlapRight);

  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("AtRight"),
            ::ad::rss::core::LateralRelativePosition::AtRight);
  ASSERT_EQ(fromString<::ad::rss::core::LateralRelativePosition>("::ad::rss::core::LateralRelativePosition::AtRight"),
            ::ad::rss::core::LateralRelativePosition::AtRight);

  EXPECT_ANY_THROW({ fromString<::ad::rss::core::LateralRelativePosition>("NOT A VALID ENUM LITERAL"); });
}

TEST(LateralRelativePositionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::core::LateralRelativePosition::AtLeft),
            "::ad::rss::core::LateralRelativePosition::AtLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtLeft));

  ASSERT_EQ(toString(::ad::rss::core::LateralRelativePosition::OverlapLeft),
            "::ad::rss::core::LateralRelativePosition::OverlapLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapLeft));

  ASSERT_EQ(toString(::ad::rss::core::LateralRelativePosition::Overlap),
            "::ad::rss::core::LateralRelativePosition::Overlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::Overlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::Overlap));

  ASSERT_EQ(toString(::ad::rss::core::LateralRelativePosition::OverlapRight),
            "::ad::rss::core::LateralRelativePosition::OverlapRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::OverlapRight));

  ASSERT_EQ(toString(::ad::rss::core::LateralRelativePosition::AtRight),
            "::ad::rss::core::LateralRelativePosition::AtRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::core::LateralRelativePosition::AtRight));

  ASSERT_EQ(toString(static_cast<::ad::rss::core::LateralRelativePosition>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::core::LateralRelativePosition>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LateralRelativePositionTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::core::LateralRelativePosition value(::ad::rss::core::LateralRelativePosition::AtLeft);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
