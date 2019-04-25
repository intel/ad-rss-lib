// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
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

#include "TestSupport.hpp"
#include "ad_rss/core/RssSituationExtraction.hpp"

namespace ad_rss {

namespace core {

class RssSituationExtractionIntersectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    worldModel.egoVehicleRssDynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;
    scene.situationType = ad_rss::situation::SituationType::IntersectionEgoHasPriority;
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
  situation::SituationVector situationVector;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalNoDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalDistance, Distance(6.));
  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, Speed(10.));
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToEnterIntersection, Distance(0));
  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToLeaveIntersection, Distance(7));
  ASSERT_TRUE(situationVector[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToEnterIntersection, Distance(8));
  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToLeaveIntersection, Distance(14));
  ASSERT_FALSE(situationVector[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalPosition, situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationVector[0].relativePosition.lateralPosition, situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, longitudinalDifference)
{
  situation::SituationVector situationVector;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, Speed(10.));
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToEnterIntersection, Distance(0.));
  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToLeaveIntersection, Distance(8.6));
  ASSERT_TRUE(situationVector[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToEnterIntersection, Distance(6.));
  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToLeaveIntersection, Distance(14.2));
  ASSERT_FALSE(situationVector[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalPosition, situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationVector[0].relativePosition.lateralPosition, situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, Distance(0));
}

TEST_F(RssSituationExtractionIntersectionTests, mergeWorstCase)
{
  situation::SituationVector situationVector;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = longitudinalDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  scene.egoVehicleRoad = longitudinalNoDifferenceRoadArea();
  scene.intersectingRoad = scene.egoVehicleRoad;
  worldModel.scenes.push_back(scene);

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, Speed(10.));
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToEnterIntersection, Distance(0.));
  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToLeaveIntersection, Distance(8.6));
  ASSERT_TRUE(situationVector[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToEnterIntersection, Distance(6.));
  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToLeaveIntersection, Distance(14.2));
  ASSERT_FALSE(situationVector[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalPosition, situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationVector[0].relativePosition.lateralPosition, situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, Distance(0));
}

} // namespace core
} // namespace ad_rss
