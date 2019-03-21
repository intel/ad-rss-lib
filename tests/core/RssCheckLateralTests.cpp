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

template <class TESTBASE> class RssCheckLateralEgoRightTestBase : public TESTBASE
{
  virtual ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment5;
  }

  virtual ::ad_rss::world::Object &getSceneObject() override
  {
    return TESTBASE::objectOnSegment3;
  }
};

using RssCheckLateralEgoRightTest = RssCheckLateralEgoRightTestBase<RssCheckTestBase>;

using RssCheckLateralEgoRightOutOfMemoryTest = RssCheckLateralEgoRightTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckLateralEgoRightOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range, RssCheckLateralEgoRightOutOfMemoryTest, ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckLateralEgoRightTest, Lateral_Velocity_Towards_Each_Other)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.01 * i));
    worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.scenes[0].object, worldModel.egoVehicle);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    if (dMin < Distance(6) + worldModel.egoVehicle.occupiedRegions[0].latRange.minimum * Distance(5) - Distance(0.5))
    {
      testRestrictions(accelerationRestriction);
    }
    else
    {
      testRestrictions(accelerationRestriction,
                       state::LongitudinalResponse::None,
                       state::LateralResponse::BrakeMin,
                       state::LateralResponse::None);
    }
  }
}

TEST_F(RssCheckLateralEgoRightTest, No_Lateral_Velocity)
{
  worldModel.egoVehicle.velocity.speedLat = kmhToMeterPerSec(0);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.01 * i);
    worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.01 * i + 0.1);
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckLateralEgoRightTest, Lateral_Velocity_Aways_From_Each_Other)
{
  worldModel.egoVehicle.velocity.speedLat = kmhToMeterPerSec(5);
  worldModel.scenes[0].object.velocity.speedLat = kmhToMeterPerSec(-5);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.01 * i));
    worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

template <class TESTBASE> class RssCheckLateralEgoLeftTestBase : public TESTBASE
{
  virtual ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment3;
  }

  virtual ::ad_rss::world::Object &getSceneObject() override
  {
    return TESTBASE::objectOnSegment5;
  }
};

using RssCheckLateralEgoLeftTest = RssCheckLateralEgoLeftTestBase<RssCheckTestBase>;

using RssCheckLateralEgoLeftOutOfMemoryTest = RssCheckLateralEgoLeftTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckLateralEgoLeftOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range, RssCheckLateralEgoLeftOutOfMemoryTest, ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckLateralEgoLeftTest, Lateral_Velocity_Towards_Each_Other)
{
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.01 * i);
    worldModel.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.01 * i + 0.1);
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.egoVehicle, worldModel.scenes[0].object);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    if (dMin < Distance(10) - worldModel.egoVehicle.occupiedRegions[0].latRange.maximum * Distance(5))
    {
      testRestrictions(accelerationRestriction);
    }
    else
    {
      testRestrictions(accelerationRestriction,
                       state::LongitudinalResponse::None,
                       state::LateralResponse::None,
                       state::LateralResponse::BrakeMin);
    }
  }
}

} // namespace core
} // namespace ad_rss
