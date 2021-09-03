/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
#include "ad/rss/state/UnstructuredSceneStateInformation.hpp"

class UnstructuredSceneStateInformationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::UnstructuredSceneStateInformation value;
    ::ad::physics::Distance2DList valueBrakeTrajectorySet;
    ::ad::physics::Distance2D valueBrakeTrajectorySetElement;
    ::ad::physics::Distance valueBrakeTrajectorySetElementX(-1e9);
    valueBrakeTrajectorySetElement.x = valueBrakeTrajectorySetElementX;
    ::ad::physics::Distance valueBrakeTrajectorySetElementY(-1e9);
    valueBrakeTrajectorySetElement.y = valueBrakeTrajectorySetElementY;
    valueBrakeTrajectorySet.resize(1, valueBrakeTrajectorySetElement);
    value.brakeTrajectorySet = valueBrakeTrajectorySet;
    ::ad::physics::Distance2DList valueContinueForwardTrajectorySet;
    ::ad::physics::Distance2D valueContinueForwardTrajectorySetElement;
    ::ad::physics::Distance valueContinueForwardTrajectorySetElementX(-1e9);
    valueContinueForwardTrajectorySetElement.x = valueContinueForwardTrajectorySetElementX;
    ::ad::physics::Distance valueContinueForwardTrajectorySetElementY(-1e9);
    valueContinueForwardTrajectorySetElement.y = valueContinueForwardTrajectorySetElementY;
    valueContinueForwardTrajectorySet.resize(1, valueContinueForwardTrajectorySetElement);
    value.continueForwardTrajectorySet = valueContinueForwardTrajectorySet;
    mValue = value;
  }

  ::ad::rss::state::UnstructuredSceneStateInformation mValue;
};

TEST_F(UnstructuredSceneStateInformationTests, copyConstruction)
{
  ::ad::rss::state::UnstructuredSceneStateInformation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneStateInformationTests, moveConstruction)
{
  ::ad::rss::state::UnstructuredSceneStateInformation tmpValue(mValue);
  ::ad::rss::state::UnstructuredSceneStateInformation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneStateInformationTests, copyAssignment)
{
  ::ad::rss::state::UnstructuredSceneStateInformation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneStateInformationTests, moveAssignment)
{
  ::ad::rss::state::UnstructuredSceneStateInformation tmpValue(mValue);
  ::ad::rss::state::UnstructuredSceneStateInformation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneStateInformationTests, comparisonOperatorEqual)
{
  ::ad::rss::state::UnstructuredSceneStateInformation valueA = mValue;
  ::ad::rss::state::UnstructuredSceneStateInformation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredSceneStateInformationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredSceneStateInformationTests, comparisonOperatorBrakeTrajectorySetDiffers)
{
  ::ad::rss::state::UnstructuredSceneStateInformation valueA = mValue;
  ::ad::physics::Distance2DList brakeTrajectorySet;
  ::ad::physics::Distance2D brakeTrajectorySetElement;
  ::ad::physics::Distance brakeTrajectorySetElementX(1e9);
  brakeTrajectorySetElement.x = brakeTrajectorySetElementX;
  ::ad::physics::Distance brakeTrajectorySetElementY(1e9);
  brakeTrajectorySetElement.y = brakeTrajectorySetElementY;
  brakeTrajectorySet.resize(2, brakeTrajectorySetElement);
  valueA.brakeTrajectorySet = brakeTrajectorySet;
  ::ad::rss::state::UnstructuredSceneStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSceneStateInformationTests, comparisonOperatorContinueForwardTrajectorySetDiffers)
{
  ::ad::rss::state::UnstructuredSceneStateInformation valueA = mValue;
  ::ad::physics::Distance2DList continueForwardTrajectorySet;
  ::ad::physics::Distance2D continueForwardTrajectorySetElement;
  ::ad::physics::Distance continueForwardTrajectorySetElementX(1e9);
  continueForwardTrajectorySetElement.x = continueForwardTrajectorySetElementX;
  ::ad::physics::Distance continueForwardTrajectorySetElementY(1e9);
  continueForwardTrajectorySetElement.y = continueForwardTrajectorySetElementY;
  continueForwardTrajectorySet.resize(2, continueForwardTrajectorySetElement);
  valueA.continueForwardTrajectorySet = continueForwardTrajectorySet;
  ::ad::rss::state::UnstructuredSceneStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
