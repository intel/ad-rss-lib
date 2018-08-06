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

TEST(RSSFormulaTestsCalculateSafeLateralDistance, negative_lateral_speed)
{
  Distance safeDistance = 0.;

  VehicleState vehicle = createVehicleStateForLateralMotion(-10.);
  VehicleState otherVehicle = createVehicleStateForLateralMotion(0.);

  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, otherVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(otherVehicle, vehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, vehicle, safeDistance));
}

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

TEST(RSSFormulaTestsCalculateSafeLateralDistance, zero_lateral_speed)
{
  Distance safeDistance = 0.;

  VehicleState leftVehicle = createVehicleStateForLateralMotion(0.);
  leftVehicle.position.latInterval.minimum = -10.;
  leftVehicle.position.latInterval.maximum = -8.;
  VehicleState rightVehicle = createVehicleStateForLateralMotion(0.);
  rightVehicle.position.latInterval.minimum = 2.;
  rightVehicle.position.latInterval.maximum = 5.;

  ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
  ASSERT_EQ(safeDistance, 1.);

  ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
  ASSERT_EQ(safeDistance, 1.);
}

} // namespace lane
} // namespace rss
