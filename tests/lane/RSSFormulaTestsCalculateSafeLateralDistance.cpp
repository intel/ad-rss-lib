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
#include "lane/RSSFormulas.hpp"

namespace rss {
namespace lane {

TEST(RSSFormulaTestsCalculateSafeLateralDistance, invalid_vehicle_state)
{
  Distance safeDistance = 0.;

  VehicleState vehicle = createVehicleStateForLateralMotion(0.);
  vehicle.dynamics.alphaLat.accelMax = -1.;
  vehicle.dynamics.alphaLat.brakeMin = -1.;
  VehicleState otherVehicle = createVehicleStateForLateralMotion(0.);

  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, otherVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(otherVehicle, vehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, vehicle, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLateralDistance, same_lateral_speed)
{
  Distance safeDistance = 0.;

  std::vector<Distance> expectedSafeDistance = {1., 1.09, 1.09, 2.8, 2.8};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {0., 1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(lateralSpeed);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

TEST(RSSFormulaTestsCalculateSafeLateralDistance, one_zero_lateral_speed)
{
  Distance safeDistance = 0.;

  std::vector<Distance> expectedSafeDistanceLeft = {1.74, 0.35, 5.67, 0.};
  std::vector<Distance> expectedSafeDistanceRight = {0.35, 1.74, 0., 5.67};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(0.);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistanceLeft[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistanceRight[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

} // namespace lane
} // namespace rss
