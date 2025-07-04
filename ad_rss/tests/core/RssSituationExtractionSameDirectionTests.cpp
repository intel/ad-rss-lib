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

class RssSituationExtractionSameDirectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    worldModel.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    constellation.constellation_type = world::ConstellationType::SameDirection;
    constellation.object_rss_dynamics = getObjectRssDynamics();
    constellation.ego_vehicle_rss_dynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.object_id = 0;

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

  world::RoadSegment longitudinalNoDifferenceRoadSegment()
  {
    world::RoadSegment roadSegment;
    world::LaneSegment laneSegment;

    laneSegment.id = 1;
    laneSegment.length.minimum = Distance(10);
    laneSegment.length.maximum = Distance(10);

    laneSegment.width.minimum = Distance(5);
    laneSegment.width.maximum = Distance(5);

    roadSegment.lane_segments.push_back(laneSegment);
    return roadSegment;
  }

  world::RoadSegment longitudinalDifferenceRoadSegment()
  {
    world::RoadSegment roadSegment;
    world::LaneSegment laneSegment;

    laneSegment.id = 1;
    laneSegment.length.minimum = Distance(5);
    laneSegment.length.maximum = Distance(10);

    laneSegment.width.minimum = Distance(5);
    laneSegment.width.maximum = Distance(5);
    roadSegment.lane_segments.push_back(laneSegment);
    return roadSegment;
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Constellation constellation;
  RssSituationExtraction constellationExtraction;
};

TEST_F(RssSituationExtractionSameDirectionTests, noLongitudinalDifference)
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

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoLeading)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(leadingObject);
  constellation.object = followingObject;
  constellation.object.object_type = world::ObjectType::ArtificialObject;
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

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(1));
}

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoFollowing)
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
            constellation.object_rss_dynamics.alpha_lon.accel_max);
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.brake_min,
            constellation.object_rss_dynamics.alpha_lon.brake_min);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(1));
}

TEST_F(RssSituationExtractionSameDirectionTests, mergeWorstCase)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(followingObject);
  constellation.object = leadingObject;

  constellation.ego_vehicle_road.push_back(longitudinalDifferenceRoadSegment());
  worldModel.constellations.push_back(constellation);
  constellation.ego_vehicle_road.clear();
  constellation.ego_vehicle_road.push_back(longitudinalNoDifferenceRoadSegment());
  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::AtBack);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(2));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.object_rss_dynamics.alpha_lon.accel_max);
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.brake_min,
            constellation.object_rss_dynamics.alpha_lon.brake_min);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(1));

  // adapt velocities
  auto originalObject = worldModel.constellations[1].ego_vehicle;

  worldModel.constellations[1].ego_vehicle.velocity.speed_lat_min = Speed(2.0);
  worldModel.constellations[1].ego_vehicle.velocity.speed_lat_max = Speed(2.2);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lat_min, Speed(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lat_max, Speed(2.2));
  worldModel.constellations[1].ego_vehicle = originalObject;

  worldModel.constellations[1].ego_vehicle.velocity.speed_lon_min = Speed(10.1);
  worldModel.constellations[1].ego_vehicle.velocity.speed_lon_max = Speed(10.2);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10.));
  EXPECT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10.2));
  worldModel.constellations[1].ego_vehicle = originalObject;

  originalObject = worldModel.constellations[1].object;
  worldModel.constellations[1].object.velocity.speed_lat_min = Speed(2.0);
  worldModel.constellations[1].object.velocity.speed_lat_max = Speed(2.2);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lat_min, Speed(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lat_max, Speed(2.2));
  worldModel.constellations[1].object = originalObject;

  worldModel.constellations[1].object.velocity.speed_lon_min = Speed(10.1);
  worldModel.constellations[1].object.velocity.speed_lon_max = Speed(10.2);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lon_min,
            Speed(10.0));
  EXPECT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lon_max,
            Speed(10.2));
  worldModel.constellations[1].object = originalObject;

  // adapt lane correctness
  worldModel.constellations[1].ego_vehicle_road.front().lane_segments.front().driving_direction
    = world::LaneDrivingDirection::Negative;
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.is_in_correct_lane, false);
  EXPECT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.is_in_correct_lane, true);
  worldModel.constellations[1].ego_vehicle_road.front().lane_segments.front().driving_direction
    = world::LaneDrivingDirection::Positive;

  // influence relative position
  auto const originalEgoOccupiedRegion = worldModel.constellations[1].ego_vehicle.occupied_regions;
  auto const originalObjectOccupiedRegion = worldModel.constellations[1].object.occupied_regions;
  worldModel.constellations[1].ego_vehicle.occupied_regions.front().lat_range.minimum = ParametricValue(0.);
  worldModel.constellations[1].ego_vehicle.occupied_regions.front().lon_range.maximum = ParametricValue(1.);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(0.));
  worldModel.constellations[1].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;

  worldModel.constellations[0].ego_vehicle.occupied_regions.front().lat_range.minimum = ParametricValue(0.);
  worldModel.constellations[0].ego_vehicle.occupied_regions.front().lon_range.maximum = ParametricValue(1.);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(0.));
  worldModel.constellations[0].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;

  worldModel.constellations[1].ego_vehicle.occupied_regions.front()
    = worldModel.constellations[0].object.occupied_regions.front();
  worldModel.constellations[1].object.occupied_regions.front()
    = worldModel.constellations[0].ego_vehicle.occupied_regions.front();
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(0.));
  worldModel.constellations[1].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;
  worldModel.constellations[1].object.occupied_regions = originalObjectOccupiedRegion;

  worldModel.constellations[0].ego_vehicle.occupied_regions.front()
    = worldModel.constellations[1].object.occupied_regions.front();
  worldModel.constellations[0].object.occupied_regions.front()
    = worldModel.constellations[1].ego_vehicle.occupied_regions.front();
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0.));
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(0.));
  worldModel.constellations[0].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;
  worldModel.constellations[0].object.occupied_regions = originalObjectOccupiedRegion;

  worldModel.constellations[1].ego_vehicle.occupied_regions.front().lat_range.minimum = ParametricValue(0.3);
  worldModel.constellations[1].ego_vehicle.occupied_regions.front().lon_range.maximum = ParametricValue(0.9);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::OverlapRight);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::OverlapBack);
  worldModel.constellations[1].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;

  worldModel.constellations[0].ego_vehicle.occupied_regions.front().lat_range.minimum = ParametricValue(0.3);
  worldModel.constellations[0].ego_vehicle.occupied_regions.front().lon_range.maximum = ParametricValue(0.9);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::OverlapRight);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::OverlapBack);
  worldModel.constellations[0].ego_vehicle.occupied_regions = originalEgoOccupiedRegion;

  worldModel.constellations[0].ego_vehicle.occupied_regions = originalObjectOccupiedRegion;
  worldModel.constellations[1].ego_vehicle.occupied_regions = originalObjectOccupiedRegion;
  worldModel.constellations[0].object.occupied_regions = originalEgoOccupiedRegion;
  worldModel.constellations[1].object.occupied_regions = originalEgoOccupiedRegion;
  worldModel.constellations[1].object.occupied_regions.front().lat_range.minimum = ParametricValue(0.3);
  worldModel.constellations[1].object.occupied_regions.front().lon_range.maximum = ParametricValue(0.9);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::OverlapLeft);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::OverlapFront);
  worldModel.constellations[1].object.occupied_regions = originalEgoOccupiedRegion;

  worldModel.constellations[0].object.occupied_regions.front().lat_range.minimum = ParametricValue(0.3);
  worldModel.constellations[0].object.occupied_regions.front().lon_range.maximum = ParametricValue(0.9);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::OverlapLeft);
  EXPECT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::OverlapFront);
  worldModel.constellations[0].object.occupied_regions = originalEgoOccupiedRegion;
}

TEST_F(RssSituationExtractionSameDirectionTests, mergeFails)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(followingObject);
  constellation.object = leadingObject;

  constellation.ego_vehicle_road.push_back(longitudinalDifferenceRoadSegment());
  worldModel.constellations.push_back(constellation);
  constellation.ego_vehicle_road.clear();
  constellation.ego_vehicle_road.push_back(longitudinalNoDifferenceRoadSegment());
  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  // validate setup
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.time_index, worldModel.time_index);
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);

  // adapt dynamics
  auto originalRssDynamics = worldModel.constellations[1].object_rss_dynamics;
  worldModel.constellations[1].object_rss_dynamics.alpha_lat.accel_max = Acceleration(3.33);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.alpha_lat.brake_min = Acceleration(-3.33);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.alpha_lon.accel_max = Acceleration(3.33);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_max
    = worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_max + Acceleration(-1.);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_min
    = worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_min - Acceleration(-1.);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_min_correct
    = worldModel.constellations[1].object_rss_dynamics.alpha_lon.brake_min_correct + Acceleration(-.5);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.lateral_fluctuation_margin = Distance(1.);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  worldModel.constellations[1].object_rss_dynamics.response_time = Duration(5.);
  worldModel.time_index++;
  EXPECT_FALSE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  worldModel.constellations[1].object_rss_dynamics = originalRssDynamics;

  // validate resetting of error setup in the above test code
  worldModel.constellations.resize(1);
  worldModel.time_index++;
  EXPECT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.constellations.size(), 1u);
}

} // namespace core
} // namespace rss
} // namespace ad
