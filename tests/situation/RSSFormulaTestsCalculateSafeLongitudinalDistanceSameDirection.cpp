// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RSSFormulas.hpp"

namespace ad_rss {
namespace situation {

// make the code more readable
using physics::Acceleration;
using physics::CoordinateSystemAxis;
using physics::Distance;
using physics::Duration;
using physics::Speed;

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
} // namespace ad_rss
