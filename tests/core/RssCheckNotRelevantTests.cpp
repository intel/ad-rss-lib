// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"

namespace ad_rss {
namespace core {

template <class TESTBASE> class RssCheckNotRelevantTestBase : public TESTBASE
{
  situation::SituationType getSituationType() override
  {
    return situation::SituationType::NotRelevant;
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

using RssCheckNotRelevantTest = RssCheckNotRelevantTestBase<RssCheckTestBase>;

TEST_F(RssCheckNotRelevantTest, NotRelevant)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].segmentId = 8;

  worldModel.scenes[0].object.occupiedRegions[0].segmentId = 0;
  worldModel.scenes[0].situationType = ::ad_rss::situation::SituationType::NotRelevant;

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i < 100; i++)
  {
    worldModel.scenes[0].egoVehicle.velocity.speedLon = kmhToMeterPerSec(i);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

using RssCheckNotRelevantOutOfMemoryTest = RssCheckNotRelevantTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckNotRelevantOutOfMemoryTest, outOfMemoryAnyTime)
{
  // throw at some vaules will succeed, but that's expected in this case as no actual calculations are performed.
  performOutOfMemoryTest({3u, 5u, 6u});
}
INSTANTIATE_TEST_CASE_P(Range, RssCheckNotRelevantOutOfMemoryTest, ::testing::Range(uint64_t(0u), uint64_t(50u)));

} // namespace core
} // namespace ad_rss
