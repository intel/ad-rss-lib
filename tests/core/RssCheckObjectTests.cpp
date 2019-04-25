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

TEST_F(RssCheckObjectTests, HugeEgoObjectId)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.objectId = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckObjectTests, HugeOtherObjectId)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckObjectTests, SameObjectId)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = worldModel.scenes[0].egoVehicle.objectId;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, ZeroObjectId)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = std::numeric_limits<uint64_t>::max() + 1;

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckObjectTests, EgoObjectTypeValidity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (int32_t i = 0; i < 10; ++i)
  {
    worldModel.timeIndex++;
    worldModel.scenes[0].egoVehicle.objectType = static_cast<ad_rss::world::ObjectType>(i);
    if (worldModel.scenes[0].egoVehicle.objectType == ad_rss::world::ObjectType::EgoVehicle)
    {
      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
      testRestrictions(accelerationRestriction);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
    }
  }
}

TEST_F(RssCheckObjectTests, ObjectObjectTypeValidity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (int32_t i = 0; i < 10; ++i)
  {
    worldModel.timeIndex++;
    worldModel.scenes[0].object.objectType = static_cast<ad_rss::world::ObjectType>(i);
    if ((worldModel.scenes[0].object.objectType == ad_rss::world::ObjectType::ArtificialObject)
        || (worldModel.scenes[0].object.objectType == ad_rss::world::ObjectType::OtherVehicle))
    {
      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction)) << i;
      testRestrictions(accelerationRestriction);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
    }
  }
}

TEST_F(RssCheckObjectTests, HugeEgoVelocity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.velocity.speedLon = Speed(300);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, HugeEgoAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.alphaLon.accelMax = Acceleration(120);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, EmptyEgoVehicleOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.occupiedRegions.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, WrongEgoVehicleOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.5);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.alphaLon.accelMax = Acceleration(-3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.alphaLon.brakeMax = Acceleration(1);
  worldModel.egoVehicleRssDynamics.alphaLon.brakeMin = Acceleration(5);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange2)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.alphaLon.brakeMin = Acceleration(1);
  worldModel.egoVehicleRssDynamics.alphaLon.brakeMinCorrect = Acceleration(5);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLateralAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.alphaLat.brakeMin = Acceleration(-1);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalVelocity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.velocity.speedLon = Speed(-3.);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleResponseTime)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.responseTime = Duration(-5.);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckObjectTests, ZeroEgoVehicleResponseTime)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicleRssDynamics.responseTime = Duration(0);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

} // namespace core
} // namespace ad_rss
