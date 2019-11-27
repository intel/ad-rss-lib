/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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
#include "ad/rss/world/LaneDrivingDirection.hpp"

TEST(LaneDrivingDirectionTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("Bidirectional"),
            ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("::ad::rss::world::LaneDrivingDirection::Bidirectional"),
            ::ad::rss::world::LaneDrivingDirection::Bidirectional);

  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("Positive"),
            ::ad::rss::world::LaneDrivingDirection::Positive);
  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("::ad::rss::world::LaneDrivingDirection::Positive"),
            ::ad::rss::world::LaneDrivingDirection::Positive);

  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("Negative"),
            ::ad::rss::world::LaneDrivingDirection::Negative);
  ASSERT_EQ(fromString<::ad::rss::world::LaneDrivingDirection>("::ad::rss::world::LaneDrivingDirection::Negative"),
            ::ad::rss::world::LaneDrivingDirection::Negative);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::LaneDrivingDirection>("NOT A VALID ENUM LITERAL"); });
}

TEST(LaneDrivingDirectionTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::LaneDrivingDirection::Bidirectional),
            "::ad::rss::world::LaneDrivingDirection::Bidirectional");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Bidirectional));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Bidirectional));

  ASSERT_EQ(toString(::ad::rss::world::LaneDrivingDirection::Positive),
            "::ad::rss::world::LaneDrivingDirection::Positive");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Positive));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Positive));

  ASSERT_EQ(toString(::ad::rss::world::LaneDrivingDirection::Negative),
            "::ad::rss::world::LaneDrivingDirection::Negative");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Negative));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::LaneDrivingDirection::Negative));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::LaneDrivingDirection>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::LaneDrivingDirection>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(LaneDrivingDirectionTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::LaneDrivingDirection value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
}
