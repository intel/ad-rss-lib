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
#include "situation/Vehicle.hpp"

namespace rss {
namespace situation {

TEST(RSSFormulaTestsCheckVehicleState, check_standard_state)
{
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(checkVehicleState(leadingVehicle));
}

TEST(RSSFormulaTestsCheckVehicleState, check_standard_state_100)
{
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(100);

  ASSERT_TRUE(checkVehicleState(leadingVehicle));
}

} // namespace situation
} // namespace rss