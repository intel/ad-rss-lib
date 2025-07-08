// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#pragma once

#include <algorithm>
#include <limits>
#include <vector>

#include "TestSupport.hpp"
#include "ad/rss/core/RssCheck.hpp"
#include "wrap_new.hpp"

#define RSS_CHECK_TEST_DEBUG_OUT 0

namespace ad {
namespace rss {
namespace core {

template <class TESTBASE> class RssCheckTestBaseT : public TESTBASE
{
protected:
  virtual ~RssCheckTestBaseT() = default;

  virtual void SetUp()
  {
    objectOnSegment0 = createObject(10., 0.);
    objectOnSegment0.object_id = 0u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 0;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment0.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment1 = createObject(10., 0.);
    objectOnSegment1.object_id = 1u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 1;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment1.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment3 = createObject(10., 3.);
    objectOnSegment3.object_id = 3u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 3;
      occupiedRegion.lat_range.minimum = ParametricValue(0.);
      occupiedRegion.lat_range.maximum = ParametricValue(0.1);
      objectOnSegment3.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment4 = createObject(10., 0.);
    objectOnSegment4.object_id = 4u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 4;
      occupiedRegion.lat_range.minimum = ParametricValue(0.45);
      occupiedRegion.lat_range.maximum = ParametricValue(0.55);
      objectOnSegment4.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment5 = createObject(10., -3.);
    objectOnSegment5.object_id = 5u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 5;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment5.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment6 = createObject(10., 0.);
    objectOnSegment6.object_id = 6u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.4);
      occupiedRegion.lon_range.maximum = ParametricValue(0.5);
      occupiedRegion.segment_id = 6;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment6.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment7 = createObject(10., 0.);
    objectOnSegment7.object_id = 7u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.);
      occupiedRegion.lon_range.maximum = ParametricValue(0.1);
      occupiedRegion.segment_id = 7;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment7.occupied_regions.push_back(occupiedRegion);
    }

    objectOnSegment8 = createObject(10., 0.);
    objectOnSegment8.object_id = 8u;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lon_range.minimum = ParametricValue(0.3);
      occupiedRegion.lon_range.maximum = ParametricValue(0.4);
      occupiedRegion.segment_id = 8;
      occupiedRegion.lat_range.minimum = ParametricValue(0.8);
      occupiedRegion.lat_range.maximum = ParametricValue(0.9);
      objectOnSegment8.occupied_regions.push_back(occupiedRegion);
    }

    if ((getConstellationType() == world::ConstellationType::IntersectionEgoHasPriority)
        || (getConstellationType() == world::ConstellationType::IntersectionObjectHasPriority)
        || (getConstellationType() == world::ConstellationType::IntersectionSamePriority))
    {
      createRoadAreaIntersection();
    }
    else
    {
      createRoadAreaNonIntersection();
    }

    worldModel.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    for (uint32_t index = 0u; index < getNumberOfConstellationObjects(); index++)
    {
      world::Constellation constellation;
      constellation.constellation_type = getConstellationType();
      constellation.object = getConstellationObject(index);
      constellation.object_rss_dynamics = getObjectRssDynamics();
      constellation.ego_vehicle_rss_dynamics = getEgoRssDynamics();
      constellation.ego_vehicle = objectAsEgo(getEgoObject());
      constellation.ego_vehicle_road = roadArea;
      constellation.intersecting_road = otherRoadArea;
      worldModel.constellations.push_back(constellation);
    }
    worldModel.time_index = 1;
  }

  virtual world::Object &getEgoObject()
  {
    return objectOnSegment1;
  }

  virtual uint32_t getNumberOfConstellationObjects()
  {
    return 1u;
  }

  /**
   * @brief This function is called for every index [0; getNumberOfConstellationObjects())
   *
   * If you overload the getNumberOfConstellationObjects() you have to overload this, too.
   */
  virtual world::Object &getConstellationObject(uint32_t objectIndex)
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

  virtual world::ConstellationType getConstellationType()
  {
    return world::ConstellationType::SameDirection;
  }

  virtual world::LaneDrivingDirection getDrivingDirection()
  {
    return world::LaneDrivingDirection::Positive;
  }

  virtual Distance getMiddleRoadSegmentLength()
  {
    return Distance(12);
  }

  world::RoadSegment const &getRoadSegment(world::LaneSegmentId landSegmentId)
  {
    for (auto const &roadSegment : roadArea)
    {
      for (auto const &laneSegment : roadSegment.lane_segments)
      {
        if (laneSegment.id == landSegmentId)
        {
          return roadSegment;
        }
      }
    }
    for (auto const &roadSegment : otherRoadArea)
    {
      for (auto const &laneSegment : roadSegment.lane_segments)
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

  world::LaneSegment const &getLaneSegment(world::LaneSegmentId landSegmentId)
  {
    for (auto const &roadSegment : roadArea)
    {
      for (auto const &laneSegment : roadSegment.lane_segments)
      {
        if (laneSegment.id == landSegmentId)
        {
          return laneSegment;
        }
      }
    }
    for (auto const &roadSegment : otherRoadArea)
    {
      for (auto const &laneSegment : roadSegment.lane_segments)
      {
        if (laneSegment.id == landSegmentId)
        {
          return laneSegment;
        }
      }
    }
    EXPECT_TRUE(false);
    return roadArea[0].lane_segments[0];
  }

  world::LaneSegment getMergedRoadSegment(world::LaneSegmentId landSegmentId)
  {
    world::RoadSegment const &roadSegment = getRoadSegment(landSegmentId);
    world::LaneSegment mergedSegment = roadSegment.lane_segments[0];
    for (auto const &laneSegment : roadSegment.lane_segments)
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
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 0;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 1;
      laneSegment.length.minimum = Distance(55);
      laneSegment.length.maximum = Distance(60);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 2;
      laneSegment.length.minimum = Distance(60);
      laneSegment.length.maximum = Distance(65);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 3;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 4;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 5;
      laneSegment.length.minimum = getMiddleRoadSegmentLength();
      laneSegment.length.maximum = getMiddleRoadSegmentLength();
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);

      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 6;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 7;
      laneSegment.length.minimum = Distance(55);
      laneSegment.length.maximum = Distance(60);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      laneSegment.id = 8;
      laneSegment.length.minimum = Distance(60);
      laneSegment.length.maximum = Distance(65);
      laneSegment.width.minimum = Distance(3);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);

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
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 0;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 3;
      laneSegment.length.minimum = Distance(50);
      laneSegment.length.maximum = Distance(55);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      roadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 7;
      laneSegment.length.minimum = Distance(15);
      laneSegment.length.maximum = Distance(17);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;
      laneSegment.driving_direction = getDrivingDirection();

      laneSegment.id = 8;
      laneSegment.length.minimum = Distance(35);
      laneSegment.length.maximum = Distance(38);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.lane_segments.push_back(laneSegment);
      otherRoadArea.push_back(roadSegment);
    }

    {
      world::RoadSegment roadSegment;
      world::LaneSegment laneSegment;

      laneSegment.id = 6;
      laneSegment.length.minimum = Distance(5);
      laneSegment.length.maximum = Distance(6);
      laneSegment.width.minimum = Distance(5);
      laneSegment.width.maximum = Distance(5);
      roadSegment.type = world::RoadSegmentType::Intersection;
      roadSegment.lane_segments.push_back(laneSegment);
      roadArea.push_back(roadSegment);
      otherRoadArea.push_back(roadSegment);
    }
  }

  void testRestriction(physics::AccelerationRange const &longitudinal_range,
                       state::LongitudinalResponse expectedLonResponse)
  {
    EXPECT_EQ(longitudinal_range.minimum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_max);
    switch (expectedLonResponse)
    {
      case state::LongitudinalResponse::None:
        EXPECT_EQ(longitudinal_range.maximum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max);
        break;
      case state::LongitudinalResponse::BrakeMin:
        EXPECT_EQ(longitudinal_range.maximum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min);
        break;
      case state::LongitudinalResponse::BrakeMinCorrect:
        EXPECT_EQ(longitudinal_range.maximum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min_correct);
        break;
      default:
        EXPECT_TRUE(false);
        break;
    }
  }

  void testRestriction(physics::AccelerationRange const &lateral_range, state::LateralResponse expectedLatResponse)
  {
    EXPECT_EQ(lateral_range.minimum, std::numeric_limits<physics::Acceleration>::lowest());
    switch (expectedLatResponse)
    {
      case state::LateralResponse::None:
        EXPECT_EQ(lateral_range.maximum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lat.accel_max);
        break;
      case state::LateralResponse::BrakeMin:
        EXPECT_EQ(lateral_range.maximum, worldModel.default_ego_vehicle_rss_dynamics.alpha_lat.brake_min);
        break;
      default:
        EXPECT_TRUE(false);
        break;
    }
  }

  void testRestrictions(state::AccelerationRestriction const &accelerationRestriction,
                        state::LongitudinalResponse expectedLonResponse = state::LongitudinalResponse::None,
                        state::LateralResponse expectedLatResponseLeft = state::LateralResponse::None,
                        state::LateralResponse expectedLatResponseRight = state::LateralResponse::None)
  {
    testRestriction(accelerationRestriction.longitudinal_range, expectedLonResponse);
    testRestriction(accelerationRestriction.lateral_left_range, expectedLatResponseLeft);
    testRestriction(accelerationRestriction.lateral_right_range, expectedLatResponseRight);
  }

  Distance getDistanceToSegmentEnd(world::Object const &object)
  {
    world::LaneSegment objectRoadSegment = getMergedRoadSegment(object.occupied_regions[0].segment_id);
    // in our tests the vehicle only spans over one segment
    world::LaneSegment objectLaneSegment = getLaneSegment(object.occupied_regions[0].segment_id);
    Distance const objectMaxDistanceWithinSegment
      = object.occupied_regions[0].lon_range.maximum * objectLaneSegment.length.maximum;

    return objectRoadSegment.length.minimum - objectMaxDistanceWithinSegment;
  }

  Distance getFrontObjectDistanceFromSegmentBegin()
  {
    for (auto const &constellation : worldModel.constellations)
    {
      if ((constellation.object.object_id == 6u) || (constellation.object.object_id == 7u)
          || (constellation.object.object_id == 8u))
      {
        // in our tests the vehicle only spans over one segment
        world::LaneSegment objectLaneSegment = getLaneSegment(constellation.object.occupied_regions[0].segment_id);
        Distance const objectMinDistanceWithinSegment
          = constellation.object.occupied_regions[0].lon_range.minimum * objectLaneSegment.length.minimum;

        return objectMinDistanceWithinSegment;
      }
    }
    return Distance(0.);
  }

  bool isDistanceSafeLongitudinal()
  {
    for (auto const &constellation : worldModel.constellations)
    {
      Distance dMin;
      switch (getConstellationType())
      {
        case world::ConstellationType::SameDirection:
          dMin = calculateLongitudinalMinSafeDistance(constellation.ego_vehicle.velocity.speed_lon_min,
                                                      constellation.ego_vehicle_rss_dynamics,
                                                      constellation.object.velocity.speed_lon_max,
                                                      constellation.object_rss_dynamics);
          break;
        case world::ConstellationType::OppositeDirection:
          if (getDrivingDirection() == world::LaneDrivingDirection::Negative)
          {
            dMin
              = calculateLongitudinalMinSafeDistanceOppositeDirection(constellation.object.velocity.speed_lon_max,
                                                                      constellation.object_rss_dynamics,
                                                                      constellation.ego_vehicle.velocity.speed_lon_max,
                                                                      constellation.ego_vehicle_rss_dynamics);
          }
          else
          {
            dMin
              = calculateLongitudinalMinSafeDistanceOppositeDirection(constellation.ego_vehicle.velocity.speed_lon_max,
                                                                      constellation.ego_vehicle_rss_dynamics,
                                                                      constellation.object.velocity.speed_lon_max,
                                                                      constellation.object_rss_dynamics);
          }
          break;
        default:
          EXPECT_TRUE(false);
          break;
      }

      Distance egoDistanceToSegmentEnd = getDistanceToSegmentEnd(constellation.ego_vehicle);
      Distance objectDistanceFromSegmentBegin = getFrontObjectDistanceFromSegmentBegin();
      Distance additionalLength{0u};
      if ((constellation.ego_vehicle.occupied_regions[0].segment_id < 3)
          || (constellation.ego_vehicle.occupied_regions[0].segment_id > 5))
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
    state::ProperResponse properResponse;
    core::RssCheck rssCheck;

    for (uint32_t i = 0; i < 100; i++)
    {
      for (auto &constellation : worldModel.constellations)
      {
        constellation.ego_vehicle.velocity.speed_lon_min = kmhToMeterPerSec(i);
        constellation.ego_vehicle.velocity.speed_lon_max = constellation.ego_vehicle.velocity.speed_lon_min;
      }
      worldModel.time_index++;

      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

#if RSS_CHECK_TEST_DEBUG_OUT
      std::cout << "TestingVelocity[i=" << i << "]: lonSafe=" << isDistanceSafeLongitudinal() << std::endl;
#endif
      if (isDistanceSafeLongitudinal())
      {
        testRestrictions(properResponse.acceleration_restrictions);
      }
      else
      {
        testRestrictions(properResponse.acceleration_restrictions, expectedLonResponse);
      }
    }
  }

  virtual void performDifferentDistancesTest(state::LongitudinalResponse expectedLonResponse)
  {
    state::ProperResponse properResponse;
    core::RssCheck rssCheck;

    for (uint32_t i = 0; i <= 90; i++)
    {
      for (auto &constellation : worldModel.constellations)
      {
        constellation.ego_vehicle.occupied_regions[0].lon_range.minimum = ParametricValue(0.01 * i);
        constellation.ego_vehicle.occupied_regions[0].lon_range.maximum = ParametricValue(0.01 * i + 0.1);
      }
      worldModel.time_index++;

      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

#if RSS_CHECK_TEST_DEBUG_OUT
      std::cout << "TestingDistance[i=" << i << "]: lonSafe=" << isDistanceSafeLongitudinal() << std::endl;
#endif
      if (isDistanceSafeLongitudinal())
      {
        testRestrictions(properResponse.acceleration_restrictions);
      }
      else
      {
        testRestrictions(properResponse.acceleration_restrictions, expectedLonResponse);
      }
    }
  }

  world::WorldModel worldModel;
  world::Object objectOnSegment0;
  world::Object objectOnSegment1;
  world::Object objectOnSegment3;
  world::Object objectOnSegment4;
  world::Object objectOnSegment5;
  world::Object objectOnSegment6;
  world::Object objectOnSegment7;
  world::Object objectOnSegment8;
  world::RoadArea roadArea;
  world::RoadArea otherRoadArea;
};

using RssCheckTestBase = RssCheckTestBaseT<testing::Test>;

class RssCheckOutOfMemoryTestBase : public RssCheckTestBaseT<testing::TestWithParam<uint64_t>>
{
protected:
  void performOutOfMemoryTest(std::vector<uint64_t> additionalSucceessResults = {})
  {
    state::ProperResponse properResponse;
    core::RssCheck rssCheck;

    gNewThrowCounter = GetParam();
    bool const checkResult = rssCheck.calculateProperResponse(worldModel, properResponse);
    if ((GetParam() == 0) || (gNewThrowCounter > 0u)
        || (additionalSucceessResults.end()
            != std::find(additionalSucceessResults.begin(), additionalSucceessResults.end(), GetParam())))
    {
      // for 0 there is no out of memory
      // as there are not more than a certain amount of allocations while running, from a certain border on
      // the test returns also true
      ASSERT_TRUE(checkResult);
      testRestrictions(properResponse.acceleration_restrictions);
    }
    else
    {
      ASSERT_FALSE(checkResult);
    }
  }
};

} // namespace core
} // namespace rss
} // namespace ad
