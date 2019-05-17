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
#include "ad_rss/core/RssSituationChecking.hpp"

namespace ad_rss {
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
  physics::TimeIndex timeIndex{1u};
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
} // namespace ad_rss
