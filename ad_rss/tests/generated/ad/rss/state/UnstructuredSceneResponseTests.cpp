/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
#include "ad/rss/state/UnstructuredSceneResponse.hpp"

TEST(UnstructuredSceneResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredSceneResponse>("None"),
            ::ad::rss::state::UnstructuredSceneResponse::None);
  ASSERT_EQ(
    fromString<::ad::rss::state::UnstructuredSceneResponse>("::ad::rss::state::UnstructuredSceneResponse::None"),
    ::ad::rss::state::UnstructuredSceneResponse::None);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredSceneResponse>("ContinueForward"),
            ::ad::rss::state::UnstructuredSceneResponse::ContinueForward);
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredSceneResponse>(
              "::ad::rss::state::UnstructuredSceneResponse::ContinueForward"),
            ::ad::rss::state::UnstructuredSceneResponse::ContinueForward);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredSceneResponse>("DriveAway"),
            ::ad::rss::state::UnstructuredSceneResponse::DriveAway);
  ASSERT_EQ(
    fromString<::ad::rss::state::UnstructuredSceneResponse>("::ad::rss::state::UnstructuredSceneResponse::DriveAway"),
    ::ad::rss::state::UnstructuredSceneResponse::DriveAway);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredSceneResponse>("Brake"),
            ::ad::rss::state::UnstructuredSceneResponse::Brake);
  ASSERT_EQ(
    fromString<::ad::rss::state::UnstructuredSceneResponse>("::ad::rss::state::UnstructuredSceneResponse::Brake"),
    ::ad::rss::state::UnstructuredSceneResponse::Brake);

  EXPECT_ANY_THROW({ fromString<::ad::rss::state::UnstructuredSceneResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(UnstructuredSceneResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredSceneResponse::None),
            "::ad::rss::state::UnstructuredSceneResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::None));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredSceneResponse::ContinueForward),
            "::ad::rss::state::UnstructuredSceneResponse::ContinueForward");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::ContinueForward));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::ContinueForward));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredSceneResponse::DriveAway),
            "::ad::rss::state::UnstructuredSceneResponse::DriveAway");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::DriveAway));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::DriveAway));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredSceneResponse::Brake),
            "::ad::rss::state::UnstructuredSceneResponse::Brake");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::Brake));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredSceneResponse::Brake));

  ASSERT_EQ(toString(static_cast<::ad::rss::state::UnstructuredSceneResponse>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::state::UnstructuredSceneResponse>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(UnstructuredSceneResponseTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::UnstructuredSceneResponse value(::ad::rss::state::UnstructuredSceneResponse::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
