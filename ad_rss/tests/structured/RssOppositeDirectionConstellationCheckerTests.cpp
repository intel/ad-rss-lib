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

class RssOppositeDirectionConstellationCheckerTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    constellation.constellation_type = world::ConstellationType::OppositeDirection;
  }

  virtual void TearDown()
  {
  }
  core::RelativeObjectState correctVehicle;
  core::RelativeObjectState oppositeVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_brake_min_correct)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(178.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_shorter_ego_reaction_time)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.response_time = Duration(1.);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(178.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(150.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_safe)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(197.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_BrakeMinCorrect)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(196.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_response_1s_safe)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.response_time = Duration(1.);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(196.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_brake_min_correct_ego_vehicle_in_front)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(178.7));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_vehicles_at_same_position)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::OverlapFront, Distance(0.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 0kmh_vehicles_at_same_position)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::OverlapFront, Distance(0.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 0kmh_vehicles_very_near_min_longitudinal_safety_distance)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;
  correctVehicle.dynamics.response_time = physics::Duration(0.5);
  oppositeVehicle.dynamics.response_time = physics::Duration(0.5);

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(1.9));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.ego_state.dynamics.min_longitudinal_safety_distance = physics::Distance(2.);
  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, incorrect_vehicle_state_ego)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  correctVehicle.dynamics.alpha_lon.brake_min = Acceleration(-1);

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(178.7));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, incorrect_vehicle_state_other)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  oppositeVehicle.dynamics.alpha_lon.brake_min = Acceleration(-1.);

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(178.7));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
}

TEST_F(RssOppositeDirectionConstellationCheckerTests, 50kmh_brake_min_ego_opposite)
{
  RssNonIntersectionConstellationChecker checker;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = oppositeVehicle;
  constellation.other_state = correctVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(178.7));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, constellation));
}

} // namespace structured
} // namespace rss
} // namespace ad
