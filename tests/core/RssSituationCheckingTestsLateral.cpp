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

class RssSituationCheckingTestsLateral : public testing::Test
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
  situation::VehicleState leftVehicle;
  situation::VehicleState rightVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

TEST_F(RssSituationCheckingTestsLateral, safe_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtLeft, 95.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralBrakeMin);
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralBrakeMin);
}

TEST_F(RssSituationCheckingTestsLateral, safe_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtRight, 95.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, both_move_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtLeft, 0.02);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
}

TEST_F(RssSituationCheckingTestsLateral, move_towards_each_other)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(-1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtLeft, 0.02);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
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
    situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtLeft, i);

    ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
    ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
    ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
  }

  // near enough: trigger brake
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtLeft, 1u);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);

  // ego vehicle overlaps on left side
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);

  // ego vehicle totally overlaps with other vehicle
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralBrakeMin);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralBrakeMin);

  // ego vehicle overlaps on right side
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralBrakeMin);

  // ego vehicle still too near, but on right side
  situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtRight, 1u);
  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
  ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
  ASSERT_EQ(responseState.lateralStateLeft, cLateralBrakeMin);

  // ego vehicle far enough on right side
  for (uint32_t i = 2; i < 10; i++)
  {
    situation.relativePosition = createRelativeLateralPosition(situation::LateralRelativePosition::AtRight, i);
    ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
    ASSERT_EQ(responseState.lateralStateRight, cLateralSafe);
    ASSERT_EQ(responseState.lateralStateLeft, cLateralSafe);
  }
}

} // namespace core
} // namespace rss
