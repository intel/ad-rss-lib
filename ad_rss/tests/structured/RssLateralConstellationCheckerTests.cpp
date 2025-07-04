// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/structured/RssNonIntersectionConstellationChecker.hpp"

namespace ad {
namespace rss {
namespace structured {

class RssLateralConstellationCheckerTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    constellation.constellation_type = world::ConstellationType::SameDirection;
    constellation.constellation_id = core::RelativeConstellationId(111);
  }

  virtual void TearDown()
  {
  }
  core::RelativeObjectState leftVehicle;
  core::RelativeObjectState rightVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssLateralConstellationCheckerTests, safe_left)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::AtLeft, Distance(95.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));

  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, not_safe_overlap_left_spontaneous)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, not_safe_overlap_spontaneous)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::Overlap);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, not_safe_overlap_right_spontaneous)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, safe_right)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position
    = createRelativeLateralPosition(core::LateralRelativePosition::AtRight, Distance(95.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, both_move_right)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position
    = createRelativeLateralPosition(core::LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, move_towards_each_other)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(1);
  rightVehicle = createRelativeVehicleStateForLateralMotion(-1);

  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  constellation.relative_position
    = createRelativeLateralPosition(core::LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
}

TEST_F(RssLateralConstellationCheckerTests, check_input_range)
{
  RssNonIntersectionConstellationChecker checker;
  leftVehicle = createRelativeVehicleStateForLateralMotion(0);
  rightVehicle = createRelativeVehicleStateForLateralMotion(0);

  // ego vehicle "moves" towards right vehicle from left
  constellation.ego_state = leftVehicle;
  constellation.other_state = rightVehicle;
  for (uint32_t i = 10; i > 1; i--)
  {
    constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::AtLeft, Distance(i));

    ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
    ASSERT_EQ(rssState.lateral_state_right,
              TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
    ASSERT_EQ(rssState.lateral_state_left, cTestSupport.cLateralSafe);
    ASSERT_EQ(rssState.longitudinal_state,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));
  }

  // near enough: trigger brake
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::AtLeft, Distance(1));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));

  // ego vehicle overlaps on left side
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));

  // ego vehicle totally overlaps with other vehicle
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::Overlap);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));

  // ego vehicle overlaps on right side
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));

  // ego vehicle still too near, but on right side
  constellation.relative_position = createRelativeLateralPosition(core::LateralRelativePosition::AtRight, Distance(1));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.lateral_state_right, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));

  // ego vehicle far enough on right side
  for (uint32_t i = 2; i < 10; i++)
  {
    constellation.relative_position
      = createRelativeLateralPosition(core::LateralRelativePosition::AtRight, Distance(i));
    ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
    ASSERT_EQ(rssState.lateral_state_right, cTestSupport.cLateralSafe);
    ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
    ASSERT_EQ(rssState.longitudinal_state,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));
  }
}

} // namespace structured
} // namespace rss
} // namespace ad
