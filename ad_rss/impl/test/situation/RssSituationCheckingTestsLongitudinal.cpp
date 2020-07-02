// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RssStructuredSceneNonIntersectionChecker.hpp"

namespace ad {
namespace rss {
namespace situation {

class RssSituationCheckingTestsLongitudinal : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::SameDirection;
    situation.situationId = SituationId(111);
  }

  virtual void TearDown()
  {
  }
  VehicleState leadingVehicle;
  VehicleState followingVehicle;
  Situation situation;
  state::RssState rssState;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_ego_safe_distance)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(100);
  followingVehicle = createVehicleStateForLongitudinalMotion(10);

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(95.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_safe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(60.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_unsafe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(58.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_maxspeed_safe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.maxSpeedOnAcceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(40.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_maxspeed_unsafe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.maxSpeedOnAcceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(38.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_40kmh_maxspeed_unsafe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.maxSpeedOnAcceleration = kmhToMeterPerSec(40.);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(38.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_no_accel_unsafe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(0.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(39.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_other_standing)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(71.8));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(71.6));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_maxspeed_other_standing)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.maxSpeedOnAcceleration = kmhToMeterPerSec(50.);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(52.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(50.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_0kmh_other_standing)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle.dynamics.alphaLon.accelMax = Acceleration(2.);
  followingVehicle.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(6.1));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(6.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_both_negative_velocity)
{
  RssStructuredSceneNonIntersectionChecker checker;
  leadingVehicle = createVehicleStateForLongitudinalMotion(-50);
  followingVehicle = createVehicleStateForLongitudinalMotion(-50);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(71.6));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
}

} // namespace situation
} // namespace rss
} // namespace ad
