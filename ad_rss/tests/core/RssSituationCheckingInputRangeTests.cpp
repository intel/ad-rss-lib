// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
namespace core {

class RssSituationCheckingInputRangeTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(100);

    followingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);
    constellation.ego_state = leadingVehicle;
    constellation.other_state = followingVehicle;
    constellation.relative_position.longitudinal_distance = Distance(95.);
    constellation.relative_position.longitudinal_position = LongitudinalRelativePosition::InFront;
    constellation.relative_position.lateral_distance = Distance(0.);
    constellation.relative_position.lateral_position = LateralRelativePosition::Overlap;
    constellation.constellation_type = world::ConstellationType::SameDirection;
    constellation.object_id = 1u;
  }

  virtual void performTestRun()
  {
    EXPECT_FALSE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnaphot));
  }
  RssSituationChecking situationChecking;
  RelativeObjectState leadingVehicle;
  RelativeObjectState followingVehicle;
  RelativeConstellation constellation;
  state::RssStateSnapshot rssStateSnaphot;
};

TEST_F(RssSituationCheckingInputRangeTests, validateTestSetup)
{
  EXPECT_TRUE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnaphot));
}

/**
 * Invalid longitudinal acceleration
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.ego_state.dynamics.alpha_lon.accel_max = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_acceleration_other)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.alpha_lon.accel_max = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_ego)
{
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_zero_other)
{
  constellation.other_state.dynamics.alpha_lon.brake_min = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.alpha_lon.brake_min = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake max
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_ego)
{
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_zero_other)
{
  constellation.other_state.dynamics.alpha_lon.brake_max = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.alpha_lon.brake_max = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid longitudinal brake min correct
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_ego)
{
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_zero_other)
{
  constellation.other_state.dynamics.alpha_lon.brake_min_correct = Acceleration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_correct_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.alpha_lon.brake_min_correct = Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * break max < break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min)
{
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(-1.);
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-2.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-3.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_max_smaller_brake_min_correct)
{
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-1.);

  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-1.);
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(-2.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_invalid_deceleration_brake_min_smaller_brake_min_correct)
{
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-1.);
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(-2.);
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-4.);

  performTestRun();
}

/**
 * Invalid lateral brake min
 */

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_ego)
{
  constellation.ego_state.dynamics.alpha_lat.brake_min = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_positive_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.ego_state.dynamics.alpha_lat.brake_min = Acceleration(i / 100.);
    performTestRun();
  }
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_zero_other)
{
  constellation.other_state.dynamics.alpha_lat.brake_min = Acceleration(0.);

  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, lateral_invalid_deceleration_brake_min_positive_other)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.alpha_lat.brake_min = Acceleration(i / 100.);
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
    constellation.other_state.dynamics.alpha_lat.accel_max = -1. * Acceleration(i / 100.);
    performTestRun();
  }
}

/**
 * Invalid rssState time
 */

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_zero_ego)
{
  constellation.other_state.dynamics.response_time = Duration(0.);
  performTestRun();
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_response_time_negative_ego)
{
  for (int i = 1; i < 1000; i++)
  {
    constellation.other_state.dynamics.response_time = -1. * Duration(i / 100.);
    performTestRun();
  }
}

/**
 * break max == break min
 */

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_max_equals_brake_min)
{
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-4.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-4.);

  ASSERT_TRUE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests, longitudinal_correct_deceleration_brake_min_equals_brake_min_correct)
{
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-4.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-3.);
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(-3.);

  ASSERT_TRUE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests,
       longitudinal_correct_deceleration_brake_min_equals_brake_min_correct_equals_brake_max)
{
  constellation.ego_state.dynamics.alpha_lon.brake_max = Acceleration(-3.);
  constellation.ego_state.dynamics.alpha_lon.brake_min = Acceleration(-3.);
  constellation.ego_state.dynamics.alpha_lon.brake_min_correct = Acceleration(-3.);

  ASSERT_TRUE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnaphot));
}

TEST_F(RssSituationCheckingInputRangeTests, situationSnapshotSizeRange)
{
  for (size_t constellationCount = 0u; constellationCount < 1011u; constellationCount += 10u)
  {
    RssSituationSnapshot situationSnapshot;
    state::RssStateSnapshot rssStateSnapshot;
    situationSnapshot.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    situationSnapshot.constellations.resize(constellationCount, constellation);
    situationSnapshot.time_index = constellationCount + 1u;
    for (size_t i = 0u; i < constellationCount; ++i)
    {
      situationSnapshot.constellations[i].constellation_id = i;
      situationSnapshot.constellations[i].object_id = i;
    }

    if (constellationCount <= 1000u)
    {
      EXPECT_TRUE(situationChecking.checkSituation(situationSnapshot, rssStateSnapshot));
    }
    else
    {
      EXPECT_FALSE(situationChecking.checkSituation(situationSnapshot, rssStateSnapshot));
    }
  }
}

TEST_F(RssSituationCheckingInputRangeTests, invalid_constellation_type)
{
  constellation.constellation_type = static_cast<world::ConstellationType>(-1);
  performTestRun();
}

#if INVALID_AD_PHYSICS_DISTANCE_THROWS_EXCEPTION
TEST_F(RssSituationCheckingInputRangeTests, nan_values)
{
  constellation.relative_position.longitudinal_distance = Distance();
  performTestRun();
}
#endif

} // namespace core
} // namespace rss
} // namespace ad
