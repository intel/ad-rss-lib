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

using namespace ::ad_rss::physics;

TEST(RSSFormulaTestsCalculateSafeLateralDistance, invalid_vehicle_state)
{
  Distance safeDistance = 0.;

  VehicleState vehicle = createVehicleStateForLateralMotion(0.);
  vehicle.dynamics.alphaLat.accelMax = -1.;
  vehicle.dynamics.alphaLat.brakeMin = -1.;
  VehicleState otherVehicle = createVehicleStateForLateralMotion(0.);

  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, otherVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(otherVehicle, vehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLateralDistance(vehicle, vehicle, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLateralDistance, same_lateral_speed)
{
  Distance safeDistance = 0.;

  std::vector<Distance> expectedSafeDistance = {1., 1.09, 1.09, 2.8, 2.8};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {0., 1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(lateralSpeed);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistance[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

TEST(RSSFormulaTestsCalculateSafeLateralDistance, one_zero_lateral_speed)
{
  Distance safeDistance = 0.;

  std::vector<Distance> expectedSafeDistanceLeft = {1.74, 0.35, 5.67, 0.};
  std::vector<Distance> expectedSafeDistanceRight = {0.35, 1.74, 0., 5.67};
  uint32_t expectedSafeDistanceIndex = 0u;
  for (auto lateralSpeed : {1., -1., 5., -5.})
  {
    VehicleState leftVehicle = createVehicleStateForLateralMotion(lateralSpeed);
    VehicleState rightVehicle = createVehicleStateForLateralMotion(0.);

    ASSERT_TRUE(calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistanceLeft[expectedSafeDistanceIndex], 0.01);

    ASSERT_TRUE(calculateSafeLateralDistance(rightVehicle, leftVehicle, safeDistance));
    ASSERT_NEAR(safeDistance, expectedSafeDistanceRight[expectedSafeDistanceIndex], 0.01);

    expectedSafeDistanceIndex++;
  }
}

} // namespace situation
} // namespace ad_rss
