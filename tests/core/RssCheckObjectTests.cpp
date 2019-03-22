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

#include "RssCheckTestBaseT.hpp"

namespace ad_rss {
namespace core {

class RssCheckObjectTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckObjectTests, validateTestSetup)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckObjectTests, InvalidObjectId)
{
  worldModel.egoVehicle = objectAsEgo(objectOnSegment0);
  objectOnSegment1.objectId = 0;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

  if (objectOnSegment0.objectId == objectOnSegment1.objectId)
  {
    ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  }
}

TEST_F(RssCheckObjectTests, HugeObjectId)
{
  worldModel.egoVehicle = objectAsEgo(objectOnSegment0);
  objectOnSegment0.objectId = std::numeric_limits<uint64_t>::max();
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckObjectTests, InvalidObjectType)
{
  worldModel.egoVehicle = objectAsEgo(objectOnSegment0);

  worldModel.timeIndex = 2;
  int32_t vehicleType = 8;
  ad_rss::world::ObjectType vehicleEnum = static_cast<ad_rss::world::ObjectType>(vehicleType);
  worldModel.egoVehicle.objectType = vehicleEnum;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, ValidObjectType)
{
  worldModel.egoVehicle = objectAsEgo(objectOnSegment0);

  int32_t vehicleType = 0;
  ad_rss::world::ObjectType vehicleEnum = static_cast<ad_rss::world::ObjectType>(vehicleType);
  objectOnSegment0.objectType = vehicleEnum;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
}

TEST_F(RssCheckObjectTests, HugeEgoVelocity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.velocity.speedLon = Speed(300);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, HugeEgoAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.accelMax = Acceleration(120);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, EmptyEgoVehicleOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, WrongEgoVehicleOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.accelMax = Acceleration(-3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.brakeMax = Acceleration(1);
  worldModel.egoVehicle.dynamics.alphaLon.brakeMin = Acceleration(5);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange2)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.brakeMin = Acceleration(1);
  worldModel.egoVehicle.dynamics.alphaLon.brakeMinCorrect = Acceleration(5);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLateralAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLat.brakeMin = Acceleration(-1);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalVelocity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.velocity.speedLon = Speed(-3.);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleResponseTime)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.responseTime = Duration(-5.);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, ZeroEgoVehicleResponseTime)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.responseTime = Duration(0);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

} // namespace core
} // namespace ad_rss
