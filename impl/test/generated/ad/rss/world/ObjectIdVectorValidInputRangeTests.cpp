/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
