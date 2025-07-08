// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/structured/RssIntersectionConstellationChecker.hpp"

namespace ad {
namespace rss {
namespace structured {

class RssIntersectionPriorityConstellationCheckerTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    constellation.constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
  }

  virtual void TearDown()
  {
  }
  core::RelativeObjectState leadingVehicle;
  core::RelativeObjectState followingVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssIntersectionPriorityConstellationCheckerTests, 50kmh_safe_distance_ego_leading)
{
  RssIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(120);
  leadingVehicle.structured_object_state.distance_to_enter_intersection = Distance(2.);
  leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(2.);
  leadingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  leadingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  leadingVehicle.structured_object_state.has_priority = true;

  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(30);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  followingVehicle.structured_object_state.distance_to_enter_intersection = Distance(12.);
  followingVehicle.structured_object_state.distance_to_leave_intersection = Distance(12.);

  constellation.other_state = followingVehicle;
  constellation.ego_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(10.));

  ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssIntersectionPriorityConstellationCheckerTests, 50kmh_safe_distance_ego_following)
{
  RssIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  leadingVehicle.structured_object_state.distance_to_enter_intersection = Distance(10.);
  leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(10.);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  followingVehicle.structured_object_state.distance_to_enter_intersection = Distance(70.);
  followingVehicle.structured_object_state.distance_to_leave_intersection = Distance(70.);

  constellation.other_state = leadingVehicle;
  constellation.ego_state = followingVehicle;
  constellation.ego_state.structured_object_state.has_priority = true;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(60.));

  ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
  ASSERT_TRUE(rssState.longitudinal_state.is_safe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssIntersectionPriorityConstellationCheckerTests, 50km_h_stop_before_intersection)
{
  RssIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  leadingVehicle.structured_object_state.distance_to_enter_intersection = Distance(80.);
  leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(80.);
  leadingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  leadingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  followingVehicle.structured_object_state.distance_to_enter_intersection = Distance(110.);
  followingVehicle.structured_object_state.distance_to_leave_intersection = Distance(110.);

  constellation.other_state = leadingVehicle;
  constellation.ego_state = followingVehicle;
  constellation.ego_state.structured_object_state.has_priority = true;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(30.));

  ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
  ASSERT_TRUE(rssState.longitudinal_state.is_safe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(70.);
  constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(70.);
  constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(100.);
  constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(100.);
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::Overlap, Distance(0.));

  ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
  ASSERT_FALSE(rssState.longitudinal_state.is_safe);
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

} // namespace structured
} // namespace rss
} // namespace ad
