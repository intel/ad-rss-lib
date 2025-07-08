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

template <class TESTBASE> class RssCheckNotRelevantTestBase : public TESTBASE
{
  world::ConstellationType getConstellationType() override
  {
    return world::ConstellationType::NotRelevant;
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

using RssCheckNotRelevantTest = RssCheckNotRelevantTestBase<RssCheckTestBase>;

TEST_F(RssCheckNotRelevantTest, NotRelevant)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].segment_id = 8;

  worldModel.constellations[0].object.occupied_regions[0].segment_id = 0;
  worldModel.constellations[0].constellation_type = world::ConstellationType::NotRelevant;

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

using RssCheckNotRelevantOutOfMemoryTest = RssCheckNotRelevantTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckNotRelevantOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range, RssCheckNotRelevantOutOfMemoryTest, ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

} // namespace core
} // namespace rss
} // namespace ad
