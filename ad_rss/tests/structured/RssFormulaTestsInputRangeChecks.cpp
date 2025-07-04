// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace structured {

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceSameDirection)
{
  bool is_safe = false;
  Distance vehicleDistance(-1.);
  Distance safe_distance(0);
  core::RelativeObjectState leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);
  core::RelativeObjectState followingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);

  ASSERT_FALSE(checkSafeLongitudinalDistanceSameDirection(
    leadingVehicle, followingVehicle, vehicleDistance, safe_distance, is_safe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceOppositeDirection)
{
  bool is_safe = false;
  Distance vehicleDistance(-1.);
  Distance safe_distance(0);
  core::RelativeObjectState correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  core::RelativeObjectState oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(-50);

  ASSERT_FALSE(checkSafeLongitudinalDistanceOppositeDirection(
    correctVehicle, oppositeVehicle, vehicleDistance, safe_distance, is_safe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLateralDistance)
{
  bool is_safe = false;
  Distance vehicleDistance(-1.);
  Distance safe_distance(0);
  core::RelativeObjectState leftVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  core::RelativeObjectState rightVehicle = createRelativeVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(checkSafeLateralDistance(leftVehicle, rightVehicle, vehicleDistance, safe_distance, is_safe));
}

TEST(RssFormulaTestsInputRangeChecks, calculateSafeLongitudinalDistanceOppositeDirection)
{
  Distance safe_distance(0.);

  core::RelativeObjectState correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  core::RelativeObjectState oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(-50);
  correctVehicle.dynamics.response_time = Duration(-1);
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(correctVehicle, oppositeVehicle, safe_distance));
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(oppositeVehicle, correctVehicle, safe_distance));
}

TEST(RssFormulaTestsInputRangeChecks, checkStopInFrontIntersection)
{
  bool is_safe = false;
  Distance safe_distance(0.);
  core::RelativeObjectState correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.response_time = Duration(-1);
  ASSERT_FALSE(checkStopInFrontIntersection(correctVehicle, safe_distance, is_safe));
}

} // namespace structured
} // namespace rss
} // namespace ad
