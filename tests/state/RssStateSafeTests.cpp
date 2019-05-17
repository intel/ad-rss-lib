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

#include <ad_rss/state/RssStateOperation.hpp>
#include "TestSupport.hpp"

namespace ad_rss {
namespace state {

TEST(RssStateSafeTests, isSafe)
{
  state::RssState rssState;
  resetRssState(rssState, 1u, 1u);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_None)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinalState, state::LongitudinalResponse::None);
  resetRssState(rssState.lateralStateLeft);
  resetRssState(rssState.lateralStateRight);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  resetRssState(rssState.lateralStateLeft);
  resetRssState(rssState.lateralStateRight);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_BrakeMinCorrect)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinalState, state::LongitudinalResponse::BrakeMinCorrect);
  resetRssState(rssState.lateralStateLeft);
  resetRssState(rssState.lateralStateRight);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralLeft_None)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinalState);
  setRssStateUnsafe(rssState.lateralStateLeft, state::LateralResponse::None);
  resetRssState(rssState.lateralStateRight);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralLeft_BrakeMin)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinalState);
  setRssStateUnsafe(rssState.lateralStateLeft, state::LateralResponse::BrakeMin);
  resetRssState(rssState.lateralStateRight);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralRight_None)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinalState);
  resetRssState(rssState.lateralStateLeft);
  setRssStateUnsafe(rssState.lateralStateRight, state::LateralResponse::None);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralRight_BrakeMin)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinalState);
  resetRssState(rssState.lateralStateLeft);
  setRssStateUnsafe(rssState.lateralStateRight, state::LateralResponse::BrakeMin);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_lateralRight_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  resetRssState(rssState.lateralStateLeft);
  setRssStateUnsafe(rssState.lateralStateRight, state::LateralResponse::BrakeMin);

  ASSERT_TRUE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinalState, state::LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssState.lateralStateLeft, state::LateralResponse::BrakeMin);
  resetRssState(rssState.lateralStateRight);

  ASSERT_TRUE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

} // namespace state
} // namespace ad_rss
