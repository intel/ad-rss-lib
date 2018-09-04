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
#include "rss/core/RssCheck.hpp"

namespace rss {
namespace core {

class RssCheckTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    scene.setSituationType(rss::situation::SituationType::SameDirection);
    leadingObject = createObject(10., 0.);
    leadingObject.objectId = 0;

    {
      ::rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = 0.3;
      occupiedRegion.lonRange.maximum = 0.6;
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = 0.2;
      occupiedRegion.latRange.maximum = 0.4;
      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(0., 0.);
    followingObject.objectId = 1;
    {
      ::rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = 0.;
      occupiedRegion.lonRange.maximum = 0.1;
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = 0.6;
      occupiedRegion.latRange.maximum = 0.8;
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }

    // Road with 3 lanes, each with 3 segments
    //   | 6 | 7 | 8 |
    //   |  3  |  4  |  5  |
    //   |  0  |  1  |  2  |

    {
      ::rss::world::RoadSegment roadSegment;
      ::rss::world::LaneSegment laneSegment;

      laneSegment.id = 0;
      laneSegment.length.minimum = 50;
      laneSegment.length.maximum = 55;
      laneSegment.width.minimum = 5;
      laneSegment.width.maximum = 5;
      roadSegment.push_back(laneSegment);
      laneSegment.id = 1;
      laneSegment.length.minimum = 55;
      laneSegment.length.maximum = 60;
      laneSegment.width.minimum = 5;
      laneSegment.width.maximum = 5;
      roadSegment.push_back(laneSegment);
      laneSegment.id = 2;
      laneSegment.length.minimum = 60;
      laneSegment.length.maximum = 65;
      laneSegment.width.minimum = 5;
      laneSegment.width.maximum = 5;
      roadSegment.push_back(laneSegment);

      roadArea.push_back(roadSegment);
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
  ::rss::world::RoadArea roadArea;
  ::rss::world::Scene scene;
};

TEST_F(RssCheckTests, EmptyRoad)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad.clear();
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, EmptyScene)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.clear();
  worldModel.timeIndex = 1;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
}

TEST_F(RssCheckTests, EmptyEgoOccupiedRegion)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, WrongEgoOccupiedRegion)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = 0.5;
  worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = 0.3;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, NegativeEgoVelocity)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.velocity.speedLon = -3;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, NegativeEgoAcceleration)
{
  ::rss::world::WorldModel worldModel;

  worldModel.egoVehicle = followingObject;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::rss::world::AccelerationRestriction accelerationRestriction;
  ::rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.accelMax = -3;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

} // namespace core
} // namespace rss
