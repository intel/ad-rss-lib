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

class RssLongitudinalConstellationCheckerTests : public testing::Test
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
  core::RelativeObjectState leadingVehicle;
  core::RelativeObjectState followingVehicle;
  core::RelativeConstellation constellation;
  state::RssState rssState;
  world::TimeIndex time_index{1u};
};

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_ego_safe_distance)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(100);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);

  constellation.ego_state = leadingVehicle;
  constellation.other_state = followingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::InFront, Distance(95.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_safe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(60.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_unsafe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(58.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_maxspeed_safe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.max_speed_on_acceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(40.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_maxspeed_unsafe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.max_speed_on_acceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(38.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_40kmh_maxspeed_unsafe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.max_speed_on_acceleration = kmhToMeterPerSec(40.);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(38.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_no_accel_unsafe)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(0.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(39.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_other_standing)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(71.8));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(71.6));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_50kmh_maxspeed_other_standing)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.max_speed_on_acceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(52.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(50.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_leading_other_0kmh_other_standing)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(0);
  followingVehicle.dynamics.alpha_lon.accel_max = Acceleration(2.);
  followingVehicle.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(6.1));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));

  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(6.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
  ASSERT_EQ(rssState.longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, constellation));
  ASSERT_EQ(rssState.lateral_state_left, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
  ASSERT_EQ(rssState.lateral_state_right, TestSupport::stateWithInformation(cTestSupport.cLateralNone, constellation));
}

TEST_F(RssLongitudinalConstellationCheckerTests, same_direction_both_negative_velocity)
{
  RssNonIntersectionConstellationChecker checker;
  leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(-50);
  followingVehicle = createRelativeVehicleStateForLongitudinalMotion(-50);

  constellation.ego_state = followingVehicle;
  constellation.other_state = leadingVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(core::LongitudinalRelativePosition::AtBack, Distance(71.6));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(time_index++, constellation, rssState));
}

} // namespace structured
} // namespace rss
} // namespace ad
