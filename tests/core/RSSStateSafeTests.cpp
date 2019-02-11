// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "core/RSSState.hpp"

namespace ad_rss {
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
} // namespace ad_rss
