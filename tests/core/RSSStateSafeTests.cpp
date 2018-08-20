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
#include "core/RSSState.hpp"

namespace rss {
namespace core {

TEST(RSSStateSafeTests, isSafe)
{
  state::ResponseState responseState;
  resetRssState(responseState);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, longitudinal_None)
{
  state::ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, state::LongitudinalResponse::None);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, longitudinal_BrakeMin)
{
  state::ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, longitudinal_BrakeMinCorrect)
{
  state::ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, state::LongitudinalResponse::BrakeMinCorrect);
  resetRssState(responseState.lateralStateLeft);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_TRUE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, lateralLeft_None)
{
  state::ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  setRssStateUnsafe(responseState.lateralStateLeft, state::LateralResponse::None);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, lateralLeft_BrakeMin)
{
  state::ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  setRssStateUnsafe(responseState.lateralStateLeft, state::LateralResponse::BrakeMin);
  resetRssState(responseState.lateralStateRight);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, lateralRight_None)
{
  state::ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, state::LateralResponse::None);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, lateralRight_BrakeMin)
{
  state::ResponseState responseState;
  resetRssState(responseState.longitudinalState);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, state::LateralResponse::BrakeMin);

  ASSERT_FALSE(isDangerous(responseState));
  ASSERT_TRUE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, longitudinal_lateralRight_BrakeMin)
{
  state::ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  resetRssState(responseState.lateralStateLeft);
  setRssStateUnsafe(responseState.lateralStateRight, state::LateralResponse::BrakeMin);

  ASSERT_TRUE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

TEST(RSSStateSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  state::ResponseState responseState;
  setRssStateUnsafe(responseState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseState.lateralStateLeft, state::LateralResponse::BrakeMin);
  resetRssState(responseState.lateralStateRight);

  ASSERT_TRUE(isDangerous(responseState));
  ASSERT_FALSE(isLongitudinalSafe(responseState));
  ASSERT_FALSE(isLateralSafe(responseState));
}

} // namespace core
} // namespace rss
