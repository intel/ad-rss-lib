// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"
#include "world/RssSituationIdProvider.hpp"

namespace ad {
namespace rss {
namespace world {

class RssSituationIdProviderTests : public core::RssCheckTestBaseT<testing::Test>
{
public:
  world::Object &getEgoObject() override
  {
    return objectOnSegment0;
  }

  world::Object &getSceneObject(uint32_t) override
  {
    return objectOnSegment8;
  }

  situation::SituationType getSituationType() override
  {
    return situation::SituationType::IntersectionEgoHasPriority;
  }

  RssSituationIdProvider situationIdProvider;
};

TEST_F(RssSituationIdProviderTests, same_scene_result_in_same_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(firstSituationId, secondSituationId);

  worldModel.timeIndex++;
  secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_objectids_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  worldModel.scenes[0].object.objectId = 49;
  auto const secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_situation_types_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  worldModel.scenes[0].situationType = situation::SituationType::IntersectionObjectHasPriority;
  auto const secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_ego_intersection_route_id_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].egoVehicleRoad.back().back().id = 88;
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_object_intersection_route_id_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].intersectingRoad.back().back().id = 99;
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_ego_intersection_route_size_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].egoVehicleRoad.back().push_back(worldModel.scenes[0].egoVehicleRoad.back().back());
  worldModel.scenes[0].egoVehicleRoad.back().back().id = 88;
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_object_intersection_route_size_result_in_different_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].intersectingRoad.back().push_back(worldModel.scenes[0].intersectingRoad.back().back());
  worldModel.scenes[0].intersectingRoad.back().back().id = 99;
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_ego_non_intersection_route_size_result_in_same_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].egoVehicleRoad.erase(worldModel.scenes[0].egoVehicleRoad.begin());
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, different_object_non_intersection_route_size_result_in_same_situations)
{
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].intersectingRoad.erase(worldModel.scenes[0].intersectingRoad.begin());
  auto secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(firstSituationId, secondSituationId);
}

TEST_F(RssSituationIdProviderTests, history_is_cleaned)
{
  auto const originalObjectId = worldModel.scenes[0].object.objectId;
  auto const firstSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);

  worldModel.scenes[0].object.objectId = 49;
  auto const secondSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, secondSituationId);

  worldModel.timeIndex++;
  auto thirdSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(secondSituationId, thirdSituationId);

  worldModel.timeIndex++;
  // 49 still tracked
  thirdSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_EQ(secondSituationId, thirdSituationId);

  // original already forgotten
  worldModel.scenes[0].object.objectId = originalObjectId;
  auto fourthSituationId = situationIdProvider.getSituationId(worldModel.timeIndex, worldModel.scenes[0]);
  EXPECT_NE(firstSituationId, fourthSituationId);
}

} // namespace world
} // namespace rss
} // namespace ad
