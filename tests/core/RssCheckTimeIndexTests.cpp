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

class RssCheckTimeIndexTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckTimeIndexTests, ZeroTimeIndex)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  physics::TimeIndex timeIndexArray[] = {0u, 1u, 0u, 0u, 3u};
  for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
  {
    worldModel.timeIndex = timeIndexArray[i];
    if (worldModel.timeIndex != 0u)
    {
      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
      testRestrictions(accelerationRestriction);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
    }
  }
}

TEST_F(RssCheckTimeIndexTests, TimeIndexIncrementValidity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  physics::TimeIndex timeIndexArray[] = {1u,
                                         2u,
                                         3u,
                                         4u,
                                         5u,
                                         100u,
                                         100000u,
                                         (std::numeric_limits<physics::TimeIndex>::max() / 4),
                                         2 * (std::numeric_limits<physics::TimeIndex>::max() / 4),
                                         3 * (std::numeric_limits<physics::TimeIndex>::max() / 4),
                                         4 * (std::numeric_limits<physics::TimeIndex>::max() / 4)};
  for (auto j : {1, 2})
  {
    // increment with overflow
    (void)j;
    for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
    {
      worldModel.timeIndex = timeIndexArray[i];
      ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
      testRestrictions(accelerationRestriction);
    }
  }
  for (auto j : {1, 2})
  {
    // decrement with overflow
    (void)j;
    for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
    {
      worldModel.timeIndex = timeIndexArray[ARRAYLEN(timeIndexArray) - i - 1];
      ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
    }
  }
}

TEST_F(RssCheckTimeIndexTests, FixedTimeIndexValidity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  physics::TimeIndex timeIndexArray[] = {1u, 1u, 2u, 2u, 3u, 3u};
  for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
  {
    {
      worldModel.timeIndex = timeIndexArray[i];
      if ((i % 2) == 0)
      {
        ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
        testRestrictions(accelerationRestriction);
      }
      else
      {
        ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
      }
    }
  }
}

} // namespace core
} // namespace ad_rss
