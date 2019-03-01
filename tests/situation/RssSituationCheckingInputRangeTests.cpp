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
  }

  virtual void TearDown()
  {
  }
  RssSituationChecking situationChecking;
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
    situation.egoVehicleState.dynamics.alphaLon.accelMax = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.accelMax = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMin = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMin = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMin = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake max
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMax = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMax = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMax = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

/**
 * Invalid longitudinal brake min correct
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLon.brakeMinCorrect = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
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

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(1.);

  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(2.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_smaller_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(1.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(2.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

/**
 * Invalid lateral brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_ego)
{
  situation.egoVehicleState.dynamics.alphaLat.brakeMin = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.egoVehicleState.dynamics.alphaLat.brakeMin = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  situation.otherVehicleState.dynamics.alphaLat.brakeMin = Acceleration(0.);

  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_negative_other)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.dynamics.alphaLat.brakeMin = -1. * Acceleration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
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
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

/**
 * Invalid responseState time
 */

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_zero_ego)
{
  situation.otherVehicleState.responseTime = Duration(0.);
  ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    situation.otherVehicleState.responseTime = -1. * Duration(i / 100.);
    ASSERT_FALSE(situationChecking.checkSituation(situation, responseState));
  }
}

/**
 * break max == break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(4.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_min_equals_brake_min_correct)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(4.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(3.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
}

TEST_F(RssSituationCheckingInputRangeTests,
       longitudinal_correct_deceleration_brake_min_equals_brake_min_correct_equals_brake_max)
{
  situation.egoVehicleState.dynamics.alphaLon.brakeMax = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMin = Acceleration(3.);
  situation.egoVehicleState.dynamics.alphaLon.brakeMinCorrect = Acceleration(3.);

  ASSERT_TRUE(situationChecking.checkSituation(situation, responseState));
}

} // namespace core
} // namespace ad_rss
