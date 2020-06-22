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

#include "ad/rss/state/HeadingRangeVectorValidInputRange.hpp"

TEST(HeadingRangeVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::state::HeadingRangeVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(HeadingRangeVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::state::HeadingRangeVector value;
  ::ad::rss::state::HeadingRange element;
  ::ad::physics::Angle elementBegin(-6.283185308);
  element.begin = elementBegin;
  ::ad::physics::Angle elementEnd(-6.283185308);
  element.end = elementEnd;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(HeadingRangeVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::state::HeadingRangeVector value;
  ::ad::rss::state::HeadingRange element;
  ::ad::physics::Angle elementBegin(-6.283185308 * 1.1);
  element.begin = elementBegin;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
