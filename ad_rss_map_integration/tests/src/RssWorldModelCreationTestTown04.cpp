// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/core/RssCheck.hpp>
#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestTown04 : ad::rss::map::test_support::RssWorldModelCreationTest
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }

  MapToLoad getMapToLoad() override
  {
    return MapToLoad::Town04;
  }

  ObjectGeoLocationTuple createGeoLocationTuple(::ad::map::point::ENUCoordinate x,
                                                ::ad::map::point::ENUCoordinate y,
                                                ::ad::map::point::ENUHeading heading)
  {
    ::ad::map::point::ENUPoint egoENUPoint;
    egoENUPoint.x = x;
    egoENUPoint.y = y;
    egoENUPoint.z = ::ad::map::point::ENUCoordinate(0);
    auto egoGeoPoint = ::ad::map::point::toGeo(egoENUPoint);
    auto egoGeoLocation = std::make_tuple(egoGeoPoint.longitude, egoGeoPoint.latitude, heading.mENUHeading);
    return egoGeoLocation;
  }

  ObjectGeoLocationTuple getEgoVehicleStartLocation() override
  {
    return createGeoLocationTuple(::ad::map::point::ENUCoordinate(131.074),
                                  ::ad::map::point::ENUCoordinate(302.408),
                                  ::ad::map::point::createENUHeading(0.346132));
  }

  ::ad::map::point::GeoPoint getEgoVehicleTarget() override
  {
    ::ad::map::point::ENUPoint target;
    target.x = ::ad::map::point::ENUCoordinate(240.0);
    target.y = ::ad::map::point::ENUCoordinate(307.0);
    target.z = ::ad::map::point::ENUCoordinate(0.0);
    auto positionEndGeo = ::ad::map::point::toGeo(target);
    return positionEndGeo;
  }

  ::ad::rss::core::RssCheck rssCheck;
};

TEST_F(RssWorldModelCreationTestTown04, testVehicleBehindConnectingRoute)
{
  ::ad::rss::map::RssWorldModelCreation constellationCreation(1u, mCheckerControlTest->getEgoVehicleDynamics());

  auto ego_vehicle
    = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation(), getEgoVehicleTarget());
  auto const egoObjectData = ego_vehicle->getTestRssObjecData();

  spdlog::info("EgoMatchObject: {}", egoObjectData.match_object);
  spdlog::info("EgoRoute: {}", ego_vehicle->mTestRoute);

  auto const otherLocation = createGeoLocationTuple(::ad::map::point::ENUCoordinate(124.568),
                                                    ::ad::map::point::ENUCoordinate(299.829),
                                                    ::ad::map::point::createENUHeading(0.419017));
  auto otherVehicle = createOtherVehicle(::ad::rss::world::ObjectId(10), otherLocation);
  auto const otherObjectData = otherVehicle->getTestRssObjecData();

  EXPECT_TRUE(
    constellationCreation.appendConstellations(egoObjectData,
                                               ego_vehicle->mTestRoute,
                                               otherObjectData,
                                               ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10,
                                               ::ad::map::landmark::LandmarkIdSet(),
                                               ::ad::rss::map::RssConstellationCreationMode::Structured));

  auto const world_model = constellationCreation.getWorldModel();
  EXPECT_TRUE(withinValidInputRange(world_model));

  spdlog::info("WordModel: {}", world_model);
  ASSERT_EQ(world_model.constellations.size(), 1u);

  ::ad::rss::state::ProperResponse routeResponse;
  ::ad::rss::core::RssSituationSnapshot rss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot stateSnapshot;
  EXPECT_TRUE(rssCheck.calculateProperResponse(world_model, rss_situation_snapshot, stateSnapshot, routeResponse));

  // not safe, since the one behind us is far too near
  spdlog::info("RouteResponse: {}", routeResponse);
  spdlog::info("StateSnapshot: {}", stateSnapshot);
  spdlog::info("ConstellationSnapshot: {}", rss_situation_snapshot);
  ASSERT_EQ(rss_situation_snapshot.constellations.size(), 1u);

  EXPECT_FALSE(routeResponse.is_safe);
  EXPECT_EQ(::ad::rss::core::LongitudinalRelativePosition::InFront,
            rss_situation_snapshot.constellations.front().relative_position.longitudinal_position);
  EXPECT_EQ(::ad::rss::state::LongitudinalResponse::None, routeResponse.longitudinal_response);
  EXPECT_EQ(::ad::rss::core::LateralRelativePosition::OverlapLeft,
            rss_situation_snapshot.constellations.front().relative_position.lateral_position);
  EXPECT_EQ(::ad::rss::state::LateralResponse::None, routeResponse.lateral_response_left);
  EXPECT_EQ(::ad::rss::state::LateralResponse::None, routeResponse.lateral_response_right);
}
