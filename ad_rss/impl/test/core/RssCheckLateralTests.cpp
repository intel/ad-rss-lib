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

template <class TESTBASE> class RssCheckLateralEgoRightTestBase : public TESTBASE
{
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment5;
  }

  world::Object &getSceneObject(uint32_t) override
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
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckLateralEgoRightOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

TEST_F(RssCheckLateralEgoRightTest, Lateral_Velocity_Towards_Each_Other)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    for (auto &scene : worldModel.scenes)
    {
      scene.egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(1 - (0.01 * i));
      scene.egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    }
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.scenes[0].object.velocity.speedLatMax,
                                                          worldModel.scenes[0].objectRssDynamics,
                                                          worldModel.scenes[0].egoVehicle.velocity.speedLatMax,
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
    scene.egoVehicle.velocity.speedLatMin = kmhToMeterPerSec(0);
    scene.egoVehicle.velocity.speedLatMax = kmhToMeterPerSec(0);
  }
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

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
  worldModel.scenes[0].egoVehicle.velocity.speedLatMin = kmhToMeterPerSec(5);
  worldModel.scenes[0].egoVehicle.velocity.speedLatMax = kmhToMeterPerSec(5);
  worldModel.scenes[0].object.velocity.speedLatMin = kmhToMeterPerSec(-5);
  worldModel.scenes[0].object.velocity.speedLatMax = kmhToMeterPerSec(-5);

  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

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
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment3;
  }

  world::Object &getSceneObject(uint32_t) override
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
INSTANTIATE_TEST_CASE_P(Range,
                        RssCheckLateralEgoLeftOutOfMemoryTest,
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

TEST_F(RssCheckLateralEgoLeftTest, Lateral_Velocity_Towards_Each_Other)
{
  world::AccelerationRestriction accelerationRestriction;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.minimum = ParametricValue(0.01 * i);
    worldModel.scenes[0].egoVehicle.occupiedRegions[0].latRange.maximum = ParametricValue(0.01 * i + 0.1);
    worldModel.timeIndex++;

    Distance const dMin = calculateLateralMinSafeDistance(worldModel.scenes[0].egoVehicle.velocity.speedLatMax,
                                                          worldModel.egoVehicleRssDynamics,
                                                          worldModel.scenes[0].object.velocity.speedLatMax,
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

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment4;
  }

  uint32_t getNumberOfSceneObjects() override
  {
    return 2u;
  }

  world::Object &getSceneObject(uint32_t index) override
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
      world::AccelerationRestriction accelerationRestriction;
      core::RssCheck rssCheck;
      bool safeLeftStateExists = false;
      bool safeRightStateExists = false;
      for (uint32_t i = 0; i <= 9; i++)
      {
        for (auto &scene : worldModel.scenes)
        {
          if (scene.egoVehicle.velocity.speedLatMax >= Speed(0.))
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
        Distance const dMinLeft = calculateLateralMinSafeDistance(worldModel.scenes[0].object.velocity.speedLatMax,
                                                                  worldModel.scenes[0].objectRssDynamics,
                                                                  worldModel.scenes[0].egoVehicle.velocity.speedLatMax,
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

        Distance const dMinRight = calculateLateralMinSafeDistance(worldModel.scenes[1].egoVehicle.velocity.speedLatMax,
                                                                   worldModel.egoVehicleRssDynamics,
                                                                   worldModel.scenes[1].object.velocity.speedLatMax,
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
                        ::testing::Range(uint64_t(0u), uint64_t(50u), 1u));

TEST_F(RssCheckLateralEgoInTheMiddleTest, No_Lateral_Velocity)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLatMin = kmhToMeterPerSec(0);
    scene.egoVehicle.velocity.speedLatMax = kmhToMeterPerSec(0);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Left)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLatMin = kmhToMeterPerSec(-3);
    scene.egoVehicle.velocity.speedLatMax = kmhToMeterPerSec(-3);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Right)
{
  for (auto &scene : worldModel.scenes)
  {
    scene.egoVehicle.velocity.speedLatMin = kmhToMeterPerSec(3);
    scene.egoVehicle.velocity.speedLatMax = kmhToMeterPerSec(3);
  }

  performTest();
}

} // namespace core
} // namespace rss
} // namespace ad
