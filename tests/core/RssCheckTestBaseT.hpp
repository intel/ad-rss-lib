// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#pragma once

#include <algorithm>
#include <limits>
#include <vector>

#include "TestSupport.hpp"
#include "ad_rss/core/RssCheck.hpp"
#include "wrap_new.hpp"

#define RSS_CHECK_TEST_DEBUG_OUT 0

namespace ad_rss {
namespace core {

template <class TESTBASE> class RssCheckTestBaseT : public TESTBASE
{
protected:
  virtual ~RssCheckTestBaseT() = default;

  virtual void SetUp()
  {
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

    objectOnSegment4 = createObject(10., 0.);
    objectOnSegment4.objectId = 4;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.);
      occupiedRegion.lonRange.maximum = ParametricValue(0.1);
      occupiedRegion.segmentId = 4;
      occupiedRegion.latRange.minimum = ParametricValue(0.45);
      occupiedRegion.latRange.maximum = ParametricValue(0.55);
      objectOnSegment4.occupiedRegions.push_back(occupiedRegion);
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

    objectOnSegment6 = createObject(10., 0.);
    objectOnSegment6.objectId = 6;
    {
      ::ad_rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.4);
      occupiedRegion.lonRange.maximum = ParametricValue(0.5);
      occupiedRegion.segmentId = 6;
      occupiedRegion.latRange.minimum = ParametricValue(0.8);
      occupiedRegion.latRange.maximum = ParametricValue(0.9);
      objectOnSegment6.occupiedRegions.push_back(occupiedRegion);
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

    worldModel.egoVehicleRssDynamics = getEgoRssDynamics();
    for (uint32_t index = 0u; index < getNumberOfSceneObjects(); index++)
    {
      ::ad_rss::world::Scene scene;
      scene.situationType = getSituationType();
      scene.object = getSceneObject(index);
      scene.objectRssDynamics = getObjectRssDynamics();
      scene.egoVehicle = objectAsEgo(getEgoObject());
      scene.egoVehicleRoad = roadArea;
      scene.intersectingRoad = otherRoadArea;
      worldModel.scenes.push_back(scene);
    }
    worldModel.timeIndex = 1;
  }

  virtual ::ad_rss::world::Object &getEgoObject()
  {
    return objectOnSegment1;
  }

  virtual uint32_t getNumberOfSceneObjects()
  {
    return 1u;
  }

  /**
   * @brief This function is called for every index [0; getNumberOfSceneObjects())
   *
   * If you overload the getNumberOfSceneObjects() you have to overload this, too.
   */
  virtual ::ad_rss::world::Object &getSceneObject(uint32_t objectIndex)
  {
    if (objectIndex == 0u)
    {
      return objectOnSegment7;
    }
    else
    {
      throw std::out_of_range("Test setup out of range");
    }
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
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, worldModel.egoVehicleRssDynamics.alphaLon.accelMax);
        break;
      case state::LongitudinalResponse::BrakeMin:
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMin);
        break;
      case state::LongitudinalResponse::BrakeMinCorrect:
        EXPECT_EQ(longitudinalRange.minimum, -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMax);
        EXPECT_EQ(longitudinalRange.maximum, -1. * worldModel.egoVehicleRssDynamics.alphaLon.brakeMinCorrect);
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
        EXPECT_EQ(lateralRange.minimum, -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin);
        EXPECT_EQ(lateralRange.maximum, worldModel.egoVehicleRssDynamics.alphaLat.accelMax);
        break;
      case state::LateralResponse::BrakeMin:
        EXPECT_EQ(lateralRange.minimum, std::numeric_limits<physics::Acceleration>::lowest());
        EXPECT_EQ(lateralRange.maximum, -1. * worldModel.egoVehicleRssDynamics.alphaLat.brakeMin);
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

  Distance getDistanceToSegmentEnd(::ad_rss::world::Object const &object)
  {
    world::LaneSegment objectRoadSegment = getMergedRoadSegment(object.occupiedRegions[0].segmentId);
    // in our tests the vehicle only spans over one segment
    world::LaneSegment objectLaneSegment = getLaneSegment(object.occupiedRegions[0].segmentId);
    Distance const objectMaxDistanceWithinSegment
      = object.occupiedRegions[0].lonRange.maximum * objectLaneSegment.length.maximum;

    return objectRoadSegment.length.minimum - objectMaxDistanceWithinSegment;
  }

  Distance getFrontObjectDistanceFromSegmentBegin()
  {
    for (auto const &scene : worldModel.scenes)
    {
      if ((scene.object.objectId == 6) || (scene.object.objectId == 7) || (scene.object.objectId == 8))
      {
        // in our tests the vehicle only spans over one segment
        world::LaneSegment objectLaneSegment = getLaneSegment(scene.object.occupiedRegions[0].segmentId);
        Distance const objectMinDistanceWithinSegment
          = scene.object.occupiedRegions[0].lonRange.minimum * objectLaneSegment.length.minimum;

        return objectMinDistanceWithinSegment;
      }
    }
    return Distance(0.);
  }

  bool isDistanceSafeLongitudinal()
  {
    for (auto const &scene : worldModel.scenes)
    {
      Distance dMin;
      switch (getSituationType())
      {
        case situation::SituationType::SameDirection:
          dMin = calculateLongitudinalMinSafeDistance(scene.egoVehicle.velocity.speedLon,
                                                      worldModel.egoVehicleRssDynamics,
                                                      scene.object.velocity.speedLon,
                                                      scene.objectRssDynamics);
          break;
        case situation::SituationType::OppositeDirection:
          if (getDrivingDirection() == ::ad_rss::world::LaneDrivingDirection::Negative)
          {
            dMin = calculateLongitudinalMinSafeDistanceOppositeDirection(scene.object.velocity.speedLon,
                                                                         scene.objectRssDynamics,
                                                                         scene.egoVehicle.velocity.speedLon,
                                                                         worldModel.egoVehicleRssDynamics);
          }
          else
          {
            dMin = calculateLongitudinalMinSafeDistanceOppositeDirection(scene.egoVehicle.velocity.speedLon,
                                                                         worldModel.egoVehicleRssDynamics,
                                                                         scene.object.velocity.speedLon,
                                                                         scene.objectRssDynamics);
          }
          break;
        default:
          EXPECT_TRUE(false);
          break;
      }

      Distance egoDistanceToSegmentEnd = getDistanceToSegmentEnd(scene.egoVehicle);
      Distance objectDistanceFromSegmentBegin = getFrontObjectDistanceFromSegmentBegin();
      Distance additionalLength{0u};
      if ((scene.egoVehicle.occupiedRegions[0].segmentId < 3) || (scene.egoVehicle.occupiedRegions[0].segmentId > 5))
      {
        // ego in front or in the back, then the middle segment is relevant
        additionalLength = getMiddleRoadSegmentLength();
      }
#if RSS_CHECK_TEST_DEBUG_OUT
      std::cout << "isDistanceSafeLongitudinal: dMin=" << static_cast<double>(dMin)
                << " | additionalLength=" << static_cast<double>(additionalLength)
                << " egoDistanceToSegmentEnd=" << static_cast<double>(egoDistanceToSegmentEnd)
                << " objectDistanceFromSegmentBegin=" << static_cast<double>(objectDistanceFromSegmentBegin)
                << std::endl;
#endif
      if (dMin >= additionalLength + egoDistanceToSegmentEnd + objectDistanceFromSegmentBegin)
      {
        return false;
      }
    }
    return true;
  }

  virtual void performDifferentVelocitiesTest(state::LongitudinalResponse expectedLonResponse)
  {
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;

    for (uint32_t i = 0; i < 100; i++)
    {
      for (auto &scene : worldModel.scenes)
      {
        scene.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);
      }
      worldModel.timeIndex++;

      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

#if RSS_CHECK_TEST_DEBUG_OUT
      std::cout << "TestingVelocity[i=" << i << "]: lonSafe=" << isDistanceSafeLongitudinal() << std::endl;
#endif
      if (isDistanceSafeLongitudinal())
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
      for (auto &scene : worldModel.scenes)
      {
        scene.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.01 * i);
        scene.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.01 * i + 0.1);
      }
      worldModel.timeIndex++;

      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

#if RSS_CHECK_TEST_DEBUG_OUT
      std::cout << "TestingDistance[i=" << i << "]: lonSafe=" << isDistanceSafeLongitudinal() << std::endl;
#endif
      if (isDistanceSafeLongitudinal())
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
  ::ad_rss::world::Object objectOnSegment4;
  ::ad_rss::world::Object objectOnSegment5;
  ::ad_rss::world::Object objectOnSegment6;
  ::ad_rss::world::Object objectOnSegment7;
  ::ad_rss::world::Object objectOnSegment8;
  ::ad_rss::world::RoadArea roadArea;
  ::ad_rss::world::RoadArea otherRoadArea;
};

using RssCheckTestBase = RssCheckTestBaseT<testing::Test>;

class RssCheckOutOfMemoryTestBase : public RssCheckTestBaseT<testing::TestWithParam<uint64_t>>
{
protected:
  void performOutOfMemoryTest(std::vector<uint64_t> additionalSucceessResults = {})
  {
    gNewThrowCounter = GetParam();
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;

    bool const checkResult = rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction);
    if ((GetParam() == 0) || (gNewThrowCounter > 0u)
        || (additionalSucceessResults.end()
            != std::find(additionalSucceessResults.begin(), additionalSucceessResults.end(), GetParam())))
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
