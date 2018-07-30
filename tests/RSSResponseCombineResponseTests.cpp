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

#include "rss_core/RSSResponseFunctions.hpp"

TEST(RSSResponseCombineResponseTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(
    rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::Safe, rss_core::LongitudinalResponse::Safe),
    rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(
    rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::Safe, rss_core::LongitudinalResponse::None),
    rss_core::LongitudinalResponse::None);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::Safe,
                                                  rss_core::LongitudinalResponse::BrakeMin),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::Safe,
                                                  rss_core::LongitudinalResponse::BrakeMinCorrect),
            rss_core::LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_None)
{
  ASSERT_EQ(
    rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::None, rss_core::LongitudinalResponse::Safe),
    rss_core::LongitudinalResponse::None);
  ASSERT_EQ(
    rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::None, rss_core::LongitudinalResponse::None),
    rss_core::LongitudinalResponse::None);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::None,
                                                  rss_core::LongitudinalResponse::BrakeMin),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::None,
                                                  rss_core::LongitudinalResponse::BrakeMinCorrect),
            rss_core::LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMin,
                                                  rss_core::LongitudinalResponse::Safe),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMin,
                                                  rss_core::LongitudinalResponse::None),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMin,
                                                  rss_core::LongitudinalResponse::BrakeMin),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMin,
                                                  rss_core::LongitudinalResponse::BrakeMinCorrect),
            rss_core::LongitudinalResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMinCorrect,
                                                  rss_core::LongitudinalResponse::Safe),
            rss_core::LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMinCorrect,
                                                  rss_core::LongitudinalResponse::None),
            rss_core::LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMinCorrect,
                                                  rss_core::LongitudinalResponse::BrakeMin),
            rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLongitudinalResponse(rss_core::LongitudinalResponse::BrakeMinCorrect,
                                                  rss_core::LongitudinalResponse::BrakeMinCorrect),
            rss_core::LongitudinalResponse::BrakeMinCorrect);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_Safe)
{
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::Safe, rss_core::LateralResponse::Safe),
            rss_core::LateralResponse::Safe);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::Safe, rss_core::LateralResponse::None),
            rss_core::LateralResponse::None);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::Safe, rss_core::LateralResponse::BrakeMin),
            rss_core::LateralResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_None)
{
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::None, rss_core::LateralResponse::Safe),
            rss_core::LateralResponse::None);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::None, rss_core::LateralResponse::None),
            rss_core::LateralResponse::None);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::None, rss_core::LateralResponse::BrakeMin),
            rss_core::LateralResponse::BrakeMin);
}

TEST(RSSResponseCombineResponseTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::BrakeMin, rss_core::LateralResponse::Safe),
            rss_core::LateralResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::BrakeMin, rss_core::LateralResponse::None),
            rss_core::LateralResponse::BrakeMin);
  ASSERT_EQ(rss_core::combineLateralResponse(rss_core::LateralResponse::BrakeMin, rss_core::LateralResponse::BrakeMin),
            rss_core::LateralResponse::BrakeMin);
}
