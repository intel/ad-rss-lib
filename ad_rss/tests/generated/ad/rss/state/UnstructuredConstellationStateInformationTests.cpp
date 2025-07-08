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
#include "ad/rss/state/UnstructuredConstellationStateInformation.hpp"

class UnstructuredConstellationStateInformationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::UnstructuredConstellationStateInformation value;
    ::ad::physics::Distance2DList valueBrake_trajectory_set;
    ::ad::physics::Distance2D valueBrake_trajectory_setElement;
    ::ad::physics::Distance valueBrake_trajectory_setElementX(-1e9);
    valueBrake_trajectory_setElement.x = valueBrake_trajectory_setElementX;
    ::ad::physics::Distance valueBrake_trajectory_setElementY(-1e9);
    valueBrake_trajectory_setElement.y = valueBrake_trajectory_setElementY;
    valueBrake_trajectory_set.resize(1, valueBrake_trajectory_setElement);
    value.brake_trajectory_set = valueBrake_trajectory_set;
    ::ad::physics::Distance2DList valueContinue_forward_trajectory_set;
    ::ad::physics::Distance2D valueContinue_forward_trajectory_setElement;
    ::ad::physics::Distance valueContinue_forward_trajectory_setElementX(-1e9);
    valueContinue_forward_trajectory_setElement.x = valueContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance valueContinue_forward_trajectory_setElementY(-1e9);
    valueContinue_forward_trajectory_setElement.y = valueContinue_forward_trajectory_setElementY;
    valueContinue_forward_trajectory_set.resize(1, valueContinue_forward_trajectory_setElement);
    value.continue_forward_trajectory_set = valueContinue_forward_trajectory_set;
    ::ad::physics::Angle valueConsidered_drive_away_steering_angle(-6.283185308);
    value.considered_drive_away_steering_angle = valueConsidered_drive_away_steering_angle;
    mValue = value;
  }

  ::ad::rss::state::UnstructuredConstellationStateInformation mValue;
};

TEST_F(UnstructuredConstellationStateInformationTests, copyConstruction)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationStateInformationTests, moveConstruction)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation tmpValue(mValue);
  ::ad::rss::state::UnstructuredConstellationStateInformation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationStateInformationTests, copyAssignment)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationStateInformationTests, moveAssignment)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation tmpValue(mValue);
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredConstellationStateInformationTests, comparisonOperatorEqual)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredConstellationStateInformationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredConstellationStateInformationTests, comparisonOperatorBrake_trajectory_setDiffers)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation valueA = mValue;
  ::ad::physics::Distance2DList brake_trajectory_set;
  ::ad::physics::Distance2D brake_trajectory_setElement;
  ::ad::physics::Distance brake_trajectory_setElementX(1e9);
  brake_trajectory_setElement.x = brake_trajectory_setElementX;
  ::ad::physics::Distance brake_trajectory_setElementY(1e9);
  brake_trajectory_setElement.y = brake_trajectory_setElementY;
  brake_trajectory_set.resize(2, brake_trajectory_setElement);
  valueA.brake_trajectory_set = brake_trajectory_set;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationStateInformationTests, comparisonOperatorContinue_forward_trajectory_setDiffers)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation valueA = mValue;
  ::ad::physics::Distance2DList continue_forward_trajectory_set;
  ::ad::physics::Distance2D continue_forward_trajectory_setElement;
  ::ad::physics::Distance continue_forward_trajectory_setElementX(1e9);
  continue_forward_trajectory_setElement.x = continue_forward_trajectory_setElementX;
  ::ad::physics::Distance continue_forward_trajectory_setElementY(1e9);
  continue_forward_trajectory_setElement.y = continue_forward_trajectory_setElementY;
  continue_forward_trajectory_set.resize(2, continue_forward_trajectory_setElement);
  valueA.continue_forward_trajectory_set = continue_forward_trajectory_set;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredConstellationStateInformationTests, comparisonOperatorConsidered_drive_away_steering_angleDiffers)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation valueA = mValue;
  ::ad::physics::Angle considered_drive_away_steering_angle(6.283185308);
  valueA.considered_drive_away_steering_angle = considered_drive_away_steering_angle;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
