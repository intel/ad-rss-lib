// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
namespace situation {

class RssSituationCheckingInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    leadingVehicle = createVehicleStateForLongitudinalMotion(100);

    followingVehicle = createVehicleStateForLongitudinalMotion(10);
    situation.egoVehicleState = leadingVehicle;
    situation.otherVehicleState = followingVehicle;
    situation.relativePosition.longitudinalDistance = Distance(95.);
    situation.relativePosition.longitudinalPosition = LongitudinalRelativePosition::InFront;
    situation.relativePosition.lateralDistance = Distance(0.);
    situation.relativePosition.lateralPosition = LateralRelativePosition::Overlap;
    situation.situationType = SituationType::SameDirection;
    situation.objectId = 1u;
  }

  virtual void performTestRun()
  {
    EXPECT_FALSE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnaphot));
  }
  core::RssSituationChecking situationChecking;
  VehicleState leadingVehicle;
  VehicleState followingVehicle;
  Situation situation;
  state::RssStateSnapshot rssStateSnaphot;
};

TEST_F(RssSituationCheckingInputRangeTests, validateTestSetup)
{
  EXPECT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnaphot));
}

/**
 * Invalid longitudinal acceleration
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.accelMax = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.accelMax = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake max
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMax = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMax = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake min correct
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * break max < break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(-1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-3.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-1.);

  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(-2.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(-2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-4.);

  performTestRun();
}

/**
 * Invalid lateral brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLat.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLat.brakeMin = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLat.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.brakeMin = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid lateral accel max
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.accelMax = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid rssState time
 */

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_zero_ego)
{
  situation.otherVehicleState.dynamics.responseTime = Duration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.responseTime = -1. * Duration(i / 100.);
    performTestRun();
  }
}

/**
 * break max == break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-4.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_min_equals_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(-3.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests,
       longitudinal_correct_deceleration_brake_min_equals_brake_min_correct_equals_brake_max)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(-3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(-3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(-3.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests, situationSnapshotSizeRange)
{
  for (size_t situationCount = 0u; situationCount < 1011u; situationCount += 10u)
  {
    SituationSnapshot situationSnapshot;
    state::RssStateSnapshot rssStateSnapshot;
    situationSnapshot.defaultEgoVehicleRssDynamics = getEgoRssDynamics();
    situationSnapshot.situations.resize(situationCount, situation);
    situationSnapshot.timeIndex = situationCount + 1u;
    for (size_t i = 0u; i < situationCount; ++i)
    {
      situationSnapshot.situations[i].situationId = i;
      situationSnapshot.situations[i].objectId = i;
    }

    if (situationCount <= 1000u)
    {
      EXPECT_TRUE(situationChecking.checkSituations(situationSnapshot, rssStateSnapshot));
    }
    else
    {
      EXPECT_FALSE(situationChecking.checkSituations(situationSnapshot, rssStateSnapshot));
    }
  }
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_situation_type)
{
  situation.situationType = static_cast<SituationType>(-1);
  performTestRun();
}

#if INVALID_AD_PHYSICS_DISTANCE_THROWS_EXCEPTION
TEST_F(RssSituationCheckingInputRangeTests, nan_values)
{
  situation.relativePosition.longitudinalDistance = Distance();
  performTestRun();
}
#endif

} // namespace situation
} // namespace rss
} // namespace ad
