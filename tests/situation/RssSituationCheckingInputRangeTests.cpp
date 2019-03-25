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
namespace core {

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
    situation.relativePosition.longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    situation.relativePosition.lateralDistance = Distance(0.);
    situation.relativePosition.lateralPosition = situation::LateralRelativePosition::Overlap;
    situation.situationType = situation::SituationType::SameDirection;
    situation.timeIndex = 1u;
  }

  virtual void performTestRun()
  {
    EXPECT_FALSE(situationChecking.checkSituationInputRangeChecked(situation, true, responseState));
  }
  RssSituationChecking situationChecking;
  situation::VehicleState leadingVehicle;
  situation::VehicleState followingVehicle;
  situation::Situation situation;
  state::ResponseState responseState;
};

TEST_F(RssSituationCheckingInputRangeTests, validateTestSetup)
{
  EXPECT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, true, responseState));
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

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = -1. * Acceleration(i / 100.);
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

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMax = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMax = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMax = -1. * Acceleration(i / 100.);
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

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * break max < break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(3.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(1.);

  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(2.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);

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

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLat.brakeMin = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLat.brakeMin = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.brakeMin = -1. * Acceleration(i / 100.);
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
 * Invalid responseState time
 */

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_zero_ego)
{
  situation.otherVehicleState.responseTime = Duration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.responseTime = -1. * Duration(i / 100.);
    performTestRun();
  }
}

/**
 * break max == break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, true, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_min_equals_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(3.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, true, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests,
       longitudinal_correct_deceleration_brake_min_equals_brake_min_correct_equals_brake_max)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(3.);

  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, true, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, situationVectorSizeRange)
{
  for (size_t situationCount = 0u; situationCount < 110u; situationCount += 5u)
  {
    situation::SituationVector situationVector;
    state::ResponseStateVector responseStateVector;
    situationVector.resize(situationCount, situation);
    for (size_t i = 0u; i < situationCount; ++i)
    {
      situation.situationId = i;
      situation.timeIndex = situationCount;
    }

    if (situationCount <= 100u)
    {
      EXPECT_TRUE(situationChecking.checkSituations(situationVector, responseStateVector));
    }
    else
    {
      EXPECT_FALSE(situationChecking.checkSituations(situationVector, responseStateVector));
    }
  }
}

TEST_F(RssSituationCheckingInputRangeTests, situationVectorDifferentTimestamps)
{
  situation::SituationVector situationVector;
  state::ResponseStateVector responseStateVector;
  situationVector.resize(2, situation);
  situationVector[0].timeIndex++;
  ASSERT_FALSE(situationChecking.checkSituations(situationVector, responseStateVector));
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_situation_type)
{
  situation.situationType = static_cast<situation::SituationType>(-1);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, nan_values)
{
  situation.relativePosition.longitudinalDistance = Distance();
  performTestRun();
}

} // namespace core
} // namespace ad_rss
