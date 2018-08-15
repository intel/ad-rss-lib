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

class RSSCheckerTestsLongitudinal : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
  situation::VehicleState leadingVehicle;
  situation::VehicleState followingVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

TEST_F(RSSCheckerTestsLongitudinal, same_direction_leading_ego_safe_distance)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(100);
  followingVehicle = createVehicleStateForLongitudinalMotion(10);

  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::InFront, 95.);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RSSCheckerTestsLongitudinal, same_direction_leading_other_50kmh_safe)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 60.);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);
}

TEST_F(RSSCheckerTestsLongitudinal, same_direction_leading_other_50kmh_unsafe)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 0.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 39.);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RSSCheckerTestsLongitudinal, same_direction_leading_other_50kmh_other_standing)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.8);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.6);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RSSCheckerTestsLongitudinal, same_direction_leading_other_0kmh_other_standing)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle = createVehicleStateForLongitudinalMotion(0);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 6.01);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalSafe);

  situation.relativePosition = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 6.);

  ASSERT_TRUE(checkSituation(situation, responseState));
  ASSERT_EQ(responseState.longitudinalState, cLongitudinalBrakeMin);
}

TEST_F(RSSCheckerTestsLongitudinal, same_direction_both_negative_velocity)
{
  leadingVehicle = createVehicleStateForLongitudinalMotion(-50);
  followingVehicle = createVehicleStateForLongitudinalMotion(-50);

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;
  situation.relativePosition
    = createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition::AtBack, 71.6);

  ASSERT_FALSE(checkSituation(situation, responseState));
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
