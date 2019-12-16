// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/state/RssStateOperation.hpp>
#include "TestSupport.hpp"

namespace ad {
namespace rss {
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
} // namespace rss
} // namespace ad
