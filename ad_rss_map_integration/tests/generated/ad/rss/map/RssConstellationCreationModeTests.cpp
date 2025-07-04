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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/map/RssConstellationCreationMode.hpp"

TEST(RssConstellationCreationModeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>("Ignore"),
            ::ad::rss::map::RssConstellationCreationMode::Ignore);
  ASSERT_EQ(
    fromString<::ad::rss::map::RssConstellationCreationMode>("::ad::rss::map::RssConstellationCreationMode::Ignore"),
    ::ad::rss::map::RssConstellationCreationMode::Ignore);

  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>("NotRelevant"),
            ::ad::rss::map::RssConstellationCreationMode::NotRelevant);
  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>(
              "::ad::rss::map::RssConstellationCreationMode::NotRelevant"),
            ::ad::rss::map::RssConstellationCreationMode::NotRelevant);

  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>("Structured"),
            ::ad::rss::map::RssConstellationCreationMode::Structured);
  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>(
              "::ad::rss::map::RssConstellationCreationMode::Structured"),
            ::ad::rss::map::RssConstellationCreationMode::Structured);

  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>("Unstructured"),
            ::ad::rss::map::RssConstellationCreationMode::Unstructured);
  ASSERT_EQ(fromString<::ad::rss::map::RssConstellationCreationMode>(
              "::ad::rss::map::RssConstellationCreationMode::Unstructured"),
            ::ad::rss::map::RssConstellationCreationMode::Unstructured);

  EXPECT_ANY_THROW({ fromString<::ad::rss::map::RssConstellationCreationMode>("NOT A VALID ENUM LITERAL"); });
}

TEST(RssConstellationCreationModeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::map::RssConstellationCreationMode::Ignore),
            "::ad::rss::map::RssConstellationCreationMode::Ignore");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Ignore));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Ignore));

  ASSERT_EQ(toString(::ad::rss::map::RssConstellationCreationMode::NotRelevant),
            "::ad::rss::map::RssConstellationCreationMode::NotRelevant");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::NotRelevant));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::NotRelevant));

  ASSERT_EQ(toString(::ad::rss::map::RssConstellationCreationMode::Structured),
            "::ad::rss::map::RssConstellationCreationMode::Structured");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Structured));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Structured));

  ASSERT_EQ(toString(::ad::rss::map::RssConstellationCreationMode::Unstructured),
            "::ad::rss::map::RssConstellationCreationMode::Unstructured");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Unstructured));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::map::RssConstellationCreationMode::Unstructured));

  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssConstellationCreationMode>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::map::RssConstellationCreationMode>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(RssConstellationCreationModeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::map::RssConstellationCreationMode value(::ad::rss::map::RssConstellationCreationMode::Ignore);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
