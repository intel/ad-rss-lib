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

class RssIntersectionNoPriorityConstellationCheckerTests : public testing::Test
{
protected:
  core::RelativeObjectState leadingVehicle;
  core::RelativeObjectState followingVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssIntersectionNoPriorityConstellationCheckerTests, ego_following_no_overlap)
{
  for (auto constellation_type :
       {world::ConstellationType::IntersectionSamePriority, world::ConstellationType::IntersectionObjectHasPriority})
  {
    RssIntersectionConstellationChecker checker;
    constellation.ego_state = createRelativeVehicleStateForLongitudinalMotion(120);
    constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(15);
    constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(15);

    constellation.ego_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
    constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);

    constellation.other_state = createRelativeVehicleStateForLongitudinalMotion(10);
    constellation.other_state.dynamics.alpha_lon.accel_max = Acceleration(2.);
    constellation.other_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);
    constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(16);
    constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(16);

    constellation.relative_position
      = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(1.));
    constellation.constellation_type = constellation_type;
    if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
    {
      constellation.other_state.structured_object_state.has_priority = true;
    }
    else
    {
      constellation.other_state.structured_object_state.has_priority = false;
    }

    EXPECT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
    EXPECT_EQ(rssState.longitudinal_state,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
    EXPECT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
    EXPECT_EQ(rssState.lateral_state_right,
              TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

    // next constellation we have overlap
    constellation.ego_state.structured_object_state.velocity.speed_lon_min = Speed(10);
    constellation.ego_state.structured_object_state.velocity.speed_lon_max = Speed(10);

    EXPECT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
    if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
    {
      EXPECT_EQ(rssState.longitudinal_state,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
    }
    else
    {
      EXPECT_EQ(rssState.longitudinal_state,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
    }
    EXPECT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
    EXPECT_EQ(rssState.lateral_state_right,
              TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  }
}

TEST_F(RssIntersectionNoPriorityConstellationCheckerTests, 50kmh_safe_distance_ego_following)
{
  for (auto constellation_type :
       {world::ConstellationType::IntersectionSamePriority, world::ConstellationType::IntersectionObjectHasPriority})
  {
    RssIntersectionConstellationChecker checker;
    leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(120);
    leadingVehicle.structured_object_state.distance_to_enter_intersection = Distance(2);
    leadingVehicle.structured_object_state.distance_to_leave_intersection = Distance(2);
    leadingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
    leadingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
    if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
    {
      leadingVehicle.structured_object_state.has_priority = true;
    }
    else
    {
      leadingVehicle.structured_object_state.has_priority = false;
    }

    followingVehicle = createRelativeVehicleStateForLongitudinalMotion(30);
    followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
    followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);
    followingVehicle.structured_object_state.distance_to_enter_intersection = Distance(12.);
    followingVehicle.structured_object_state.distance_to_leave_intersection = Distance(12.);

    constellation.ego_state = followingVehicle;
    constellation.other_state = leadingVehicle;
    constellation.relative_position
      = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(10.));
    constellation.constellation_type = constellation_type;
    if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
    {
      constellation.other_state.structured_object_state.has_priority = true;
    }
    else
    {
      constellation.other_state.structured_object_state.has_priority = false;
    }

    ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
    EXPECT_EQ(rssState.longitudinal_state,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
    EXPECT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
    EXPECT_EQ(rssState.lateral_state_right,
              TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  }
}

TEST_F(RssIntersectionNoPriorityConstellationCheckerTests, 50kmh_safe_distance_ego_leading)
{
  for (auto constellation_type :
       {world::ConstellationType::IntersectionSamePriority, world::ConstellationType::IntersectionObjectHasPriority})
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
    constellation.constellation_type = constellation_type;
    if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
    {
      constellation.other_state.structured_object_state.has_priority = true;
    }
    else
    {
      constellation.other_state.structured_object_state.has_priority = false;
    }

    ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
    ASSERT_TRUE(rssState.longitudinal_state.is_safe);
    EXPECT_EQ(rssState.longitudinal_state,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
    EXPECT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
    EXPECT_EQ(rssState.lateral_state_right,
              TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  }
}

TEST_F(RssIntersectionNoPriorityConstellationCheckerTests, 50km_h_stop_before_intersection)
{
  for (auto initiallySafe : {true, false})
  {
    for (auto constellation_type :
         {world::ConstellationType::IntersectionSamePriority, world::ConstellationType::IntersectionObjectHasPriority})
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

      constellation.ego_state = leadingVehicle;
      constellation.other_state = followingVehicle;
      constellation.relative_position
        = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(30.));
      constellation.constellation_type = constellation_type;
      if (constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
      {
        constellation.other_state.structured_object_state.has_priority = true;
      }
      else
      {
        constellation.other_state.structured_object_state.has_priority = false;
      }

      if (initiallySafe)
      {
        // both vehicles can stop safely
        ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
        ASSERT_TRUE(rssState.longitudinal_state.is_safe);
        ASSERT_EQ(rssState.longitudinal_state,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
        EXPECT_EQ(rssState.lateral_state_left,
                  TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
        EXPECT_EQ(rssState.lateral_state_right,
                  TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
      }

      // ego vehicle cannot stop safely anymore
      // but other vehicle still
      constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(70);
      constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(70);
      constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(100);
      constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(100);

      ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
      if (constellation.other_state.structured_object_state.has_priority)
      {
        ASSERT_FALSE(rssState.longitudinal_state.is_safe);
        ASSERT_EQ(rssState.longitudinal_state,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
      }
      else
      {
        ASSERT_TRUE(rssState.longitudinal_state.is_safe);
        ASSERT_EQ(rssState.longitudinal_state,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
      }
      EXPECT_EQ(rssState.lateral_state_left,
                TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
      EXPECT_EQ(rssState.lateral_state_right,
                TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

      // both cannot stop safely anymore
      constellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(70.);
      constellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(70.);
      constellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(70.);
      constellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(70.);

      ASSERT_TRUE(checker.calculateRssStateIntersection(time_index++, constellation, rssState));
      ASSERT_FALSE(rssState.longitudinal_state.is_safe);
      ASSERT_EQ(rssState.longitudinal_state,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
      EXPECT_EQ(rssState.lateral_state_left,
                TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
      EXPECT_EQ(rssState.lateral_state_right,
                TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
    }
  }
}

} // namespace structured
} // namespace rss
} // namespace ad
