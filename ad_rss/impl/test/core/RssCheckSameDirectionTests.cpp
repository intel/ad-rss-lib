// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
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

  world::Object &getSceneObject(uint32_t) override
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

  world::Object &getSceneObject(uint32_t) override
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
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentVelocities_NoLateralConflict)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].egoVehicle.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].egoVehicle.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, _DifferentVelocities_NoLateralConflict_2Objects)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);

  worldModel.scenes.push_back(worldModel.scenes.front());
  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.objectId = 2;

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].egoVehicle.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].egoVehicle.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

using RssCheckSameDirectionEgoLeadingTest = RssCheckSameDirectionEgoLeadingTestBase<RssCheckTestBase>;

TEST_F(RssCheckSameDirectionEgoLeadingTest, DifferentVelocities)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].object.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Front)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.5);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.4);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 6;
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.minimum = ParametricValue(0.35);

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].object.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Right)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.5);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.4);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].object.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Left)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.4);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.3);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].object.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

template <class TESTBASE> class RssCheckSameDirectionEgoInTheMiddleTestBase : public TESTBASE
{
protected:
  using TESTBASE::worldModel;
  void SetUp() override
  {
    TESTBASE::SetUp();
    // now we have to shorten the road areas for the two scenes otherwhise
    // the area is too big which restricts too much to handle in our test code
    worldModel.scenes[0].egoVehicleRoad.erase(worldModel.scenes[0].egoVehicleRoad.begin() + 2);
    worldModel.scenes[1].egoVehicleRoad.erase(worldModel.scenes[1].egoVehicleRoad.begin());
  }

  world::Object &getEgoObject() override
  {
    TESTBASE::objectOnSegment3.occupiedRegions[0].latRange.minimum = ParametricValue(0.8);
    TESTBASE::objectOnSegment3.occupiedRegions[0].latRange.maximum = ParametricValue(0.9);
    return TESTBASE::objectOnSegment3;
  }

  uint32_t getNumberOfSceneObjects() override
  {
    return 2u;
  }

  world::Object &getSceneObject(uint32_t index) override
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
