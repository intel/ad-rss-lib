// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
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
    worldModel.egoVehicleRssDynamics = getEgoRssDynamics();
    scene.situationType = situation::SituationType::SameDirection;
    scene.objectRssDynamics = getObjectRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;

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

  world::RoadSegment longitudinalNoDifferenceRoadSegment()
  {
    world::RoadSegment roadSegment;
    world::LaneSegment laneSegment;

    laneSegment.id = 1;
    laneSegment.length.minimum = Distance(10);
    laneSegment.length.maximum = Distance(10);

    laneSegment.width.minimum = Distance(5);
    laneSegment.width.maximum = Distance(5);

    roadSegment.push_back(laneSegment);
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
    roadSegment.push_back(laneSegment);
    return roadSegment;
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Scene scene;
  RssSituationExtraction situationExtraction;
};

TEST_F(RssSituationExtractionSameDirectionTests, noLongitudinalDifference)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad.push_back(longitudinalNoDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(6));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));
}

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoLeading)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;
  scene.object.objectType = world::ObjectType::ArtificialObject;
  scene.egoVehicleRoad.push_back(longitudinalDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(2));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));
}

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoFollowing)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;
  scene.egoVehicleRoad.push_back(longitudinalDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(2));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            scene.objectRssDynamics.alphaLon.accelMax);
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.brakeMin,
            scene.objectRssDynamics.alphaLon.brakeMin);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));
}

TEST_F(RssSituationExtractionSameDirectionTests, mergeWorstCase)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad.push_back(longitudinalDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  scene.egoVehicleRoad.clear();
  scene.egoVehicleRoad.push_back(longitudinalNoDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::AtBack);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(2));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            scene.objectRssDynamics.alphaLon.accelMax);
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.brakeMin,
            scene.objectRssDynamics.alphaLon.brakeMin);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));

  // adapt velocities
  auto originalObject = worldModel.scenes[1].egoVehicle;

  worldModel.scenes[1].egoVehicle.velocity.speedLatMin = Speed(2.0);
  worldModel.scenes[1].egoVehicle.velocity.speedLatMax = Speed(2.2);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLat.minimum, Speed(0.));
  EXPECT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLat.maximum, Speed(2.2));
  worldModel.scenes[1].egoVehicle = originalObject;

  worldModel.scenes[1].egoVehicle.velocity.speedLonMin = Speed(10.1);
  worldModel.scenes[1].egoVehicle.velocity.speedLonMax = Speed(10.2);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10.));
  EXPECT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10.2));
  worldModel.scenes[1].egoVehicle = originalObject;

  originalObject = worldModel.scenes[1].object;
  worldModel.scenes[1].object.velocity.speedLatMin = Speed(2.0);
  worldModel.scenes[1].object.velocity.speedLatMax = Speed(2.2);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLat.minimum, Speed(0.));
  EXPECT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLat.maximum, Speed(2.2));
  worldModel.scenes[1].object = originalObject;

  worldModel.scenes[1].object.velocity.speedLonMin = Speed(10.1);
  worldModel.scenes[1].object.velocity.speedLonMax = Speed(10.2);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLon.minimum, Speed(10.0));
  EXPECT_EQ(situationSnapshot.situations[0].otherVehicleState.velocity.speedLon.maximum, Speed(10.2));
  worldModel.scenes[1].object = originalObject;

  // adapt lane correctness
  worldModel.scenes[1].egoVehicleRoad.front().front().drivingDirection = world::LaneDrivingDirection::Negative;
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].egoVehicleState.isInCorrectLane, false);
  EXPECT_EQ(situationSnapshot.situations[0].otherVehicleState.isInCorrectLane, true);
  worldModel.scenes[1].egoVehicleRoad.front().front().drivingDirection = world::LaneDrivingDirection::Positive;

  // influence relative position
  auto const originalEgoOccupiedRegion = worldModel.scenes[1].egoVehicle.occupiedRegions;
  auto const originalObjectOccupiedRegion = worldModel.scenes[1].object.occupiedRegions;
  worldModel.scenes[1].egoVehicle.occupiedRegions.front().latRange.minimum = ParametricValue(0.);
  worldModel.scenes[1].egoVehicle.occupiedRegions.front().lonRange.maximum = ParametricValue(1.);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0.));
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(0.));
  worldModel.scenes[1].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;

  worldModel.scenes[0].egoVehicle.occupiedRegions.front().latRange.minimum = ParametricValue(0.);
  worldModel.scenes[0].egoVehicle.occupiedRegions.front().lonRange.maximum = ParametricValue(1.);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0.));
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(0.));
  worldModel.scenes[0].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;

  worldModel.scenes[1].egoVehicle.occupiedRegions.front() = worldModel.scenes[0].object.occupiedRegions.front();
  worldModel.scenes[1].object.occupiedRegions.front() = worldModel.scenes[0].egoVehicle.occupiedRegions.front();
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0.));
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(0.));
  worldModel.scenes[1].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;
  worldModel.scenes[1].object.occupiedRegions = originalObjectOccupiedRegion;

  worldModel.scenes[0].egoVehicle.occupiedRegions.front() = worldModel.scenes[1].object.occupiedRegions.front();
  worldModel.scenes[0].object.occupiedRegions.front() = worldModel.scenes[1].egoVehicle.occupiedRegions.front();
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(0.));
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::Overlap);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(0.));
  worldModel.scenes[0].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;
  worldModel.scenes[0].object.occupiedRegions = originalObjectOccupiedRegion;

  worldModel.scenes[1].egoVehicle.occupiedRegions.front().latRange.minimum = ParametricValue(0.3);
  worldModel.scenes[1].egoVehicle.occupiedRegions.front().lonRange.maximum = ParametricValue(0.9);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::OverlapRight);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::OverlapBack);
  worldModel.scenes[1].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;

  worldModel.scenes[0].egoVehicle.occupiedRegions.front().latRange.minimum = ParametricValue(0.3);
  worldModel.scenes[0].egoVehicle.occupiedRegions.front().lonRange.maximum = ParametricValue(0.9);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::OverlapRight);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::OverlapBack);
  worldModel.scenes[0].egoVehicle.occupiedRegions = originalEgoOccupiedRegion;

  worldModel.scenes[0].egoVehicle.occupiedRegions = originalObjectOccupiedRegion;
  worldModel.scenes[1].egoVehicle.occupiedRegions = originalObjectOccupiedRegion;
  worldModel.scenes[0].object.occupiedRegions = originalEgoOccupiedRegion;
  worldModel.scenes[1].object.occupiedRegions = originalEgoOccupiedRegion;
  worldModel.scenes[1].object.occupiedRegions.front().latRange.minimum = ParametricValue(0.3);
  worldModel.scenes[1].object.occupiedRegions.front().lonRange.maximum = ParametricValue(0.9);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::OverlapLeft);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::OverlapFront);
  worldModel.scenes[1].object.occupiedRegions = originalEgoOccupiedRegion;

  worldModel.scenes[0].object.occupiedRegions.front().latRange.minimum = ParametricValue(0.3);
  worldModel.scenes[0].object.occupiedRegions.front().lonRange.maximum = ParametricValue(0.9);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::OverlapLeft);
  EXPECT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalPosition,
            situation::LongitudinalRelativePosition::OverlapFront);
  worldModel.scenes[0].object.occupiedRegions = originalEgoOccupiedRegion;
}

TEST_F(RssSituationExtractionSameDirectionTests, mergeFails)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad.push_back(longitudinalDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  scene.egoVehicleRoad.clear();
  scene.egoVehicleRoad.push_back(longitudinalNoDifferenceRoadSegment());
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  // validate setup
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);

  // adapt dynamics
  auto originalRssDynamics = worldModel.scenes[1].objectRssDynamics;
  worldModel.scenes[1].objectRssDynamics.alphaLat.accelMax = Acceleration(3.33);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.alphaLat.brakeMin = Acceleration(3.33);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.alphaLon.accelMax = Acceleration(3.33);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMax
    = worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMax + Acceleration(1.);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMin
    = worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMin - Acceleration(1.);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMinCorrect
    = worldModel.scenes[1].objectRssDynamics.alphaLon.brakeMinCorrect + Acceleration(.5);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.lateralFluctuationMargin = Distance(1.);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  worldModel.scenes[1].objectRssDynamics.responseTime = Duration(5.);
  worldModel.timeIndex++;
  EXPECT_FALSE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  worldModel.scenes[1].objectRssDynamics = originalRssDynamics;

  // validate resetting of error setup in the above test code
  worldModel.scenes.resize(1);
  worldModel.timeIndex++;
  EXPECT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  EXPECT_EQ(situationSnapshot.situations.size(), 1u);
}

} // namespace core
} // namespace rss
} // namespace ad
