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

class RssIntersectionConstellationCheckerInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    constellation.constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
  }

  void performTestRun()
  {
    RssIntersectionConstellationChecker checker;
    EXPECT_FALSE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
  }
  core::RelativeObjectState leadingVehicle;
  core::RelativeObjectState followingVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssIntersectionConstellationCheckerInputRangeTests, no_priority_vehicle)
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

  constellation.ego_state = leadingVehicle;
  constellation.other_state = followingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(60.));

  ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
}

TEST_F(RssIntersectionConstellationCheckerInputRangeTests, distanceToLeaveSmallerEgo)
{
  constellation.ego_state = createRelativeVehicleStateForLongitudinalMotion(120);
  constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(15.);
  constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(14.);

  constellation.ego_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.other_state = createRelativeVehicleStateForLongitudinalMotion(10);
  constellation.other_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
  constellation.other_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(16.);
  constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(16.);
  constellation.other_state.structured_object_state.has_priority = true;

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(1.));

  performTestRun();
}

TEST_F(RssIntersectionConstellationCheckerInputRangeTests, distanceToLeaveSmallerOther)
{
  constellation.ego_state = createRelativeVehicleStateForLongitudinalMotion(120);
  constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(15.);
  constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(15.);

  constellation.ego_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.other_state = createRelativeVehicleStateForLongitudinalMotion(10);
  constellation.other_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
  constellation.other_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(16.);
  constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(15.);
  constellation.other_state.structured_object_state.has_priority = true;

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(1.));

  performTestRun();
}

TEST_F(RssIntersectionConstellationCheckerInputRangeTests, both_priority_vehicle)
{
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  leadingVehicle.structured_object_state.distance_to_enter_intersection = Distance(10.);
  leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(10.);
  leadingVehicle.structured_object_state.has_priority = true;

  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
  followingVehicle.structured_object_state.distance_to_enter_intersection = Distance(70.);
  leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(70.);
  followingVehicle.structured_object_state.has_priority = true;

  constellation.ego_state = leadingVehicle;
  constellation.other_state = followingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(60.));

  performTestRun();
}

} // namespace structured
} // namespace rss
} // namespace ad
