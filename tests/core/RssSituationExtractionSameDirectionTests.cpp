// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "rss/core/RssSituationExtraction.hpp"

namespace rss {

namespace core {

namespace RssSituationExtraction {

class RssSituationExtractionSameDirectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    scene.setSituationType(rss::situation::SituationType::SameDirection);
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;

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

TEST_F(RssSituationExtractionSameDirectionTests, noLongitudinalDifference)
{
  world::WorldModel worldModel;
  situation::SituationVector situationVector;

  worldModel.egoVehicle = leadingObject;
  scene.object = followingObject;

  ::rss::world::RoadSegment roadSegment;
  ::rss::world::LaneSegment laneSegment;

  laneSegment.id = 1;
  laneSegment.length.minimum = 10;
  laneSegment.length.maximum = 10;

  laneSegment.width.minimum = 5;
  laneSegment.width.maximum = 5;

  roadSegment.push_back(laneSegment);

  scene.egoVehicleRoad.push_back(roadSegment);
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ASSERT_TRUE(extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalDistance, 6);
  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, 10);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicle.dynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].relativePosition.getLateralPosition(),
            ::rss::situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, 1);
}

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoLeading)
{
  world::WorldModel worldModel;
  situation::SituationVector situationVector;

  worldModel.egoVehicle = leadingObject;
  scene.object = followingObject;

  ::rss::world::RoadSegment roadSegment;
  ::rss::world::LaneSegment laneSegment;

  laneSegment.id = 1;
  laneSegment.length.minimum = 5;
  laneSegment.length.maximum = 10;

  laneSegment.width.minimum = 5;
  laneSegment.width.maximum = 5;

  roadSegment.push_back(laneSegment);

  scene.egoVehicleRoad.push_back(roadSegment);
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ASSERT_TRUE(extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalDistance, 2);
  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, 10);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicle.dynamics.alphaLon.accelMax);

  ASSERT_EQ(situationVector[0].relativePosition.getLateralPosition(),
            ::rss::situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, 1);
}

TEST_F(RssSituationExtractionSameDirectionTests, longitudinalDifferenceEgoFollowing)
{
  world::WorldModel worldModel;
  situation::SituationVector situationVector;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  ::rss::world::RoadSegment roadSegment;
  ::rss::world::LaneSegment laneSegment;

  laneSegment.id = 1;
  laneSegment.length.minimum = 5;
  laneSegment.length.maximum = 10;

  laneSegment.width.minimum = 5;
  laneSegment.width.maximum = 5;

  roadSegment.push_back(laneSegment);

  scene.egoVehicleRoad.push_back(roadSegment);
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ASSERT_TRUE(extractSituations(worldModel, situationVector));
  ASSERT_EQ(situationVector.size(), 1);

  ASSERT_EQ(situationVector[0].relativePosition.longitudinalDistance, 2);
  ASSERT_EQ(situationVector[0].egoVehicleState.velocity.speedLon, 10);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.accelMax, leadingObject.dynamics.alphaLon.accelMax);
  ASSERT_EQ(situationVector[0].egoVehicleState.dynamics.alphaLon.brakeMin, leadingObject.dynamics.alphaLon.brakeMin);

  ASSERT_EQ(situationVector[0].relativePosition.getLateralPosition(),
            ::rss::situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationVector[0].relativePosition.lateralDistance, 1);
}
}
}
} // namespace rss
