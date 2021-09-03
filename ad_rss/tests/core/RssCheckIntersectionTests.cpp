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

template <class TESTBASE> class RssCheckIntersectionTestBase : public TESTBASE
{
protected:
  using TESTBASE::worldModel;
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment0;
  }

  world::Object &getSceneObject(uint32_t) override
  {
    return TESTBASE::objectOnSegment8;
  }

  virtual bool isBrakeExpected(uint32_t i) = 0;

  void performIntersectionTest()
  {
    state::ProperResponse properResponse;
    core::RssCheck rssCheck;
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

        ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

#if RSS_CHECK_TEST_DEBUG_OUT
        std::cout << "Testing: segment[" << egoVehicleSegmentId << "] range min=" << i
                  << " brake?=" << isBrakeExpected(i) << std::endl;
#endif
        if (isBrakeExpected(i))
        {
          TESTBASE::testRestrictions(properResponse.accelerationRestrictions, state::LongitudinalResponse::BrakeMin);
        }
        else
        {
          TESTBASE::testRestrictions(properResponse.accelerationRestrictions);
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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

TEST_F(RssCheckIntersectionSamePriorityTest, IntersectionTest)
{
  performIntersectionTest();
}

} // namespace core
} // namespace rss
} // namespace ad
