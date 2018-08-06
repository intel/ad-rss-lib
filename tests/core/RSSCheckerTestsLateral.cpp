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
#include "rss/core/RSSChecker.hpp"

namespace rss {
namespace core {
namespace RSSChecker {

using check::Response;
using check::LateralResponse;
using check::LongitudinalResponse;

class RSSCheckerTestsLateral : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
  lane::VehicleState leftVehicle;
  lane::VehicleState rightVehicle;
  lane::Situation situation;
  Response response;
};

TEST_F(RSSCheckerTestsLateral, lateral_safe_distance)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = 100;
  leftVehicle.position.latInterval.maximum = 106;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::Safe);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::Safe);
}

TEST_F(RSSCheckerTestsLateral, same_lateral_position)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = 0;
  leftVehicle.position.latInterval.maximum = 5;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsLateral, same_lateral_position_ego_wider)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = -2;
  leftVehicle.position.latInterval.maximum = 7;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsLateral, same_lateral_position_ego_narrower)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = 1;
  leftVehicle.position.latInterval.maximum = 3;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsLateral, not_safe_right_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = -1;
  leftVehicle.position.latInterval.maximum = 3;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::None);
}

TEST_F(RSSCheckerTestsLateral, not_safe_left_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = -1;
  leftVehicle.position.latInterval.maximum = 3;

  rightVehicle.position.latInterval.minimum = 0;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = rightVehicle;
  situation.otherVehicleState = leftVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::None);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);
}

TEST_F(RSSCheckerTestsLateral, lateral_move_right_no_overlap)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(1);

  leftVehicle.position.latInterval.minimum = -5;
  leftVehicle.position.latInterval.maximum = -0.01;

  rightVehicle.position.latInterval.minimum = 0.01;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::None);
}

TEST_F(RSSCheckerTestsLateral, lateral_move_towards_each_other)
{
  leftVehicle = createVehicleStateForLateralMotion(1);
  rightVehicle = createVehicleStateForLateralMotion(-1);

  leftVehicle.position.latInterval.minimum = -5;
  leftVehicle.position.latInterval.maximum = -0.01;

  rightVehicle.position.latInterval.minimum = 0.01;
  rightVehicle.position.latInterval.maximum = 5;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::None);
}

TEST_F(RSSCheckerTestsLateral, lateral_checks_input_range)
{
  leftVehicle = createVehicleStateForLateralMotion(0);
  rightVehicle = createVehicleStateForLateralMotion(0);

  rightVehicle.position.latInterval.minimum = -1;
  rightVehicle.position.latInterval.maximum = 1;

  for (uint32_t i = 0; i < 16; i++)
  {
    // left vehicle "moves" towards right vehicle from left
    leftVehicle.position.latInterval.minimum = -20. + i;
    leftVehicle.position.latInterval.maximum = -18. + i;

    situation.egoVehicleState = leftVehicle;
    situation.otherVehicleState = rightVehicle;

    ASSERT_TRUE(checkSituation(situation, response));
    ASSERT_EQ(response.lateralResponseRight, LateralResponse::Safe);
    ASSERT_EQ(response.lateralResponseLeft, LateralResponse::Safe);
  }

  for (uint32_t i = 16; i < 19; i++)
  {
    // left vehicle "moves" towards right vehicle from left
    leftVehicle.position.latInterval.minimum = -20. + i;
    leftVehicle.position.latInterval.maximum = -18. + i;

    situation.egoVehicleState = leftVehicle;
    situation.otherVehicleState = rightVehicle;

    ASSERT_TRUE(checkSituation(situation, response));
    ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
    ASSERT_EQ(response.lateralResponseLeft, LateralResponse::None);
  }

  // left vehicle overlaps with right vehicle
  leftVehicle.position.latInterval.minimum = -1;
  leftVehicle.position.latInterval.maximum = 1;

  situation.egoVehicleState = leftVehicle;
  situation.otherVehicleState = rightVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.lateralResponseRight, LateralResponse::BrakeMin);
  ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);

  for (uint32_t i = 20; i < 23; i++)
  {
    // left vehicle "moves" towards right vehicle from left
    leftVehicle.position.latInterval.minimum = -20. + i;
    leftVehicle.position.latInterval.maximum = -18. + i;

    situation.egoVehicleState = leftVehicle;
    situation.otherVehicleState = rightVehicle;

    ASSERT_TRUE(checkSituation(situation, response));
    ASSERT_EQ(response.lateralResponseRight, LateralResponse::None);
    ASSERT_EQ(response.lateralResponseLeft, LateralResponse::BrakeMin);
  }

  for (uint32_t i = 23; i < 40; i++)
  {
    // left vehicle "moves" away from right vehicle towards right
    leftVehicle.position.latInterval.minimum = -20. + i;
    leftVehicle.position.latInterval.maximum = -18. + i;

    situation.egoVehicleState = leftVehicle;
    situation.otherVehicleState = rightVehicle;

    ASSERT_TRUE(checkSituation(situation, response));
    ASSERT_EQ(response.lateralResponseRight, LateralResponse::Safe);
    ASSERT_EQ(response.lateralResponseLeft, LateralResponse::Safe);
  }
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
