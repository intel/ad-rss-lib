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
#include "ad/rss/state/LongitudinalRssState.hpp"

class LongitudinalRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::LongitudinalRssState value;
    bool valueIs_safe{true};
    value.is_safe = valueIs_safe;
    ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
    value.response = valueResponse;
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
    ::ad::rss::state::RssStateInformation valueRss_state_information;
    ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
    valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
    ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
    valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
    valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
    value.rss_state_information = valueRss_state_information;
    mValue = value;
  }

  ::ad::rss::state::LongitudinalRssState mValue;
};

TEST_F(LongitudinalRssStateTests, copyConstruction)
{
  ::ad::rss::state::LongitudinalRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveConstruction)
{
  ::ad::rss::state::LongitudinalRssState tmpValue(mValue);
  ::ad::rss::state::LongitudinalRssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, copyAssignment)
{
  ::ad::rss::state::LongitudinalRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, moveAssignment)
{
  ::ad::rss::state::LongitudinalRssState tmpValue(mValue);
  ::ad::rss::state::LongitudinalRssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorIs_safeDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  bool is_safe{false};
  valueA.is_safe = is_safe;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::LongitudinalResponse response(::ad::rss::state::LongitudinalResponse::BrakeMin);
  valueA.response = response;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorAlpha_lonDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
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
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssStateTests, comparisonOperatorRss_state_informationDiffers)
{
  ::ad::rss::state::LongitudinalRssState valueA = mValue;
  ::ad::rss::state::RssStateInformation rss_state_information;
  ::ad::physics::Distance rss_state_informationSafe_distance(1e9);
  rss_state_information.safe_distance = rss_state_informationSafe_distance;
  ::ad::physics::Distance rss_state_informationCurrent_distance(1e9);
  rss_state_information.current_distance = rss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator rss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rss_state_information.evaluator = rss_state_informationEvaluator;
  valueA.rss_state_information = rss_state_information;
  ::ad::rss::state::LongitudinalRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
