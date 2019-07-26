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

namespace ad {
namespace rss {
namespace core {

class RssCheckTimeIndexTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckTimeIndexTests, ZeroTimeIndex)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  world::TimeIndex timeIndexArray[] = {0u, 1u, 0u, 0u, 3u};
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
  world::AccelerationRestriction accelerationRestriction;
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
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  world::TimeIndex timeIndexArray[] = {1u, 1u, 2u, 2u, 3u, 3u};
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
} // namespace rss
} // namespace ad
