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

#include "TestSupport.hpp"
#include "check/RSSResponseFunctions.hpp"

namespace rss {
namespace check {

TEST(RSSResponseIsSafeTests, isSafe)
{
  ResponseState responseState;
  resetRssState(responseState);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, longitudinal_None)
{
  ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, LongitudinalResponse::None);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMin)
{
  ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, LongitudinalResponse::BrakeMin);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, longitudinal_BrakeMinCorrect)
{
  ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, LongitudinalResponse::BrakeMinCorrect);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, lateralLeft_None)
{
  ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  setRssStateUnsafe(responseState.lateralStateLeft, LateralResponse::None);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_FALSE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, lateralLeft_BrakeMin)
{
  ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  setRssStateUnsafe(responseState.lateralStateLeft, LateralResponse::BrakeMin);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_FALSE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, lateralRight_None)
{
  ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, LateralResponse::None);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_FALSE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, lateralRight_BrakeMin)
{
  ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, LateralResponse::BrakeMin);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_FALSE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralRight_BrakeMin)
{
  ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, LongitudinalResponse::BrakeMin);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, LateralResponse::BrakeMin);

  ASSERT_TRUE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_TRUE(isLateralSafeLeft(responseState));
  ASSERT_FALSE(isLateralSafeRight(responseState));
}

TEST(RSSResponseIsSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseState.lateralStateLeft, LateralResponse::BrakeMin);
  resetRssState(responseState.lateralStateRight);

  ASSERT_TRUE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
  ASSERT_FALSE(isLateralSafeLeft(responseState));
  ASSERT_TRUE(isLateralSafeRight(responseState));
}

} // namespace check
} // namespace rss
