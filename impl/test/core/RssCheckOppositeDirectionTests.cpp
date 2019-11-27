// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"

namespace ad {
namespace rss {
namespace core {

template <class TESTBASE> class RssCheckOppositeDirectionEgoCorrectTestBase : public TESTBASE
{
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getSceneObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment7;
  }
};

using RssCheckOppositeDirectionEgoCorrectTest = RssCheckOppositeDirectionEgoCorrectTestBase<RssCheckTestBase>;
TEST_F(RssCheckOppositeDirectionEgoCorrectTest, DifferentDistances)
{
  performDifferentDistancesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RssCheckOppositeDirectionEgoCorrectTest, DifferentVelocities)
{
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RssCheckOppositeDirectionEgoCorrectTest, DifferentVelocities_DifferentLaneSegements)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

using RssCheckOppositeDirectionEgoCorrectOutOfMemoryTest
  = RssCheckOppositeDirectionEgoCorrectTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckOppositeDirectionEgoCorrectOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckOppositeDirectionEgoCorrectOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckOppositeDirectionEgoCorrectTest, DifferentVelocities_NoLateralConflict)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 0;
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.0);
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1);

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 8;

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

template <class TESTBASE> class RssCheckOppositeDirectionOtherCorrectTestBase : public TESTBASE
{
  world::LaneDrivingDirection getDrivingDirection() override
  {
    return world::LaneDrivingDirection::Negative;
  }

  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getSceneObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment7;
  }
};

using RssCheckOppositeDirectionOtherCorrectTest = RssCheckOppositeDirectionOtherCorrectTestBase<RssCheckTestBase>;
TEST_F(RssCheckOppositeDirectionOtherCorrectTest, DifferentDistances)
{
  performDifferentDistancesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckOppositeDirectionOtherCorrectTest, DifferentVelocities)
{
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

TEST_F(RssCheckOppositeDirectionOtherCorrectTest, DifferentVelocities_DifferentLaneSegements)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMin);
}

using RssCheckOppositeDirectionOtherCorrectOutOfMemoryTest
  = RssCheckOppositeDirectionOtherCorrectTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckOppositeDirectionOtherCorrectOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckOppositeDirectionOtherCorrectOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

template <class TESTBASE> class RssCheckOppositeDirectionBothCorrectTestBase : public TESTBASE
{
  world::LaneDrivingDirection getDrivingDirection() override
  {
    return world::LaneDrivingDirection::Bidirectional;
  }

  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getSceneObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment7;
  }
};

using RssCheckOppositeDirectionBothCorrectTest = RssCheckOppositeDirectionBothCorrectTestBase<RssCheckTestBase>;
TEST_F(RssCheckOppositeDirectionBothCorrectTest, DifferentDistances)
{
  performDifferentDistancesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RssCheckOppositeDirectionBothCorrectTest, DifferentVelocities)
{
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

TEST_F(RssCheckOppositeDirectionBothCorrectTest, DifferentVelocities_DifferentLaneSegements)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 2;
  performDifferentVelocitiesTest(state::LongitudinalResponse::BrakeMinCorrect);
}

using RssCheckOppositeDirectionBothCorrectOutOfMemoryTest
  = RssCheckOppositeDirectionBothCorrectTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckOppositeDirectionBothCorrectOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckOppositeDirectionBothCorrectOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

} // namespace core
} // namespace rss
} // namespace ad
