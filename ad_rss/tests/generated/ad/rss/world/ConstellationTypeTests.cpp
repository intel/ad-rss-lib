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
#include "ad/rss/world/ConstellationType.hpp"

TEST(ConstellationTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("NotRelevant"),
            ::ad::rss::world::ConstellationType::NotRelevant);
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::NotRelevant"),
            ::ad::rss::world::ConstellationType::NotRelevant);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("SameDirection"),
            ::ad::rss::world::ConstellationType::SameDirection);
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::SameDirection"),
            ::ad::rss::world::ConstellationType::SameDirection);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("OppositeDirection"),
            ::ad::rss::world::ConstellationType::OppositeDirection);
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::OppositeDirection"),
            ::ad::rss::world::ConstellationType::OppositeDirection);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("IntersectionEgoHasPriority"),
            ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority);
  ASSERT_EQ(
    fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::IntersectionEgoHasPriority"),
    ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("IntersectionObjectHasPriority"),
            ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority);
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>(
              "::ad::rss::world::ConstellationType::IntersectionObjectHasPriority"),
            ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("IntersectionSamePriority"),
            ::ad::rss::world::ConstellationType::IntersectionSamePriority);
  ASSERT_EQ(
    fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::IntersectionSamePriority"),
    ::ad::rss::world::ConstellationType::IntersectionSamePriority);

  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("Unstructured"),
            ::ad::rss::world::ConstellationType::Unstructured);
  ASSERT_EQ(fromString<::ad::rss::world::ConstellationType>("::ad::rss::world::ConstellationType::Unstructured"),
            ::ad::rss::world::ConstellationType::Unstructured);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::ConstellationType>("NOT A VALID ENUM LITERAL"); });
}

TEST(ConstellationTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::NotRelevant),
            "::ad::rss::world::ConstellationType::NotRelevant");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::NotRelevant));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::NotRelevant));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::SameDirection),
            "::ad::rss::world::ConstellationType::SameDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::SameDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::SameDirection));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::OppositeDirection),
            "::ad::rss::world::ConstellationType::OppositeDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::OppositeDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::OppositeDirection));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::IntersectionEgoHasPriority),
            "::ad::rss::world::ConstellationType::IntersectionEgoHasPriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionEgoHasPriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionEgoHasPriority));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::IntersectionObjectHasPriority),
            "::ad::rss::world::ConstellationType::IntersectionObjectHasPriority");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionObjectHasPriority));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionObjectHasPriority));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::IntersectionSamePriority),
            "::ad::rss::world::ConstellationType::IntersectionSamePriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionSamePriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionSamePriority));

  ASSERT_EQ(toString(::ad::rss::world::ConstellationType::Unstructured),
            "::ad::rss::world::ConstellationType::Unstructured");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::Unstructured));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::Unstructured));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::ConstellationType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::ConstellationType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(ConstellationTypeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::ConstellationType value(::ad::rss::world::ConstellationType::NotRelevant);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
