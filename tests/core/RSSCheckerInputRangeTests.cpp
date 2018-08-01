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

class RSSCheckerInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    leadingVehicle = createVehicleState(100);
    leadingVehicle.position.lonInterval.minimum = 100;
    leadingVehicle.position.lonInterval.maximum = 106;

    followingVehicle = createVehicleState(10);
    followingVehicle.position.lonInterval.minimum = 0;
    followingVehicle.position.lonInterval.maximum = 5;
    situation.egoVehicleState = leadingVehicle;
    situation.otherVehicleState = followingVehicle;
  }

  virtual void TearDown()
  {
  }
  lane::VehicleState leadingVehicle;
  lane::VehicleState followingVehicle;
  lane::Situation situation;
  Response response;
};

/**
 * Invalid longitudinal acceleration
 */

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_acceleration_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * Invalid longitudinal brake min
 */

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * Invalid longitudinal brake max
 */

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * break max < break min
 */

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 1.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 2.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMax = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * Invalid lateral brake min
 */

TEST_F(RSSCheckerInputRangeTests, lateral_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLat.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, lateral_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLat.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

TEST_F(RSSCheckerInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLat.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, lateral_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * Invalid lateral accel max
 */

TEST_F(RSSCheckerInputRangeTests, lateral_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * Invalid response time
 */

TEST_F(RSSCheckerInputRangeTests, invalid_response_time_zero_ego)
{
  situation.otherVehicleState.responseTime = 0.;
  ASSERT_FALSE(checkSituation(situation, response));
}

TEST_F(RSSCheckerInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.responseTime = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, response));
  }
}

/**
 * break max == break min
 */

TEST_F(RSSCheckerInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 1.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 1.;

  ASSERT_TRUE(checkSituation(situation, response));
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
