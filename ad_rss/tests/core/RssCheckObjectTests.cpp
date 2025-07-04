// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
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
  testRestrictions(properResponse.acceleration_restrictions);
}

TEST_F(RssCheckObjectTests, HugeEgoObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle.object_id = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.acceleration_restrictions);
}

TEST_F(RssCheckObjectTests, HugeOtherObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].object.object_id = std::numeric_limits<uint64_t>::max();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.acceleration_restrictions);
}

TEST_F(RssCheckObjectTests, SameObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].object.object_id = worldModel.constellations[0].ego_vehicle.object_id;

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, ZeroObjectId)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].object.object_id = std::numeric_limits<uint64_t>::max() + 1;

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.acceleration_restrictions);
}

TEST_F(RssCheckObjectTests, EgoObjectTypeValidity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (int32_t i = 0; i < 10; ++i)
  {
    worldModel.time_index++;
    worldModel.constellations[0].ego_vehicle.object_type = static_cast<world::ObjectType>(i);
    if (worldModel.constellations[0].ego_vehicle.object_type == world::ObjectType::EgoVehicle)
    {
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
      testRestrictions(properResponse.acceleration_restrictions);
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
    worldModel.time_index++;
    worldModel.constellations[0].object.object_type = static_cast<world::ObjectType>(i);
    if ((worldModel.constellations[0].object.object_type == world::ObjectType::ArtificialObject)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::ArtificialPedestrian)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::ArtificialVehicle)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::OtherVehicle)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::Pedestrian)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::Bicycle)
        || (worldModel.constellations[0].object.object_type == world::ObjectType::OtherObject))
    {
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse)) << i;
      testRestrictions(properResponse.acceleration_restrictions);
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

  worldModel.constellations[0].ego_vehicle.velocity.speed_lon_min = Speed(100);
  worldModel.constellations[0].ego_vehicle.velocity.speed_lon_max = Speed(300);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, HugeEgoAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max = Acceleration(120);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, EmptyEgoVehicleOccupiedRegion)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle.occupied_regions.clear();

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, WrongEgoVehicleOccupiedRegion)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lon_range.minimum = ParametricValue(0.5);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lon_range.maximum = ParametricValue(0.3);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max = Acceleration(-3);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_max = Acceleration(-1);
  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min = Acceleration(-5);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, IncorrectEgoVehicleLongitudinalAccelerationRange2)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min = Acceleration(-1);
  worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min_correct = Acceleration(-5);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, PositiveEgoVehicleLateralAcceleration)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.alpha_lat.brake_min = Acceleration(1);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleLongitudinalVelocity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle.velocity.speed_lon_min = Speed(-3.);
  worldModel.constellations[0].ego_vehicle.velocity.speed_lon_max = Speed(0.);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, NegativeEgoVehicleResponseTime)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.response_time = Duration(-5.);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckObjectTests, ZeroEgoVehicleResponseTime)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.default_ego_vehicle_rss_dynamics.response_time = Duration(0);

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

} // namespace core
} // namespace rss
} // namespace ad
