// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace structured {

TEST(RssFormulaTestsCalculateSafeLateralDistance, invalid_vehicle_state)
{
  Distance safe_distance(0.);

  core::RelativeObjectState vehicle = createRelativeVehicleStateForLateralMotion(0.);
  vehicle.dynamics.alpha_lat.accel_max = Acceleration(-1.);
  vehicle.dynamics.alpha_lat.brake_min = Acceleration(-1.);
  core::RelativeObjectState otherVehicle = createRelativeVehicleStateForLateralMotion(0.);

  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, otherVehicle, safe_distance));
  ASSERT_FALSE(calculateSafeLateralDistance(otherVehicle, vehicle, safe_distance));
  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, vehicle, safe_distance));
}

TEST(RssFormulaTestsCalculateSafeLateralDistance, same_lateral_speed)
{
  Distance safe_distance(0.);

  std::vector<double> expectedSafeDistance = {1.1, 1.19, 1.19, 2.9, 2.9};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {0., 1., -1., 5., -5.})
  {
    core::RelativeObjectState leftVehicle = createRelativeVehicleStateForLateralMotion(lateralSpeed);
    core::RelativeObjectState rightVehicle = createRelativeVehicleStateForLateralMotion(lateralSpeed);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

TEST(RssFormulaTestsCalculateSafeLateralDistance, one_zero_lateral_speed)
{
  Distance safe_distance(0.);

  std::vector<double> expectedSafeDistanceLeft = {1.84, 0.45, 5.77, 0.};
  std::vector<double> expectedSafeDistanceRight = {0.45, 1.84, 0., 5.77};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {1., -1., 5., -5.})
  {
    core::RelativeObjectState leftVehicle = createRelativeVehicleStateForLateralMotion(lateralSpeed);
    core::RelativeObjectState rightVehicle = createRelativeVehicleStateForLateralMotion(0.);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistanceLeft[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistanceRight[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

TEST(RssFormulaTestsCalculateSafeLateralDistance, lateral_fluctuation_margin_is_considered)
{
  Distance safe_distance(0.);

  std::vector<double> expectedSafeDistance = {1.1, 1.19, 1.19, 2.9, 2.9};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {0., 1., -1., 5., -5.})
  {
    core::RelativeObjectState leftVehicle = createRelativeVehicleStateForLateralMotion(lateralSpeed);
    core::RelativeObjectState rightVehicle = createRelativeVehicleStateForLateralMotion(lateralSpeed);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    leftVehicle.dynamics.lateral_fluctuation_margin += ad::physics::Distance(0.5);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistance[expectedSafeDistanceIndex] + 0.25, 0.01);

    rightVehicle.dynamics.lateral_fluctuation_margin += ad::physics::Distance(0.5);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safe_distance));
    ASSERT_NEAR(safe_distance.mDistance, expectedSafeDistance[expectedSafeDistanceIndex] + 0.5, 0.01);

    expectedSafeDistanceIndex++;
  }
}

} // namespace structured
} // namespace rss
} // namespace ad
