// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestRoadBoundaries : RssSceneCreationTestTown01
{
  TestMode getTestMode() override
  {
    return TestMode::withRouteWithSpeedLimit;
  }
};

TEST_F(RssSceneCreationTestRoadBoundaries, testAppendRoadBoundaries)
{
  ::ad::rss::map::RssSceneCreation sceneCreation(1u, getEgoVehicleDynamics());

  ::ad::rss::map::RssObjectData egoObjectData;
  egoObjectData.id = egoVehicleId;
  egoObjectData.type = ::ad::rss::world::ObjectType::EgoVehicle;
  egoObjectData.matchObject = egoMatchObject;
  egoObjectData.speed = egoSpeed;
  egoObjectData.yawRate = egoYawRate;
  egoObjectData.steeringAngle = egoSteeringAngle;
  egoObjectData.rssDynamics = getEgoVehicleDynamics();

  for (auto appendMode : {::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToOppositeLanes,
                          ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::ExpandRouteToAllNeighbors})
  {
    EXPECT_TRUE(sceneCreation.appendRoadBoundaries(egoObjectData, egoRoute, appendMode));
  }
  EXPECT_EQ(sceneCreation.mWorldModel.scenes.size(), 6u);

  auto egoObjectCorruptBoundingBox = egoObjectData;
  egoObjectCorruptBoundingBox.matchObject = ::ad::map::match::Object();
  // invalid bounding box
  EXPECT_FALSE(sceneCreation.appendRoadBoundaries(
    egoObjectCorruptBoundingBox, egoRoute, ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly));

  // invalid speed
  auto egoObjectCorruptSpeed = egoObjectData;
  egoObjectCorruptSpeed.speed = ::ad::physics::Speed();
  EXPECT_FALSE(sceneCreation.appendRoadBoundaries(
    egoObjectCorruptSpeed, egoRoute, ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly));

  // invalid route
  EXPECT_FALSE(
    sceneCreation.appendRoadBoundaries(egoObjectData,
                                       ::ad::map::route::FullRoute(),
                                       ::ad::rss::map::RssSceneCreation::AppendRoadBoundariesMode::RouteOnly));

  EXPECT_EQ(sceneCreation.mWorldModel.scenes.size(), 6u);

  for (auto i = 0u; i < sceneCreation.mWorldModel.scenes.size(); ++i)
  {
    auto &scene = sceneCreation.mWorldModel.scenes[i];
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
      EXPECT_EQ(scene.egoVehicleRoad, sceneCreation.mWorldModel.scenes[i - 1].egoVehicleRoad);
    }

    // object data
    EXPECT_EQ(::ad::rss::world::ObjectType::ArtificialObject, scene.object.objectType);

    EXPECT_TRUE(withinValidInputRange(scene.objectRssDynamics));
    EXPECT_EQ(::ad::physics::Acceleration(0.), scene.objectRssDynamics.alphaLat.accelMax);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), scene.objectRssDynamics.alphaLat.brakeMin);
    EXPECT_EQ(::ad::physics::Acceleration(0.), scene.objectRssDynamics.alphaLon.accelMax);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), scene.objectRssDynamics.alphaLon.brakeMax);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), scene.objectRssDynamics.alphaLon.brakeMin);
    EXPECT_EQ(::ad::physics::Acceleration(-0.01), scene.objectRssDynamics.alphaLon.brakeMinCorrect);
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

  auto const worldModel = sceneCreation.getWorldModel();
  EXPECT_TRUE(withinValidInputRange(worldModel));
}

// @TODO: create unit tests for merging use-cases; take e.g. TPK_PFZ map for this to find a possible intersection
