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

TEST(RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, negative_leading_speed)
{
  Distance safeDistance(0.);

  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(-50);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));
}

TEST(RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, checks_leading_vehicle_much_faster)
{
  Distance safeDistance(0.);
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(100);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));

  ASSERT_NEAR(static_cast<double>(safeDistance), 0, cDoubleNear);
}

} // namespace situation
} // namespace ad_rss
