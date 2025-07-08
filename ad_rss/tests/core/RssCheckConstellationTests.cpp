// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <chrono>
#include "RssCheckTestBaseT.hpp"

namespace ad {
namespace rss {
namespace core {

class RssCheckConstellationTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckConstellationTests, EmptyEgoRoadSegment)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle_road[0].lane_segments.clear();

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, EmptyEgoRoad)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle_road.clear();

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, EgoRoadIncomplete)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle_road[1].lane_segments.clear();

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, IntersectionRoadButNotExpected)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].intersecting_road = worldModel.constellations[0].ego_vehicle_road;

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, NoIntersectionRoadButExpected)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].constellation_type = world::ConstellationType::IntersectionEgoHasPriority;

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, DISABLED_IntersectionRoadButNotIntersecting)
{
  // todo: currently this is not reported anymore as actual error
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
  worldModel.constellations[0].intersecting_road = worldModel.constellations[0].ego_vehicle_road;

  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, EmptyConstellation)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations.clear();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.acceleration_restrictions);
}

TEST_F(RssCheckConstellationTests, MaximumConstellationSize)
{
  auto const basicConstellation = worldModel.constellations[0];

  world::RoadSegment maximumRoadSegment = basicConstellation.ego_vehicle_road[0];
  maximumRoadSegment.lane_segments.resize(20u, basicConstellation.ego_vehicle_road[0].lane_segments[0]);

  world::Constellation maximumConstellation = basicConstellation;
  maximumConstellation.ego_vehicle_road.resize(50u, maximumRoadSegment);
  for (size_t roadSegmentCount = 0u; roadSegmentCount < maximumConstellation.ego_vehicle_road.size();
       roadSegmentCount++)
  {
    auto &roadSegment = maximumConstellation.ego_vehicle_road[roadSegmentCount];
    for (size_t laneSegmentCount = 0u; laneSegmentCount < roadSegment.lane_segments.size(); laneSegmentCount++)
    {
      roadSegment.lane_segments[laneSegmentCount].id = roadSegmentCount * 1000u + 100u + laneSegmentCount;
    }
  }
  maximumConstellation.ego_vehicle_road[0].lane_segments[0].id = 1;
  maximumConstellation.ego_vehicle_road[49].lane_segments[19].id = 7;

  world::ConstellationVector maximumConstellationVector;
  maximumConstellationVector.resize(100, maximumConstellation);
  for (size_t constellationCount = 0u; constellationCount < maximumConstellationVector.size(); constellationCount++)
  {
    maximumConstellationVector[constellationCount].object.object_id = constellationCount + 10u;
  }

  worldModel.constellations = maximumConstellationVector;
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  auto const start = std::chrono::system_clock::now();

  ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
  testRestrictions(properResponse.acceleration_restrictions);

  auto const end = std::chrono::system_clock::now();
  auto const diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

  // in debug build we should be below 500 ms
  EXPECT_LE(diff.count(), 500);
}

TEST_F(RssCheckConstellationTests, WrongEgoRoadMetricRangeLength)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle_road[0].lane_segments[0].length.minimum = Distance(10);
  worldModel.constellations[0].ego_vehicle_road[0].lane_segments[0].length.maximum = Distance(5);
  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

TEST_F(RssCheckConstellationTests, WrongEgoRoadMetricRangeWidth)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  worldModel.constellations[0].ego_vehicle_road[0].lane_segments[0].width.minimum = Distance(10);
  worldModel.constellations[0].ego_vehicle_road[0].lane_segments[0].width.maximum = Distance(5);
  ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
}

} // namespace core
} // namespace rss
} // namespace ad
