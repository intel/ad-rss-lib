// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
namespace situation {

class RssSituationCheckingTestsIntersectionPriority : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::IntersectionEgoHasPriority;
  }

  virtual void TearDown()
  {
  }
  core::RssSituationChecking situationChecking;
  VehicleState leadingVehicle;
  VehicleState followingVehicle;
  Situation situation;
  state::RssState rssState;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50kmh_safe_distance_ego_leading)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(120);
  leadingVehicle.distanceToEnterIntersection = Distance(2.);
  leadingVehicle.distanceToLeaveIntersection = Distance(2.);
  leadingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  leadingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  leadingVehicle.hasPriority = true;

  followingVehicle = createVehicleStateForLongitudinalMotion(30);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle.distanceToEnterIntersection = Distance(12.);
  followingVehicle.distanceToLeaveIntersection = Distance(12.);

  situation.otherVehicleState = followingVehicle;
  situation.egoVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(10.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50kmh_safe_distance_ego_following)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = Distance(10.);
  leadingVehicle.distanceToLeaveIntersection = Distance(10.);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle.distanceToEnterIntersection = Distance(70.);
  followingVehicle.distanceToLeaveIntersection = Distance(70.);

  situation.otherVehicleState = leadingVehicle;
  situation.egoVehicleState = followingVehicle;
  situation.egoVehicleState.hasPriority = true;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(60.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_TRUE(rssState.longitudinalState.isSafe);
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50km_h_stop_before_intersection)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = Distance(80.);
  leadingVehicle.distanceToLeaveIntersection = Distance(80.);
  leadingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  leadingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle.distanceToEnterIntersection = Distance(110.);
  followingVehicle.distanceToLeaveIntersection = Distance(110.);

  situation.otherVehicleState = leadingVehicle;
  situation.egoVehicleState = followingVehicle;
  situation.egoVehicleState.hasPriority = true;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(30.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_TRUE(rssState.longitudinalState.isSafe);
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

  situation.otherVehicleState.distanceToEnterIntersection = Distance(70.);
  situation.otherVehicleState.distanceToLeaveIntersection = Distance(70.);
  situation.egoVehicleState.distanceToEnterIntersection = Distance(100.);
  situation.egoVehicleState.distanceToLeaveIntersection = Distance(100.);
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::Overlap, Distance(0.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_FALSE(rssState.longitudinalState.isSafe);
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalNone, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

} // namespace situation
} // namespace rss
} // namespace ad
