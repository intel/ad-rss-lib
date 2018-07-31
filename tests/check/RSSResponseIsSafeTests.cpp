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

TEST(RSSResponseIsSafeTests, isSafe)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::Safe;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_TRUE(isLongitudinalSafe(response));
  ASSERT_TRUE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_None)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::None;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_FALSE(isLongitudinalSafe(response));
  ASSERT_TRUE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMin)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::BrakeMin;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_FALSE(isLongitudinalSafe(response));
  ASSERT_TRUE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMinCorrect)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::BrakeMinCorrect;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_FALSE(isLongitudinalSafe(response));
  ASSERT_TRUE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralLeft_None)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::Safe;
  response.lateralResponseLeft = LateralResponse::None;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_TRUE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_FALSE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralLeft_BrakeMin)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::Safe;
  response.lateralResponseLeft = LateralResponse::BrakeMin;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_TRUE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_FALSE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralRight_None)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::Safe;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::None;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_TRUE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_FALSE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, lateralRight_BrakeMin)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::Safe;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::BrakeMin;

  ASSERT_FALSE(isDangerous(response));
  ASSERT_TRUE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_FALSE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralRight_BrakeMin)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::BrakeMin;
  response.lateralResponseLeft = LateralResponse::Safe;
  response.lateralResponseRight = LateralResponse::BrakeMin;

  ASSERT_TRUE(isDangerous(response));
  ASSERT_FALSE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_TRUE(isLateralSafeLeft(response));
  ASSERT_FALSE(isLateralSafeRight(response));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  Response response;
  response.longitudinalResponse = LongitudinalResponse::BrakeMin;
  response.lateralResponseLeft = LateralResponse::BrakeMin;
  response.lateralResponseRight = LateralResponse::Safe;

  ASSERT_TRUE(isDangerous(response));
  ASSERT_FALSE(isLongitudinalSafe(response));
  ASSERT_FALSE(isLateralSafe(response));
  ASSERT_FALSE(isLateralSafeLeft(response));
  ASSERT_TRUE(isLateralSafeRight(response));
}

} // namespace check
} // namespace rss
