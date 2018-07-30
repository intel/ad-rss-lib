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

TEST(RSSResponseIsSafeTests, isSafe)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_TRUE(rss_core::isLongitudinalSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_None)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::None;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_FALSE(rss_core::isLongitudinalSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMin)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_FALSE(rss_core::isLongitudinalSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMinCorrect)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMinCorrect;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_FALSE(rss_core::isLongitudinalSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralLeft_None)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
  response.mLateralResponseLeft = rss_core::LateralResponse::None;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_TRUE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralLeft_BrakeMin)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
  response.mLateralResponseLeft = rss_core::LateralResponse::BrakeMin;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_TRUE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralRight_None)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::None;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_TRUE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_FALSE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralRight_BrakeMin)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  ASSERT_FALSE(rss_core::isDangerous(response));
  ASSERT_TRUE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_FALSE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralRight_BrakeMin)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  response.mLateralResponseLeft = rss_core::LateralResponse::Safe;
  response.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  ASSERT_TRUE(rss_core::isDangerous(response));
  ASSERT_FALSE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_TRUE(rss_core::isLateralSafeLeft(response));
  ASSERT_FALSE(rss_core::isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  rss_core::Response response;
  response.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  response.mLateralResponseLeft = rss_core::LateralResponse::BrakeMin;
  response.mLateralResponseRight = rss_core::LateralResponse::Safe;

  ASSERT_TRUE(rss_core::isDangerous(response));
  ASSERT_FALSE(rss_core::isLongitudinalSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafe(response));
  ASSERT_FALSE(rss_core::isLateralSafeLeft(response));
  ASSERT_TRUE(rss_core::isLateralSafeRight(response));
}
