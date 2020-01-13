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

  ::ad::rss::world::RssDynamics getDefaultEgoVehicleDynamics()
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

    return result;
  }

  ::ad::rss::world::RssDynamics getDefaultObjectVehicleDynamics()
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

    return result;
  }

  virtual void SetUp()
  {
    ::ad::map::access::cleanup();
  }

  virtual void TearDown()
  {
    ::ad::map::access::cleanup();
  }
};

TEST_F(RssSceneCreationTest, testAppendRoadBoundaries)
{
  ASSERT_TRUE(::ad::map::access::init("resources/Town01.txt"));

  uint64_t egoVehicleId = 123u;

  auto positionStartGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.00125444865324766),
                                                           ::ad::map::point::Latitude(48.99758627528235877),
                                                           ::ad::map::point::Altitude(0.));
  auto positionEndGeo = ::ad::map::point::createGeoPoint(::ad::map::point::Longitude(8.00188527300496979),
                                                         ::ad::map::point::Latitude(48.99821051747871792),
                                                         ::ad::map::point::Altitude(0.));

  ::ad::map::match::AdMapMatching mapMatching;
  ::ad::map::match::ENUObjectPosition egoPosition;
  egoPosition.centerPoint = ::ad::map::point::toENU(positionStartGeo);
  egoPosition.heading = ::ad::map::point::createENUHeading(M_PI_2);
  egoPosition.dimension.length = ::ad::physics::Distance(4.5);
  egoPosition.dimension.width = ::ad::physics::Distance(2.);
  egoPosition.dimension.height = ::ad::physics::Distance(1.5);
  egoPosition.enuReferencePoint = ::ad::map::access::getENUReferencePoint();
  ::ad::physics::Speed egoSpeed = ::ad::physics::Speed(5.);

  auto egoMapMatchedBoundingBox
    = mapMatching.getMapMatchedBoundingBox(egoPosition, ::ad::physics::Distance(0.1), ::ad::physics::Probability(0.5));

  ASSERT_GE(egoMapMatchedBoundingBox.referencePointPositions.size(),
            static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center));
  ASSERT_GE(egoMapMatchedBoundingBox
              .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)]
              .size(),
            0);
  auto const egoRoute = ::ad::map::route::planning::planRoute(
    egoMapMatchedBoundingBox
      .referencePointPositions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
      .lanePoint.paraPoint,
    positionEndGeo);

  ::ad::rss::world::WorldModel worldModel
    = ::ad::rss::map::RssSceneCreation::initializeWorldModel(1u, getDefaultEgoVehicleDynamics());

  for (auto appendMode : {::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToOppositeLanes,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToAllNeighbors})
  {
    EXPECT_TRUE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
      egoVehicleId, egoMapMatchedBoundingBox, egoSpeed, egoRoute, appendMode, worldModel));
  }
  EXPECT_EQ(worldModel.scenes.size(), 6u);

  // invalid bounding box
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    ::ad::map::match::MapMatchedObjectBoundingBox(),
    egoSpeed,
    egoRoute,
    ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
    worldModel));

  // invalid speed
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    egoMapMatchedBoundingBox,
    ::ad::physics::Speed(),
    egoRoute,
    ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
    worldModel));

  // invalid route
  EXPECT_FALSE(::ad::rss::map::RssSceneCreation::appendRoadBoundaries(
    egoVehicleId,
    egoMapMatchedBoundingBox,
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

  EXPECT_TRUE(::ad::rss::map::RssSceneCreation::finalizeWorldModel(getDefaultEgoVehicleDynamics(), worldModel));
}
