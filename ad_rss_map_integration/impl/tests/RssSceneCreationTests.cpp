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
#include <ad/rss/core/RssCheck.hpp>
#include <ad/rss/map/Logging.hpp>
#include <ad/rss/map/RssSceneCreation.hpp>
#include <ad/rss/situation/SituationSnapshot.hpp>
#include <ad/rss/state/ProperResponse.hpp>
#include <ad/rss/state/RssStateSnapshot.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include <gtest/gtest.h>

#include <fstream>
#include <streambuf>

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

  typedef std::tuple<::ad::rss::situation::SituationType, size_t, size_t, ::ad::physics::Speed> ExpectedResultTuple;

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

  virtual void initMap() = 0;
  virtual void initializeEgoVehicle() = 0;

  void SetUp() override
  {
    ::ad::map::access::cleanup();
    //::ad::rss::map::getLogger()->set_level(spdlog::level::trace);
    initMap();
    initializeEgoVehicle();
  }

  void TearDown() override
  {
    ::ad::map::access::cleanup();
  }

  void initializeObjectGeo(::ad::map::point::Longitude const &lon,
                           ::ad::map::point::Latitude const &lat,
                           double const &yawAngle,
                           ::ad::map::match::Object &object)
  {
    auto positionGeo = ::ad::map::point::createGeoPoint(lon, lat, ::ad::map::point::Altitude(0.));
    initializeObjectENU(::ad::map::point::toENU(positionGeo), ::ad::map::point::createENUHeading(yawAngle), object);
  }

  void initializeObjectENU(::ad::map::point::ENUPoint const &position,
                           ::ad::map::point::ENUHeading const &heading,
                           ::ad::map::match::Object &object)
  {
    object.enuPosition.centerPoint = position;
    object.enuPosition.heading = heading;
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

  void checkSceneResults(::ad::rss::world::WorldModel const &worldModel,
                         size_t const worldModelCheckIndexStart,
                         ::ad::rss::world::ObjectId const &otherVehicleId,
                         std::vector<ExpectedResultTuple> const &resultExpectations)
  {
    for (auto i = worldModelCheckIndexStart; i < worldModel.scenes.size(); ++i)
    {
      auto &scene = worldModel.scenes[i];
      auto &expectedResultTuple = resultExpectations[i - worldModelCheckIndexStart];

      EXPECT_TRUE(withinValidInputRange(scene));
      EXPECT_EQ(::ad::rss::world::ObjectType::OtherVehicle, scene.object.objectType);
      EXPECT_EQ(otherVehicleId, scene.object.objectId);
      EXPECT_EQ(std::get<0>(expectedResultTuple), scene.situationType);
      EXPECT_EQ(std::get<1>(expectedResultTuple), scene.egoVehicleRoad.size());
      EXPECT_EQ(std::get<2>(expectedResultTuple), scene.intersectingRoad.size());
      EXPECT_EQ(getObjectVehicleDynamics(std::get<3>(expectedResultTuple)), scene.objectRssDynamics);
    }
  }

  ::ad::rss::world::ObjectId egoVehicleId{123u};
  ::ad::physics::Speed egoSpeed;
  ::ad::map::match::Object egoMatchObject;
  ::ad::map::route::FullRoute egoRoute;
};

struct RssSceneCreationTown01Test : RssSceneCreationTest
{
  void initMap() override
  {
    // using priority to the right intersections
    ASSERT_TRUE(::ad::map::access::init("resources/Town01.txt"));
  }

  void initializeEgoVehicle() override
  {
    // laneId: offset 240151:0.55
    initializeObjectGeo(::ad::map::point::Longitude(8.00125444865324766),
                        ::ad::map::point::Latitude(48.99758627528235877),
                        M_PI_2,
                        egoMatchObject);

    egoSpeed = ::ad::physics::Speed(5.);

    // laneId: offset  120149:0.16  (ego turn right)
    auto positionEndGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.00188527300496979),
                                                           ::ad::map::point::Latitude(48.99821051747871792),
                                                           ::ad::map::point::Altitude(0.));

    egoRoute = ::ad::map::route::planning::planRoute(
      egoMatchObject.mapMatchedBoundingBox
        .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
        .lanePoint.paraPoint,
      positionEndGeo);
  }
};

TEST_F(RssSceneCreationTown01Test, testAppendRoadBoundaries)
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

TEST_F(RssSceneCreationTown01Test, testAppendScenes)
{
  std::vector<std::tuple<::ad::rss::world::ObjectId,
                         ::ad::map::point::Longitude,
                         ::ad::map::point::Latitude,
                         double,
                         std::vector<ExpectedResultTuple>,
                         std::vector<ExpectedResultTuple>>>
    otherVehicles{
      // laneId: 240151, directly in front same direction
      std::make_tuple(::ad::rss::world::ObjectId(10),
                      ::ad::map::point::Longitude(8.00125444865324766),
                      ::ad::map::point::Latitude(48.9980),
                      M_PI_2,
                      // with ego route and speed limit
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))}),
                      // without ego route, no speed limit
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))})),

      // laneId: offset  120149:0.16  around the intersection in front same direction on ego route
      std::make_tuple(::ad::rss::world::ObjectId(20),
                      ::ad::map::point::Longitude(8.00188527300496979),
                      ::ad::map::point::Latitude(48.99821051747871792),
                      0.,
                      // with ego route and speed limit
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))}),
                      // without ego route, no speed limit
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))})),

      // laneId: offset  230151, straight through the intersection in front same direction
      std::make_tuple(::ad::rss::world::ObjectId(30),
                      ::ad::map::point::Longitude(8.00125444865324766),
                      ::ad::map::point::Latitude(48.9985),
                      M_PI_2,
                      // with ego route and speed limit, but not on route
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))}),
                      // without ego route, no speed limit, therefore one of our predicted routes will match
                      std::initializer_list<ExpectedResultTuple>({std::make_tuple(
                        ::ad::rss::situation::SituationType::SameDirection, 4u, 0u, ::ad::physics::Speed(100.))})),
      // laneId: 240149, directly in front opposite direction
      std::make_tuple(
        ::ad::rss::world::ObjectId(11),
        ::ad::map::point::Longitude(8.00120),
        ::ad::map::point::Latitude(48.9980),
        -M_PI_2,
        // with ego route and speed limit
        std::initializer_list<ExpectedResultTuple>({std::make_tuple(
          ::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))}),
        // without ego route, no speed limit
        std::initializer_list<ExpectedResultTuple>({std::make_tuple(
          ::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(100.))})),

      // laneId: offset  120151:0.16  around the intersection in opposite direction
      std::make_tuple(
        ::ad::rss::world::ObjectId(21),
        ::ad::map::point::Longitude(8.00188527300496979),
        ::ad::map::point::Latitude(48.99824),
        M_PI,
        // with ego route and speed limit
        std::initializer_list<ExpectedResultTuple>(
          {// here we get 3 object predictions, all leading to the opposite direction case
           std::make_tuple(
             ::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))}),
        // without ego route, no speed limit
        // here we get 3 object predictions and 3 ego predictions:
        std::initializer_list<ExpectedResultTuple>(
          {// ego-turn-right: all 3 object predictions lead to the opposite direction case
           std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           // ego-straight-then-right: in first intersection: object coming form right has prio
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           // ego-straight-then-right: in second intersection: 2 of the object predictions come from the same
           // intersection arm
           // @todo: should lead to a different route, since this route is actually from the connecting route within the
           // first
           // intersection!!!
           std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           // ego-straight-then-straight: in first intersection: object coming form right has prio
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           // ego-straight-then-right: in second intersection: 2 of the object predictions come from the same
           // intersection arm
           // @todo: should lead to a different route, since this route is actually from the connecting route within the
           // first
           // intersection!!!
           std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.)),
           std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))})),

      // laneId: offset  230149, straight through the intersection in opposite direction
      std::make_tuple(
        ::ad::rss::world::ObjectId(31),
        ::ad::map::point::Longitude(8.00120),
        ::ad::map::point::Latitude(48.9985),
        -M_PI_2,
        // with ego route and speed limit
        std::initializer_list<ExpectedResultTuple>(
          {// in case the other drives straight
           // in case the other turns left
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(15.2778)),
           std::make_tuple(
             ::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(15.2778))}),
        // without ego route, no speed limit
        // here we get 2 object predictions and 2 ego predictions
        std::initializer_list<ExpectedResultTuple>(
          {// ego-turn-right: other-turn-left
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
           // ego-turn-right: other-straight
           std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.)),
           // ego-straight: other-turn-left
           std::make_tuple(
             ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
           // ego-straight: other-straight
           std::make_tuple(
             ::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.))}))};

  ::ad::rss::world::WorldModel worldModel
    = ::ad::rss::map::RssSceneCreation::initializeWorldModel(1u, getEgoVehicleDynamics());

  size_t expectedWorldModelSize = 0u;
  for (auto const &objectTuple : otherVehicles)
  {
    ::ad::rss::world::ObjectId otherVehicleId = std::get<0>(objectTuple);
    ::ad::physics::Speed otherVehicleSpeed{10.};

    ::ad::map::match::Object otherMatchObject;

    initializeObjectGeo(std::get<1>(objectTuple), std::get<2>(objectTuple), std::get<3>(objectTuple), otherMatchObject);

    // ego route
    // speed limit
    size_t currentWorldModelSize = worldModel.scenes.size();

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

    auto &routeResultExpectations = std::get<4>(objectTuple);
    expectedWorldModelSize += routeResultExpectations.size();
    EXPECT_EQ(expectedWorldModelSize, worldModel.scenes.size());
    checkSceneResults(worldModel, currentWorldModelSize, otherVehicleId, routeResultExpectations);

    // no ego route
    // no speed limit
    currentWorldModelSize = worldModel.scenes.size();

    EXPECT_TRUE(
      ::ad::rss::map::RssSceneCreation::appendScenes(egoVehicleId,
                                                     egoMatchObject,
                                                     egoSpeed,
                                                     ::ad::map::route::FullRoute(),
                                                     otherVehicleId,
                                                     ::ad::rss::world::ObjectType::OtherVehicle,
                                                     otherMatchObject,
                                                     otherVehicleSpeed,
                                                     getObjectVehicleDynamics(),
                                                     ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::None,
                                                     ::ad::map::landmark::LandmarkIdSet(),
                                                     worldModel));

    auto &noRouteResultExpectations = std::get<5>(objectTuple);
    expectedWorldModelSize += noRouteResultExpectations.size();
    EXPECT_EQ(expectedWorldModelSize, worldModel.scenes.size());
    checkSceneResults(worldModel, currentWorldModelSize, otherVehicleId, noRouteResultExpectations);
  }
  EXPECT_TRUE(::ad::rss::map::RssSceneCreation::finalizeWorldModel(getEgoVehicleDynamics(), worldModel));
}

struct RssSceneCreationTown04Test : RssSceneCreationTest
{
  void initMap() override
  {
    std::ifstream fileStream("resources/Town04.xodr");
    std::string town04OpenDriveContent((std::istreambuf_iterator<char>(fileStream)), std::istreambuf_iterator<char>());
    ASSERT_TRUE(::ad::map::access::initFromOpenDriveContent(
      town04OpenDriveContent, 0.2, ::ad::map::intersection::IntersectionType::TrafficLight));
  }

  void initializeEgoVehicle() override
  {
    egoMatchObject.enuPosition.centerPoint.x = ::ad::map::point::ENUCoordinate(131.074);
    egoMatchObject.enuPosition.centerPoint.y = ::ad::map::point::ENUCoordinate(302.408);
    egoMatchObject.enuPosition.centerPoint.z = ::ad::map::point::ENUCoordinate(0);
    egoMatchObject.enuPosition.heading = ::ad::map::point::createENUHeading(0.346132);

    initializeObjectENU(egoMatchObject.enuPosition.centerPoint, egoMatchObject.enuPosition.heading, egoMatchObject);

    egoSpeed = ::ad::physics::Speed(5.);

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

TEST_F(RssSceneCreationTown04Test, testVehicleBehindConnectingRoute)
{
  ::ad::rss::world::WorldModel worldModel
    = ::ad::rss::map::RssSceneCreation::initializeWorldModel(1u, getEgoVehicleDynamics());

  spdlog::info("EgoMatchObject: {}", egoMatchObject);
  spdlog::info("EgoRoute: {}", egoRoute);

  ::ad::rss::world::ObjectId otherVehicleId = ::ad::rss::world::ObjectId(10);
  ::ad::physics::Speed otherVehicleSpeed{5.};
  ::ad::map::match::Object otherMatchObject;

  otherMatchObject.enuPosition.centerPoint.x = ::ad::map::point::ENUCoordinate(124.568);
  otherMatchObject.enuPosition.centerPoint.y = ::ad::map::point::ENUCoordinate(299.829);
  otherMatchObject.enuPosition.centerPoint.z = ::ad::map::point::ENUCoordinate(0);
  otherMatchObject.enuPosition.heading = ::ad::map::point::createENUHeading(0.419017);

  initializeObjectENU(otherMatchObject.enuPosition.centerPoint, otherMatchObject.enuPosition.heading, otherMatchObject);

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

  EXPECT_TRUE(::ad::rss::map::RssSceneCreation::finalizeWorldModel(getEgoVehicleDynamics(), worldModel));

  spdlog::info("WordModel: {}", worldModel);
  EXPECT_EQ(worldModel.scenes.size(), 1u);

  ::ad::rss::state::ProperResponse routeResponse;
  ::ad::rss::world::AccelerationRestriction routeAccelerationRestriction;
  ::ad::rss::situation::SituationSnapshot situationSnapshot;
  ::ad::rss::state::RssStateSnapshot stateSnapshot;
  EXPECT_TRUE(rssCheck.calculateAccelerationRestriction(
    worldModel, situationSnapshot, stateSnapshot, routeResponse, routeAccelerationRestriction));

  // not safe, since the one behind us is far too near
  spdlog::info("RouteResponse: {}", routeResponse);
  spdlog::info("StateSnapshot: {}", stateSnapshot);
  spdlog::info("SituationSnapshot: {}", situationSnapshot);
  EXPECT_FALSE(routeResponse.isSafe);
  EXPECT_EQ(::ad::rss::situation::LongitudinalRelativePosition::InFront,
            situationSnapshot.situations.front().relativePosition.longitudinalPosition);
  EXPECT_EQ(::ad::rss::state::LongitudinalResponse::None, routeResponse.longitudinalResponse);
  EXPECT_EQ(::ad::rss::situation::LateralRelativePosition::OverlapLeft,
            situationSnapshot.situations.front().relativePosition.lateralPosition);
  EXPECT_EQ(::ad::rss::state::LateralResponse::None, routeResponse.lateralResponseLeft);
  EXPECT_EQ(::ad::rss::state::LateralResponse::BrakeMin, routeResponse.lateralResponseRight);
}

// @TODO: create unit tests for merging use-cases; take e.g. TPK_PFZ map for this to find a possible intersection
