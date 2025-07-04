// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"
#include "ad/rss/structured/RssConstellationIdProvider.hpp"

namespace ad {
namespace rss {
namespace structured {

class RssConstellationIdProviderTests : public core::RssCheckTestBaseT<testing::Test>
{
public:
  world::Object &getEgoObject() override
  {
    return objectOnSegment0;
  }

  world::Object &getConstellationObject(uint32_t) override
  {
    return objectOnSegment8;
  }

  world::ConstellationType getConstellationType() override
  {
    return world::ConstellationType::IntersectionEgoHasPriority;
  }

  RssConstellationIdProvider constellationIdProvider;
};

TEST_F(RssConstellationIdProviderTests, same_constellation_result_in_same_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(firstConstellationId, secondConstellationId);

  worldModel.time_index++;
  secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_objectids_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  worldModel.constellations[0].object.object_id = 49;
  auto const secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_constellation_types_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  worldModel.constellations[0].constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
  auto const secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_ego_intersection_route_id_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].ego_vehicle_road.back().lane_segments.back().id = 88;
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_object_intersection_route_id_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].intersecting_road.back().lane_segments.back().id = 99;
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_ego_intersection_route_size_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].ego_vehicle_road.back().lane_segments.push_back(
    worldModel.constellations[0].ego_vehicle_road.back().lane_segments.back());
  worldModel.constellations[0].ego_vehicle_road.back().lane_segments.back().id = 88;
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_object_intersection_route_size_result_in_different_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].intersecting_road.back().lane_segments.push_back(
    worldModel.constellations[0].intersecting_road.back().lane_segments.back());
  worldModel.constellations[0].intersecting_road.back().lane_segments.back().id = 99;
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_ego_non_intersection_route_size_result_in_same_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].ego_vehicle_road.erase(worldModel.constellations[0].ego_vehicle_road.begin());
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, different_object_non_intersection_route_size_result_in_same_constellations)
{
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].intersecting_road.erase(worldModel.constellations[0].intersecting_road.begin());
  auto secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(firstConstellationId, secondConstellationId);
}

TEST_F(RssConstellationIdProviderTests, history_is_cleaned)
{
  auto const originalObjectId = worldModel.constellations[0].object.object_id;
  auto const firstConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);

  worldModel.constellations[0].object.object_id = 49;
  auto const secondConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, secondConstellationId);

  worldModel.time_index++;
  auto thirdConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(secondConstellationId, thirdConstellationId);

  worldModel.time_index++;
  // 49 still tracked
  thirdConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_EQ(secondConstellationId, thirdConstellationId);

  // original already forgotten
  worldModel.constellations[0].object.object_id = originalObjectId;
  auto fourthConstellationId
    = constellationIdProvider.getConstellationId(worldModel.time_index, worldModel.constellations[0]);
  EXPECT_NE(firstConstellationId, fourthConstellationId);
}

} // namespace structured
} // namespace rss
} // namespace ad
