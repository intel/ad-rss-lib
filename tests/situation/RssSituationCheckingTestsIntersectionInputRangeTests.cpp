// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad_rss/core/RssSituationChecking.hpp"

namespace ad_rss {
namespace situation {

class RssSituationCheckingTestsIntersectionInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::IntersectionEgoHasPriority;
  }

  void performTestRun()
  {
    EXPECT_FALSE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  }
  core::RssSituationChecking situationChecking;
  VehicleState leadingVehicle;
  VehicleState followingVehicle;
  Situation situation;
  state::RssState rssState;
  physics::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, no_priority_vehicle)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = Distance(10.);
  leadingVehicle.distanceToLeaveIntersection = Distance(10.);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle.distanceToEnterIntersection = Distance(70.);
  followingVehicle.distanceToLeaveIntersection = Distance(70.);

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(60.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, distanceToLeaveSmallerEgo)
{
  situation.egoVehicleState = createVehicleStateForLongitudinalMotion(120);
  situation.egoVehicleState.distanceToEnterIntersection = Distance(15.);
  situation.egoVehicleState.distanceToLeaveIntersection = Distance(14.);

  situation.egoVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);

  situation.otherVehicleState = createVehicleStateForLongitudinalMotion(10);
  situation.otherVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);
  situation.otherVehicleState.distanceToEnterIntersection = Distance(16.);
  situation.otherVehicleState.distanceToLeaveIntersection = Distance(16.);
  situation.otherVehicleState.hasPriority = true;

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(1.));

  performTestRun();
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, distanceToLeaveSmallerOther)
{
  situation.egoVehicleState = createVehicleStateForLongitudinalMotion(120);
  situation.egoVehicleState.distanceToEnterIntersection = Distance(15.);
  situation.egoVehicleState.distanceToLeaveIntersection = Distance(15.);

  situation.egoVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);

  situation.otherVehicleState = createVehicleStateForLongitudinalMotion(10);
  situation.otherVehicleState.dynamics.alphaLon.accelMax = Acceleration(2.);
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);
  situation.otherVehicleState.distanceToEnterIntersection = Distance(16.);
  situation.otherVehicleState.distanceToLeaveIntersection = Distance(15.);
  situation.otherVehicleState.hasPriority = true;

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(1.));

  performTestRun();
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, both_priority_vehicle)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = Distance(10.);
  leadingVehicle.distanceToLeaveIntersection = Distance(10.);
  leadingVehicle.hasPriority = true;

  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(4.);
  followingVehicle.distanceToEnterIntersection = Distance(70.);
  leadingVehicle.distanceToLeaveIntersection = Distance(70.);
  followingVehicle.hasPriority = true;

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(60.));

  performTestRun();
}

} // namespace situation
} // namespace ad_rss
