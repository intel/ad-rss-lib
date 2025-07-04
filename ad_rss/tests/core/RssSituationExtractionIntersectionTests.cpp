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

class RssSituationExtractionIntersectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    worldModel.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.object_id = 0;
    constellation.constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
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

  world::RoadArea longitudinalNoDifferenceRoadArea()
  {
    world::RoadArea roadArea;
    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;

      laneSegment.id = 1;
      laneSegment.length.minimum = Distance(10);
      laneSegment.length.maximum = Distance(10);

      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);

      roadSegment.type = world::RoadSegmentType::Normal;
      roadSegment.lane_segments.push_back(laneSegment);
      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;

      laneSegment.id = 2;
      laneSegment.length.minimum = Distance(5);
      laneSegment.length.maximum = Distance(5);

      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);

      roadSegment.type = world::RoadSegmentType::Intersection;
      roadSegment.lane_segments.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }
    return roadArea;
  }

  world::RoadArea longitudinalDifferenceRoadArea()
  {
    world::RoadArea roadArea;
    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;

      laneSegment.id = 1;
      laneSegment.length.minimum = Distance(8);
      laneSegment.length.maximum = Distance(10);

      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);

      roadSegment.type = world::RoadSegmentType::Normal;
      roadSegment.lane_segments.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;

      laneSegment.id = 2;
      laneSegment.length.minimum = Distance(4);
      laneSegment.length.maximum = Distance(5);

      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);

      roadSegment.type = world::RoadSegmentType::Intersection;
      roadSegment.minimum_length_before_intersecting_area = Distance(0.5);
      roadSegment.minimum_length_after_intersecting_area = Distance(0.3);
      roadSegment.lane_segments.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }
    return roadArea;
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Constellation constellation;
  RssSituationExtraction constellationExtraction;
};

TEST_F(RssSituationExtractionIntersectionTests, noLongitudinalDifference)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(leadingObject);
  constellation.object = followingObject;

  constellation.ego_vehicle_road = longitudinalNoDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;

  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[0], 0u);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_distance, Distance(6.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_enter_intersection,
            Distance(0));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_leave_intersection,
            Distance(7));
  ASSERT_TRUE(situationSnapshot.constellations[0].ego_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_enter_intersection,
            Distance(8));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_leave_intersection,
            Distance(14));
  ASSERT_FALSE(situationSnapshot.constellations[0].other_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, longitudinalDifference)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(leadingObject);
  constellation.object = followingObject;

  constellation.ego_vehicle_road = longitudinalDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;

  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[0], 0u);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_enter_intersection,
            Distance(0.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_leave_intersection,
            Distance(8.3));
  ASSERT_TRUE(situationSnapshot.constellations[0].ego_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_enter_intersection,
            Distance(6.5));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_leave_intersection,
            Distance(13.9));
  ASSERT_FALSE(situationSnapshot.constellations[0].other_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, mergeWorstCaseInFront)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(leadingObject);
  constellation.object = followingObject;

  constellation.ego_vehicle_road = longitudinalDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;
  worldModel.constellations.push_back(constellation);

  constellation.ego_vehicle_road = longitudinalNoDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;
  worldModel.constellations.push_back(constellation);

  constellation.object.velocity.speed_lon_min = Speed(9.0);
  constellation.object.velocity.speed_lon_max = Speed(9.0);
  constellation.object.velocity.speed_lat_min = Speed(-1.);
  constellation.object.velocity.speed_lat_max = Speed(-1.);

  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices.size(), 3u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[0], 0u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[1], 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[2], 2u);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_enter_intersection,
            Distance(0.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_leave_intersection,
            Distance(8.3));
  ASSERT_TRUE(situationSnapshot.constellations[0].ego_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lon_min, Speed(9.));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lon_max, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lat_min, Speed(-1.));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.velocity.speed_lat_max, Speed(0.));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_enter_intersection,
            Distance(6.5));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_leave_intersection,
            Distance(14.));
  ASSERT_FALSE(situationSnapshot.constellations[0].other_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, mergeWorstCaseAtBack)
{
  core::RssSituationSnapshot situationSnapshot;

  constellation.ego_vehicle = objectAsEgo(followingObject);
  constellation.object = leadingObject;

  constellation.ego_vehicle_road = longitudinalDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;
  worldModel.constellations.push_back(constellation);

  constellation.ego_vehicle_road = longitudinalNoDifferenceRoadArea();
  constellation.intersecting_road = constellation.ego_vehicle_road;
  worldModel.constellations.push_back(constellation);

  constellation.ego_vehicle.velocity.speed_lon_min = Speed(8.0);
  constellation.ego_vehicle.velocity.speed_lon_max = Speed(9.0);
  constellation.ego_vehicle.velocity.speed_lat_min = Speed(-1.);
  constellation.ego_vehicle.velocity.speed_lat_max = Speed(-0.5);
  worldModel.constellations.push_back(constellation);
  worldModel.time_index = 1;

  ASSERT_TRUE(constellationExtraction.extractSituation(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.time_index, worldModel.time_index);
  ASSERT_EQ(situationSnapshot.constellations.size(), 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices.size(), 3u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[0], 0u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[1], 1u);
  ASSERT_EQ(situationSnapshot.constellations[0].world_model_indices[2], 2u);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_min, Speed(8.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lon_max, Speed(10.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lat_min, Speed(-1.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.velocity.speed_lat_max, Speed(0.));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.dynamics.alpha_lon.accel_max,
            constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max);

  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_enter_intersection,
            Distance(6.5));
  ASSERT_EQ(situationSnapshot.constellations[0].ego_state.structured_object_state.distance_to_leave_intersection,
            Distance(14.));
  ASSERT_TRUE(situationSnapshot.constellations[0].ego_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_enter_intersection,
            Distance(0.));
  ASSERT_EQ(situationSnapshot.constellations[0].other_state.structured_object_state.distance_to_leave_intersection,
            Distance(8.3));
  ASSERT_FALSE(situationSnapshot.constellations[0].other_state.structured_object_state.has_priority);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.longitudinal_position,
            core::LongitudinalRelativePosition::AtBack);

  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_position,
            core::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.constellations[0].relative_position.lateral_distance, Distance(0));
}

} // namespace core
} // namespace rss
} // namespace ad
