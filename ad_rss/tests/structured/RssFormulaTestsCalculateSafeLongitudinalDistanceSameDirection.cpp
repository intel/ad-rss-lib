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

TEST(RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, negative_leading_speed)
{
  Distance safe_distance(0.);

  core::RelativeObjectState leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(-50);
  core::RelativeObjectState followingVehicle = createRelativeVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safe_distance));
}

TEST(RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, checks_leading_vehicle_much_faster)
{
  Distance safe_distance(0.);
  core::RelativeObjectState leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(100);
  core::RelativeObjectState followingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safe_distance));

  ASSERT_NEAR(safe_distance.mDistance, 0, cDoubleNear);
}

TEST(RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection,
     checks_leading_vehicle_much_faster_min_safety_distance)
{
  Distance safe_distance(0.);
  core::RelativeObjectState leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(100);
  core::RelativeObjectState followingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);
  followingVehicle.dynamics.min_longitudinal_safety_distance = physics::Distance(2.);

  ASSERT_TRUE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safe_distance));

  ASSERT_NEAR(
    safe_distance.mDistance, followingVehicle.dynamics.min_longitudinal_safety_distance.mDistance, cDoubleNear);
}

} // namespace structured
} // namespace rss
} // namespace ad
