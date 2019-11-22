// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RssFormulas.hpp"

namespace ad_rss {
namespace situation {

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceSameDirection)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(10);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_FALSE(checkSafeLongitudinalDistanceSameDirection(
    leadingVehicle, followingVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceOppositeDirection)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);

  ASSERT_FALSE(checkSafeLongitudinalDistanceOppositeDirection(
    correctVehicle, oppositeVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLateralDistance)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState leftVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState rightVehicle = createVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(checkSafeLateralDistance(leftVehicle, rightVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, calculateSafeLongitudinalDistanceOppositeDirection)
{
  Distance safeDistance(0.);

  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  correctVehicle.dynamics.responseTime = Duration(-1);
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(correctVehicle, oppositeVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(oppositeVehicle, correctVehicle, safeDistance));
}

TEST(RssFormulaTestsInputRangeChecks, checkStopInFrontIntersection)
{
  bool isSafe = false;
  Distance safeDistance(0.);
  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.responseTime = Duration(-1);
  ASSERT_FALSE(checkStopInFrontIntersection(correctVehicle, safeDistance, isSafe));
}

} // namespace situation
} // namespace ad_rss
