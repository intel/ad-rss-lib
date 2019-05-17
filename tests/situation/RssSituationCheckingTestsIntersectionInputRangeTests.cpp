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
