// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
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

  situation.timeIndex = 0u;

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_TRUE(responseState.longitudinalState.isSafe);
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.timeIndex = 1u;

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
