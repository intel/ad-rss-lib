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
#include "ad/rss/situation/LateralRelativePosition.hpp"

TEST(LateralRelativePositionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>("AtLeft"),
            ::ad::rss::situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(
    fromString<::ad::rss::situation::LateralRelativePosition>("::ad::rss::situation::LateralRelativePosition::AtLeft"),
    ::ad::rss::situation::LateralRelativePosition::AtLeft);

  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>("OverlapLeft"),
            ::ad::rss::situation::LateralRelativePosition::OverlapLeft);
  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>(
              "::ad::rss::situation::LateralRelativePosition::OverlapLeft"),
            ::ad::rss::situation::LateralRelativePosition::OverlapLeft);

  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>("Overlap"),
            ::ad::rss::situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(
    fromString<::ad::rss::situation::LateralRelativePosition>("::ad::rss::situation::LateralRelativePosition::Overlap"),
    ::ad::rss::situation::LateralRelativePosition::Overlap);

  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>("OverlapRight"),
            ::ad::rss::situation::LateralRelativePosition::OverlapRight);
  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>(
              "::ad::rss::situation::LateralRelativePosition::OverlapRight"),
            ::ad::rss::situation::LateralRelativePosition::OverlapRight);

  ASSERT_EQ(fromString<::ad::rss::situation::LateralRelativePosition>("AtRight"),
            ::ad::rss::situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(
    fromString<::ad::rss::situation::LateralRelativePosition>("::ad::rss::situation::LateralRelativePosition::AtRight"),
    ::ad::rss::situation::LateralRelativePosition::AtRight);

  EXPECT_ANY_THROW({ fromString<::ad::rss::situation::LateralRelativePosition>("NOT A VALID ENUM LITERAL"); });
}

TEST(LateralRelativePositionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::situation::LateralRelativePosition::AtLeft),
            "::ad::rss::situation::LateralRelativePosition::AtLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::AtLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::AtLeft));

  ASSERT_EQ(toString(::ad::rss::situation::LateralRelativePosition::OverlapLeft),
            "::ad::rss::situation::LateralRelativePosition::OverlapLeft");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::OverlapLeft));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::OverlapLeft));

  ASSERT_EQ(toString(::ad::rss::situation::LateralRelativePosition::Overlap),
            "::ad::rss::situation::LateralRelativePosition::Overlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::Overlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::Overlap));

  ASSERT_EQ(toString(::ad::rss::situation::LateralRelativePosition::OverlapRight),
            "::ad::rss::situation::LateralRelativePosition::OverlapRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::OverlapRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::OverlapRight));

  ASSERT_EQ(toString(::ad::rss::situation::LateralRelativePosition::AtRight),
            "::ad::rss::situation::LateralRelativePosition::AtRight");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::AtRight));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::LateralRelativePosition::AtRight));

  ASSERT_EQ(toString(static_cast<::ad::rss::situation::LateralRelativePosition>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::situation::LateralRelativePosition>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LateralRelativePositionTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::situation::LateralRelativePosition value(::ad::rss::situation::LateralRelativePosition::AtLeft);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
