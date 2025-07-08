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

template <class TESTBASE> class RssCheckLateralEgoRightTestBase : public TESTBASE
{
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment5;
  }

  world::Object &getConstellationObject(uint32_t) override
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
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    for (auto &constellation : worldModel.constellations)
    {
      constellation.ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(1 - (0.01 * i));
      constellation.ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(1 - (0.01 * i + 0.1));
    }
    worldModel.time_index++;

    Distance const dMin
      = calculateLateralMinSafeDistance(worldModel.constellations[0].object.velocity.speed_lat_max,
                                        worldModel.constellations[0].object_rss_dynamics,
                                        worldModel.constellations[0].ego_vehicle.velocity.speed_lat_max,
                                        worldModel.constellations[0].ego_vehicle_rss_dynamics);

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    Distance const dCur = Distance(6)
      + worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum * Distance(5) - Distance(0.5);
    if (dMin < dCur)
    {
      testRestrictions(properResponse.acceleration_restrictions);
    }
    else
    {
      testRestrictions(properResponse.acceleration_restrictions,
                       state::LongitudinalResponse::None,
                       state::LateralResponse::BrakeMin,
                       state::LateralResponse::None);
    }
  }
}

TEST_F(RssCheckLateralEgoRightTest, No_Lateral_Velocity)
{
  for (auto &constellation : worldModel.constellations)
  {
    constellation.ego_vehicle.velocity.speed_lat_min = kmhToMeterPerSec(0);
    constellation.ego_vehicle.velocity.speed_lat_max = kmhToMeterPerSec(0);
  }
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    for (auto &constellation : worldModel.constellations)
    {
      constellation.ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.01 * i);
      constellation.ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.01 * i + 0.1);
    }
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    testRestrictions(properResponse.acceleration_restrictions);
  }
}

TEST_F(RssCheckLateralEgoRightTest, Lateral_Velocity_Aways_From_Each_Other)
{
  worldModel.constellations[0].ego_vehicle.velocity.speed_lat_min = kmhToMeterPerSec(5);
  worldModel.constellations[0].ego_vehicle.velocity.speed_lat_max = kmhToMeterPerSec(5);
  worldModel.constellations[0].object.velocity.speed_lat_min = kmhToMeterPerSec(-5);
  worldModel.constellations[0].object.velocity.speed_lat_max = kmhToMeterPerSec(-5);

  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(1 - (0.01 * i));
    worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum
      = ParametricValue(1 - (0.01 * i + 0.1));
    worldModel.time_index++;

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    testRestrictions(properResponse.acceleration_restrictions);
  }
}

template <class TESTBASE> class RssCheckLateralEgoLeftTestBase : public TESTBASE
{
  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment3;
  }

  world::Object &getConstellationObject(uint32_t) override
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
  state::ProperResponse properResponse;
  core::RssCheck rssCheck;

  // increase lateral speed to enforce unsafe cases
  worldModel.constellations[0].ego_vehicle.velocity.speed_lat_max += ad::physics::Speed(0.5);
  worldModel.constellations[0].object.velocity.speed_lat_min -= ad::physics::Speed(0.5);
  for (uint32_t i = 0; i <= 90; i++)
  {
    worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.01 * i);
    worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.01 * i + 0.1);
    worldModel.time_index++;

    Distance const dMin
      = calculateLateralMinSafeDistance(worldModel.constellations[0].ego_vehicle.velocity.speed_lat_max,
                                        worldModel.constellations[0].ego_vehicle_rss_dynamics,
                                        worldModel.constellations[0].object.velocity.speed_lat_min,
                                        worldModel.constellations[0].object_rss_dynamics);

    ASSERT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));

    auto const dCur
      = Distance(10) - worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.maximum * Distance(5);
    if (dMin < dCur)
    {
      testRestrictions(properResponse.acceleration_restrictions);
    }
    else
    {
      testRestrictions(properResponse.acceleration_restrictions,
                       state::LongitudinalResponse::None,
                       state::LateralResponse::None,
                       state::LateralResponse::BrakeMin);
    }
  }
}

template <class TESTBASE> class RssCheckLateralEgoInTheMiddleTestBase : public TESTBASE
{
protected:
  using TESTBASE::testRestrictions;
  using TESTBASE::worldModel;

  void SetUp() override
  {
    TESTBASE::SetUp();
    // now we have to shorten the road areas for the two constellations
    // to make left and right side behave the same
    // otherwise we are more cautious on the left side
    worldModel.constellations[0].ego_vehicle_road.erase(worldModel.constellations[0].ego_vehicle_road.begin() + 2);
    worldModel.constellations[1].ego_vehicle_road.erase(worldModel.constellations[1].ego_vehicle_road.begin() + 2);
  }

  world::Object &getEgoObject() override
  {
    return TESTBASE::objectOnSegment4;
  }

  uint32_t getNumberOfConstellationObjects() override
  {
    return 2u;
  }

  world::Object &getConstellationObject(uint32_t index) override
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
      if (worldModel.constellations[0].object.occupied_regions[0].lat_range.maximum < ParametricValue(0.9))
      {
        worldModel.constellations[0].object.occupied_regions[0].lat_range.maximum += ParametricValue(0.1);
      }
      if (worldModel.constellations[1].object.occupied_regions[0].lat_range.minimum > ParametricValue(0.08))
      {
        worldModel.constellations[1].object.occupied_regions[0].lat_range.minimum -= ParametricValue(0.08);
      }
      state::ProperResponse properResponse;
      core::RssCheck rssCheck;
      bool safeLeftStateExists = false;
      bool safeRightStateExists = false;
      for (uint32_t i = 0; i <= 9; i++)
      {
        for (auto &constellation : worldModel.constellations)
        {
          if (constellation.ego_vehicle.velocity.speed_lat_max >= Speed(0.))
          {
            constellation.ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(0.1 * i);
            constellation.ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(0.1 * i + 0.1);
          }
          else
          {
            constellation.ego_vehicle.occupied_regions[0].lat_range.maximum = ParametricValue(1 - (0.1 * i));
            constellation.ego_vehicle.occupied_regions[0].lat_range.minimum = ParametricValue(1 - (0.1 * i + 0.1));
          }
        }
        worldModel.time_index++;

        state::LateralResponse expectedLatResponseLeft = state::LateralResponse::None;
        state::LateralResponse expectedLatResponseRight = state::LateralResponse::None;
        Distance const dMinLeft
          = calculateLateralMinSafeDistance(worldModel.constellations[0].object.velocity.speed_lat_max,
                                            worldModel.constellations[0].object_rss_dynamics,
                                            worldModel.constellations[0].ego_vehicle.velocity.speed_lat_max,
                                            worldModel.constellations[0].ego_vehicle_rss_dynamics);
        Distance const dActualLeft
          = (ParametricValue(1) - worldModel.constellations[0].object.occupied_regions[0].lat_range.maximum
             + worldModel.constellations[0].ego_vehicle.occupied_regions[0].lat_range.minimum)
          * Distance(5);
        if (dMinLeft > dActualLeft)
        {
          expectedLatResponseLeft = state::LateralResponse::BrakeMin;
        }
        else
        {
          safeLeftStateExists = true;
        }

        Distance const dMinRight
          = calculateLateralMinSafeDistance(worldModel.constellations[1].ego_vehicle.velocity.speed_lat_max,
                                            worldModel.constellations[1].ego_vehicle_rss_dynamics,
                                            worldModel.constellations[1].object.velocity.speed_lat_max,
                                            worldModel.constellations[1].object_rss_dynamics);
        Distance const dActualRight
          = (ParametricValue(1) - worldModel.constellations[1].ego_vehicle.occupied_regions[0].lat_range.maximum
             + worldModel.constellations[1].object.occupied_regions[0].lat_range.minimum)
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
                  << " dActualLeft=" << static_cast<double>(dActualLeft) << " leftResponse="
                  << ((expectedLatResponseLeft == state::LateralResponse::BrakeMin) ? "BrakeMin" : "None")
                  << " dMinRight=" << static_cast<double>(dMinRight)
                  << " dActualRight=" << static_cast<double>(dActualRight) << " rightResponse="
                  << ((expectedLatResponseRight == state::LateralResponse::BrakeMin) ? "BrakeMin" : "None")
                  << " lonResponse="
                  << ((expectedLonResponse == state::LongitudinalResponse::BrakeMin) ? "BrakeMin" : "None")
                  << std::endl;
#endif
        EXPECT_TRUE(rssCheck.calculateProperResponse(worldModel, properResponse));
        testRestrictions(properResponse.acceleration_restrictions,
                         expectedLonResponse,
                         expectedLatResponseLeft,
                         expectedLatResponseRight);
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
  for (auto &constellation : worldModel.constellations)
  {
    constellation.ego_vehicle.velocity.speed_lat_min = kmhToMeterPerSec(0);
    constellation.ego_vehicle.velocity.speed_lat_max = kmhToMeterPerSec(0);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Left)
{
  for (auto &constellation : worldModel.constellations)
  {
    constellation.ego_vehicle.velocity.speed_lat_min = kmhToMeterPerSec(-3);
    constellation.ego_vehicle.velocity.speed_lat_max = kmhToMeterPerSec(-3);
  }

  performTest();
}

TEST_F(RssCheckLateralEgoInTheMiddleTest, Lateral_Velocity_To_The_Right)
{
  for (auto &constellation : worldModel.constellations)
  {
    constellation.ego_vehicle.velocity.speed_lat_min = kmhToMeterPerSec(3);
    constellation.ego_vehicle.velocity.speed_lat_max = kmhToMeterPerSec(3);
  }

  performTest();
}

} // namespace core
} // namespace rss
} // namespace ad
