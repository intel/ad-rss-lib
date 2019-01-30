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
#include "rss/core/RssSituationExtraction.hpp"

namespace rss {

namespace core {

namespace RssSituationExtraction {

class RssSituationExtractionIntersectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;
    scene.situationType = rss::situation::SituationType::IntersectionEgoHasPriority;

    {
      ::rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = 0.8;
      occupiedRegion.lonRange.maximum = 1.0;
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = 0.2;
      occupiedRegion.latRange.maximum = 0.4;

      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(36., 0.);
    followingObject.objectId = 1;
    {
      ::rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = 0.1;
      occupiedRegion.lonRange.maximum = 0.2;
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = 0.6;
      occupiedRegion.latRange.maximum = 0.8;
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }
  }

  virtual void TearDown()
  {
    followingObject.occupiedRegions.clear();
    leadingObject.occupiedRegions.clear();
    scene.egoVehicleRoad.clear();
  }
  ::rss::world::Object followingObject;
  ::rss::world::Object leadingObject;
  ::rss::world::Scene scene;
};

TEST_F(RssSituationExtractionIntersectionTests, noLongitudinalDifference)
{
  world::WorldModel worldModel;
  situation::SituationVector situationVector;

  worldModel.egoVehicle = leadingObject;
  scene.object = followingObject;

  {
    ::rss::world::RoadSegment roadSegment;
    ::rss::world::LaneSegment laneSegment;

    laneSegment.id = 1;
    laneSegment.length.minimum = 10;
    laneSegment.length.maximum = 10;

    laneSegment.width.minimum = 5;
    laneSegment.width.maximum = 5;
    laneSegment.type = ::rss::world::LaneSegmentType::Normal;

    roadSegment.push_back(laneSegment);
    scene.egoVehicleRoad.push_back(roadSegment);
    scene.intersectingRoad.push_back(roadSegment);
  }

  {
    ::rss::world::RoadSegment roadSegment;
    ::rss::world::LaneSegment laneSegment;

    laneSegment.id = 2;
    laneSegment.length.minimum = 5;
    laneSegment.length.maximum = 5;

    laneSegment.width.minimum = 5;
    laneSegment.width.maximum = 5;
    laneSegment.type = ::rss::world::LaneSegmentType::Intersection;

    roadSegment.push_back(laneSegment);

    scene.egoVehicleRoad.push_back(roadSegment);
    scene.intersectingRoad.push_back(roadSegment);
  }

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ASSERT_TRUE(extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalDistance, 6);
  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, 10);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicle.dynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToEnterIntersection, 0);
  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToLeaveIntersection, 7);
  ASSERT_TRUE(situationVector[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToEnterIntersection, 8);
  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToLeaveIntersection, 14);
  ASSERT_FALSE(situationVector[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalPosition,
            ::rss::situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationVector[0].relativePosition.lateralPosition, ::rss::situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, 0);
}

TEST_F(RssSituationExtractionIntersectionTests, longitudinalDifference)
{
  world::WorldModel worldModel;
  situation::SituationVector situationVector;

  worldModel.egoVehicle = leadingObject;
  scene.object = followingObject;

  {
    ::rss::world::RoadSegment roadSegment;
    ::rss::world::LaneSegment laneSegment;

    laneSegment.id = 1;
    laneSegment.length.minimum = 8;
    laneSegment.length.maximum = 10;

    laneSegment.width.minimum = 5;
    laneSegment.width.maximum = 5;
    laneSegment.type = ::rss::world::LaneSegmentType::Normal;

    roadSegment.push_back(laneSegment);
    scene.egoVehicleRoad.push_back(roadSegment);
    scene.intersectingRoad.push_back(roadSegment);
  }

  {
    ::rss::world::RoadSegment roadSegment;
    ::rss::world::LaneSegment laneSegment;

    laneSegment.id = 2;
    laneSegment.length.minimum = 4;
    laneSegment.length.maximum = 5;

    laneSegment.width.minimum = 5;
    laneSegment.width.maximum = 5;
    laneSegment.type = ::rss::world::LaneSegmentType::Intersection;

    roadSegment.push_back(laneSegment);

    scene.egoVehicleRoad.push_back(roadSegment);
    scene.intersectingRoad.push_back(roadSegment);
  }

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ASSERT_TRUE(extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, 10);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicle.dynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToEnterIntersection, 0);
  ASSERT_EQ(situationVector[0].egoVehicleState.distanceToLeaveIntersection, 8.6);
  ASSERT_TRUE(situationVector[0].egoVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToEnterIntersection, 6);
  ASSERT_EQ(situationVector[0].otherVehicleState.distanceToLeaveIntersection, 14.2);
  ASSERT_FALSE(situationVector[0].otherVehicleState.hasPriority);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalPosition,
            ::rss::situation::LongitudinalRelativePosition::InFront);

  ASSERT_EQ(situationVector[0].relativePosition.lateralPosition, ::rss::situation::LateralRelativePosition::Overlap);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, 0);
}
}
}
} // namespace rss
