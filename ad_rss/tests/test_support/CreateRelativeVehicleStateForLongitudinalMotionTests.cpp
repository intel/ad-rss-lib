// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RelativeObjectStateValidInputRange.hpp"

namespace ad {
namespace rss {

TEST(CreateRelativeVehicleStateForLongitudinalMotion, check_standard_state)
{
  auto leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(10);

  ASSERT_TRUE(withinValidInputRange(leadingVehicle));
}

TEST(CreateRelativeVehicleStateForLongitudinalMotion, check_standard_state_100)
{
  auto leadingVehicle = createRelativeVehicleStateForLongitudinalMotion(100);

  ASSERT_TRUE(withinValidInputRange(leadingVehicle));
}

} // namespace rss
} // namespace ad
