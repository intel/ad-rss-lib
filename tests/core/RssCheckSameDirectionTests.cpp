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
#include "ad_rss/core/RssCheck.hpp"

namespace ad_rss {
namespace core {

class RssCheckSameDirectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    scene.situationType = ad_rss::situation::SituationType::SameDirection;
    leadingObject = createObject(10., 0.);
    leadingObject.objectId = 0;

    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 7;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(0., 0.);
    followingObject.objectId = 1;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }

    // Road with 3 lanes, each with 3 segments
    //   | 6 | 7 | 8 |
    //   |  3  |  4  |  5  |
    //   |  0  |  1  |  2  |

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 0;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 1;
      laneSegment.length.minimum = Distance(55);
      laneSegment.length.maximum = Distance(60);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 2;
      laneSegment.length.minimum = Distance(60);
      laneSegment.length.maximum = Distance(65);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 3;
      laneSegment.length.minimum = Distance(2);
      laneSegment.length.maximum = Distance(2);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 4;
      laneSegment.length.minimum = Distance(2);
      laneSegment.length.maximum = Distance(2);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 5;
      laneSegment.length.minimum = Distance(2);
      laneSegment.length.maximum = Distance(2);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 6;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 7;
      laneSegment.length.minimum = Distance(55);
      laneSegment.length.maximum = Distance(60);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 8;
      laneSegment.length.minimum = Distance(60);
      laneSegment.length.maximum = Distance(65);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
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
  ::ad_rss::world::Object followingObject;
  ::ad_rss::world::Object leadingObject;
  ::ad_rss::world::RoadArea roadArea;
  ::ad_rss::world::Scene scene;
};

TEST_F(RssCheckSameDirectionTests, OtherLeading_DifferentDistances)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(10);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.01 * i);
    worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.01 * i + 0.1);

    Distance const dMin = calculateLongitudinalMinSafeDistance(worldModel.egoVehicle, worldModel.scenes[0].object);
    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);

    if (dMin < Distance(52) - worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum * Distance(60))
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    }
    else
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum,
                -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin);
    }

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, OtherLeading_DifferentVelocities)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);

    Distance const dMin = calculateLongitudinalMinSafeDistance(worldModel.egoVehicle, worldModel.scenes[0].object);
    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    if (dMin < Distance(52) - worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum * Distance(60))
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    }
    else
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum,
                -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin);
    }

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, OtherLeading_DifferentVelocities_DifferentLaneSegements)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 2;
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);

    Distance const dMin = calculateLongitudinalMinSafeDistance(worldModel.egoVehicle, worldModel.scenes[0].object);
    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    if (dMin < Distance(52) - worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum * Distance(65))
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    }
    else
    {
      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum,
                -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin);
    }

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, OtherLeading_DifferentVelocities_NoLateralConflict)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;
  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);

    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, OtherLeading_DifferentVelocities_NoLateralConflict_2Scenes)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;
  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.objectId = 2;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);

    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);

    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, EgoLeading_DifferentVelocities)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, EgoLeading_Overlap_Front)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(leadingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 8;
  worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.4);
  scene.object = followingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 6;
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, EgoLeading_Overlap_Right)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(leadingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.4);
  scene.object = followingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

TEST_F(RssCheckSameDirectionTests, EgoLeading_Overlap_Left)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(leadingObject);
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.4);
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.3);
  scene.object = followingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
    ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
              -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
    ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  }
}

} // namespace core
} // namespace ad_rss
