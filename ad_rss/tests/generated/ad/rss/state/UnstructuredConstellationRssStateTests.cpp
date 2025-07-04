/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/state/UnstructuredConstellationRssState.hpp"

class UnstructuredConstellationRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::UnstructuredConstellationRssState value;
    bool valueIs_safe{true};
    value.is_safe = valueIs_safe;
    ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
    value.response = valueResponse;
    ::ad::geometry::HeadingRange valueHeading_range;
    ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
    valueHeading_range.begin = valueHeading_rangeBegin;
    ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
    valueHeading_range.end = valueHeading_rangeEnd;
    value.heading_range = valueHeading_range;
    ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
    ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
    ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
    valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
    valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
    valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
    valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
    ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
    valueRss_state_informationContinue_forward_trajectory_setElement.x
      = valueRss_state_informationContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
    valueRss_state_informationContinue_forward_trajectory_setElement.y
      = valueRss_state_informationContinue_forward_trajectory_setElementY;
    valueRss_state_informationContinue_forward_trajectory_set.resize(
      1, valueRss_state_informationContinue_forward_trajectory_setElement);
    valueRss_state_information.continue_forward_trajectory_set
      = valueRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
    valueRss_state_information.considered_drive_away_steering_angle
      = valueRss_state_informationConsidered_drive_away_steering_angle;
    value.rss_state_information = valueRss_state_information;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
    ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
    valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
    valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
    valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
    valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
    valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
    valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
    valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
    valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
    value.alpha_lon = valueAlpha_lon;
    mValue = value;
  }

  ::ad::rss::state::UnstructuredConstellationRssState mValue;
};

TEST_F(UnstructuredConstellationRssStateTests, copyConstruction)
{
  ::ad::rss::state::UnstructuredConstellationRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationRssStateTests, moveConstruction)
{
  ::ad::rss::state::UnstructuredConstellationRssState tmpValue(mValue);
  ::ad::rss::state::UnstructuredConstellationRssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationRssStateTests, copyAssignment)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationRssStateTests, moveAssignment)
{
  ::ad::rss::state::UnstructuredConstellationRssState tmpValue(mValue);
  ::ad::rss::state::UnstructuredConstellationRssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredConstellationRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorIs_safeDiffers)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  bool is_safe{false};
  valueA.is_safe = is_safe;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationResponse response(
    ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  valueA.response = response;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorHeading_rangeDiffers)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  ::ad::geometry::HeadingRange heading_range;
  ::ad::physics::Angle heading_rangeBegin(6.283185308);
  heading_range.begin = heading_rangeBegin;
  ::ad::physics::Angle heading_rangeEnd(6.283185308);
  heading_range.end = heading_rangeEnd;
  valueA.heading_range = heading_range;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorRss_state_informationDiffers)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationStateInformation rss_state_information;
  ::ad::physics::Distance2DList rss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D rss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance rss_state_informationBrake_trajectory_setElementX(1e9);
  rss_state_informationBrake_trajectory_setElement.x = rss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance rss_state_informationBrake_trajectory_setElementY(1e9);
  rss_state_informationBrake_trajectory_setElement.y = rss_state_informationBrake_trajectory_setElementY;
  rss_state_informationBrake_trajectory_set.resize(2, rss_state_informationBrake_trajectory_setElement);
  rss_state_information.brake_trajectory_set = rss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList rss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D rss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance rss_state_informationContinue_forward_trajectory_setElementX(1e9);
  rss_state_informationContinue_forward_trajectory_setElement.x
    = rss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance rss_state_informationContinue_forward_trajectory_setElementY(1e9);
  rss_state_informationContinue_forward_trajectory_setElement.y
    = rss_state_informationContinue_forward_trajectory_setElementY;
  rss_state_informationContinue_forward_trajectory_set.resize(
    2, rss_state_informationContinue_forward_trajectory_setElement);
  rss_state_information.continue_forward_trajectory_set = rss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle rss_state_informationConsidered_drive_away_steering_angle(6.283185308);
  rss_state_information.considered_drive_away_steering_angle
    = rss_state_informationConsidered_drive_away_steering_angle;
  valueA.rss_state_information = rss_state_information;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationRssStateTests, comparisonOperatorAlpha_lonDiffers)
{
  ::ad::rss::state::UnstructuredConstellationRssState valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues alpha_lon;
  ::ad::physics::Acceleration alpha_lonAccel_max(1e2);
  alpha_lon.accel_max = alpha_lonAccel_max;
  ::ad::physics::Acceleration alpha_lonBrake_max(1e2);
  alpha_lon.brake_max = alpha_lonBrake_max;
  ::ad::physics::Acceleration alpha_lonBrake_min(1e2);
  alpha_lon.brake_min = alpha_lonBrake_min;
  ::ad::physics::Acceleration alpha_lonBrake_min_correct(1e2);
  alpha_lonBrake_min_correct = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alpha_lon.brake_min_correct = alpha_lonBrake_min_correct;
  alpha_lon.brake_min_correct = alpha_lon.brake_min;
  alpha_lon.brake_min = alpha_lon.brake_max;
  alpha_lon.brake_max = alpha_lon.brake_min;
  alpha_lon.brake_min = alpha_lon.brake_min_correct;
  valueA.alpha_lon = alpha_lon;
  ::ad::rss::state::UnstructuredConstellationRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
