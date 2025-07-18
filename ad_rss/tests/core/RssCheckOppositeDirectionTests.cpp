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

template <class TESTBASE> class RssCheckOppositeDirectionEgoCorrectTestBase : public TESTBASE
{
  world::ConstellationType getConstellationType() override
  {
    return world::ConstellationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getConstellationObject(uint32_t) override
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
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 2;
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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

TEST_F(RssCheckOppositeDirectionEgoCorrectTest, DifferentVelocities_NoLateralConflict)
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

template <class TESTBASE> class RssCheckOppositeDirectionOtherCorrectTestBase : public TESTBASE
{
  world::LaneDrivingDirection getDrivingDirection() override
  {
    return world::LaneDrivingDirection::Negative;
  }

  world::ConstellationType getConstellationType() override
  {
    return world::ConstellationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getConstellationObject(uint32_t) override
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
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 2;
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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

template <class TESTBASE> class RssCheckOppositeDirectionBothCorrectTestBase : public TESTBASE
{
  world::LaneDrivingDirection getDrivingDirection() override
  {
    return world::LaneDrivingDirection::Bidirectional;
  }

  world::ConstellationType getConstellationType() override
  {
    return world::ConstellationType::OppositeDirection;
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  world::Object &getConstellationObject(uint32_t) override
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
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 2;
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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

} // namespace core
} // namespace rss
} // namespace ad
