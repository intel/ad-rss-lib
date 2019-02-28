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

class RssCheckIntersectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    scene.situationType = ad_rss::situation::SituationType::IntersectionEgoHasPriority;
    object = createObject(10., 0.);
    object.objectId = 0;

    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 0;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      object.occupiedRegions.push_back(occupiedRegion);
    }

    otherObject = createObject(10., 0.);
    otherObject.objectId = 1;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.5);
      occupiedRegion.lonRange.maximum = ParametricValue(0.6);
      occupiedRegion.segmentId = 3;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      otherObject.occupiedRegions.push_back(occupiedRegion);
    }

    // Road with 1 lane, intersection at 2
    //   | 2 |- 3 - 4 -
    //   | 1 |
    //   | 0 |

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 0;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      roadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 1;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      roadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 3;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 4;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 2;
      laneSegment.length.minimum = Distance(5);
      laneSegment.length.maximum = Distance(6);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      laneSegment.type = ::ad_rss::world::LaneSegmentType::Intersection;
      roadSegment.push_back(laneSegment);
      roadArea.push_back(roadSegment);
      otherRoadArea.push_back(roadSegment);
    }
  }

  virtual void TearDown()
  {
    object.occupiedRegions.clear();
    otherObject.occupiedRegions.clear();
    scene.egoVehicleRoad.clear();
  }
  ::ad_rss::world::Object object;
  ::ad_rss::world::Object otherObject;
  ::ad_rss::world::RoadArea roadArea;
  ::ad_rss::world::RoadArea otherRoadArea;
  ::ad_rss::world::Scene scene;
};

TEST_F(RssCheckIntersectionTests, EgoHasPriority)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(object);
  scene.object = otherObject;
  scene.intersectingRoad = otherRoadArea;
  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.01 * i);
    worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.01 * i + 0.1);

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

TEST_F(RssCheckIntersectionTests, EgoHasNoPriority)
{
  ::ad_rss::world::WorldModel worldModel;

  worldModel.egoVehicle = objectAsEgo(object);
  scene.object = otherObject;
  scene.intersectingRoad = otherRoadArea;
  scene.egoVehicleRoad = roadArea;
  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (auto situationType : {ad_rss::situation::SituationType::IntersectionSamePriority,
                             ad_rss::situation::SituationType::IntersectionObjectHasPriority})
  {
    worldModel.scenes[0].situationType = situationType;
    for (uint32_t i = 0; i <= 90; i++)
    {
      worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.01 * i);
      worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.01 * i + 0.1);

      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

      ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
                -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);

      ASSERT_EQ(accelerationRestriction.longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);

      ASSERT_EQ(accelerationRestriction.longitudinalRange.minimum,
                -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
      ASSERT_EQ(accelerationRestriction.lateralLeftRange.minimum,
                -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
      ASSERT_EQ(accelerationRestriction.lateralLeftRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
      ASSERT_EQ(accelerationRestriction.lateralRightRange.minimum,
                -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
      ASSERT_EQ(accelerationRestriction.lateralRightRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
    }
  }
}

} // namespace core
} // namespace ad_rss
