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
#include "ad_rss/world/ObjectType.hpp"

TEST(ObjectTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("Invalid"), ::ad_rss::world::ObjectType::Invalid);
  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("::ad_rss::world::ObjectType::Invalid"),
            ::ad_rss::world::ObjectType::Invalid);

  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("EgoVehicle"), ::ad_rss::world::ObjectType::EgoVehicle);
  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("::ad_rss::world::ObjectType::EgoVehicle"),
            ::ad_rss::world::ObjectType::EgoVehicle);

  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("OtherVehicle"), ::ad_rss::world::ObjectType::OtherVehicle);
  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("::ad_rss::world::ObjectType::OtherVehicle"),
            ::ad_rss::world::ObjectType::OtherVehicle);

  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("ArtificialObject"), ::ad_rss::world::ObjectType::ArtificialObject);
  ASSERT_EQ(fromString<::ad_rss::world::ObjectType>("::ad_rss::world::ObjectType::ArtificialObject"),
            ::ad_rss::world::ObjectType::ArtificialObject);

  EXPECT_ANY_THROW({ fromString<::ad_rss::world::ObjectType>("NOT A VALID ENUM LITERAL"); });
}

TEST(ObjectTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::world::ObjectType::Invalid), "::ad_rss::world::ObjectType::Invalid");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::Invalid));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::ObjectType::Invalid));

  ASSERT_EQ(toString(::ad_rss::world::ObjectType::EgoVehicle), "::ad_rss::world::ObjectType::EgoVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::EgoVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::ObjectType::EgoVehicle));

  ASSERT_EQ(toString(::ad_rss::world::ObjectType::OtherVehicle), "::ad_rss::world::ObjectType::OtherVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::OtherVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::ObjectType::OtherVehicle));

  ASSERT_EQ(toString(::ad_rss::world::ObjectType::ArtificialObject), "::ad_rss::world::ObjectType::ArtificialObject");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::ArtificialObject));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::world::ObjectType::ArtificialObject));

  ASSERT_EQ(toString(static_cast<::ad_rss::world::ObjectType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::world::ObjectType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
