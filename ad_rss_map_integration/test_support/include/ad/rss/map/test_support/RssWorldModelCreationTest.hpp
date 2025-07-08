// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
#pragma once

#include <ad/rss/map/RssWorldModelCreation.hpp>
#include <ad/rss/map/test_support/RssMapIntegrationTestBase.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include <algorithm>

namespace ad {
namespace rss {
namespace map {
namespace test_support {

struct RssWorldModelCreationTest : public virtual RssMapIntegrationTestBase
{
  virtual ~RssWorldModelCreationTest() = default;

  typedef std::tuple<::ad::rss::world::ConstellationType, size_t, size_t, ::ad::physics::Speed> ExpectedResultTuple;

  void checkConstellationResults(::ad::rss::world::WorldModel const &world_model,
                                 ::ad::rss::world::ObjectId const &otherVehicleId,
                                 std::vector<ExpectedResultTuple> const &expectedResults)
  {
    EXPECT_TRUE(withinValidInputRange(world_model));
    ASSERT_EQ(expectedResults.size(), world_model.constellations.size());

    std::vector<ExpectedResultTuple> notMatchedResults = expectedResults;
    for (auto i = 0u; i < world_model.constellations.size(); ++i)
    {
      auto &constellation = world_model.constellations[i];
      EXPECT_TRUE(withinValidInputRange(constellation)) << i;
      EXPECT_EQ(::ad::rss::world::ObjectType::OtherVehicle, constellation.object.object_type) << i;
      EXPECT_EQ(otherVehicleId, constellation.object.object_id) << i;
      auto findResult
        = std::find_if(notMatchedResults.begin(),
                       notMatchedResults.end(),
                       [constellation](ExpectedResultTuple const &expectedResultTuple) {
                         return (std::get<0>(expectedResultTuple) == constellation.constellation_type)
                           && (std::get<1>(expectedResultTuple) == constellation.ego_vehicle_road.size())
                           && (std::get<2>(expectedResultTuple) == constellation.intersecting_road.size())
                           && (mCheckerControlTest->getObjectVehicleDynamics(std::get<3>(expectedResultTuple))
                               == constellation.object_rss_dynamics);
                       });
      if (findResult != notMatchedResults.end())
      {
        notMatchedResults.erase(findResult);
      }
      else
      {
        EXPECT_TRUE(false) << " constellation index: " << i << " not found" << constellation;
      }
    }
    EXPECT_TRUE(notMatchedResults.empty())
      << " not all expected results observed: " << std::get<0>(notMatchedResults[0]) << ", "
      << std::get<1>(notMatchedResults[0]) << ", " << std::get<2>(notMatchedResults[0]) << ", "
      << mCheckerControlTest->getObjectVehicleDynamics(std::get<3>(notMatchedResults[0]));
  }

  virtual ObjectGeoLocationTuple getEgoVehicleStartLocation() = 0;

  virtual ::ad::map::point::GeoPoint getEgoVehicleTarget() = 0;

  void performConstellationTest(ObjectGeoLocationTuple const &egoLocation,
                                ObjectGeoLocationTuple const &otherLocation,
                                std::vector<ExpectedResultTuple> const &expectedResults)
  {
    ::ad::rss::map::RssWorldModelCreation constellationCreation(1u, mCheckerControlTest->getEgoVehicleDynamics());

    auto ego_vehicle = createEgoVehicle(
      ::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation(), getEgoVehicleTarget(), egoLocation);
    auto otherVehicle = createOtherVehicle(::ad::rss::world::ObjectId(10), otherLocation);
    auto const egoObjectData = ego_vehicle->getTestRssObjecData();
    auto const otherObjectData = otherVehicle->getTestRssObjecData();

    EXPECT_TRUE(
      constellationCreation.appendConstellations(egoObjectData,
                                                 ego_vehicle->mTestRoute,
                                                 otherObjectData,
                                                 mCheckerControlTest->mRestrictSpeedLimitMode,
                                                 ego_vehicle->getCheckerControl()->getCurrentGreenTrafficLights(),
                                                 mCheckerControlTest->mVehicleWorldModelCreationMode));

    auto const world_model = constellationCreation.getWorldModel();
    checkConstellationResults(world_model, otherObjectData.id, expectedResults);
  }
};

struct RssWorldModelCreationTestTown01 : RssWorldModelCreationTest
{
  MapToLoad getMapToLoad() override
  {
    return MapToLoad::Town01;
  }

  ObjectGeoLocationTuple getEgoVehicleStartLocation() override
  {
    // lane_id: offset 240151:0.8 (far away from intersection starting at 240151:0.0)
    auto egoGeoLocation
      = std::make_tuple(::ad::map::point::Longitude(8.0012621), ::ad::map::point::Latitude(48.9972518), M_PI_2);

    return egoGeoLocation;
  }

  ::ad::map::point::GeoPoint getEgoVehicleTarget() override
  {
    // lane_id: offset  120149:0.52  (ego turn right)
    auto positionEndGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.003),
                                                           ::ad::map::point::Latitude(48.99821051747871792),
                                                           ::ad::map::point::AltitudeUnknown);
    return positionEndGeo;
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
    // lane_id: 240151 directly in front of intersection
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00125444865324766), ::ad::map::point::Latitude(48.9980), M_PI_2);
  }

  ObjectGeoLocationTuple locationSouthEntering()
  {
    // lane_id: 240151:0. & 1290149:0. (right turn lane) & 1360149:0. (straight lane)
    return std::make_tuple(::ad::map::point::Longitude(8.0012619), ::ad::map::point::Latitude(48.9981266), M_PI_2);
  }

  ObjectGeoLocationTuple locationSouth2East()
  {
    // lane_id: 1290149:0.3, starting right turn
    return std::make_tuple(::ad::map::point::Longitude(8.0012731), ::ad::map::point::Latitude(48.9981734), M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationEastExiting()
  {
    // lane_id:  120149:0 & 1290149:1. right turn around the intersection
    return std::make_tuple(::ad::map::point::Longitude(8.0013843), ::ad::map::point::Latitude(48.9982095), 0.);
  }

  ObjectGeoLocationTuple locationEastOutgoing()
  {
    // lane_id:  120149:0.16 right turn around the intersection
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00188527300496979), ::ad::map::point::Latitude(48.99821051747871792), 0.);
  }

  ObjectGeoLocationTuple locationEastIncoming()
  {
    // lane_id: 120151:0.16
    return std::make_tuple(
      ::ad::map::point::Longitude(8.00188527300496979), ::ad::map::point::Latitude(48.99824), M_PI);
  }

  ObjectGeoLocationTuple locationEastEntering()
  {
    // lane_id: 120151:0.16
    return std::make_tuple(::ad::map::point::Longitude(8.0013870), ::ad::map::point::Latitude(48.9982463), M_PI);
  }

  ObjectGeoLocationTuple locationEast2North()
  {
    // lane_id: 1370149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012889), ::ad::map::point::Latitude(48.9982608), 3. * M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationSouth2North()
  {
    // lane_id: 13690249:0.5, second half of intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012631), ::ad::map::point::Latitude(48.9982781), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthExiting()
  {
    // lane_id: 13690249:1. & 230151:1., outgoing border of the intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012623), ::ad::map::point::Latitude(48.9983242), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthOutgoing()
  {
    // lane_id: 230151:0.94 after the intersection when driving straight
    return std::make_tuple(::ad::map::point::Longitude(8.0012635), ::ad::map::point::Latitude(48.9984330), M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthIncoming()
  {
    // lane_id: 230149, straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.00120), ::ad::map::point::Latitude(48.9985), -M_PI_2);
  }

  ObjectGeoLocationTuple locationNorthEntering()
  {
    // lane_id: 230149:1.0 &  1350251:1.0  touching straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.0012081), ::ad::map::point::Latitude(48.9983242), -M_PI_2);
  }

  ObjectGeoLocationTuple locationNorth2East()
  {
    // lane_id: 1380149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012391), ::ad::map::point::Latitude(48.9982440), -M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationNorth2South()
  {
    // lane_id: 1350151:0.5, mid straight through the intersection in opposite direction
    return std::make_tuple(::ad::map::point::Longitude(8.0012077), ::ad::map::point::Latitude(48.9981817), -M_PI_2);
  }

  ObjectGeoLocationTuple locationEast2South()
  {
    // lane_id: 1300149:0.5
    return std::make_tuple(
      ::ad::map::point::Longitude(8.0012368), ::ad::map::point::Latitude(48.9982053), 5. * M_PI_2 / 2.);
  }

  ObjectGeoLocationTuple locationSouthExiting()
  {
    // lane_id: 240149:0.  opposite direction in front across intersection
    return std::make_tuple(::ad::map::point::Longitude(8.0012069), ::ad::map::point::Latitude(48.9981252), -M_PI_2);
  }

  ObjectGeoLocationTuple locationSouthOutgoing()
  {
    // lane_id: 240149, opposite direction no intersection in between
    return std::make_tuple(::ad::map::point::Longitude(8.00120), ::ad::map::point::Latitude(48.9980), -M_PI_2);
  }
};

struct RssWorldModelCreationTestWithRoute : public RssWorldModelCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }
};

struct RssWorldModelCreationTestWithoutRoute : public RssWorldModelCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withoutRouteWithoutSpeedLimit;
  }
};

} // namespace test_support
} // namespace map
} // namespace rss
} // namespace ad
