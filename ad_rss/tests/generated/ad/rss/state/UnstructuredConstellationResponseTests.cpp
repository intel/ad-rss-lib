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
#include "ad/rss/state/UnstructuredConstellationResponse.hpp"

TEST(UnstructuredConstellationResponseTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>("None"),
            ::ad::rss::state::UnstructuredConstellationResponse::None);
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>(
              "::ad::rss::state::UnstructuredConstellationResponse::None"),
            ::ad::rss::state::UnstructuredConstellationResponse::None);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>("ContinueForward"),
            ::ad::rss::state::UnstructuredConstellationResponse::ContinueForward);
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>(
              "::ad::rss::state::UnstructuredConstellationResponse::ContinueForward"),
            ::ad::rss::state::UnstructuredConstellationResponse::ContinueForward);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>("DriveAway"),
            ::ad::rss::state::UnstructuredConstellationResponse::DriveAway);
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>(
              "::ad::rss::state::UnstructuredConstellationResponse::DriveAway"),
            ::ad::rss::state::UnstructuredConstellationResponse::DriveAway);

  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>("Brake"),
            ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  ASSERT_EQ(fromString<::ad::rss::state::UnstructuredConstellationResponse>(
              "::ad::rss::state::UnstructuredConstellationResponse::Brake"),
            ::ad::rss::state::UnstructuredConstellationResponse::Brake);

  EXPECT_ANY_THROW({ fromString<::ad::rss::state::UnstructuredConstellationResponse>("NOT A VALID ENUM LITERAL"); });
}

TEST(UnstructuredConstellationResponseTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredConstellationResponse::None),
            "::ad::rss::state::UnstructuredConstellationResponse::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::None));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredConstellationResponse::ContinueForward),
            "::ad::rss::state::UnstructuredConstellationResponse::ContinueForward");
  minValue
    = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::ContinueForward));
  maxValue
    = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::ContinueForward));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredConstellationResponse::DriveAway),
            "::ad::rss::state::UnstructuredConstellationResponse::DriveAway");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::DriveAway));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::DriveAway));

  ASSERT_EQ(toString(::ad::rss::state::UnstructuredConstellationResponse::Brake),
            "::ad::rss::state::UnstructuredConstellationResponse::Brake");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::Brake));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::UnstructuredConstellationResponse::Brake));

  ASSERT_EQ(toString(static_cast<::ad::rss::state::UnstructuredConstellationResponse>(minValue - 1)),
            "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::state::UnstructuredConstellationResponse>(maxValue + 1)),
            "UNKNOWN ENUM VALUE");
}

TEST(UnstructuredConstellationResponseTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::UnstructuredConstellationResponse value(::ad::rss::state::UnstructuredConstellationResponse::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
