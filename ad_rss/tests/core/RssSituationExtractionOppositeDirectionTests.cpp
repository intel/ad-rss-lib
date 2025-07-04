// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

namespace ad {
namespace rss {
namespace core {

class RssSituationExtractionOppositeDirectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    worldModel.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.object_id = 0;
    constellation.constellation_type = world::ConstellationType::OppositeDirection;
    constellation.object_rss_dynamics = getObjectRssDynamics();
    constellation.ego_vehicle_rss_dynamics = getEgoRssDynamics();

    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.8);
      occupiedRegion.lon_range.maximum = ParametricValue(1.0);
      occupiedRegion.segment_id = 1.;
      occupiedRegion.lat_range.minimum = ParametricValue(0.2);
      occupiedRegion.lat_range.maximum = ParametricValue(0.4);

      leadingObject.occupied_regions.push_back(occupiedRegion);
    }

    followingObject = createObject(36., 0.);
    followingObject.object_id = 1;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.1);
      occupiedRegion.lon_range.maximum = ParametricValue(0.2);
      occupiedRegion.segment_id = 1.;
      occupiedRegion.lat_range.minimum = ParametricValue(0.6);
      occupiedRegion.lat_range.maximum = ParametricValue(0.8);
      followingObject.occupied_regions.push_back(occupiedRegion);
    }
  }

  virtual void TearDown()
  {
    followingObject.occupied_regions.clear();
    leadingObject.occupied_regions.clear();
    constellation.ego_vehicle_road.clear();
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Constellation constellation;
  RssSituationExtraction constellationExtraction;
};

TEST_F(RssSituationExtractionOppositeDirectionTests, noLongitudinalDifference)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(leadingObject);
  constellation.object = followingObject;
  constellation.ego_vehicle_road.push_back(longitudinalNoDifferenceRoadSegment());

  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(6));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(1));
}

TEST_F(RssSituationExtractionOppositeDirectionTests, longitudinalDifference)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(followingObject);
  constellation.object = leadingObject;
  constellation.ego_vehicle_road.push_back(longitudinalDifferenceRoadSegment());

  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(2));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.brake_min,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.brake_min);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(1));
}

} // namespace core
} // namespace rss
} // namespace ad
