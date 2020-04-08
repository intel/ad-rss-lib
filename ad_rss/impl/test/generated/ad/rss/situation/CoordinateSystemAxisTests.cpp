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
#include "ad/rss/situation/CoordinateSystemAxis.hpp"

TEST(CoordinateSystemAxisTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::situation::CoordinateSystemAxis>("Longitudinal"),
            ::ad::rss::situation::CoordinateSystemAxis::Longitudinal);
  ASSERT_EQ(
    fromString<::ad::rss::situation::CoordinateSystemAxis>("::ad::rss::situation::CoordinateSystemAxis::Longitudinal"),
    ::ad::rss::situation::CoordinateSystemAxis::Longitudinal);

  ASSERT_EQ(fromString<::ad::rss::situation::CoordinateSystemAxis>("Lateral"),
            ::ad::rss::situation::CoordinateSystemAxis::Lateral);
  ASSERT_EQ(
    fromString<::ad::rss::situation::CoordinateSystemAxis>("::ad::rss::situation::CoordinateSystemAxis::Lateral"),
    ::ad::rss::situation::CoordinateSystemAxis::Lateral);

  EXPECT_ANY_THROW({ fromString<::ad::rss::situation::CoordinateSystemAxis>("NOT A VALID ENUM LITERAL"); });
}

TEST(CoordinateSystemAxisTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::situation::CoordinateSystemAxis::Longitudinal),
            "::ad::rss::situation::CoordinateSystemAxis::Longitudinal");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Longitudinal));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Longitudinal));

  ASSERT_EQ(toString(::ad::rss::situation::CoordinateSystemAxis::Lateral),
            "::ad::rss::situation::CoordinateSystemAxis::Lateral");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Lateral));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Lateral));

  ASSERT_EQ(toString(static_cast<::ad::rss::situation::CoordinateSystemAxis>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::situation::CoordinateSystemAxis>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(CoordinateSystemAxisTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::situation::CoordinateSystemAxis value(::ad::rss::situation::CoordinateSystemAxis::Longitudinal);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
