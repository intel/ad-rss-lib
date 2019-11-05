/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/ObjectTypeValidInputRange.hpp"

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::Invalid));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::EgoVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::OtherVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::ArtificialObject));
}

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::world::ObjectType>(minValue - 1)));
}
