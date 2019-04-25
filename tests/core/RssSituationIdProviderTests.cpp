// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"
#include "world/RssSituationIdProvider.hpp"

namespace ad_rss {
namespace world {

class RssSituationIdProviderTests : public core::RssCheckTestBaseT<testing::Test>
{
public:
  ::ad_rss::world::Object &getEgoObject() override
  {
    return objectOnSegment0;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
} // namespace ad_rss
