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

#include "ad/rss/state/UnstructuredConstellationResponseValidInputRange.hpp"

TEST(UnstructuredConstellationResponseValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredConstellationResponse::None));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredConstellationResponse::ContinueForward));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredConstellationResponse::DriveAway));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredConstellationResponse::Brake));
}

TEST(UnstructuredConstellationResponseValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::None));
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::ContinueForward));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::DriveAway));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::Brake));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::state::UnstructuredConstellationResponse>(minValue - 1)));
}
