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

template <class TESTBASE> class RssCheckOppositeDirectionEgoCorrectTestBase : public TESTBASE
{
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 2;
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

template <class TESTBASE> class RssCheckOppositeDirectionOtherCorrectTestBase : public TESTBASE
{
  world::LaneDrivingDirection getDrivingDirection() override
  {
    return ::ad_rss::world::LaneDrivingDirection::Negative;
  }

  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 2;
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
    return ::ad_rss::world::LaneDrivingDirection::Bidirectional;
  }

  situation::SituationType getSituationType() override
  {
    return situation::SituationType::OppositeDirection;
  }

  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment1;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
  worldModel.egoVehicle.occupiedRegions[0].segmentId = 2;
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
} // namespace ad_rss
