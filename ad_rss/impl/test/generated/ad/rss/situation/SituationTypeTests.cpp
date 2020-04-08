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
#include "ad/rss/situation/SituationType.hpp"

TEST(SituationTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("NotRelevant"),
            ::ad::rss::situation::SituationType::NotRelevant);
  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("::ad::rss::situation::SituationType::NotRelevant"),
            ::ad::rss::situation::SituationType::NotRelevant);

  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("SameDirection"),
            ::ad::rss::situation::SituationType::SameDirection);
  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("::ad::rss::situation::SituationType::SameDirection"),
            ::ad::rss::situation::SituationType::SameDirection);

  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("OppositeDirection"),
            ::ad::rss::situation::SituationType::OppositeDirection);
  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("::ad::rss::situation::SituationType::OppositeDirection"),
            ::ad::rss::situation::SituationType::OppositeDirection);

  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("IntersectionEgoHasPriority"),
            ::ad::rss::situation::SituationType::IntersectionEgoHasPriority);
  ASSERT_EQ(
    fromString<::ad::rss::situation::SituationType>("::ad::rss::situation::SituationType::IntersectionEgoHasPriority"),
    ::ad::rss::situation::SituationType::IntersectionEgoHasPriority);

  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("IntersectionObjectHasPriority"),
            ::ad::rss::situation::SituationType::IntersectionObjectHasPriority);
  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>(
              "::ad::rss::situation::SituationType::IntersectionObjectHasPriority"),
            ::ad::rss::situation::SituationType::IntersectionObjectHasPriority);

  ASSERT_EQ(fromString<::ad::rss::situation::SituationType>("IntersectionSamePriority"),
            ::ad::rss::situation::SituationType::IntersectionSamePriority);
  ASSERT_EQ(
    fromString<::ad::rss::situation::SituationType>("::ad::rss::situation::SituationType::IntersectionSamePriority"),
    ::ad::rss::situation::SituationType::IntersectionSamePriority);

  EXPECT_ANY_THROW({ fromString<::ad::rss::situation::SituationType>("NOT A VALID ENUM LITERAL"); });
}

TEST(SituationTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::NotRelevant),
            "::ad::rss::situation::SituationType::NotRelevant");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::NotRelevant));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::NotRelevant));

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::SameDirection),
            "::ad::rss::situation::SituationType::SameDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::SameDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::SameDirection));

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::OppositeDirection),
            "::ad::rss::situation::SituationType::OppositeDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::OppositeDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::OppositeDirection));

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::IntersectionEgoHasPriority),
            "::ad::rss::situation::SituationType::IntersectionEgoHasPriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionEgoHasPriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionEgoHasPriority));

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::IntersectionObjectHasPriority),
            "::ad::rss::situation::SituationType::IntersectionObjectHasPriority");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionObjectHasPriority));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionObjectHasPriority));

  ASSERT_EQ(toString(::ad::rss::situation::SituationType::IntersectionSamePriority),
            "::ad::rss::situation::SituationType::IntersectionSamePriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionSamePriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionSamePriority));

  ASSERT_EQ(toString(static_cast<::ad::rss::situation::SituationType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::situation::SituationType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(SituationTypeTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::situation::SituationType value(::ad::rss::situation::SituationType::NotRelevant);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
