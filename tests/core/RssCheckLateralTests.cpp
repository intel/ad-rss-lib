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
  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment5;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
    for (auto &scene : worldModel.scenes)
    {
      scene.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.01 * i));
      scene.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    }
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.scenes[0].object.velocity.speedLat,
                                                          worldModel.scenes[0].objectRssDynamics,
                                                          worldModel.scenes[0].egoVehicle.velocity.speedLat,
                                                          worldModel.egoVehicleRssDynamics);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    if (dMin < Distance(6) + worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum * Distance(5)
          - Distance(0.5))
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
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLat = kmhToMeterPerSec(0);
  }
  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    for (auto &scene : worldModel.scenes)
    {
      scene.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.01 * i);
      scene.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.01 * i + 0.1);
    }
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

TEST_F(RssCheckLateralEgoRightTest, Lateral_Velocity_Aways_From_Each_Other)
{
  worldModel.scenes[0].egoVehicle.velocity.speedLat = kmhToMeterPerSec(5);
  worldModel.scenes[0].object.velocity.speedLat = kmhToMeterPerSec(-5);

  ::ad_rss::world::AccelerationRestriction accelerationRestriction;
  ::ad_rss::core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.01 * i));
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    worldModel.timeIndex++;

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    testRestrictions(accelerationRestriction);
  }
}

template <class TESTBASE> class RssCheckLateralEgoLeftTestBase : public TESTBASE
{
  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment3;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t) override
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
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.01 * i);
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.01 * i + 0.1);
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.scenes[0].egoVehicle.velocity.speedLat,
                                                          worldModel.egoVehicleRssDynamics,
                                                          worldModel.scenes[0].object.velocity.speedLat,
                                                          worldModel.scenes[0].objectRssDynamics);

    ASSERT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));

    if (dMin < Distance(10) - worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum * Distance(5))
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

template <class TESTBASE> class RssCheckLateralEgoInTheMiddleTestBase : public TESTBASE
{
protected:
  using TESTBASE::worldModel;
  using TESTBASE::testRestrictions;

  void SetUp() override
  {
    TESTBASE::SetUp();
    // now we have to shorten the road areas for the two scenes
    // to make left and right side behave the same
    // otherwise we are more cautious on the left side
    worldModel.scenes[0].egoVehicleRoad.erase(worldModel.scenes[0].egoVehicleRoad.begin() + 2);
    worldModel.scenes[1].egoVehicleRoad.erase(worldModel.scenes[1].egoVehicleRoad.begin() + 2);
  }

  ::ad_rss::world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment4;
  }

  uint32_t getNumberOfSceneObjects() override
  {
    return 2u;
  }

  ::ad_rss::world::Object &getSceneObject(uint32_t index) override
  {
    if (index == 0u)
    {
      return TESTBASE::objectOnSegment3;
    }
    else
    {
      return TESTBASE::objectOnSegment5;
    }
  }

  void performTest()
  {
    for (uint32_t j = 1; j <= 9; j++)
    {
      if (worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum < ParametricValue(0.9))
      {
        worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum += ParametricValue(0.1);
      }
      if (worldModel.scenes[1].object.occupiedRegions[0].latRange.minimum > ParametricValue(0.08))
      {
        worldModel.scenes[1].object.occupiedRegions[0].latRange.minimum -= ParametricValue(0.08);
      }
      ::ad_rss::world::AccelerationRestriction accelerationRestriction;
      ::ad_rss::core::RssCheck rssCheck;
      bool safeLeftStateExists = false;
      bool safeRightStateExists = false;
      for (uint32_t i = 0; i <= 9; i++)
      {
        for (auto &scene : worldModel.scenes)
        {
          if (scene.egoVehicle.velocity.speedLat >= Speed(0.))
          {
            scene.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.1 * i);
            scene.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.1 * i + 0.1);
          }
          else
          {
            scene.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.1 * i));
            scene.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.1 * i + 0.1));
          }
        }
        worldModel.timeIndex++;

        state::LateralResponse expectedLatResponseLeft = state::LateralResponse::None;
        state::LateralResponse expectedLatResponseRight = state::LateralResponse::None;
        Distance const dMinLeft = calculateLateralMinSafeDistance(worldModel.scenes[0].object.velocity.speedLat,
                                                                  worldModel.scenes[0].objectRssDynamics,
                                                                  worldModel.scenes[0].egoVehicle.velocity.speedLat,
                                                                  worldModel.egoVehicleRssDynamics);
        Distance const dActualLeft
          = (ParametricValue(1) - worldModel.scenes[0].object.occupiedRegions[0].latRange.maximum
             + worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum)
          * Distance(5);
        if (dMinLeft > dActualLeft)
        {
          expectedLatResponseLeft = state::LateralResponse::BrakeMin;
        }
        else
        {
          safeLeftStateExists = true;
        }

        Distance const dMinRight = calculateLateralMinSafeDistance(worldModel.scenes[1].egoVehicle.velocity.speedLat,
                                                                   worldModel.egoVehicleRssDynamics,
                                                                   worldModel.scenes[1].object.velocity.speedLat,
                                                                   worldModel.scenes[1].objectRssDynamics);
        Distance const dActualRight
          = (ParametricValue(1) - worldModel.scenes[1].egoVehicle.occupiedRegions[0].latRange.maximum
             + worldModel.scenes[1].object.occupiedRegions[0].latRange.minimum)
          * Distance(5);
        if (dMinRight > dActualRight)
        {
          expectedLatResponseRight = state::LateralResponse::BrakeMin;
        }
        else
        {
          safeRightStateExists = true;
        }

        state::LongitudinalResponse expectedLonResponse = state::LongitudinalResponse::None;
        if (!safeLeftStateExists || !safeRightStateExists)
        {
          expectedLonResponse = state::LongitudinalResponse::BrakeMin;
        }

#if RSS_CHECK_TEST_DEBUG_OUT
        std::cout << "Testing[j=" << j << ", i=" << i << "]: dMinLeft=" << static_cast<double>(dMinLeft)
                  << " dActualLeft=" << static_cast<double>(dActualLeft)
                  << " dMinRight=" << static_cast<double>(dMinRight)
                  << " dActualRight=" << static_cast<double>(dActualRight) << std::endl;
#endif
        EXPECT_TRUE(rssCheck.calculateAccelerationRestriction(worldModel, accelerationRestriction));
        testRestrictions(
          accelerationRestriction, expectedLonResponse, expectedLatResponseLeft, expectedLatResponseRight);
      }
    }
  }
};

using RssCheckLateralEgoInTheMiddleTest = RssCheckLateralEgoInTheMiddleTestBase<RssCheckTestBase>;

using RssCheckLateralEgoInTheMiddleOutOfMemoryTest = RssCheckLateralEgoInTheMiddleTestBase<RssCheckOutOfMemoryTestBase>;
TEST_P(RssCheckLateralEgoInTheMiddleOutOfMemoryTest, outOfMemoryAnyTime)
{
  performOutOfMemoryTest();
}
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckLateralEgoInTheMiddleOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u)));

TEST_F(RssCheckLateralEgoInTheMiddleTest, No_Lateral_Velocity)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLat = kmhToMeterPerSec(0);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Left)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLat = kmhToMeterPerSec(-3);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Right)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLat = kmhToMeterPerSec(3);
  }

  performTest();
}

} // namespace core
} // namespace ad_rss
