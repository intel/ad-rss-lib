// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
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
  state::RssState rssState;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsLateral, safe_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(95.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));

  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_left)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, not_safe_overlap_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, safe_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(95.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, both_move_right)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
}

TEST_F(RssSituationCheckingTestsLateral, move_towards_each_other)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(-1);

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(0.02));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
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

    ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
    ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
    ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
    ASSERT_EQ(rssState.lateralStateLeft, cTestSupport.cLateralSafe);
    ASSERT_EQ(rssState.longitudinalState,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  }

  // near enough: trigger brake
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtLeft, Distance(1));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));

  // ego vehicle overlaps on left side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapLeft);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));

  // ego vehicle totally overlaps with other vehicle
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::Overlap);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));

  // ego vehicle overlaps on right side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::OverlapRight);

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));

  // ego vehicle still too near, but on right side
  situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(1));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
  ASSERT_EQ(rssState.lateralStateRight, cTestSupport.cLateralSafe);
  ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralBrakeMin, situation));
  ASSERT_EQ(rssState.longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));

  // ego vehicle far enough on right side
  for (uint32_t i = 2; i < 10; i++)
  {
    situation.relativePosition = createRelativeLateralPosition(LateralRelativePosition::AtRight, Distance(i));
    ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
    ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssState));
    ASSERT_EQ(rssState.lateralStateRight, cTestSupport.cLateralSafe);
    ASSERT_EQ(rssState.lateralStateLeft, TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
    ASSERT_EQ(rssState.longitudinalState,
              TestSupport::stateWithInformation(cTestSupport.cLongitudinalBrakeMin, situation));
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
