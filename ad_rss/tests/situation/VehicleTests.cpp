// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/VehicleStateValidInputRange.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(RssFormulaTestsCheckVehicleState, check_standard_state)
{
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(withinValidInputRange(leadingVehicle));
}

TEST(RssFormulaTestsCheckVehicleState, check_standard_state_100)
{
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(100);

  ASSERT_TRUE(withinValidInputRange(leadingVehicle));
}

} // namespace situation
} // namespace rss
} // namespace ad
