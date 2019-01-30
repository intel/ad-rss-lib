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

class RssSituationCheckingTestsLongitudinal : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = situation::SituationType::SameDirection;
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

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_ego_safe_distance)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(100);
  followingVehicle = createVehicleStateForLongitudinalMotion(10);

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 95.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_safe)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 60.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_unsafe)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 0.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 39.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_50kmh_other_standing)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.8);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.6);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_leading_other_0kmh_other_standing)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 6.01);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 6.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RssSituationCheckingTestsLongitudinal, same_direction_both_negative_velocity)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(-50);
  followingVehicle = createVehicleStateForLongitudinalMotion(-50);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.6);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

} // namespace core
} // namespace rss
