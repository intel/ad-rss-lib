/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/situation/CoordinateSystemAxisValidInputRange.hpp"

TEST(CoordinateSystemAxisValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::CoordinateSystemAxis::Longitudinal));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::CoordinateSystemAxis::Lateral));
}

TEST(CoordinateSystemAxisValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Longitudinal));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::CoordinateSystemAxis::Lateral));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::situation::CoordinateSystemAxis>(minValue - 1)));
}
