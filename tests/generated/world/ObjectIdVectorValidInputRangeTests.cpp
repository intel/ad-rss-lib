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

#include "ad_rss/world/ObjectIdVectorValidInputRange.hpp"

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::ObjectIdVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::ObjectIdVector value;
  ::ad_rss::world::ObjectId element(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::ObjectIdVector value;
  ::ad_rss::world::ObjectId element(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
