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

class RssSituationCheckingTestsOppositeDirection : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::OppositeDirection;
  }

  virtual void TearDown()
  {
  }
  VehicleState correctVehicle;
  VehicleState oppositeVehicle;
  Situation situation;
  state::RssState rssState;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_correct)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(178.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_shorter_ego_reaction_time)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.responseTime = Duration(1.);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(178.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));

  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(150.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_safe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(197.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_BrakeMinCorrect)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(196.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_response_1s_safe)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.responseTime = Duration(1.);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(196.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState, TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralNone, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_correct_ego_vehicle_in_front)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(178.7));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_vehicles_at_same_position)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::OverlapFront, Distance(0.));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMinCorrect, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, incorrect_vehicle_state_ego)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  correctVehicle.dynamics.alphaLon.brakeMin = Acceleration(-1);

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(178.7));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, incorrect_vehicle_state_other)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.dynamics.alphaLon.brakeMin = Acceleration(-1.);

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(178.7));

  ASSERT_FALSE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_ego_opposite)
{
  RssStructuredSceneNonIntersectionChecker checker;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = oppositeVehicle;
  situation.otherVehicleState = correctVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::InFront, Distance(178.7));

  ASSERT_TRUE(checker.calculateRssStateNonIntersection(timeIndex++, situation, rssState));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
}

} // namespace situation
} // namespace rss
} // namespace ad
