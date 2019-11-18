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

#include "ad_rss/world/ObjectTypeValidInputRange.hpp"

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::Invalid));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::EgoVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::OtherVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::ArtificialObject));
}

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::Invalid));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::EgoVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::OtherVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::ArtificialObject));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::world::ObjectType>(minValue - 1)));
}
