// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <chrono>
#include "RssCheckTestBaseT.hpp"

namespace ad_rss {
namespace core {

class RssCheckSceneTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckSceneTests, EmptyEgoRoadSegment)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad[0].clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, EmptyEgoRoad)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, EgoRoadIncomplete)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad[1].clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, IntersectionRoadButNotExpected)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].intersectingRoad = worldModel.scenes[0].egoVehicleRoad;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, NoIntersectionRoadButExpected)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].situationType = situation::SituationType::IntersectionEgoHasPriority;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, IntersectionRoadButNotIntersecting)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].situationType = situation::SituationType::IntersectionEgoHasPriority;
  worldModel.scenes[0].intersectingRoad = worldModel.scenes[0].egoVehicleRoad;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, EmptyScene)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes.clear();

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckSceneTests, MaximumSceneSize)
{
  auto const basicScene = worldModel.scenes[0];

  world::RoadSegment maximumRoadSegment = basicScene.egoVehicleRoad[0];
  maximumRoadSegment.resize(20u, basicScene.egoVehicleRoad[0][0]);

  world::Scene maximumScene = basicScene;
  maximumScene.egoVehicleRoad.resize(50u, maximumRoadSegment);
  for (size_t roadSegmentCount = 0u; roadSegmentCount < maximumScene.egoVehicleRoad.size(); roadSegmentCount++)
  {
    auto &roadSegment = maximumScene.egoVehicleRoad[roadSegmentCount];
    for (size_t laneSegmentCount = 0u; laneSegmentCount < roadSegment.size(); laneSegmentCount++)
    {
      roadSegment[laneSegmentCount].id = roadSegmentCount * 1000u + 100u + laneSegmentCount;
    }
  }
  maximumScene.egoVehicleRoad[0][0].id = 1;
  maximumScene.egoVehicleRoad[49][19].id = 7;

  world::SceneVector maximumSceneVector;
  maximumSceneVector.resize(100, maximumScene);
  for (size_t sceneCount = 0u; sceneCount < maximumSceneVector.size(); sceneCount++)
  {
    maximumSceneVector[sceneCount].object.objectId = sceneCount + 10u;
  }

  worldModel.scenes = maximumSceneVector;
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  auto const start = std::chrono::system_clock::now();

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);

  auto const end = std::chrono::system_clock::now();
  auto const diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

  // in debug build we should be below 500 ms
  EXPECT_LE(diff.count(), 500);
}

TEST_F(RssCheckSceneTests, WrongEgoRoadMetricRangeLength)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad[0][0].length.minimum = Distance(10);
  worldModel.scenes[0].egoVehicleRoad[0][0].length.maximum = Distance(5);
  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckSceneTests, WrongEgoRoadMetricRangeWidth)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad[0][0].width.minimum = Distance(10);
  worldModel.scenes[0].egoVehicleRoad[0][0].width.maximum = Distance(5);
  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

} // namespace core
} // namespace ad_rss
