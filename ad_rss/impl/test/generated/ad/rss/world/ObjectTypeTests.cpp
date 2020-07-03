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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/ObjectType.hpp"

TEST(ObjectTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("Invalid"), ::ad::rss::world::ObjectType::Invalid);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::Invalid"),
            ::ad::rss::world::ObjectType::Invalid);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("EgoVehicle"), ::ad::rss::world::ObjectType::EgoVehicle);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::EgoVehicle"),
            ::ad::rss::world::ObjectType::EgoVehicle);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("OtherVehicle"), ::ad::rss::world::ObjectType::OtherVehicle);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::OtherVehicle"),
            ::ad::rss::world::ObjectType::OtherVehicle);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("Pedestrian"), ::ad::rss::world::ObjectType::Pedestrian);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::Pedestrian"),
            ::ad::rss::world::ObjectType::Pedestrian);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("ArtificialObject"),
            ::ad::rss::world::ObjectType::ArtificialObject);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::ArtificialObject"),
            ::ad::rss::world::ObjectType::ArtificialObject);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::ObjectType>("NOT A VALID ENUM LITERAL"); });
}

TEST(ObjectTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::Invalid), "::ad::rss::world::ObjectType::Invalid");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::EgoVehicle), "::ad::rss::world::ObjectType::EgoVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::OtherVehicle), "::ad::rss::world::ObjectType::OtherVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::Pedestrian), "::ad::rss::world::ObjectType::Pedestrian");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Pedestrian));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Pedestrian));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::ArtificialObject), "::ad::rss::world::ObjectType::ArtificialObject");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::ObjectType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::ObjectType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(ObjectTypeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::ObjectType value(::ad::rss::world::ObjectType::Invalid);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
