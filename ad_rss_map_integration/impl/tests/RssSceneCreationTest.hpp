// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/map/access/Logging.hpp>
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
  const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDeceleleration{-4};
  const ::ad::physics::Acceleration cMaximumLongitudinalBrakingDeceleleration{-8};
  const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDecelelerationCorrect{-3};

  const ::ad::physics::Acceleration cMaximumLateralAcceleration{0.2};
  const ::ad::physics::Acceleration cMinimumLateralBrakingDeceleleration{-0.8};

  typedef std::tuple<::ad::rss::situation::SituationType, size_t, size_t, ::ad::physics::Speed> ExpectedResultTuple;
  typedef std::tuple<::ad::map::point::Longitude, ::ad::map::point::Latitude, double> ObjectGeoLocationTuple;

  enum class TestMode
  {
    withRouteWithSpeedLimit,
    withoutRouteWithoutSpeedLimit
  };

  ::ad::rss::world::UnstructuredSettings getUnstructuredSettings()
  {
    ::ad::rss::world::UnstructuredSettings unstructuredSettings;
    unstructuredSettings.pedestrianTurningRadius = ad::physics::Distance(2.0);
    unstructuredSettings.driveAwayMaxAngle = ad::physics::Angle(2.4);
    unstructuredSettings.vehicleYawRateChange = ad::physics::AngularAcceleration(0.3);
    unstructuredSettings.vehicleMinRadius = ad::physics::Distance(3.5);
    unstructuredSettings.vehicleTrajectoryCalculationStep = ad::physics::Duration(0.2);
    return unstructuredSettings;
  }

  ::ad::rss::world::RssDynamics getEgoVehicleDynamics(::ad::physics::Speed const maxSpeedOnAcceleration
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

    result.responseTime = cResponseTimeEgoVehicle;
    result.maxSpeedOnAcceleration = maxSpeedOnAcceleration;

    result.unstructuredSettings = getUnstructuredSettings();

    return result;
  }

  ::ad::rss::world::RssDynamics getObjectVehicleDynamics(::ad::physics::Speed const maxSpeedOnAcceleration
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
    result.maxSpeedOnAcceleration = maxSpeedOnAcceleration;

    result.unstructuredSettings = getUnstructuredSettings();

    return result;
  }

  enum class MapToLoad
  {
    Town01,
    Town04,
    None
  };

  virtual MapToLoad getMapToLoad() = 0;

  void initMap()
  {
    static MapToLoad loadedMap = MapToLoad::None;

    MapToLoad mapToLoad = getMapToLoad();
    if (mapToLoad != loadedMap)
    {
      ::ad::map::access::cleanup();
      switch (mapToLoad)
      {
        case MapToLoad::Town01:
          // using priority to the right intersections
          ASSERT_TRUE(::ad::map::access::init("resources/Town01.txt"));
          break;
        case MapToLoad::Town04:
        {
          std::ifstream fileStream("resources/Town04.xodr");
          std::string town04OpenDriveContent((std::istreambuf_iterator<char>(fileStream)),
                                             std::istreambuf_iterator<char>());
          ASSERT_TRUE(::ad::map::access::initFromOpenDriveContent(
            town04OpenDriveContent, 0.2, ::ad::map::intersection::IntersectionType::TrafficLight));
          break;
        }
        case MapToLoad::None:
          ASSERT_TRUE(false);
          break;
      }
      loadedMap = mapToLoad;
    }
  }

  virtual void initializeEgoVehicle() = 0;

  void SetUp() override
  {
    //::ad::rss::map::getLogger()->set_level(spdlog::level::debug);
    //::ad::map::access::getLogger()->set_level(spdlog::level::trace);
    initMap();
    initializeEgoVehicle();
  }

  void TearDown() override
  {
  }

  void initializeObjectGeo(ObjectGeoLocationTuple const &objectLocation, ::ad::map::match::Object &object)
  {
    auto const lon = std::get<0>(objectLocation);
    auto const lat = std::get<1>(objectLocation);
    auto const yawAngle = ::ad::map::point::createENUHeading(std::get<2>(objectLocation));
    auto positionGeo = ::ad::map::point::createGeoPoint(lon, lat, ::ad::map::point::Altitude(0.));
    initializeObjectENU(::ad::map::point::toENU(positionGeo), yawAngle, object);
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
    object.mapMatchedBoundingBox
      = mapMatching.getMapMatchedBoundingBox(object.enuPosition, ::ad::physics::Distance(0.1));

    ASSERT_GE(object.mapMatchedBoundingBox.referencePointPositions.size(),
              static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center));
    ASSERT_GE(object.mapMatchedBoundingBox
                .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)]
                .size(),
              0u);
  }

  void checkSceneResults(::ad::rss::world::WorldModel const &worldModel,
                         ::ad::rss::world::ObjectId const &otherVehicleId,
                         std::vector<ExpectedResultTuple> const &expectedResults)
  {
    EXPECT_TRUE(withinValidInputRange(worldModel));
    ASSERT_EQ(expectedResults.size(), worldModel.scenes.size());

    std::vector<ExpectedResultTuple> notMatchedResults = expectedResults;
    for (auto i = 0u; i < worldModel.scenes.size(); ++i)
    {
      auto &scene = worldModel.scenes[i];
      EXPECT_TRUE(withinValidInputRange(scene)) << i;
      EXPECT_EQ(::ad::rss::world::ObjectType::OtherVehicle, scene.object.objectType) << i;
      EXPECT_EQ(otherVehicleId, scene.object.objectId) << i;
      auto findResult
        = std::find_if(notMatchedResults.begin(),
                       notMatchedResults.end(),
                       [this, scene](ExpectedResultTuple const &expectedResultTuple) {
                         return (std::get<0>(expectedResultTuple) == scene.situationType)
                           && (std::get<1>(expectedResultTuple) == scene.egoVehicleRoad.size())
                           && (std::get<2>(expectedResultTuple) == scene.intersectingRoad.size())
                           && (getObjectVehicleDynamics(std::get<3>(expectedResultTuple)) == scene.objectRssDynamics);
                       });
      if (findResult != notMatchedResults.end())
      {
        notMatchedResults.erase(findResult);
      }
      else
      {
        EXPECT_TRUE(false) << " scene index: " << i << " not found" << scene;
      }
    }
    EXPECT_TRUE(notMatchedResults.empty())
      << " not all expected results observed: " << std::get<0>(notMatchedResults[0]) << ", "
      << std::get<1>(notMatchedResults[0]) << ", " << std::get<2>(notMatchedResults[0]) << ", "
      << getObjectVehicleDynamics(std::get<3>(notMatchedResults[0]));
  }

  void shortenEgoRoute(ObjectGeoLocationTuple const &egoGeoLocation)
  {
    initializeObjectGeo(egoGeoLocation, egoMatchObject);

    ::ad::map::route::shortenRoute(
      egoMatchObject.mapMatchedBoundingBox
        .referencePointPositions[int32_t(::ad::map::match::ObjectReferencePoints::Center)],
      egoRoute,
      ::ad::map::route::ShortenRouteMode::DontCutIntersectionAndPrependIfSucceededBeforeRoute);
  }

  virtual TestMode getTestMode() = 0;

  void performSceneTest(ObjectGeoLocationTuple const &egoLocation,
                        ObjectGeoLocationTuple const &otherLocation,
                        std::vector<ExpectedResultTuple> const &expectedResults)
  {
    ::ad::rss::map::RssSceneCreation sceneCreation(1u, getEgoVehicleDynamics());

    initializeEgoVehicle();
    shortenEgoRoute(egoLocation);

    ::ad::rss::world::ObjectId otherVehicleId{10};
    ::ad::physics::Speed otherVehicleSpeed{10.};
    ::ad::physics::AngularVelocity otherVehicleYawRate{0.};
    ::ad::physics::Angle otherVehicleSteeringAngle{0.};

    ::ad::map::match::Object otherMatchObject;

    initializeObjectGeo(otherLocation, otherMatchObject);

    ::ad::map::route::FullRoute testRoute;
    auto speedLimitMode{::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::None};
    if (getTestMode() == TestMode::withRouteWithSpeedLimit)
    {
      testRoute = egoRoute;
      speedLimitMode = ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10;
    }

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

    EXPECT_TRUE(sceneCreation.appendScenes(egoObjectData,
                                           testRoute,
                                           otherObjectData,
                                           speedLimitMode,
                                           ::ad::map::landmark::LandmarkIdSet(),
                                           ::ad::rss::map::RssMode::Structured));

    auto const worldModel = sceneCreation.getWorldModel();
    checkSceneResults(worldModel, otherVehicleId, expectedResults);
  }

  ::ad::rss::world::ObjectId egoVehicleId{123u};
  ::ad::physics::Speed egoSpeed;
  ::ad::physics::AngularVelocity egoYawRate;
  ::ad::physics::Angle egoSteeringAngle;
  ::ad::map::match::Object egoMatchObject;
  ::ad::map::route::FullRoute egoRoute;
};

struct RssSceneCreationTestTown01 : RssSceneCreationTest
{
  MapToLoad getMapToLoad() override
  {
    return MapToLoad::Town01;
  }

  void initializeEgoVehicle() override
  {
    // laneId: offset 240151:0.55
    auto egoGeoLocation = std::make_tuple(
      ::ad::map::point::Longitude(8.00125444865324766), ::ad::map::point::Latitude(48.99758627528235877), M_PI_2);

    initializeObjectGeo(egoGeoLocation, egoMatchObject);

    egoSpeed = ::ad::physics::Speed(5.);
    egoYawRate = ::ad::physics::AngularVelocity(0.);
    egoSteeringAngle = ::ad::physics::Angle(0.);

    // laneId: offset  120149:0.52  (ego turn right)
    auto positionEndGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.003),
                                                           ::ad::map::point::Latitude(48.99821051747871792),
                                                           ::ad::map::point::Altitude(0.));

    egoRoute = ::ad::map::route::planning::planRoute(
      egoMatchObject.mapMatchedBoundingBox
        .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
        .lanePoint.paraPoint,
      positionEndGeo);
  }

  /*
   *    |  NorthIncoming  NorthOutgoing  |
   *    |                                |
   *    |                                |
   *    |  NorthEntering  NorthExiting   |______________________
   *    |
   *    |                           EastEntering    EastIncoming
   *    |
   *    |                           EastExiting     EastOutgoing
   *    |                                _______________________
   *    |  SouthExiting   SouthEntering  |
   *    |                                |
   *    |                                |
   *    |  SouthOutgoing  SouthIncoming  |
   *
   */

  ObjectGeoLocationTuple locationSouthIncoming()
  {
    // laneId: 240151 directly in front of intersection
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00125444865324766), ::ad::map::point::Latitude(48.9980), M_PI_2);
  }

  ObjectGeoLocationTuple locationSouthEntering()
  {
    // laneId: 240151:0. & 1290149:0. (right turn lane) & 1360149:0. (straight lane)
    return std::make_tuple(::ad::map::point::Longitude(8.0012619), ::ad::map::point::Latitude(48.9981266), M_PI_2);
  }

  ObjectGeoLocationTuple locationSouth2East()
  {
    // laneId: 1290149:0.3, starting right turn
    return std::make_tuple(::ad::map::point::Longitude(8.0012731), ::ad::map::point::Latitude(48.9981734), M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationEastExiting()
  {
    // laneId:  120149:0 & 1290149:1. right turn around the intersection
    return std::make_tuple(::ad::map::point::Longitude(8.0013843), ::ad::map::point::Latitude(48.9982095), 0.);
  }

  ObjectGeoLocationTuple locationEastOutgoing()
  {
    // laneId:  120149:0.16 right turn around the intersection
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00188527300496979), ::ad::map::point::Latitude(48.99821051747871792), 0.);
  }

  ObjectGeoLocationTuple locationEastIncoming()
  {
    // laneId: 120151:0.16
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00188527300496979), ::ad::map::point::Latitude(48.99824), M_PI);
  }

  ObjectGeoLocationTuple locationEastEntering()
  {
    // laneId: 120151:0.16
    return std::make_tuple(::ad::map::point::Longitude(8.0013870), ::ad::map::point::Latitude(48.9982463), M_PI);
  }

  ObjectGeoLocationTuple locationEast2North()
  {
    // laneId: 1370149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012889), ::ad::map::point::Latitude(48.9982608), 3. * M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationSouth2North()
  {
    // laneId: 13690249:0.5, second half of intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012631), ::ad::map::point::Latitude(48.9982781), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthExiting()
  {
    // laneId: 13690249:1. & 230151:1., outgoing border of the intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012623), ::ad::map::point::Latitude(48.9983242), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthOutgoing()
  {
    // laneId: 230151:0.94 after the intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012635), ::ad::map::point::Latitude(48.9984330), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthIncoming()
  {
    // laneId: 230149, straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.00120), ::ad::map::point::Latitude(48.9985), -M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthEntering()
  {
    // laneId: 230149:1.0 &  1350251:1.0  touching straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.0012081), ::ad::map::point::Latitude(48.9983242), -M_PI_2);
  }

  ObjectGeoLocationTuple locationNorth2East()
  {
    // laneId: 1380149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012391), ::ad::map::point::Latitude(48.9982440), -M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationNorth2South()
  {
    // laneId: 1350151:0.5, mid straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.0012077), ::ad::map::point::Latitude(48.9981817), -M_PI_2);
  }

  ObjectGeoLocationTuple locationEast2South()
  {
    // laneId: 1300149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012368), ::ad::map::point::Latitude(48.9982053), 5. * M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationSouthExiting()
  {
    // laneId: 240149:0.  opposite direction in front across intersection
    return std::make_tuple(::ad::map::point::Longitude(8.0012069), ::ad::map::point::Latitude(48.9981252), -M_PI_2);
  }

  ObjectGeoLocationTuple locationSouthOutgoing()
  {
    // laneId: 240149, opposite direction no intersection in between
    return std::make_tuple(::ad::map::point::Longitude(8.00120), ::ad::map::point::Latitude(48.9980), -M_PI_2);
  }
};

struct RssSceneCreationTestWithRoute : public RssSceneCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }
};

struct RssSceneCreationTestWithoutRoute : public RssSceneCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withoutRouteWithoutSpeedLimit;
  }
};
