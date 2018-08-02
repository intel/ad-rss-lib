// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <gtest/gtest.h>
#include "rss/check/LongitudinalResponse.hpp"

namespace rss {
namespace lane {

TEST(LongitudinalResponseTest, toString_fromString_Safe)
{
  rss::check::LongitudinalResponse response = rss::check::LongitudinalResponse::Safe;

  std::string enumString = toString(response);

  rss::check::LongitudinalResponse resultingResponse = fromString<rss::check::LongitudinalResponse>(enumString);

  ASSERT_EQ(response, resultingResponse);
}

TEST(LongitudinalResponseTest, toString_fromString_BrakeMin)
{
  rss::check::LongitudinalResponse response = rss::check::LongitudinalResponse::BrakeMin;

  std::string enumString = toString(response);

  rss::check::LongitudinalResponse resultingResponse = fromString<rss::check::LongitudinalResponse>(enumString);

  ASSERT_EQ(response, resultingResponse);
}

TEST(LongitudinalResponseTest, toString_fromString_BrakeMinCorrect)
{
  rss::check::LongitudinalResponse response = rss::check::LongitudinalResponse::BrakeMinCorrect;

  std::string enumString = toString(response);

  rss::check::LongitudinalResponse resultingResponse = fromString<rss::check::LongitudinalResponse>(enumString);

  ASSERT_EQ(response, resultingResponse);
}

TEST(LongitudinalResponseTest, toString_fromString_None)
{
  rss::check::LongitudinalResponse response = rss::check::LongitudinalResponse::None;

  std::string enumString = toString(response);

  rss::check::LongitudinalResponse resultingResponse = fromString<rss::check::LongitudinalResponse>(enumString);

  ASSERT_EQ(response, resultingResponse);
}

TEST(LongitudinalResponseTest, fromString_invalid)
{
  ASSERT_THROW(fromString<rss::check::LongitudinalResponse>("notKnown"), std::out_of_range);
}

} // namespace lane
} // namespace rss
