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

class RSSCheckerTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
  lane::VehicleState leadingVehicle;
  lane::VehicleState followingVehicle;
  lane::Situation situation;
  Response response;
};

TEST_F(RSSCheckerTests, same_direction_leading_ego_safe_distance)
{
  leadingVehicle = createVehicleState(100);
  followingVehicle = createVehicleState(10);

  leadingVehicle.position.lonInterval.minimum = 100;
  leadingVehicle.position.lonInterval.maximum = 106;

  followingVehicle.position.lonInterval.minimum = 0;
  followingVehicle.position.lonInterval.maximum = 5;
  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);
}

TEST_F(RSSCheckerTests, same_direction_leading_other_50kmh_safe)
{
  leadingVehicle = createVehicleState(50);
  followingVehicle = createVehicleState(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  leadingVehicle.position.lonInterval.minimum = 60;
  leadingVehicle.position.lonInterval.maximum = 65;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);
}

TEST_F(RSSCheckerTests, same_direction_leading_other_50kmh_unsafe)
{
  leadingVehicle = createVehicleState(50);
  followingVehicle = createVehicleState(50);
  followingVehicle.dynamics.alphaLon.accelMax = 0.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  leadingVehicle.position.lonInterval.minimum = 39;
  leadingVehicle.position.lonInterval.maximum = 44;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTests, same_direction_leading_other_50kmh_other_standing)
{
  leadingVehicle = createVehicleState(0);
  followingVehicle = createVehicleState(50);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  leadingVehicle.position.lonInterval.minimum = 71.8;
  leadingVehicle.position.lonInterval.maximum = 73.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);

  leadingVehicle.position.lonInterval.minimum = 71.6;
  leadingVehicle.position.lonInterval.maximum = 73.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTests, same_direction_leading_other_0kmh_other_standing)
{
  leadingVehicle = createVehicleState(0);
  followingVehicle = createVehicleState(0);
  followingVehicle.dynamics.alphaLon.accelMax = 2.;
  followingVehicle.dynamics.alphaLon.brakeMin = 4.;

  leadingVehicle.position.lonInterval.minimum = 6.01;
  leadingVehicle.position.lonInterval.maximum = 8.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);

  leadingVehicle.position.lonInterval.minimum = 6;
  leadingVehicle.position.lonInterval.maximum = 8;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::BrakeMin);
}

TEST_F(RSSCheckerTests, same_direction_both_negative_velocity)
{
  leadingVehicle = createVehicleState(-50);
  followingVehicle = createVehicleState(-50);

  leadingVehicle.position.lonInterval.minimum = 71.6;
  leadingVehicle.position.lonInterval.maximum = 73.;

  situation.egoVehicleState = followingVehicle;
  situation.otherVehicleState = leadingVehicle;

  ASSERT_FALSE(checkSituation(situation, response));
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
