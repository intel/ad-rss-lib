// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"

namespace ad {
namespace rss {
namespace core {

template <class TESTBASE> class RssCheckSameDirectionOtherLeadingTestBase : public TESTBASE
{
protected:
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getConstellationObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment7;
  }

  Distance getMiddleRoadSegmentLength() override
  {
    return Distance(2);
  }
};

template <class TESTBASE> class RssCheckSameDirectionEgoLeadingTestBase : public TESTBASE
{
protected:
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment7;
  }

  world::Object &getConstellationObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment1;
  }

  Distance getMiddleRoadSegmentLength() override
  {
    return Distance(2);
  }
};

using RssCheckSameDirectionOtherLeadingTest = RssCheckSameDirectionOtherLeadingTestBase<RssCheckTestBase>;

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentDistances)
{
  performDifferentDistancesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentVelocities)
{
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentVelocities_DifferentLaneSegements)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentVelocities_NoLateralConflict)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 0;
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.0);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.1);

  worldModel.constellations[0].object.occupied_regions[0].segment_id = 8;

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].ego_vehicle.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].ego_vehicle.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    testRestrictions(properResponse.acceleration_restrictions);
  }
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, _DifferentVelocities_NoLateralConflict_2Objects)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 0;
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.0);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.1);

  worldModel.constellations.push_back(worldModel.constellations.front());
  worldModel.constellations[0].object.occupied_regions[0].segment_id = 8;
  worldModel.constellations[1].object.occupied_regions[0].segment_id = 8;
  worldModel.constellations[1].object.object_id = 2;

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].ego_vehicle.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].ego_vehicle.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    testRestrictions(properResponse.acceleration_restrictions);
  }
}

using RssCheckSameDirectionEgoLeadingTest = RssCheckSameDirectionEgoLeadingTestBase<RssCheckTestBase>;

TEST_F(RssCheckSameDirectionEgoLeadingTest, DifferentVelocities)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].object.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].object.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(properResponse.acceleration_restrictions);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Front)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 8;
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lon_range.maximum = ParametricValue(0.5);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lon_range.minimum = ParametricValue(0.4);

  worldModel.constellations[0].object.occupied_regions[0].segment_id = 6;
  worldModel.constellations[0].object.occupied_regions[0].lon_range.maximum = ParametricValue(0.45);
  worldModel.constellations[0].object.occupied_regions[0].lon_range.minimum = ParametricValue(0.35);

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].object.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].object.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(properResponse.acceleration_restrictions);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Right)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 5;
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.5);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.4);

  worldModel.constellations[0].object.occupied_regions[0].segment_id = 2;
  worldModel.constellations[0].object.occupied_regions[0].lat_range.maximum = ParametricValue(0.45);
  worldModel.constellations[0].object.occupied_regions[0].lat_range.minimum = ParametricValue(0.35);

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].object.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].object.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(properResponse.acceleration_restrictions);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Left)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 5;
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.4);
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.3);

  worldModel.constellations[0].object.occupied_regions[0].segment_id = 2;
  worldModel.constellations[0].object.occupied_regions[0].lat_range.maximum = ParametricValue(0.45);
  worldModel.constellations[0].object.occupied_regions[0].lat_range.minimum = ParametricValue(0.35);

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.constellations[0].object.velocity.speed_lon_min = kmhToMeterPerSec(i);
    worldModel.constellations[0].object.velocity.speed_lon_max = kmhToMeterPerSec(i);
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(properResponse.acceleration_restrictions);
  }
}

template <class TESTBASE> class RssCheckSameDirectionEgoInTheMiddleTestBase : public TESTBASE
{
protected:
  using TESTBASE::worldModel;
  void SetUp() override
  {
    TESTBASE::SetUp();
    // now we have to shorten the road areas for the two constellations otherwhise
    // the area is too big which restricts too much to handle in our test code
    worldModel.constellations[0].ego_vehicle_road.erase(worldModel.constellations[0].ego_vehicle_road.begin() + 2);
    worldModel.constellations[1].ego_vehicle_road.erase(worldModel.constellations[1].ego_vehicle_road.begin());
  }

  world::Object &getEgoObject() override
  {
    TESTBASE::objectOnSegment3.occupied_regions[0].lat_range.minimum = ParametricValue(0.8);
    TESTBASE::objectOnSegment3.occupied_regions[0].lat_range.maximum = ParametricValue(0.9);
    return TESTBASE::objectOnSegment3;
  }

  uint32_t getNumberOfConstellationObjects() override
  {
    return 2u;
  }

  world::Object &getConstellationObject(uint32_t index) override
  {
    if (index == 0u)
    {
      return TESTBASE::objectOnSegment0;
    }
    else
    {
      return TESTBASE::objectOnSegment6;
    }
  }
};

using RssCheckSameDirectionEgoInTheMiddleTest = RssCheckSameDirectionEgoInTheMiddleTestBase<RssCheckTestBase>;

TEST_F(RssCheckSameDirectionEgoInTheMiddleTest, DifferentDistances)
{
  performDifferentDistancesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionEgoInTheMiddleTest, DifferentVelocities)
{
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

using RssCheckSameDirectionOtherLeadingOutOfMemoryTest
  = RssCheckSameDirectionOtherLeadingTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckSameDirectionOtherLeadingOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckSameDirectionOtherLeadingOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

using RssCheckSameDirectionEgoLeadingOutOfMemoryTest
  = RssCheckSameDirectionEgoLeadingTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckSameDirectionEgoLeadingOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckSameDirectionEgoLeadingOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

using RssCheckSameDirectionEgoInTheMiddleOutOfMemoryTest
  = RssCheckSameDirectionEgoInTheMiddleTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckSameDirectionEgoInTheMiddleOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckSameDirectionEgoInTheMiddleOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

} // namespace core
} // namespace rss
} // namespace ad
