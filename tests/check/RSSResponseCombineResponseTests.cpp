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

#include "check/RSSResponseFunctions.hpp"

namespace rss {
namespace check {

TEST(RSSResponseCombineResponseTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::Safe, LongitudinalResponse::Safe),
            LongitudinalResponse::Safe);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::Safe, LongitudinalResponse::None),
            LongitudinalResponse::None);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::Safe, LongitudinalResponse::BrakeMin),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::Safe, LongitudinalResponse::BrakeMinCorrect),
            LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_None)
{
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::None, LongitudinalResponse::Safe),
            LongitudinalResponse::None);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::None, LongitudinalResponse::None),
            LongitudinalResponse::None);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::None, LongitudinalResponse::BrakeMin),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::None, LongitudinalResponse::BrakeMinCorrect),
            LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMin, LongitudinalResponse::Safe),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMin, LongitudinalResponse::None),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMin, LongitudinalResponse::BrakeMin),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMin, LongitudinalResponse::BrakeMinCorrect),
            LongitudinalResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMinCorrect, LongitudinalResponse::Safe),
            LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMinCorrect, LongitudinalResponse::None),
            LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMinCorrect, LongitudinalResponse::BrakeMin),
            LongitudinalResponse::BrakeMin);
  ASSERT_EQ(combineLongitudinalResponse(LongitudinalResponse::BrakeMinCorrect, LongitudinalResponse::BrakeMinCorrect),
            LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_Safe)
{
  ASSERT_EQ(combineLateralResponse(LateralResponse::Safe, LateralResponse::Safe), LateralResponse::Safe);
  ASSERT_EQ(combineLateralResponse(LateralResponse::Safe, LateralResponse::None), LateralResponse::None);
  ASSERT_EQ(combineLateralResponse(LateralResponse::Safe, LateralResponse::BrakeMin), LateralResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_None)
{
  ASSERT_EQ(combineLateralResponse(LateralResponse::None, LateralResponse::Safe), LateralResponse::None);
  ASSERT_EQ(combineLateralResponse(LateralResponse::None, LateralResponse::None), LateralResponse::None);
  ASSERT_EQ(combineLateralResponse(LateralResponse::None, LateralResponse::BrakeMin), LateralResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(combineLateralResponse(LateralResponse::BrakeMin, LateralResponse::Safe), LateralResponse::BrakeMin);
  ASSERT_EQ(combineLateralResponse(LateralResponse::BrakeMin, LateralResponse::None), LateralResponse::BrakeMin);
  ASSERT_EQ(combineLateralResponse(LateralResponse::BrakeMin, LateralResponse::BrakeMin), LateralResponse::BrakeMin);
}

} // namespace check
} // namespace rss
