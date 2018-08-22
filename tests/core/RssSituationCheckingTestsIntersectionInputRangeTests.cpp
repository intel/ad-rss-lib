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

class RssSituationCheckingTestsIntersectionInputRangeTests : public testing::Test
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

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, no_priority_vehicle)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = 10;
  leadingVehicle.distanceToLeaveIntersection = 10;
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle.distanceToEnterIntersection = 70;
  followingVehicle.distanceToLeaveIntersection = 70;

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 60.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, both_priority_vehicle)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = 10;
  leadingVehicle.distanceToLeaveIntersection = 10;
  leadingVehicle.hasPriority = true;

  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle.distanceToEnterIntersection = 70;
  leadingVehicle.distanceToLeaveIntersection = 70;
  followingVehicle.hasPriority = true;

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 60.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, sitatuion_initialy_unsafe)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  leadingVehicle.distanceToEnterIntersection = 70;
  leadingVehicle.distanceToLeaveIntersection = 70;
  leadingVehicle.dynamics.alphaLon.accelMax = 2.;
  leadingVehicle.dynamics.alphaLon.brakeMin = 4.;
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  followingVehicle.distanceToEnterIntersection = 100;
  followingVehicle.distanceToLeaveIntersection = 100;

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.otherVehicleState.hasPriority = true;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 30.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

} // namespace core
} // namespace rss