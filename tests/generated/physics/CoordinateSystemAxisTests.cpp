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
#include "ad_rss/physics/CoordinateSystemAxis.hpp"

TEST(CoordinateSystemAxisTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::physics::CoordinateSystemAxis>("Longitudinal"),
            ::ad_rss::physics::CoordinateSystemAxis::Longitudinal);
  ASSERT_EQ(
    fromString<::ad_rss::physics::CoordinateSystemAxis>("::ad_rss::physics::CoordinateSystemAxis::Longitudinal"),
    ::ad_rss::physics::CoordinateSystemAxis::Longitudinal);

  ASSERT_EQ(fromString<::ad_rss::physics::CoordinateSystemAxis>("Lateral"),
            ::ad_rss::physics::CoordinateSystemAxis::Lateral);
  ASSERT_EQ(fromString<::ad_rss::physics::CoordinateSystemAxis>("::ad_rss::physics::CoordinateSystemAxis::Lateral"),
            ::ad_rss::physics::CoordinateSystemAxis::Lateral);

  EXPECT_ANY_THROW({ fromString<::ad_rss::physics::CoordinateSystemAxis>("NOT A VALID ENUM LITERAL"); });
}

TEST(CoordinateSystemAxisTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::physics::CoordinateSystemAxis::Longitudinal),
            "::ad_rss::physics::CoordinateSystemAxis::Longitudinal");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Longitudinal));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Longitudinal));

  ASSERT_EQ(toString(::ad_rss::physics::CoordinateSystemAxis::Lateral),
            "::ad_rss::physics::CoordinateSystemAxis::Lateral");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Lateral));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Lateral));

  ASSERT_EQ(toString(static_cast<::ad_rss::physics::CoordinateSystemAxis>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::physics::CoordinateSystemAxis>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
