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
