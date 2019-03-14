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

class RssCheckTests : public RssCheckTestBaseT<testing::Test>
{
};

TEST_F(RssCheckTests, validateTestSetup)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckTests, EmptyRoad)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes[0].egoVehicleRoad.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, EmptyScene)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.scenes.clear();

  ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssCheckTests, EmptyEgoOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions.clear();

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, WrongEgoOccupiedRegion)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.occupiedRegions[0].lonRange.minimum = ParametricValue(0.5);
  worldModel.egoVehicle.occupiedRegions[0].lonRange.maximum = ParametricValue(0.3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, NegativeEgoVelocity)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.velocity.speedLon = Speed(-3.);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

TEST_F(RssCheckTests, NegativeEgoAcceleration)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  worldModel.egoVehicle.dynamics.alphaLon.accelMax = Acceleration(-3);

  ASSERT_FALSE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
}

} // namespace core
} // namespace ad_rss
