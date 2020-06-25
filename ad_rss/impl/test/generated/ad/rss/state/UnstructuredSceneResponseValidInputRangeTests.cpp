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

#include "ad/rss/state/UnstructuredSceneResponseValidInputRange.hpp"

TEST(UnstructuredSceneResponseValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse::None));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse::ContinueForward));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse::DriveAway));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse::Brake));
}

TEST(UnstructuredSceneResponseValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::None));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::ContinueForward));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::DriveAway));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::Brake));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::state::UnstructuredSceneResponse>(minValue - 1)));
}
