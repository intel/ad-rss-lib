/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

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
