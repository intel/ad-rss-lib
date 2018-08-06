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

TEST(RSSFormulaTestsVehicleLocation, calculateLateralDistanceBetweenVehicles)
{
  VehicleState vehicleLeft = createVehicleStateForLongitudinalMotion(10);
  VehicleState vehicleRight = createVehicleStateForLongitudinalMotion(10);

  vehicleLeft.position.latInterval.minimum = -10.;
  vehicleLeft.position.latInterval.maximum = -8.;

  vehicleRight.position.latInterval.minimum = -5.;
  vehicleRight.position.latInterval.maximum = -3.;

  ASSERT_TRUE(isVehicleLeft(vehicleLeft, vehicleRight));
  ASSERT_FALSE(isVehicleLeft(vehicleRight, vehicleLeft));
  ASSERT_EQ(calculateLateralDistanceBetweenVehicles(vehicleLeft, vehicleRight), 3.);

  vehicleLeft.position.latInterval.minimum = -10.;
  vehicleLeft.position.latInterval.maximum = -8.;

  vehicleRight.position.latInterval.minimum = 3.;
  vehicleRight.position.latInterval.maximum = 5.;

  ASSERT_TRUE(isVehicleLeft(vehicleLeft, vehicleRight));
  ASSERT_FALSE(isVehicleLeft(vehicleRight, vehicleLeft));
  ASSERT_EQ(calculateLateralDistanceBetweenVehicles(vehicleLeft, vehicleRight), 11.);

  vehicleLeft.position.latInterval.minimum = 1.;
  vehicleLeft.position.latInterval.maximum = 2.;

  vehicleRight.position.latInterval.minimum = 3.;
  vehicleRight.position.latInterval.maximum = 5.;

  ASSERT_TRUE(isVehicleLeft(vehicleLeft, vehicleRight));
  ASSERT_FALSE(isVehicleLeft(vehicleRight, vehicleLeft));
  ASSERT_EQ(calculateLateralDistanceBetweenVehicles(vehicleLeft, vehicleRight), 1.);
}

} // namespace lane
} // namespace rss
