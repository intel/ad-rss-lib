// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "rss/core/RssSituationChecking.hpp"

namespace rss {
namespace core {

class RssSituationCheckingTestsOppositeDirection : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = situation::SituationType::OppositeDirection;
  }

  virtual void TearDown()
  {
  }
  RssSituationChecking situationChecking;
  situation::VehicleState correctVehicle;
  situation::VehicleState oppositeVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_correct)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.7);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMinCorrect);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_shorter_ego_reaction_time)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.responseTime = 1.;
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 150.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMinCorrect);

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 140.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_both_vehicles_correct_lane)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = true;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.7);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_safe)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 197.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_BrakeMinCorrect)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 196.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMinCorrect);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_response_1s_safe)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.responseTime = 1.;
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 196.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_correct_ego_vehicle_in_front)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 178.7);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMinCorrect);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_vehicles_at_same_position)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::OverlapFront, 0.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsOppositeDirection, incorrect_vehicle_state_ego)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  correctVehicle.dynamics.alphaLon.brakeMin = -1;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.7);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, incorrect_vehicle_state_other)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.dynamics.alphaLon.brakeMin = -1;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 178.7);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingTestsOppositeDirection, 50kmh_brake_min_ego_opposite)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = oppositeVehicle;
  situation.otherVehicleState = correctVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 178.7);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

} // namespace core
} // namespace rss
