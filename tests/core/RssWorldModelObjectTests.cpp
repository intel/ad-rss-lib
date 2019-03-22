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

class RssWorldModelObjectTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    scene.situationType = ad_rss::situation::SituationType::SameDirection;
    leadingObject = createObject(10., 0.);
    leadingObject.objectId = 0;

    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.3);
      occupiedRegion.lonRange.maximum = ParametricValue(0.6);
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = ParametricValue(0.2);
      occupiedRegion.latRange.maximum = ParametricValue(0.4);
      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(0., 0.);
    followingObject.objectId = 1;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = ParametricValue(0.6);
      occupiedRegion.latRange.maximum = ParametricValue(0.8);
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }

    // Road with 3 lanes, each with 3 segments
    //   | 6   |  7  |  8  |
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


TEST_F(RssWorldModelObjectTests, InvalidObjectId)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;
  followingObject.objectId = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

  if (followingObject.objectId <= 0 || leadingObject.objectId <= 0)
  {
    ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  }
}



TEST_F(RssWorldModelObjectTests, HugeObjectId)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  followingObject.objectId = std::numeric_limits<uint64_t>::max() + 1;
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}


// NOTE: TThis test fails with invalid enum value!  Please check whether the test is incorrect or the library
// needs to add this additional check internally.

TEST_F(RssWorldModelObjectTests, InvalidObjectType)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.timeIndex = 2;
  int32_t vehicleType = 8;
  ad_rss::world::ObjectType vehicleEnum = static_cast<ad_rss::world::ObjectType>(vehicleType);
  followingObject.objectType = vehicleEnum;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}


TEST_F(RssWorldModelObjectTests, ValidObjectType)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.timeIndex = 2;
  int32_t vehicleType = 0;
  ad_rss::world::ObjectType vehicleEnum = static_cast<ad_rss::world::ObjectType>(vehicleType);
  followingObject.objectType = vehicleEnum;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;
  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
  ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
  ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
}


TEST_F(RssWorldModelObjectTests, HugeEgoVelocity)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 0;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.velocity.speedLon = Speed(300);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}


TEST_F(RssWorldModelObjectTests, HugeEgoAcceleration)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;

  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.accelMax = Acceleration(80);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}


} // namespace core
} // namespace ad_rss
