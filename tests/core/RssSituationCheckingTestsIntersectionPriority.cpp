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

class RssSituationCheckingTestsIntersectionPriority : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = situation::SituationType::IntersectionEgoHasPriority;
  }

  virtual void TearDown()
  {
  }
  RssSituationChecking situationChecking;
  situation::VehicleState leadingVehicle;
  situation::VehicleState followingVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50kmh_safe_distance_ego_leading)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(120);
  leadingVehicle.distanceToEnterIntersection = 2;
  leadingVehicle.distanceToLeaveIntersection = 2;
  leadingVehicle.dynamics.alphaLon.accelMax = 2.;
  leadingVehicle.dynamics.alphaLon.brakeMin = 4.;
  leadingVehicle.hasPriority = true;

  followingVehicle = createVehicleStateForLongitudinalMotion(30);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle.distanceToEnterIntersection = 12;
  followingVehicle.distanceToLeaveIntersection = 12;

  situation.otherVehicleState = followingVehicle;
  situation.egoVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 10.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50kmh_safe_distance_ego_following)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = 10;
  leadingVehicle.distanceToLeaveIntersection = 10;
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle.distanceToEnterIntersection = 70;
  followingVehicle.distanceToLeaveIntersection = 70;

  situation.otherVehicleState = leadingVehicle;
  situation.egoVehicleState = followingVehicle;
  situation.egoVehicleState.hasPriority = true;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 60.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_TRUE(responseState.longitudinalState.isSafe);
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsIntersectionPriority, 50km_h_stop_before_intersection)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = 80;
  leadingVehicle.distanceToLeaveIntersection = 80;
  leadingVehicle.dynamics.alphaLon.accelMax = 2.;
  leadingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle.distanceToEnterIntersection = 110;
  followingVehicle.distanceToLeaveIntersection = 110;

  situation.otherVehicleState = leadingVehicle;
  situation.egoVehicleState = followingVehicle;
  situation.egoVehicleState.hasPriority = true;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 30.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_TRUE(responseState.longitudinalState.isSafe);
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.otherVehicleState.distanceToEnterIntersection = 70;
  situation.otherVehicleState.distanceToLeaveIntersection = 70;
  situation.egoVehicleState.distanceToEnterIntersection = 100;
  situation.egoVehicleState.distanceToLeaveIntersection = 100;

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_FALSE(responseState.longitudinalState.isSafe);
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalNone);
}

} // namespace core
} // namespace rss
