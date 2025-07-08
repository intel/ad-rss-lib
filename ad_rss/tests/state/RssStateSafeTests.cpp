// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/state/RssStateOperation.hpp>
#include "TestSupport.hpp"

namespace ad {
namespace rss {
namespace state {

TEST(RssStateSafeTests, is_safe)
{
  state::RssState rssState;
  resetRssState(rssState, 1u, 1u, world::ConstellationType::SameDirection);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_None)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinal_state, state::LongitudinalResponse::None);
  resetRssState(rssState.lateral_state_left);
  resetRssState(rssState.lateral_state_right);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinal_state, state::LongitudinalResponse::BrakeMin);
  resetRssState(rssState.lateral_state_left);
  resetRssState(rssState.lateral_state_right);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_BrakeMinCorrect)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinal_state, state::LongitudinalResponse::BrakeMinCorrect);
  resetRssState(rssState.lateral_state_left);
  resetRssState(rssState.lateral_state_right);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_TRUE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralLeft_None)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinal_state);
  setRssStateUnsafe(rssState.lateral_state_left, state::LateralResponse::None);
  resetRssState(rssState.lateral_state_right);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralLeft_BrakeMin)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinal_state);
  setRssStateUnsafe(rssState.lateral_state_left, state::LateralResponse::BrakeMin);
  resetRssState(rssState.lateral_state_right);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralRight_None)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinal_state);
  resetRssState(rssState.lateral_state_left);
  setRssStateUnsafe(rssState.lateral_state_right, state::LateralResponse::None);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, lateralRight_BrakeMin)
{
  state::RssState rssState;
  resetRssState(rssState.longitudinal_state);
  resetRssState(rssState.lateral_state_left);
  setRssStateUnsafe(rssState.lateral_state_right, state::LateralResponse::BrakeMin);

  ASSERT_FALSE(isDangerous(rssState));
  ASSERT_TRUE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_lateralRight_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinal_state, state::LongitudinalResponse::BrakeMin);
  resetRssState(rssState.lateral_state_left);
  setRssStateUnsafe(rssState.lateral_state_right, state::LateralResponse::BrakeMin);

  ASSERT_TRUE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

TEST(RssStateSafeTests, longitudinal_lateralLeft_BrakeMin)
{
  state::RssState rssState;
  setRssStateUnsafe(rssState.longitudinal_state, state::LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssState.lateral_state_left, state::LateralResponse::BrakeMin);
  resetRssState(rssState.lateral_state_right);

  ASSERT_TRUE(isDangerous(rssState));
  ASSERT_FALSE(isLongitudinalSafe(rssState));
  ASSERT_FALSE(isLateralSafe(rssState));
}

} // namespace state
} // namespace rss
} // namespace ad
