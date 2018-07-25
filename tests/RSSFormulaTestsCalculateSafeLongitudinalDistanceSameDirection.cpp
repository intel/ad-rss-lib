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

#include <gtest/gtest.h>
#include "TestSupport.hpp"
#include "rss_core/RSSFormulas.hpp"
#include "rss_core/RSSParameters.hpp"

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, negative_leading_speed)
{
  rss_core::Distance safeDistance = 0.;

  rss_core::lane::VehicleState leadingVehicle = createVehicleState(-50);
  rss_core::lane::VehicleState followingVehicle = createVehicleState(50);

  ASSERT_FALSE(
    rss_core::calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));
}
//
// TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirectionLeadingEgo, negative_other_speed)
//{
//  rss_core::Distance safeDistance = 0.;
//
//  ASSERT_FALSE(rss_core::calculateSafeLongitudinalDistanceSameDirection(10., -10, safeDistance));
//}
//
TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection, checks_leading_vehicle_much_faster)
{
  rss_core::Distance safeDistance = 0.;
  rss_core::lane::VehicleState leadingVehicle = createVehicleState(100);
  rss_core::lane::VehicleState followingVehicle = createVehicleState(10);

  ASSERT_TRUE(rss_core::calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance));

  ASSERT_NEAR(safeDistance, 0, cDoubleNear);
}
