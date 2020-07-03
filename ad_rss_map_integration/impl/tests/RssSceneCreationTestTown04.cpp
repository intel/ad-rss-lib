// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestTown04 : RssSceneCreationTest
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }

  MapToLoad getMapToLoad() override
  {
    return MapToLoad::Town04;
  }

  void initializeEgoVehicle() override
  {
    egoMatchObject.enuPosition.centerPoint.x = ::ad::map::point::ENUCoordinate(131.074);
    egoMatchObject.enuPosition.centerPoint.y = ::ad::map::point::ENUCoordinate(302.408);
    egoMatchObject.enuPosition.centerPoint.z = ::ad::map::point::ENUCoordinate(0);
    egoMatchObject.enuPosition.heading = ::ad::map::point::createENUHeading(0.346132);

    initializeObjectENU(egoMatchObject.enuPosition.centerPoint, egoMatchObject.enuPosition.heading, egoMatchObject);

    egoSpeed = ::ad::physics::Speed(5.);
    egoYawRate = ::ad::physics::AngularVelocity(0.);
    egoSteeringAngle = ::ad::physics::Angle(0.);

    ::ad::map::point::ENUPoint target;
    target.x = ::ad::map::point::ENUCoordinate(240.0);
    target.y = ::ad::map::point::ENUCoordinate(307.0);
    target.z = ::ad::map::point::ENUCoordinate(0.0);
    auto positionEndGeo = ::ad::map::point::toGeo(target);

    egoRoute = ::ad::map::route::planning::planRoute(
      egoMatchObject.mapMatchedBoundingBox
        .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
        .lanePoint.paraPoint,
      positionEndGeo);
  }

  ::ad::rss::core::RssCheck rssCheck;
};

TEST_F(RssSceneCreationTestTown04, testVehicleBehindConnectingRoute)
{
  ::ad::rss::map::RssSceneCreation sceneCreation(1u, getEgoVehicleDynamics());

  spdlog::info("EgoMatchObject: {}", egoMatchObject);
  spdlog::info("EgoRoute: {}", egoRoute);

  ::ad::rss::world::ObjectId otherVehicleId = ::ad::rss::world::ObjectId(10);
  ::ad::physics::Speed otherVehicleSpeed{5.};
  ::ad::physics::AngularVelocity otherVehicleYawRate{0.};
  ::ad::physics::Angle otherVehicleSteeringAngle{0.};
  ::ad::map::match::Object otherMatchObject;

  otherMatchObject.enuPosition.centerPoint.x = ::ad::map::point::ENUCoordinate(124.568);
  otherMatchObject.enuPosition.centerPoint.y = ::ad::map::point::ENUCoordinate(299.829);
  otherMatchObject.enuPosition.centerPoint.z = ::ad::map::point::ENUCoordinate(0);
  otherMatchObject.enuPosition.heading = ::ad::map::point::createENUHeading(0.419017);

  initializeObjectENU(otherMatchObject.enuPosition.centerPoint, otherMatchObject.enuPosition.heading, otherMatchObject);

  ::ad::rss::map::RssObjectData egoObjectData;
  egoObjectData.id = egoVehicleId;
  egoObjectData.type = ::ad::rss::world::ObjectType::EgoVehicle;
  egoObjectData.matchObject = egoMatchObject;
  egoObjectData.speed = egoSpeed;
  egoObjectData.yawRate = egoYawRate;
  egoObjectData.steeringAngle = egoSteeringAngle;
  egoObjectData.rssDynamics = getEgoVehicleDynamics();

  ::ad::rss::map::RssObjectData otherObjectData;
  otherObjectData.id = otherVehicleId;
  otherObjectData.type = ::ad::rss::world::ObjectType::OtherVehicle;
  otherObjectData.matchObject = otherMatchObject;
  otherObjectData.speed = otherVehicleSpeed;
  otherObjectData.yawRate = otherVehicleYawRate;
  otherObjectData.steeringAngle = otherVehicleSteeringAngle;
  otherObjectData.rssDynamics = getObjectVehicleDynamics();

  EXPECT_TRUE(
    sceneCreation.appendScenes(egoObjectData,
                               egoRoute,
                               otherObjectData,
                               ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10,
                               ::ad::map::landmark::LandmarkIdSet(),
                               ::ad::rss::map::RssMode::Structured));

  auto const worldModel = sceneCreation.getWorldModel();
  EXPECT_TRUE(withinValidInputRange(worldModel));

  spdlog::info("WordModel: {}", worldModel);
  ASSERT_EQ(worldModel.scenes.size(), 1u);

  ::ad::rss::state::ProperResponse routeResponse;
  ::ad::rss::situation::SituationSnapshot situationSnapshot;
  ::ad::rss::state::RssStateSnapshot stateSnapshot;
  EXPECT_TRUE(rssCheck.calculateProperResponse(worldModel, situationSnapshot, stateSnapshot, routeResponse));

  // not safe, since the one behind us is far too near
  spdlog::info("RouteResponse: {}", routeResponse);
  spdlog::info("StateSnapshot: {}", stateSnapshot);
  spdlog::info("SituationSnapshot: {}", situationSnapshot);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  EXPECT_FALSE(routeResponse.isSafe);
  EXPECT_EQ(::ad::rss::situation::LongitudinalRelativePosition::InFront,
            situationSnapshot.situations.front().relativePosition.longitudinalPosition);
  EXPECT_EQ(::ad::rss::state::LongitudinalResponse::None, routeResponse.longitudinalResponse);
  EXPECT_EQ(::ad::rss::situation::LateralRelativePosition::OverlapLeft,
            situationSnapshot.situations.front().relativePosition.lateralPosition);
  EXPECT_EQ(::ad::rss::state::LateralResponse::None, routeResponse.lateralResponseLeft);
  EXPECT_EQ(::ad::rss::state::LateralResponse::BrakeMin, routeResponse.lateralResponseRight);
}
