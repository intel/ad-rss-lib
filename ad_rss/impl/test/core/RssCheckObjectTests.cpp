// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"

namespace ad {
namespace rss {
namespace core {

class RssCheckObjectTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckObjectTests, validateTestSetup)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.accelerationRestrictions);
}

TEST_F(RssCheckObjectTests, HugeEgoObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.objectId = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.accelerationRestrictions);
}

TEST_F(RssCheckObjectTests, HugeOtherObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.accelerationRestrictions);
}

TEST_F(RssCheckObjectTests, SameObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = worldModel.scenes[0].egoVehicle.objectId;

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, ZeroObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].object.objectId = std::numeric_limits<uint64_t>::max() + 1;

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.accelerationRestrictions);
}

TEST_F(RssCheckObjectTests, EgoObjectTypeValidity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (int32_t i = 0; i < 10; ++i)
  {
    worldModel.timeIndex++;
    worldModel.scenes[0].egoVehicle.objectType = static_cast<world::ObjectType>(i);
    if (worldModel.scenes[0].egoVehicle.objectType == world::ObjectType::EgoVehicle)
    {
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
      testRestrictions(properResponse.accelerationRestrictions);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
    }
  }
}

TEST_F(RssCheckObjectTests, ObjectObjectTypeValidity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (int32_t i = 0; i < 10; ++i)
  {
    worldModel.timeIndex++;
    worldModel.scenes[0].object.objectType = static_cast<world::ObjectType>(i);
    if ((worldModel.scenes[0].object.objectType == world::ObjectType::ArtificialObject)
        || (worldModel.scenes[0].object.objectType == world::ObjectType::OtherVehicle)
        || (worldModel.scenes[0].object.objectType == world::ObjectType::Pedestrian))
    {
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse)) << i;
      testRestrictions(properResponse.accelerationRestrictions);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
    }
  }
}

TEST_F(RssCheckObjectTests, HugeEgoVelocity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.velocity.speedLonMin = Speed(100);
  worldModel.scenes[0].egoVehicle.velocity.speedLonMax = Speed(300);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, HugeEgoAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.alphaLon.accelMax = Acceleration(120);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, EmptyEgoVehicleOccupiedRegion)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.occupiedRegions.clear();

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, WrongEgoVehicleOccupiedRegion)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.5);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.3);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.alphaLon.accelMax = Acceleration(-3);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.alphaLon.brakeMax = Acceleration(-1);
  worldModel.defaultEgoVehicleRssDynamics.alphaLon.brakeMin = Acceleration(-5);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange2)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.alphaLon.brakeMin = Acceleration(-1);
  worldModel.defaultEgoVehicleRssDynamics.alphaLon.brakeMinCorrect = Acceleration(-5);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, PositiveEgoVehicleLateralAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.alphaLat.brakeMin = Acceleration(1);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalVelocity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicle.velocity.speedLonMin = Speed(-3.);
  worldModel.scenes[0].egoVehicle.velocity.speedLonMax = Speed(0.);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleResponseTime)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.responseTime = Duration(-5.);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, ZeroEgoVehicleResponseTime)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.defaultEgoVehicleRssDynamics.responseTime = Duration(0);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

} // namespace core
} // namespace rss
} // namespace ad
