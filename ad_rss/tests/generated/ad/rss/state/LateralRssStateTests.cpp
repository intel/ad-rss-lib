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
#include "ad/rss/state/LateralRssState.hpp"

class LateralRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::LateralRssState value;
    bool valueIs_safe{true};
    value.is_safe = valueIs_safe;
    ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
    value.response = valueResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
    ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
    valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
    ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
    valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
    value.alpha_lat = valueAlpha_lat;
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

  ::ad::rss::state::LateralRssState mValue;
};

TEST_F(LateralRssStateTests, copyConstruction)
{
  ::ad::rss::state::LateralRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveConstruction)
{
  ::ad::rss::state::LateralRssState tmpValue(mValue);
  ::ad::rss::state::LateralRssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, copyAssignment)
{
  ::ad::rss::state::LateralRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, moveAssignment)
{
  ::ad::rss::state::LateralRssState tmpValue(mValue);
  ::ad::rss::state::LateralRssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LateralRssStateTests, comparisonOperatorIs_safeDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  bool is_safe{false};
  valueA.is_safe = is_safe;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::LateralResponse response(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.response = response;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorAlpha_latDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alpha_lat;
  ::ad::physics::Acceleration alpha_latAccel_max(1e2);
  alpha_lat.accel_max = alpha_latAccel_max;
  ::ad::physics::Acceleration alpha_latBrake_min(1e2);
  alpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alpha_lat.brake_min = alpha_latBrake_min;
  valueA.alpha_lat = alpha_lat;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssStateTests, comparisonOperatorRss_state_informationDiffers)
{
  ::ad::rss::state::LateralRssState valueA = mValue;
  ::ad::rss::state::RssStateInformation rss_state_information;
  ::ad::physics::Distance rss_state_informationSafe_distance(1e9);
  rss_state_information.safe_distance = rss_state_informationSafe_distance;
  ::ad::physics::Distance rss_state_informationCurrent_distance(1e9);
  rss_state_information.current_distance = rss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator rss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rss_state_information.evaluator = rss_state_informationEvaluator;
  valueA.rss_state_information = rss_state_information;
  ::ad::rss::state::LateralRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
