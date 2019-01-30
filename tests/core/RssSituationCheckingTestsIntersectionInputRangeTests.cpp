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

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, distanceToLeaveSmallerEgo)
{
  situation.egoVehicleState = createVehicleStateForLongitudinalMotion(120);
  situation.egoVehicleState.distanceToEnterIntersection = 15;
  situation.egoVehicleState.distanceToLeaveIntersection = 14;

  situation.egoVehicleState.dynamics.alphaLon.accelMax = 2.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 4.;

  situation.otherVehicleState = createVehicleStateForLongitudinalMotion(10);
  situation.otherVehicleState.dynamics.alphaLon.accelMax = 2.;
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = 4.;
  situation.otherVehicleState.distanceToEnterIntersection = 16;
  situation.otherVehicleState.distanceToLeaveIntersection = 16;
  situation.otherVehicleState.hasPriority = true;

  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 1);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingTestsIntersectionInputRangeTests, distanceToLeaveSmallerOther)
{
  situation.egoVehicleState = createVehicleStateForLongitudinalMotion(120);
  situation.egoVehicleState.distanceToEnterIntersection = 15;
  situation.egoVehicleState.distanceToLeaveIntersection = 15;

  situation.egoVehicleState.dynamics.alphaLon.accelMax = 2.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 4.;

  situation.otherVehicleState = createVehicleStateForLongitudinalMotion(10);
  situation.otherVehicleState.dynamics.alphaLon.accelMax = 2.;
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = 4.;
  situation.otherVehicleState.distanceToEnterIntersection = 16;
  situation.otherVehicleState.distanceToLeaveIntersection = 15;
  situation.otherVehicleState.hasPriority = true;

  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 1);

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
