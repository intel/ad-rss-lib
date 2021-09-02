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

class RssCheckTimeIndexTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckTimeIndexTests, ZeroTimeIndex)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  world::TimeIndex timeIndexArray[] = {0u, 1u, 0u, 0u, 3u};
  for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
  {
    worldModel.timeIndex = timeIndexArray[i];
    if (worldModel.timeIndex != 0u)
    {
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
      testRestrictions(properResponse.accelerationRestrictions);
    }
    else
    {
      ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
    }
  }
}

TEST_F(RssCheckTimeIndexTests, TimeIndexIncrementValidity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  world::TimeIndex timeIndexArray[] = {1u,
                                       2u,
                                       3u,
                                       4u,
                                       5u,
                                       100u,
                                       100000u,
                                       (std::numeric_limits<world::TimeIndex>::max() / 4),
                                       2 * (std::numeric_limits<world::TimeIndex>::max() / 4),
                                       3 * (std::numeric_limits<world::TimeIndex>::max() / 4),
                                       4 * (std::numeric_limits<world::TimeIndex>::max() / 4)};
  for (auto j : {1, 2})
  {
    // increment with overflow
    (void)j;
    for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
    {
      worldModel.timeIndex = timeIndexArray[i];
      ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
      testRestrictions(properResponse.accelerationRestrictions);
    }
  }
  for (auto j : {1, 2})
  {
    // decrement with overflow
    (void)j;
    for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
    {
      worldModel.timeIndex = timeIndexArray[ARRAYLEN(timeIndexArray) - i - 1];
      ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
    }
  }
}

TEST_F(RssCheckTimeIndexTests, FixedTimeIndexValidity)
{
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  world::TimeIndex timeIndexArray[] = {1u, 1u, 2u, 2u, 3u, 3u};
  for (size_t i = 0; i < ARRAYLEN(timeIndexArray); ++i)
  {
    {
      worldModel.timeIndex = timeIndexArray[i];
      if ((i % 2) == 0)
      {
        ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
        testRestrictions(properResponse.accelerationRestrictions);
      }
      else
      {
        ASSERT_FALSE(rssCheck.calculateProperResponse(worldModel, properResponse));
      }
    }
  }
}

} // namespace core
} // namespace rss
} // namespace ad
