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

template <class TESTBASE> class RssCheckNotRelevantTestBase : public TESTBASE
{
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::NotRelevant;
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

using RssCheckNotRelevantTest = RssCheckNotRelevantTestBase<RssCheckTestBase>;

TEST_F(RssCheckNotRelevantTest, NotRelevant)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 8;

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 0;
  worldModel.scenes[0].situationType = situation::SituationType::NotRelevant;

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].egoVehicle.velocity.speedLonMin = kmhToMeterPerSec(i);
    worldModel.scenes[0].egoVehicle.velocity.speedLonMax = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    testRestrictions(properResponse.accelerationRestrictions);
  }
}

using RssCheckNotRelevantOutOfMemoryTest = RssCheckNotRelevantTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckNotRelevantOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range, RssCheckNotRelevantOutOfMemoryTest, ::testing::Range(uint64_t(0u), uint64_t(50u), 1u), );

} // namespace core
} // namespace rss
} // namespace ad
