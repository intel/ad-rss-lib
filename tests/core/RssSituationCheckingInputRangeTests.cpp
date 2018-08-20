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
#include "situation/Vehicle.hpp"

namespace rss {
namespace core {
namespace RssSituationChecking {

class RssSituationCheckingInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    leadingVehicle = createVehicleStateForLongitudinalMotion(100);

    followingVehicle = createVehicleStateForLongitudinalMotion(10);
    situation.egoVehicleState = leadingVehicle;
    situation.otherVehicleState = followingVehicle;
    situation.relativePosition.longitudinalDistance = 95.;
    situation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    situation.relativePosition.lateralDistance = 0.;
    situation.relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
    situation.situationType = situation::SituationType::SameDirection;
  }

  virtual void TearDown()
  {
  }
  situation::VehicleState leadingVehicle;
  situation::VehicleState followingVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

/**
 * Invalid longitudinal acceleration
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake max
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMax = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake min correct
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * break max < break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 1;
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 2.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 3.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 1.;

  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 1.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 2.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 1.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 2.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 4.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

/**
 * Invalid lateral brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLat.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLat.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLat.brakeMin = 0.;

  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.brakeMin = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * Invalid lateral accel max
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.accelMax = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * Invalid responseState time
 */

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_zero_ego)
{
  situation.otherVehicleState.responseTime = 0.;
  ASSERT_FALSE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.responseTime = -1. * (static_cast<double>(i) / 100.);
    ASSERT_FALSE(checkSituation(situation, responseState));
  }
}

/**
 * break max == break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 4.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 4.;

  ASSERT_TRUE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_min_equals_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 4.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 3.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 3.;

  ASSERT_TRUE(checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests,
       longitudinal_correct_deceleration_brake_min_equals_brake_min_correct_equals_brake_max)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = 3.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = 3.;
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = 3.;

  ASSERT_TRUE(checkSituation(situation, responseState));
}

} // namespace RssSituationChecking
} // namespace core
} // namespace rss
