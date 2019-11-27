// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
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
    worldModel.egoVehicleRssDynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;
    scene.situationType = situation::SituationType::IntersectionEgoHasPriority;
    scene.objectRssDynamics = getObjectRssDynamics();

    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.8);
      occupiedRegion.lonRange.maximum = ParametricValue(1.0);
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = ParametricValue(0.2);
      occupiedRegion.latRange.maximum = ParametricValue(0.4);

      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(36., 0.);
    followingObject.objectId = 1;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.1);
      occupiedRegion.lonRange.maximum = ParametricValue(0.2);
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = ParametricValue(0.6);
      occupiedRegion.latRange.maximum = ParametricValue(0.8);
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }
  }

  virtual void TearDown()
  {
    followingObject.occupiedRegions.clear();
    leadingObject.occupiedRegions.clear();
    scene.egoVehicleRoad.clear();
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
      laneSegment.type = world::LaneSegmentType::Normal;

      roadSegment.push_back(laneSegment);
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
      laneSegment.type = world::LaneSegmentType::Intersection;

      roadSegment.push_back(laneSegment);

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
      laneSegment.type = world::LaneSegmentType::Normal;

      roadSegment.push_back(laneSegment);
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
      laneSegment.type = world::LaneSegmentType::Intersection;

      roadSegment.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }
    return roadArea;
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Scene scene;
  RssSituationExtraction situationExtraction;
};

TEST_F(RssSituationExtractionIntersectionTests, noLongitudinalDifference)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalNoDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(6.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToEnterIntersection, Distance(0));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToLeaveIntersection, Distance(7));
  ASSERT_TRUE(situationSnapshot.situations[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToEnterIntersection, Distance(8));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToLeaveIntersection, Distance(14));
  ASSERT_FALSE(situationSnapshot.situations[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, longitudinalDifference)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToEnterIntersection, Distance(0.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToLeaveIntersection, Distance(8.6));
  ASSERT_TRUE(situationSnapshot.situations[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToEnterIntersection, Distance(6.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToLeaveIntersection, Distance(14.2));
  ASSERT_FALSE(situationSnapshot.situations[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, mergeWorstCaseInFront)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  scene.egoVehicleRoad = longitudinalNoDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  scene.object.velocity.speedLon = Speed(9.0);
  scene.object.velocity.speedLat = Speed(-1.);

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToEnterIntersection, Distance(0.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToLeaveIntersection, Distance(8.6));
  ASSERT_TRUE(situationSnapshot.situations[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLon.minimum, Speed(9.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLon.maximum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLat.minimum, Speed(-1.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLat.maximum, Speed(0.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToEnterIntersection, Distance(6.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToLeaveIntersection, Distance(14.2));
  ASSERT_FALSE(situationSnapshot.situations[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, mergeWorstCaseAtBack)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = longitudinalDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  scene.egoVehicleRoad = longitudinalNoDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  scene.egoVehicle.velocity.speedLon = Speed(9.0);
  scene.egoVehicle.velocity.speedLat = Speed(-1.);
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(9.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLat.minimum, Speed(-1.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLat.maximum, Speed(0.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToEnterIntersection, Distance(6.));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.distanceToLeaveIntersection, Distance(14.2));
  ASSERT_TRUE(situationSnapshot.situations[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToEnterIntersection, Distance(0.));
  ASSERT_EQ(situationSnapshot.situations[0].otherVehicleState.distanceToLeaveIntersection, Distance(8.6));
  ASSERT_FALSE(situationSnapshot.situations[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::AtBack);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0));
}

} // namespace core
} // namespace rss
} // namespace ad
