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
#include "situation/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceSameDirection)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState leadingVehicle = createVehicleStateForLongitudinalMotion(10);
  VehicleState followingVehicle = createVehicleStateForLongitudinalMotion(10);

  ASSERT_FALSE(checkSafeLongitudinalDistanceSameDirection(
    leadingVehicle, followingVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLongitudinalDistanceOppositeDirection)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);

  ASSERT_FALSE(checkSafeLongitudinalDistanceOppositeDirection(
    correctVehicle, oppositeVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, checkSafeLateralDistance)
{
  bool isSafe = false;
  Distance vehicleDistance(-1.);
  Distance safeDistance(0);
  VehicleState leftVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState rightVehicle = createVehicleStateForLongitudinalMotion(50);

  ASSERT_FALSE(checkSafeLateralDistance(leftVehicle, rightVehicle, vehicleDistance, safeDistance, isSafe));
}

TEST(RssFormulaTestsInputRangeChecks, calculateSafeLongitudinalDistanceOppositeDirection)
{
  Distance safeDistance(0.);

  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  VehicleState oppositeVehicle = createVehicleStateForLongitudinalMotion(-50);
  correctVehicle.dynamics.responseTime = Duration(-1);
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(correctVehicle, oppositeVehicle, safeDistance));
  ASSERT_FALSE(calculateSafeLongitudinalDistanceOppositeDirection(oppositeVehicle, correctVehicle, safeDistance));
}

TEST(RssFormulaTestsInputRangeChecks, checkStopInFrontIntersection)
{
  bool isSafe = false;
  Distance safeDistance(0.);
  VehicleState correctVehicle = createVehicleStateForLongitudinalMotion(50);
  correctVehicle.dynamics.responseTime = Duration(-1);
  ASSERT_FALSE(checkStopInFrontIntersection(correctVehicle, safeDistance, isSafe));
}

} // namespace situation
} // namespace rss
} // namespace ad
