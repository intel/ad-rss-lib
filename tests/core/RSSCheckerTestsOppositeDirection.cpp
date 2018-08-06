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
#include "rss/core/RSSChecker.hpp"

namespace rss {
namespace core {
namespace RSSChecker {

using check::Response;
using check::LateralResponse;
using check::LongitudinalResponse;

class RSSCheckerTestsOppositeDirection : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
  lane::VehicleState correctVehicle;
  lane::VehicleState oppositeVehicle;
  lane::Situation situation;
  Response response;
};

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_brake_min_correct)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 178.7;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_brake_min)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 178;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_shorter_ego_reaction_time)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.responseTime = 1.;
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 178;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);

  oppositeVehicle.position.lonInterval.minimum = 150;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMinCorrect);

  oppositeVehicle.position.lonInterval.minimum = 140;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_both_vehicles_correct_lane)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = true;

  oppositeVehicle.position.lonInterval.minimum = 178.7;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);

  oppositeVehicle.position.lonInterval.minimum = 178;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_safe)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 197;
  oppositeVehicle.position.lonInterval.maximum = 199;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_BrakeMinCorrect)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 196;
  oppositeVehicle.position.lonInterval.maximum = 199;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_response_1s_safe)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.responseTime = 1.;
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 196;
  oppositeVehicle.position.lonInterval.maximum = 199;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_brake_min_correct_ego_vehicle_in_front)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  correctVehicle.position.lonInterval.minimum = 178.7;
  correctVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_vehicles_at_same_position)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  correctVehicle.position.lonInterval.minimum = 178.7;
  correctVehicle.position.lonInterval.maximum = 180;

  oppositeVehicle.position.lonInterval.minimum = 178.9;
  oppositeVehicle.position.lonInterval.maximum = 180.2;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsOppositeDirection, incorrect_vehicle_state_ego)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  correctVehicle.dynamics.alphaLon.brakeMin = -1;

  oppositeVehicle.position.lonInterval.minimum = 178.7;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerTestsOppositeDirection, incorrect_vehicle_state_other)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.dynamics.alphaLon.brakeMin = -1;

  oppositeVehicle.position.lonInterval.minimum = 178.7;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerTestsOppositeDirection, 50kmh_brake_min_ego_opposite)
{
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  oppositeVehicle.isInCorrectLane = false;

  oppositeVehicle.position.lonInterval.minimum = 178.7;
  oppositeVehicle.position.lonInterval.maximum = 180;

  situation.egoVehicleState = oppositeVehicle;
  situation.otherVehicleState = correctVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
