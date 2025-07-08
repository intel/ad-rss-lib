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

#include "ad/rss/world/ConstellationTypeValidInputRange.hpp"

TEST(ConstellationTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::NotRelevant));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::SameDirection));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::OppositeDirection));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::IntersectionEgoHasPriority));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::IntersectionObjectHasPriority));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::IntersectionSamePriority));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::world::ConstellationType::Unstructured));
}

TEST(ConstellationTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::NotRelevant));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::SameDirection));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::OppositeDirection));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionEgoHasPriority));
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionObjectHasPriority));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::IntersectionSamePriority));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ConstellationType::Unstructured));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::world::ConstellationType>(minValue - 1)));
}
