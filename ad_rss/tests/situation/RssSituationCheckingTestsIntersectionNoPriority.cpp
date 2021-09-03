// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RssStructuredSceneIntersectionChecker.hpp"

namespace ad {
namespace rss {
namespace situation {

class RssSituationCheckingTestsIntersectionNoPriority : public testing::Test
{
protected:
  VehicleState leadingVehicle;
  VehicleState followingVehicle;
  Situation situation;
  state::RssState rssState;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsIntersectionNoPriority, ego_following_no_overlap)
{
  for (auto situationType : {SituationType::IntersectionSamePriority, SituationType::IntersectionObjectHasPriority})
  {
    RssStructuredSceneIntersectionChecker checker;
    situation.egoVehicleState = createVehicleStateForLongitudinalMotion(120);
    situation.egoVehicleState.distanceToEnterIntersection = Distance(15);
    situation.egoVehicleState.distanceToLeaveIntersection = Distance(15);

    situation.egoVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-4.);

    situation.otherVehicleState = createVehicleStateForLongitudinalMotion(10);
    situation.otherVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-4.);
    situation.otherVehicleState.distanceToEnterIntersection = Distance(16);
    situation.otherVehicleState.distanceToLeaveIntersection = Distance(16);

    situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(1.));
    situation.situationType = situationType;
    if (situationType == SituationType::IntersectionObjectHasPriority)
    {
      situation.otherVehicleState.hasPriority = true;
    }
    else
    {
      situation.otherVehicleState.hasPriority = false;
    }

    EXPECT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
    EXPECT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
    EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
    EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

    // next situation we have overlap
    situation.egoVehicleState.velocity.speedLon.minimum = Speed(10);
    situation.egoVehicleState.velocity.speedLon.maximum = Speed(10);

    EXPECT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
    if (situationType == SituationType::IntersectionObjectHasPriority)
    {
      EXPECT_EQ(rssState.longitudinalState,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
    }
    else
    {
      EXPECT_EQ(rssState.longitudinalState,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
    }
    EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
    EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  }
}

TEST_F(RssSituationCheckingTestsIntersectionNoPriority, 50kmh_safe_distance_ego_following)
{
  for (auto situationType : {SituationType::IntersectionSamePriority, SituationType::IntersectionObjectHasPriority})
  {
    RssStructuredSceneIntersectionChecker checker;
    leadingVehicle = createVehicleStateForLongitudinalMotion(120);
    leadingVehicle.distanceToEnterIntersection = Distance(2);
    leadingVehicle.distanceToLeaveIntersection = Distance(2);
    leadingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
    leadingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);
    if (situationType == SituationType::IntersectionObjectHasPriority)
    {
      leadingVehicle.hasPriority = true;
    }
    else
    {
      leadingVehicle.hasPriority = false;
    }

    followingVehicle = createVehicleStateForLongitudinalMotion(30);
    followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
    followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);
    followingVehicle.distanceToEnterIntersection = Distance(12.);
    followingVehicle.distanceToLeaveIntersection = Distance(12.);

    situation.egoVehicleState = followingVehicle;
    situation.otherVehicleState = leadingVehicle;
    situation.relativePosition
      = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(10.));
    situation.situationType = situationType;
    if (situationType == SituationType::IntersectionObjectHasPriority)
    {
      situation.otherVehicleState.hasPriority = true;
    }
    else
    {
      situation.otherVehicleState.hasPriority = false;
    }

    ASSERT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
    EXPECT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
    EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
    EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  }
}

TEST_F(RssSituationCheckingTestsIntersectionNoPriority, 50kmh_safe_distance_ego_leading)
{
  for (auto situationType : {SituationType::IntersectionSamePriority, SituationType::IntersectionObjectHasPriority})
  {
    RssStructuredSceneIntersectionChecker checker;
    leadingVehicle = createVehicleStateForLongitudinalMotion(50);
    leadingVehicle.distanceToEnterIntersection = Distance(10.);
    leadingVehicle.distanceToLeaveIntersection = Distance(10.);
    followingVehicle = createVehicleStateForLongitudinalMotion(50);
    followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
    followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);
    followingVehicle.distanceToEnterIntersection = Distance(70.);
    followingVehicle.distanceToLeaveIntersection = Distance(70.);

    situation.egoVehicleState = leadingVehicle;
    situation.otherVehicleState = followingVehicle;
    situation.relativePosition
      = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(60.));
    situation.situationType = situationType;
    if (situationType == SituationType::IntersectionObjectHasPriority)
    {
      situation.otherVehicleState.hasPriority = true;
    }
    else
    {
      situation.otherVehicleState.hasPriority = false;
    }

    ASSERT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
    ASSERT_TRUE(rssState.longitudinalState.isSafe);
    EXPECT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
    EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
    EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  }
}

TEST_F(RssSituationCheckingTestsIntersectionNoPriority, 50km_h_stop_before_intersection)
{
  for (auto initiallySafe : {true, false})
  {
    for (auto situationType : {SituationType::IntersectionSamePriority, SituationType::IntersectionObjectHasPriority})
    {
      RssStructuredSceneIntersectionChecker checker;
      leadingVehicle = createVehicleStateForLongitudinalMotion(50);
      leadingVehicle.distanceToEnterIntersection = Distance(80.);
      leadingVehicle.distanceToLeaveIntersection = Distance(80.);
      leadingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
      leadingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);
      followingVehicle = createVehicleStateForLongitudinalMotion(50);
      followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
      followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);
      followingVehicle.distanceToEnterIntersection = Distance(110.);
      followingVehicle.distanceToLeaveIntersection = Distance(110.);

      situation.egoVehicleState = leadingVehicle;
      situation.otherVehicleState = followingVehicle;
      situation.relativePosition
        = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(30.));
      situation.situationType = situationType;
      if (situationType == SituationType::IntersectionObjectHasPriority)
      {
        situation.otherVehicleState.hasPriority = true;
      }
      else
      {
        situation.otherVehicleState.hasPriority = false;
      }

      if (initiallySafe)
      {
        // both vehicles can stop safely
        ASSERT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
        ASSERT_TRUE(rssState.longitudinalState.isSafe);
        ASSERT_EQ(rssState.longitudinalState,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
        EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
        EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
      }

      // ego vehicle cannot stop safely anymore
      // but other vehicle still
      situation.egoVehicleState.distanceToEnterIntersection = Distance(70);
      situation.egoVehicleState.distanceToLeaveIntersection = Distance(70);
      situation.otherVehicleState.distanceToEnterIntersection = Distance(100);
      situation.otherVehicleState.distanceToLeaveIntersection = Distance(100);

      ASSERT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
      if (situation.otherVehicleState.hasPriority)
      {
        ASSERT_FALSE(rssState.longitudinalState.isSafe);
        ASSERT_EQ(rssState.longitudinalState,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
      }
      else
      {
        ASSERT_TRUE(rssState.longitudinalState.isSafe);
        ASSERT_EQ(rssState.longitudinalState,
                  TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
      }
      EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
      EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

      // both cannot stop safely anymore
      situation.egoVehicleState.distanceToEnterIntersection = Distance(70.);
      situation.egoVehicleState.distanceToLeaveIntersection = Distance(70.);
      situation.otherVehicleState.distanceToEnterIntersection = Distance(70.);
      situation.otherVehicleState.distanceToLeaveIntersection = Distance(70.);

      ASSERT_TRUE(checker.calculateRssStateIntersection(timeIndex++, situation, rssState));
      ASSERT_FALSE(rssState.longitudinalState.isSafe);
      ASSERT_EQ(rssState.longitudinalState,
                TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
      EXPECT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
      EXPECT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
    }
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
