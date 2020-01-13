// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(RssFormulaTestsCalculateSafeLateralDistance, invalid_vehicle_state)
{
  Distance safeDistance(0.);

  VehicleState vehicle = createVehicleStateForLateralMotion(0.);
  vehicle.dynamics.alphaLat.accelMax = Acceleration(-1.);
  vehicle.dynamics.alphaLat.brakeMin = Acceleration(-1.);
  VehicleState otherVehicle = createVehicleStateForLateralMotion(0.);

  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, otherVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(otherVehicle, vehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, vehicle, safeDistance));
}

TEST(RssFormulaTestsCalculateSafeLateralDistance, same_lateral_speed)
{
  Distance safeDistance(0.);

  std::vector<double> expectedSafeDistance = {1., 1.09, 1.09, 2.8, 2.8};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {0., 1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(lateralSpeed);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(static_cast<double>(safeDistance), expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(static_cast<double>(safeDistance), expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

TEST(RssFormulaTestsCalculateSafeLateralDistance, one_zero_lateral_speed)
{
  Distance safeDistance(0.);

  std::vector<double> expectedSafeDistanceLeft = {1.74, 0.35, 5.67, 0.};
  std::vector<double> expectedSafeDistanceRight = {0.35, 1.74, 0., 5.67};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(0.);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(static_cast<double>(safeDistance), expectedSafeDistanceLeft[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(static_cast<double>(safeDistance), expectedSafeDistanceRight[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
