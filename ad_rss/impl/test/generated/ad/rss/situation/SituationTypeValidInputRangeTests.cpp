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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/situation/SituationTypeValidInputRange.hpp"

TEST(SituationTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::NotRelevant));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::SameDirection));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::OppositeDirection));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::IntersectionEgoHasPriority));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::IntersectionObjectHasPriority));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::situation::SituationType::IntersectionSamePriority));
}

TEST(SituationTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::NotRelevant));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::SameDirection));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::OppositeDirection));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionEgoHasPriority));
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionObjectHasPriority));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::situation::SituationType::IntersectionSamePriority));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::situation::SituationType>(minValue - 1)));
}
