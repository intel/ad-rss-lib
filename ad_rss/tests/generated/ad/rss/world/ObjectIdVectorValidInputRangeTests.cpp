/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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

#include "ad/rss/world/ObjectIdVectorValidInputRange.hpp"

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::ObjectIdVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::ObjectIdVector value;
  ::ad::rss::world::ObjectId element(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectIdVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::ObjectIdVector value;
  ::ad::rss::world::ObjectId element(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
