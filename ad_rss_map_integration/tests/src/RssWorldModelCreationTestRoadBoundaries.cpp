// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestRoadBoundaries : ad::rss::map::test_support::RssWorldModelCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }
};

TEST_F(RssWorldModelCreationTestRoadBoundaries, testAppendRoadBoundaries)
{
  ::ad::rss::map::RssWorldModelCreation constellationCreation(1u, mCheckerControlTest->getEgoVehicleDynamics());

  auto ego_vehicle
    = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation(), getEgoVehicleTarget());
  auto const egoObjectData = ego_vehicle->getTestRssObjecData();

  for (auto appendMode : {::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly,
                          ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes,
                          ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors})
  {
    EXPECT_TRUE(constellationCreation.appendRoadBoundaries(egoObjectData, ego_vehicle->mTestRoute, appendMode));
  }
  EXPECT_EQ(constellationCreation.mWorldModel.constellations.size(), 6u);

  auto egoObjectCorruptBoundingBox = egoObjectData;
  egoObjectCorruptBoundingBox.match_object = ::ad::map::match::Object();
  // invalid bounding box
  EXPECT_FALSE(constellationCreation.appendRoadBoundaries(
    egoObjectCorruptBoundingBox, ego_vehicle->mTestRoute, ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));

  // invalid speed
  auto egoObjectCorruptSpeed = egoObjectData;
  egoObjectCorruptSpeed.speed_range.minimum = ::ad::physics::Speed();
  egoObjectCorruptSpeed.speed_range.maximum = ::ad::physics::Speed();
  EXPECT_FALSE(constellationCreation.appendRoadBoundaries(
    egoObjectCorruptSpeed, ego_vehicle->mTestRoute, ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));

  // invalid route
  EXPECT_FALSE(constellationCreation.appendRoadBoundaries(
    egoObjectData, ::ad::map::route::FullRoute(), ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly));

  EXPECT_EQ(constellationCreation.mWorldModel.constellations.size(), 6u);

  for (auto i = 0u; i < constellationCreation.mWorldModel.constellations.size(); ++i)
  {
    auto &constellation = constellationCreation.mWorldModel.constellations[i];
    EXPECT_EQ(::ad::rss::world::ConstellationType::SameDirection, constellation.constellation_type);
    if (i == 0u)
    {
    }
    else if (i == 2u)
    {
    }
    else if (i == 4u)
    {
    }
    else
    {
      EXPECT_EQ(constellation.ego_vehicle_road,
                constellationCreation.mWorldModel.constellations[i - 1].ego_vehicle_road);
    }

    // object data
    EXPECT_EQ(::ad::rss::world::ObjectType::ArtificialObject, constellation.object.object_type);

    EXPECT_TRUE(withinValidInputRange(constellation.object_rss_dynamics));
    EXPECT_EQ(::ad::physics::Acceleration(0.), constellation.object_rss_dynamics.alpha_lat.accel_max);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), constellation.object_rss_dynamics.alpha_lat.brake_min);
    EXPECT_EQ(::ad::physics::Acceleration(0.), constellation.object_rss_dynamics.alpha_lon.accel_max);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), constellation.object_rss_dynamics.alpha_lon.brake_max);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), constellation.object_rss_dynamics.alpha_lon.brake_min);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), constellation.object_rss_dynamics.alpha_lon.brake_min_correct);
    EXPECT_EQ(::ad::physics::Distance(0.), constellation.object_rss_dynamics.lateral_fluctuation_margin);
    EXPECT_EQ(::ad::physics::Duration(0.01), constellation.object_rss_dynamics.response_time);

    EXPECT_EQ(::ad::physics::Speed(0.), constellation.object.velocity.speed_lon_min);
    EXPECT_EQ(::ad::physics::Speed(0.), constellation.object.velocity.speed_lon_max);
    EXPECT_EQ(::ad::physics::Speed(0.), constellation.object.velocity.speed_lat_min);
    EXPECT_EQ(::ad::physics::Speed(0.), constellation.object.velocity.speed_lat_max);

    if (i % 2u)
    {
      // left border
      EXPECT_EQ(std::numeric_limits<::ad::rss::world::ObjectId>::max() - 1, constellation.object.object_id);
    }
    else
    {
      // right border
      EXPECT_EQ(std::numeric_limits<::ad::rss::world::ObjectId>::max(), constellation.object.object_id);
    }

    EXPECT_TRUE(withinValidInputRange(constellation));
  }

  auto const world_model = constellationCreation.getWorldModel();
  EXPECT_TRUE(withinValidInputRange(world_model));
}

// @TODO: create unit tests for merging use-cases; take e.g. TPK_PFZ map for this to find a possible intersection
