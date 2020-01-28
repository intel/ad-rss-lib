// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/map/access/Operation.hpp>
#include <ad/map/match/AdMapMatching.hpp>
#include <ad/map/route/Planning.hpp>
#include <ad/rss/map/Logging.hpp>
#include <ad/rss/map/RssSceneCreation.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include <gtest/gtest.h>

struct RssSceneCreationTest : ::testing::Test
{
  const ::ad::physics::Duration cResponseTimeEgoVehicle{1};
  const ::ad::physics::Duration cResponseTimeOtherVehicles{2};

  const ::ad::physics::Acceleration cMaximumLongitudinalAcceleration{3.5};
  const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDeceleleration{4};
  const ::ad::physics::Acceleration cMaximumLongitudinalBrakingDeceleleration{8};
  const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDecelelerationCorrect{3};

  const ::ad::physics::Acceleration cMaximumLateralAcceleration{0.2};
  const ::ad::physics::Acceleration cMinimumLateralBrakingDeceleleration{0.8};

  ::ad::rss::world::RssDynamics getEgoVehicleDynamics(::ad::physics::Speed const maxSpeed = ::ad::physics::Speed(100.))
  {
    ::ad::rss::world::RssDynamics result;
    result.alphaLat.accelMax = cMaximumLateralAcceleration;
    result.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

    result.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
    result.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;
    result.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
    result.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;

    result.lateralFluctuationMargin = ::ad::physics::Distance(0.);

    result.responseTime = cResponseTimeEgoVehicle;
    result.maxSpeed = maxSpeed;

    return result;
  }

  ::ad::rss::world::RssDynamics getObjectVehicleDynamics(::ad::physics::Speed const maxSpeed
                                                         = ::ad::physics::Speed(100.))
  {
    ::ad::rss::world::RssDynamics result;
    result.alphaLat.accelMax = cMaximumLateralAcceleration;
    result.alphaLat.brakeMin = cMinimumLateralBrakingDeceleleration;

    result.alphaLon.accelMax = cMaximumLongitudinalAcceleration;
    result.alphaLon.brakeMinCorrect = cMinimumLongitudinalBrakingDecelelerationCorrect;
    result.alphaLon.brakeMin = cMinimumLongitudinalBrakingDeceleleration;
    result.alphaLon.brakeMax = cMaximumLongitudinalBrakingDeceleleration;

    result.lateralFluctuationMargin = ::ad::physics::Distance(0.);

    result.responseTime = cResponseTimeOtherVehicles;
    result.maxSpeed = maxSpeed;

    return result;
  }

  virtual void SetUp()
  {
    ::ad::map::access::cleanup();
    ASSERT_TRUE(::ad::map::access::init("resources/Town01.txt"));
    initializeEgoVehicle();
    ::ad::rss::map::getLogger()->set_level(spdlog::level::trace);
  }

  virtual void TearDown()
  {
    ::ad::map::access::cleanup();
  }

  void initializeObject(::ad::map::point::Longitude const &lon,
                        ::ad::map::point::Latitude const &lat,
                        double const &yawAngle,
                        ::ad::map::match::Object &object)
  {
    auto positionGeo = ::ad::map::point::createGeoPoint(lon, lat, ::ad::map::point::Altitude(0.));

    object.enuPosition.centerPoint = ::ad::map::point::toENU(positionGeo);
    object.enuPosition.heading = ::ad::map::point::createENUHeading(yawAngle);
    object.enuPosition.dimension.length = ::ad::physics::Distance(4.5);
    object.enuPosition.dimension.width = ::ad::physics::Distance(2.);
    object.enuPosition.dimension.height = ::ad::physics::Distance(1.5);
    object.enuPosition.enuReferencePoint = ::ad::map::access::getENUReferencePoint();

    ::ad::map::match::AdMapMatching mapMatching;
    object.mapMatchedBoundingBox = mapMatching.getMapMatchedBoundingBox(
      object.enuPosition, ::ad::physics::Distance(0.1), ::ad::physics::Probability(0.5));

    ASSERT_GE(object.mapMatchedBoundingBox.referencePointPositions.size(),
              static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center));
    ASSERT_GE(object.mapMatchedBoundingBox
                .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)]
                .size(),
              0);
  }

  void initializeEgoVehicle()
  {
    // laneId: offset 240151:0.55
    initializeObject(::ad::map::point::Longitude(8.00125444865324766),
                     ::ad::map::point::Latitude(48.99758627528235877),
                     M_PI_2,
                     egoMatchObject);

    egoSpeed = ::ad::physics::Speed(5.);

    // laneId: offset  120149:0.16
    auto positionEndGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.00188527300496979),
                                                           ::ad::map::point::Latitude(48.99821051747871792),
                                                           ::ad::map::point::Altitude(0.));

    egoRoute = ::ad::map::route::planning::planRoute(
      egoMatchObject.mapMatchedBoundingBox
        .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
        .lanePoint.paraPoint,
      positionEndGeo);
  }

  ::ad::rss::world::ObjectId egoVehicleId{123u};
  ::ad::physics::Speed egoSpeed;
  ::ad::map::match::Object egoMatchObject;
  ::ad::map::route::FullRoute egoRoute;
};

TEST_F(RssSceneCreationTest, testAppendRoadBoundaries)
{
  ::ad::rss::world::WorldModel worldModel
    = ::ad::rss::map::RssSceneCreation::initializeWorldModel(1u, getEgoVehicleDynamics());

  for (auto appendMode : {::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToOppositeLanes,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToAllNeighbors})
  {
    EXPECT_TRUE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
      egoVehicleId, egoMatchObject, egoSpeed, egoRoute, appendMode, worldModel));
  }
  EXPECT_EQ(worldModel.scenes.size(), 6u);

  // invalid bounding box
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    ::ad::map::match::Object(),
    egoSpeed,
    egoRoute,
    ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
    worldModel));

  // invalid speed
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    egoMatchObject,
    ::ad::physics::Speed(),
    egoRoute,
    ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
    worldModel));

  // invalid route
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    egoMatchObject,
    egoSpeed,
    ::ad::map::route::FullRoute(),
    ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
    worldModel));

  EXPECT_EQ(worldModel.scenes.size(), 6u);

  for (auto i = 0u; i < worldModel.scenes.size(); ++i)
  {
    auto &scene = worldModel.scenes[i];
    EXPECT_EQ(::ad::rss::situation::SituationType::SameDirection, scene.situationType);
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
      EXPECT_EQ(scene.egoVehicleRoad, worldModel.scenes[i - 1].egoVehicleRoad);
    }

    // object data
    EXPECT_EQ(::ad::rss::world::ObjectType::ArtificialObject, scene.object.objectType);

    EXPECT_TRUE(withinValidInputRange(scene.objectRssDynamics));
    EXPECT_EQ(::ad::physics::Acceleration(0.), scene.objectRssDynamics.alphaLat.accelMax);
    EXPECT_EQ(::ad::physics::Acceleration(0.01), scene.objectRssDynamics.alphaLat.brakeMin);
    EXPECT_EQ(::ad::physics::Acceleration(0.), scene.objectRssDynamics.alphaLon.accelMax);
    EXPECT_EQ(::ad::physics::Acceleration(0.01), scene.objectRssDynamics.alphaLon.brakeMax);
    EXPECT_EQ(::ad::physics::Acceleration(0.01), scene.objectRssDynamics.alphaLon.brakeMin);
    EXPECT_EQ(::ad::physics::Acceleration(0.01), scene.objectRssDynamics.alphaLon.brakeMinCorrect);
    EXPECT_EQ(::ad::physics::Distance(0.), scene.objectRssDynamics.lateralFluctuationMargin);
    EXPECT_EQ(::ad::physics::Duration(0.01), scene.objectRssDynamics.responseTime);

    EXPECT_EQ(::ad::physics::Speed(0.), scene.object.velocity.speedLonMin);
    EXPECT_EQ(::ad::physics::Speed(0.), scene.object.velocity.speedLonMax);
    EXPECT_EQ(::ad::physics::Speed(0.), scene.object.velocity.speedLatMin);
    EXPECT_EQ(::ad::physics::Speed(0.), scene.object.velocity.speedLatMax);

    if (i % 2u)
    {
      // left border
      EXPECT_EQ(std::numeric_limits<::ad::rss::world::ObjectId>::max() - 1, scene.object.objectId);
    }
    else
    {
      // right border
      EXPECT_EQ(std::numeric_limits<::ad::rss::world::ObjectId>::max(), scene.object.objectId);
    }

    EXPECT_TRUE(withinValidInputRange(scene));
  }

  EXPECT_TRUE(::ad::rss::map::RssSceneCreation::finalizeWorldModel(getEgoVehicleDynamics(), worldModel));
}

TEST_F(RssSceneCreationTest, testAppendScenes)
{
  std::vector<std::tuple<::ad::rss::world::ObjectId, ::ad::map::point::Longitude, ::ad::map::point::Latitude, double>>
    otherVehicles{
      // laneId: 240151, directly in front same direction
      std::make_tuple(::ad::rss::world::ObjectId(10),
                      ::ad::map::point::Longitude(8.00125444865324766),
                      ::ad::map::point::Latitude(48.9980),
                      M_PI_2),

      // laneId: offset  120149:0.16  around the intersection in front same direction on ego route
      std::make_tuple(::ad::rss::world::ObjectId(20),
                      ::ad::map::point::Longitude(8.00188527300496979),
                      ::ad::map::point::Latitude(48.99821051747871792),
                      0.),

      // laneId: offset  230151, straight through the intersection in front same direction, but not on route
      std::make_tuple(::ad::rss::world::ObjectId(30),
                      ::ad::map::point::Longitude(8.00125444865324766),
                      ::ad::map::point::Latitude(48.9985),
                      M_PI_2),

      // laneId: 240149, directly in front opposite direction
      std::make_tuple(::ad::rss::world::ObjectId(11),
                      ::ad::map::point::Longitude(8.00120),
                      ::ad::map::point::Latitude(48.9980),
                      -M_PI_2),

      // laneId: offset  120151:0.16  around the intersection in opposite direction
      std::make_tuple(::ad::rss::world::ObjectId(21),
                      ::ad::map::point::Longitude(8.00188527300496979),
                      ::ad::map::point::Latitude(48.99824),
                      M_PI),

      // laneId: offset  230149, straight through the intersection in opposite direction
      std::make_tuple(::ad::rss::world::ObjectId(31),
                      ::ad::map::point::Longitude(8.00120),
                      ::ad::map::point::Latitude(48.9985),
                      -M_PI_2),
    };

  ::ad::rss::world::WorldModel worldModel
    = ::ad::rss::map::RssSceneCreation::initializeWorldModel(1u, getEgoVehicleDynamics());

  for (auto const &objectTuple : otherVehicles)
  {
    ::ad::rss::world::ObjectId otherVehicleId = std::get<0>(objectTuple);
    ::ad::physics::Speed otherVehicleSpeed{10.};

    ::ad::map::match::Object otherMatchObject;

    initializeObject(std::get<1>(objectTuple), std::get<2>(objectTuple), std::get<3>(objectTuple), otherMatchObject);

    EXPECT_TRUE(::ad::rss::map::RssSceneCreation::appendScenes(
      egoVehicleId,
      egoMatchObject,
      egoSpeed,
      egoRoute,
      otherVehicleId,
      ::ad::rss::world::ObjectType::OtherVehicle,
      otherMatchObject,
      otherVehicleSpeed,
      getObjectVehicleDynamics(),
      ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10,
      ::ad::map::landmark::LandmarkIdSet(),
      worldModel));
  }

  EXPECT_EQ(worldModel.scenes.size(), 9u);

  for (auto i = 0u; i < worldModel.scenes.size(); ++i)
  {
    auto &scene = worldModel.scenes[i];
    EXPECT_EQ(::ad::rss::world::ObjectType::OtherVehicle, scene.object.objectType);
    EXPECT_TRUE(withinValidInputRange(scene.objectRssDynamics));

    if (i == 0u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[0]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::SameDirection, scene.situationType);
      EXPECT_EQ(1u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(12.2936)), scene.objectRssDynamics);
    }
    else if (i == 1u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[1]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::SameDirection, scene.situationType);
      EXPECT_EQ(3u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(15.2778)), scene.objectRssDynamics);
    }
    else if (i == 2u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[2]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::NotRelevant, scene.situationType);
      EXPECT_EQ(0u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(), scene.objectRssDynamics);
    }
    else if (i == 3u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[3]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::OppositeDirection, scene.situationType);
      EXPECT_EQ(1u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(12.2936)), scene.objectRssDynamics);
    }
    else if ((i == 4u) || (i == 5u) || (i == 6u))
    {
      // here we get 3 predictions
      EXPECT_EQ(std::get<0>(otherVehicles[4]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::OppositeDirection, scene.situationType);
      EXPECT_EQ(3u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(15.2778)), scene.objectRssDynamics);
    }
    else if (i == 7u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[5]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::OppositeDirection, scene.situationType);
      EXPECT_EQ(4u, scene.egoVehicleRoad.size());
      EXPECT_EQ(0u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(15.2778)), scene.objectRssDynamics);
    }
    else if (i == 8u)
    {
      EXPECT_EQ(std::get<0>(otherVehicles[5]), scene.object.objectId);
      EXPECT_EQ(::ad::rss::situation::SituationType::IntersectionObjectHasPriority, scene.situationType);
      EXPECT_EQ(3u, scene.egoVehicleRoad.size());
      EXPECT_EQ(2u, scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(::ad::physics::Speed(15.2778)), scene.objectRssDynamics);
    }

    EXPECT_TRUE(withinValidInputRange(scene));
  }

  EXPECT_TRUE(::ad::rss::map::RssSceneCreation::finalizeWorldModel(getEgoVehicleDynamics(), worldModel));
}
