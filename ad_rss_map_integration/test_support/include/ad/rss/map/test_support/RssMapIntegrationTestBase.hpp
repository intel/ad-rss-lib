// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#pragma once

#include <ad/map/access/Logging.hpp>
#include <ad/map/access/Operation.hpp>
#include <ad/rss/map/Logging.hpp>
#include <fstream>
#include <gtest/gtest.h>
#include <streambuf>
#include "RssObjectAdapterTest.hpp"

namespace ad {
namespace rss {
namespace map {
namespace test_support {

struct RssMapIntegrationTestBase : public ::testing::Test
{
  typedef RssObjectAdapterTest::ObjectGeoLocationTuple ObjectGeoLocationTuple;

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
        default:
          ASSERT_TRUE(false);
          break;
      }
      loadedMap = mapToLoad;
    }
  }

  void SetUp() override
  {
    //::ad::rss::map::getLogger()->set_level(spdlog::level::trace);
    //::ad::map::access::getLogger()->set_level(spdlog::level::trace);
    initMap();
    mCheckerControlTest = std::make_shared<CheckerControlTest>();
  }

  enum class TestMode
  {
    withRouteWithSpeedLimit,
    withoutRouteWithoutSpeedLimit
  };
  virtual TestMode getTestMode() = 0;

  /*!
   * @brief create ego vehicle at startLocation
   *
   * - fills RssEgoVehicleAdapterTest::mTestRoute and RssEgoVehicleAdapterTest::mTestMatchObject
   *   if test mode is with route and targetLocation is valid
   */
  RssEgoVehicleAdapterTest::Ptr
  createEgoVehicle(::ad::rss::world::ObjectId const object_id,
                   ObjectGeoLocationTuple const &startLocation,
                   ::ad::map::point::GeoPoint const &targetLocation = ::ad::map::point::GeoPoint(),
                   ObjectGeoLocationTuple const &currentLocation = ObjectGeoLocationTuple())
  {
    auto ego_vehicle_instance = std::make_shared<RssObjectInstanceTest>(
      object_id, ::ad::rss::world::ObjectType::EgoVehicle, mCheckerControlTest);
    auto ego_vehicle = std::make_shared<RssEgoVehicleAdapterTest>(ego_vehicle_instance, startLocation);
    ego_vehicle->speed_range.minimum = ::ad::physics::Speed(5.);
    ego_vehicle->speed_range.maximum = ::ad::physics::Speed(7.);

    bool routePrepared = false;
    if ((getTestMode() == TestMode::withRouteWithSpeedLimit) && isValid(targetLocation, false))
    {
      mCheckerControlTest->mRestrictSpeedLimitMode = ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10;
      mCheckerControlTest->replaceRoutingTargets(object_id, {RssObjectAdapterTest::getENUPoint(targetLocation)});
      ego_vehicle->prepareRoute();
      routePrepared = true;
    }

    ego_vehicle->updatePosition(currentLocation);
    if (routePrepared)
    {
      ego_vehicle->prepareMatchPosition();
      ego_vehicle->shortenRoute();
    }
    return ego_vehicle;
  }

  /*!
   * @brief create vehicle at startLocation
   */
  RssVehicleAdapterTest::Ptr createOtherVehicle(::ad::rss::world::ObjectId const object_id,
                                                ObjectGeoLocationTuple const &startLocation)
  {
    auto other_vehicle_instance = std::make_shared<RssObjectInstanceTest>(
      object_id, ::ad::rss::world::ObjectType::OtherVehicle, mCheckerControlTest);
    auto otherVehicle = std::make_shared<RssVehicleAdapterTest>(other_vehicle_instance, startLocation);
    otherVehicle->speed_range.minimum = ::ad::physics::Speed(5.);
    otherVehicle->speed_range.maximum = ::ad::physics::Speed(7.);
    return otherVehicle;
  }

  /*!
   * @brief create pedestrian at startLocation
   */
  RssPedestrianAdapterTest::Ptr createPedestrian(::ad::rss::world::ObjectId const object_id,
                                                 ObjectGeoLocationTuple const &startLocation)
  {
    auto pedestrian_instance = std::make_shared<RssObjectInstanceTest>(
      object_id, ::ad::rss::world::ObjectType::Pedestrian, mCheckerControlTest);
    auto pedestrian = std::make_shared<RssPedestrianAdapterTest>(pedestrian_instance, startLocation);
    pedestrian->speed_range.minimum = ::ad::physics::Speed(1.);
    pedestrian->speed_range.maximum = ::ad::physics::Speed(1.);
    return pedestrian;
  }

  // make static to get rid of virtual inheritance warning
  static std::shared_ptr<CheckerControlTest> mCheckerControlTest;
};

} // namespace test_support
} // namespace map
} // namespace rss
} // namespace ad
