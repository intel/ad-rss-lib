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
#include "situation/RSSFormulas.hpp"

namespace rss {
namespace situation {

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, negative_leading_speed)
{
  Distance safeDistance = 0.;

  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(-50);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, checks_leading_vehicle_much_faster)
{
  Distance safeDistance = 0.;
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(100);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));

  ASSERT_NEAR(safeDistance, 0, cDoubleNear);
}

} // namespace situation
} // namespace rss
