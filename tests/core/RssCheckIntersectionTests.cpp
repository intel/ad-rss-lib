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

template <class TESTBASE> class RssCheckIntersectionTestBase : public TESTBASE
{
protected:
  using TESTBASE::worldModel;
  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment0;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment8;
  }

  virtual bool isBrakeExpected(uint32_t i) = 0;

  void performIntersectionTest()
  {
    ::ad_rss::world::AccelerationRestriction accelerationRestriction;
    ::ad_rss::core::RssCheck rssCheck;
    for (auto egoVehicleSegmentId : {world::LaneSegmentId(0), world::LaneSegmentId(3)})
    {
      for (auto &scene : worldModel.scenes)
      {
        scene.egoVehicle.occupiedRegions[0].segmentId = egoVehicleSegmentId;
      }
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
        std::cout << "Testing: segment[" << egoVehicleSegmentId << "] range min=" << i
                  << " brake?=" << isBrakeExpected(i) << std::endl;
#endif
        if (isBrakeExpected(i))
        {
          TESTBASE::testRestrictions(accelerationRestriction, state::LongitudinalResponse::BrakeMin);
        }
        else
        {
          TESTBASE::testRestrictions(accelerationRestriction);
        }
      }
    }
  }
};

template <class TESTBASE>
class RssCheckIntersectionEgoHasPriorityTestBase : public RssCheckIntersectionTestBase<TESTBASE>
{
protected:
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::IntersectionEgoHasPriority;
  }

  bool isBrakeExpected(uint32_t i) override
  {
    bool const egoVehicleFaraway
      = (i < 11) || (TESTBASE::worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId == world::LaneSegmentId(0));
    bool const egoVehicleInFront
      = (i > 64) && (TESTBASE::worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId == world::LaneSegmentId(3));

    return !egoVehicleFaraway && !egoVehicleInFront;
  }
};

using RssCheckIntersectionEgoHasPriorityTest = RssCheckIntersectionEgoHasPriorityTestBase<RssCheckTestBase>;

using RssCheckIntersectionEgoHasPriorityOutOfMemoryTest
  = RssCheckIntersectionEgoHasPriorityTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckIntersectionEgoHasPriorityOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckIntersectionEgoHasPriorityOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckIntersectionEgoHasPriorityTest, IntersectionTest)
{
  performIntersectionTest();
}

TEST_F(RssCheckIntersectionEgoHasPriorityTest, IntersectionDescriptionIsExtended)
{
  worldModel.scenes[0].egoVehicleRoad.push_back(worldModel.scenes[0].egoVehicleRoad.front());
  performIntersectionTest();
}

template <class TESTBASE>
class RssCheckIntersectionObjectHasPriorityTestBase : public RssCheckIntersectionTestBase<TESTBASE>
{
protected:
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::IntersectionObjectHasPriority;
  }

  bool isBrakeExpected(uint32_t i) override
  {
    bool const egoVehicleNearEnough
      = (TESTBASE::worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId == world::LaneSegmentId(3)) && (i > 54);

    return egoVehicleNearEnough;
  }
};

using RssCheckIntersectionObjectHasPriorityTest = RssCheckIntersectionObjectHasPriorityTestBase<RssCheckTestBase>;

using RssCheckIntersectionObjectHasPriorityOutOfMemoryTest
  = RssCheckIntersectionObjectHasPriorityTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckIntersectionObjectHasPriorityOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckIntersectionObjectHasPriorityOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckIntersectionObjectHasPriorityTest, IntersectionTest)
{
  performIntersectionTest();
}

template <class TESTBASE> class RssCheckIntersectionSamePriorityTestBase : public RssCheckIntersectionTestBase<TESTBASE>
{
protected:
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::IntersectionSamePriority;
  }

  bool isBrakeExpected(uint32_t i) override
  {
    return (TESTBASE::worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId == world::LaneSegmentId(3))
      && (i > 54);
  }
};

using RssCheckIntersectionSamePriorityTest = RssCheckIntersectionSamePriorityTestBase<RssCheckTestBase>;

using RssCheckIntersectionSamePriorityOutOfMemoryTest
  = RssCheckIntersectionSamePriorityTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckIntersectionSamePriorityOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckIntersectionSamePriorityOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckIntersectionSamePriorityTest, IntersectionTest)
{
  performIntersectionTest();
}

} // namespace core
} // namespace ad_rss
