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

#include "ad_rss/physics/ParametricValueValidInputRange.hpp"

TEST(ParametricValueValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::ParametricValue value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricValueValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::ParametricValue value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ParametricValueValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::ParametricValue value(1.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ParametricValueValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::ParametricValue value(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricValueValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::ParametricValue value(1. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
