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

class RssSituationCheckingTestsLateral : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::SameDirection;
  }

  virtual void TearDown()
  {
  }
  core::RssSituationChecking situationChecking;
  VehicleState leftVehicle;
  VehicleState rightVehicle;
  Situation situation;
  state::ResponseState responseState;
};

TEST_F(RssSituationCheckingTestsLateral, safe_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(95.));

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralBrakeMin);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralBrakeMin);
}

TEST_F(RssSituationCheckingTestsLateral, safe_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(95.));

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, both_move_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, move_towards_each_other)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(-1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, check_input_range)
{
  leftVehicle = createVehicleStateForLateralMotion(0);
  rightVehicle = createVehicleStateForLateralMotion(0);

  // ego vehicle "moves" towards right vehicle from left
  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  for (uint32_t i = 10; i > 1; i--)
  {
    situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(i));

    ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
    ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
    ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
  }

  // near enough: trigger brake
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(1));

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);

  // ego vehicle overlaps on left side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);

  // ego vehicle totally overlaps with other vehicle
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralBrakeMin);

  // ego vehicle overlaps on right side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralBrakeMin);

  // ego vehicle still too near, but on right side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(1));
  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralBrakeMin);

  // ego vehicle far enough on right side
  for (uint32_t i = 2; i < 10; i++)
  {
    situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(i));
    ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
    ASSERT_EQ(responseState.lateralStateRight, cTestSupport.cLateralSafe);
    ASSERT_EQ(responseState.lateralStateLeft, cTestSupport.cLateralSafe);
  }
}

} // namespace situation
} // namespace ad_rss
