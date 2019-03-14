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
#include "wrap_new.hpp"

namespace ad_rss {
namespace core {

template <class TESTBASE> class RssCheckTestBaseT : public TESTBASE
{
protected:
  virtual ~RssCheckTestBaseT() = default;

  virtual void SetUp()
  {
    scene.situationType = getSituationType();

    objectOnSegment0 = createObject(10., 0.);
    objectOnSegment0.objectId = 0;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 0;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment0.occupiedRegions.push_back(occupiedRegion);
    }

    objectOnSegment1 = createObject(10., 0.);
    objectOnSegment1.objectId = 1;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 1;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment1.occupiedRegions.push_back(occupiedRegion);
    }

    objectOnSegment3 = createObject(10., 3.);
    objectOnSegment3.objectId = 3;

    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 3;
      occupiedRegion.latRange.minimum = ParametricValue(0.);
      occupiedRegion.latRange.maximum = ParametricValue(0.1);
      objectOnSegment3.occupiedRegions.push_back(occupiedRegion);
    }

    objectOnSegment5 = createObject(10., -3.);
    objectOnSegment5.objectId = 5;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 5;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment5.occupiedRegions.push_back(occupiedRegion);
    }

    objectOnSegment7 = createObject(10., 0.);
    objectOnSegment7.objectId = 7;

    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 7;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment7.occupiedRegions.push_back(occupiedRegion);
    }

    objectOnSegment8 = createObject(10., 0.);
    objectOnSegment8.objectId = 8;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.3);
      occupiedRegion.lonRange.maximum = ParametricValue(0.4);
      occupiedRegion.segmentId = 8;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment8.occupiedRegions.push_back(occupiedRegion);
    }

    if ((getSituationType() == situation::SituationType::IntersectionEgoHasPriority)
        || (getSituationType() == situation::SituationType::IntersectionObjectHasPriority)
        || (getSituationType() == situation::SituationType::IntersectionSamePriority))
    {
      createRoadAreaIntersection();
    }
    else
    {
      createRoadAreaNonIntersection();
    }

    worldModel.egoVehicle = objectAsEgo(getEgoObject());
    scene.object = getSceneObject();
    scene.egoVehicleRoad = roadArea;
    scene.intersectingRoad = otherRoadArea;
    worldModel.scenes.push_back(scene);
    worldModel.timeIndex = 1;
  }

  virtual ::ad_rss::world::Object &getEgoObject()
  {
    return objectOnSegment1;
  }

  virtual ::ad_rss::world::Object &getSceneObject()
  {
    return objectOnSegment7;
  }

  virtual void TearDown()
  {
    gNewThrowCounter = 0;
  }

  virtual situation::SituationType getSituationType()
  {
    return situation::SituationType::SameDirection;
  }

  virtual world::LaneDrivingDirection getDrivingDirection()
  {
    return ::ad_rss::world::LaneDrivingDirection::Positive;
  }

  virtual Distance getMiddleRoadSegmentLength()
  {
    return Distance(12);
  }

  ::ad_rss::world::RoadSegment const &getRoadSegment(world::LaneSegmentId landSegmentId)
  {
    for (auto const &roadSegment : roadArea)
    {
      for (auto const &laneSegment : roadSegment)
      {
        if (laneSegment.id == landSegmentId)
        {
          return roadSegment;
        }
      }
    }
    for (auto const &roadSegment : otherRoadArea)
    {
      for (auto const &laneSegment : roadSegment)
      {
        if (laneSegment.id == landSegmentId)
        {
          return roadSegment;
        }
      }
    }
    EXPECT_TRUE(false);
    return roadArea[0];
  }

  ::ad_rss::world::LaneSegment const &getLaneSegment(world::LaneSegmentId landSegmentId)
  {
    for (auto const &roadSegment : roadArea)
    {
      for (auto const &laneSegment : roadSegment)
      {
        if (laneSegment.id == landSegmentId)
        {
          return laneSegment;
        }
      }
    }
    for (auto const &roadSegment : otherRoadArea)
    {
      for (auto const &laneSegment : roadSegment)
      {
        if (laneSegment.id == landSegmentId)
        {
          return laneSegment;
        }
      }
    }
    EXPECT_TRUE(false);
    return roadArea[0][0];
  }

  ::ad_rss::world::LaneSegment getMergedRoadSegment(world::LaneSegmentId landSegmentId)
  {
    ::ad_rss::world::RoadSegment const &roadSegment = getRoadSegment(landSegmentId);
    ::ad_rss::world::LaneSegment mergedSegment = roadSegment[0];
    for (auto const &laneSegment : roadSegment)
    {
      mergedSegment.length.minimum = std::min(mergedSegment.length.minimum, laneSegment.length.minimum);
      mergedSegment.length.maximum = std::max(mergedSegment.length.maximum, laneSegment.length.maximum);
      mergedSegment.width.minimum = std::min(mergedSegment.width.minimum, laneSegment.width.minimum);
      mergedSegment.width.maximum = std::max(mergedSegment.width.maximum, laneSegment.width.maximum);
    }
    return mergedSegment;
  }

  void createRoadAreaNonIntersection()
  {
    // Road with 3 lanes, each with 3 segments
    //   | 6 | 7 | 8 |
    //   |  3  |  4  |  5  |
    //   |  0  |  1  |  2  |

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;
      laneSegment.drivingDirection = getDrivingDirection();

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
      laneSegment.drivingDirection = getDrivingDirection();

      laneSegment.id = 3;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 4;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      laneSegment.id = 5;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;
      laneSegment.drivingDirection = getDrivingDirection();

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

  void createRoadAreaIntersection()
  {
    // Road with 1 lane, intersection at 6
    //   | 6 |- 7 - 8 -
    //   | 3 |
    //   | 0 |
    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;
      laneSegment.drivingDirection = getDrivingDirection();

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
      laneSegment.drivingDirection = getDrivingDirection();

      laneSegment.id = 3;
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
      laneSegment.drivingDirection = getDrivingDirection();

      laneSegment.id = 7;
      laneSegment.length.minimum = Distance(15);
      laneSegment.length.maximum = Distance(17);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;
      laneSegment.drivingDirection = getDrivingDirection();

      laneSegment.id = 8;
      laneSegment.length.minimum = Distance(35);
      laneSegment.length.maximum = Distance(38);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      ::ad_rss::world::RoadSegment roadSegment;
      ::ad_rss::world::LaneSegment laneSegment;

      laneSegment.id = 6;
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

  void testRestriction(physics::AccelerationRange const &longitudinalRange,
                       state::LongitudinalResponse expectedLonResponse)
  {
    switch (expectedLonResponse)
    {
      case state::LongitudinalResponse::None:
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, worldModel.egoVehicle.dynamics.alphaLon.accelMax);
        break;
      case state::LongitudinalResponse::BrakeMin:
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMin);
        break;
      case state::LongitudinalResponse::BrakeMinCorrect:
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, -1. * worldModel.egoVehicle.dynamics.alphaLon.brakeMinCorrect);
        break;
      default:
        EXPECT_TRUE(false);
        break;
    }
  }

  void testRestriction(physics::AccelerationRange const &lateralRange, state::LateralResponse expectedLatResponse)
  {
    switch (expectedLatResponse)
    {
      case state::LateralResponse::None:
        EXPECT_EQ(lateralRange.minimum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
        EXPECT_EQ(lateralRange.maximum, worldModel.egoVehicle.dynamics.alphaLat.accelMax);
        break;
      case state::LateralResponse::BrakeMin:
        EXPECT_EQ(lateralRange.minimum, std::numeric_limits<physics::Acceleration>::lowest());
        EXPECT_EQ(lateralRange.maximum, -1. * worldModel.egoVehicle.dynamics.alphaLat.brakeMin);
        break;
      default:
        EXPECT_TRUE(false);
        break;
    }
  }

  void testRestrictions(world::AccelerationRestriction const &accelerationRestriction,
                        state::LongitudinalResponse expectedLonResponse = state::LongitudinalResponse::None,
                        state::LateralResponse expectedLatResponseLeft = state::LateralResponse::None,
                        state::LateralResponse expectedLatResponseRight = state::LateralResponse::None)
  {
    testRestriction(accelerationRestriction.longitudinalRange, expectedLonResponse);
    testRestriction(accelerationRestriction.lateralLeftRange, expectedLatResponseLeft);
    testRestriction(accelerationRestriction.lateralRightRange, expectedLatResponseRight);
  }

  virtual void performOutOfMemoryTest()
  {
    ASSERT_TRUE(false);
  }

  bool isDistanceSafe()
  {
    Distance dMin;
    switch (getSituationType())
    {
      case situation::SituationType::SameDirection:
        dMin = calculateLongitudinalMinSafeDistance(worldModel.egoVehicle, worldModel.scenes[0].object);
        break;
      case situation::SituationType::OppositeDirection:
        dMin
          = calculateLongitudinalMinSafeDistanceOppositeDirection(worldModel.egoVehicle, worldModel.scenes[0].object);
        break;
      default:
        EXPECT_TRUE(false);
        break;
    }

    world::LaneSegment egoRoadSegment = getMergedRoadSegment(worldModel.egoVehicle.occupiedRegions[0].segmentId);
    // in our tests the vehicle only spans over one segment
    world::LaneSegment egoLaneSegment = getLaneSegment(worldModel.egoVehicle.occupiedRegions[0].segmentId);
    Distance const egoMaxDistanceWithinSegment
      = worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum * egoLaneSegment.length.maximum;
    if (dMin < getMiddleRoadSegmentLength() + egoRoadSegment.length.minimum - egoMaxDistanceWithinSegment)
    {
      return true;
    }
    return false;
  }

  virtual void performDifferentVelocitiesTest(state::LongitudinalResponse expectedLonResponse)
  {
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;

    for (uint32_t i = 0; i < 100; i++)
    {
      worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);

      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

      if (isDistanceSafe())
      {
        testRestrictions(accelerationRestriction);
      }
      else
      {
        testRestrictions(accelerationRestriction, expectedLonResponse);
      }
    }
  }

  virtual void performDifferentDistancesTest(state::LongitudinalResponse expectedLonResponse)
  {
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;

    for (uint32_t i = 0; i <= 90; i++)
    {
      worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.01 * i);
      worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.01 * i + 0.1);

      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

      if (isDistanceSafe())
      {
        testRestrictions(accelerationRestriction);
      }
      else
      {
        testRestrictions(accelerationRestriction, expectedLonResponse);
      }
    }
  }

  ::ad_rss::world::WorldModel worldModel;
  ::ad_rss::world::Object objectOnSegment0;
  ::ad_rss::world::Object objectOnSegment1;
  ::ad_rss::world::Object objectOnSegment3;
  ::ad_rss::world::Object objectOnSegment5;
  ::ad_rss::world::Object objectOnSegment7;
  ::ad_rss::world::Object objectOnSegment8;
  ::ad_rss::world::RoadArea roadArea;
  ::ad_rss::world::RoadArea otherRoadArea;
  ::ad_rss::world::Scene scene;
};

using RssCheckTestBase = RssCheckTestBaseT<testing::Test>;

class RssCheckOutOfMemoryTestBase : public RssCheckTestBaseT<testing::TestWithParam<uint64_t>>
{
protected:
  void performOutOfMemoryTest() override
  {
    gNewThrowCounter = GetParam();
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;

    bool const checkResult = rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction);
    if ((GetParam() == 0) || (gNewThrowCounter > 0u))
    {
      // for 0 there is no out of memory
      // as there are not more than a certain amount of allocations while running, from a certain border on
      // the test returns also true
      ASSERT_TRUE(checkResult);
      testRestrictions(accelerationRestriction);
    }
    else
    {
      ASSERT_FALSE(checkResult);
    }
  }
};

} // namespace core
} // namespace ad_rss
