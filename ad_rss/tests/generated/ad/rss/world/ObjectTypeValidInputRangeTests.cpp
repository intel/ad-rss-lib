/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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

#include "ad/rss/world/ObjectTypeValidInputRange.hpp"

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::Invalid));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::EgoVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::OtherVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::Pedestrian));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::ArtificialObject));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::ArtificialVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::ArtificialPedestrian));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::Bicycle));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ObjectType::OtherObject));
}

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Pedestrian));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialPedestrian));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Bicycle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherObject));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::world::ObjectType>(minValue - 1)));
}
