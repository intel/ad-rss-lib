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
#include "ad_rss/situation/SituationType.hpp"

TEST(SituationTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("NotRelevant"),
            ::ad_rss::situation::SituationType::NotRelevant);
  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::NotRelevant"),
            ::ad_rss::situation::SituationType::NotRelevant);

  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("SameDirection"),
            ::ad_rss::situation::SituationType::SameDirection);
  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::SameDirection"),
            ::ad_rss::situation::SituationType::SameDirection);

  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("OppositeDirection"),
            ::ad_rss::situation::SituationType::OppositeDirection);
  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::OppositeDirection"),
            ::ad_rss::situation::SituationType::OppositeDirection);

  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("IntersectionEgoHasPriority"),
            ::ad_rss::situation::SituationType::IntersectionEgoHasPriority);
  ASSERT_EQ(
    fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::IntersectionEgoHasPriority"),
    ::ad_rss::situation::SituationType::IntersectionEgoHasPriority);

  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("IntersectionObjectHasPriority"),
            ::ad_rss::situation::SituationType::IntersectionObjectHasPriority);
  ASSERT_EQ(
    fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::IntersectionObjectHasPriority"),
    ::ad_rss::situation::SituationType::IntersectionObjectHasPriority);

  ASSERT_EQ(fromString<::ad_rss::situation::SituationType>("IntersectionSamePriority"),
            ::ad_rss::situation::SituationType::IntersectionSamePriority);
  ASSERT_EQ(
    fromString<::ad_rss::situation::SituationType>("::ad_rss::situation::SituationType::IntersectionSamePriority"),
    ::ad_rss::situation::SituationType::IntersectionSamePriority);

  EXPECT_ANY_THROW({ fromString<::ad_rss::situation::SituationType>("NOT A VALID ENUM LITERAL"); });
}

TEST(SituationTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::NotRelevant),
            "::ad_rss::situation::SituationType::NotRelevant");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::NotRelevant));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::NotRelevant));

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::SameDirection),
            "::ad_rss::situation::SituationType::SameDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::SameDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::SameDirection));

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::OppositeDirection),
            "::ad_rss::situation::SituationType::OppositeDirection");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::OppositeDirection));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::OppositeDirection));

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::IntersectionEgoHasPriority),
            "::ad_rss::situation::SituationType::IntersectionEgoHasPriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionEgoHasPriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionEgoHasPriority));

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::IntersectionObjectHasPriority),
            "::ad_rss::situation::SituationType::IntersectionObjectHasPriority");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionObjectHasPriority));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionObjectHasPriority));

  ASSERT_EQ(toString(::ad_rss::situation::SituationType::IntersectionSamePriority),
            "::ad_rss::situation::SituationType::IntersectionSamePriority");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionSamePriority));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::situation::SituationType::IntersectionSamePriority));

  ASSERT_EQ(toString(static_cast<::ad_rss::situation::SituationType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::situation::SituationType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
