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

#include "RssCheckTestBaseT.hpp"

namespace ad_rss {
namespace core {

template <class TESTBASE> class RssCheckSameDirectionOtherLeadingTestBase : public TESTBASE
{
protected:
  virtual ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  virtual ::ad_rss::world::Object &getSceneObject() override
  {
    return TESTBASE::objectOnSegment7;
  }

  virtual Distance getMiddleRoadSegmentLength() override
  {
    return Distance(2);
  }
};

template <class TESTBASE> class RssCheckSameDirectionEgoLeadingTestBase : public TESTBASE
{
protected:
  virtual ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment7;
  }

  virtual ::ad_rss::world::Object &getSceneObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  virtual Distance getMiddleRoadSegmentLength() override
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
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, DifferentVelocities_NoLateralConflict)
{
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionOtherLeadingTest, _DifferentVelocities_NoLateralConflict_2Scenes)
{
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);

  worldModel.scenes.push_back(scene);
  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.occupiedRegions[0].segmentId = 8;
  worldModel.scenes[1].object.objectId = 2;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

using RssCheckSameDirectionEgoLeadingTest = RssCheckSameDirectionEgoLeadingTestBase<RssCheckTestBase>;

TEST_F(RssCheckSameDirectionEgoLeadingTest, DifferentVelocities)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Front)
{
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 8;
  worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.4);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 6;
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Right)
{
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.4);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckSameDirectionEgoLeadingTest, Overlap_Left)
{
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 5;
  worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.4);
  worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.3);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 2;
  worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum = ParametricValue(0.45);
  worldModel.scenes[0].object.occupiedRegions[0].latRange.minimum = ParametricValue(0.35);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].object.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    // no matter how fast the following vehicle is, the ego must never brake as it leads
    testRestrictions(accelerationRestriction);
  }
}

using RssCheckSameDirectionOtherLeadingOutOfMemoryTest
  = RssCheckSameDirectionOtherLeadingTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckSameDirectionOtherLeadingOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckSameDirectionOtherLeadingOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

using RssCheckSameDirectionEgoLeadingOutOfMemoryTest
  = RssCheckSameDirectionOtherLeadingTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckSameDirectionEgoLeadingOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckSameDirectionEgoLeadingOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

} // namespace core
} // namespace ad_rss
