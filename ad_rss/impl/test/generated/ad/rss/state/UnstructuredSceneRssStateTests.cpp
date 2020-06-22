/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
#include "ad/rss/state/UnstructuredSceneRssState.hpp"

class UnstructuredSceneRssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::UnstructuredSceneRssState value;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
    value.response = valueResponse;
    ::ad::rss::state::HeadingRange valueHeadingRange;
    ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
    valueHeadingRange.begin = valueHeadingRangeBegin;
    ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
    valueHeadingRange.end = valueHeadingRangeEnd;
    value.headingRange = valueHeadingRange;
    ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
    ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
    ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
    ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
    valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
    ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
    valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
    valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
    valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
    ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
    ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
    ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
    valueRssStateInformationContinueForwardTrajectorySetElement.x
      = valueRssStateInformationContinueForwardTrajectorySetElementX;
    ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
    valueRssStateInformationContinueForwardTrajectorySetElement.y
      = valueRssStateInformationContinueForwardTrajectorySetElementY;
    valueRssStateInformationContinueForwardTrajectorySet.resize(
      1, valueRssStateInformationContinueForwardTrajectorySetElement);
    valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
    value.rssStateInformation = valueRssStateInformation;
    mValue = value;
  }

  ::ad::rss::state::UnstructuredSceneRssState mValue;
};

TEST_F(UnstructuredSceneRssStateTests, copyConstruction)
{
  ::ad::rss::state::UnstructuredSceneRssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneRssStateTests, moveConstruction)
{
  ::ad::rss::state::UnstructuredSceneRssState tmpValue(mValue);
  ::ad::rss::state::UnstructuredSceneRssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneRssStateTests, copyAssignment)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneRssStateTests, moveAssignment)
{
  ::ad::rss::state::UnstructuredSceneRssState tmpValue(mValue);
  ::ad::rss::state::UnstructuredSceneRssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSceneRssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::UnstructuredSceneRssState valueA = mValue;
  ::ad::rss::state::UnstructuredSceneRssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredSceneRssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredSceneRssStateTests, comparisonOperatorIsSafeDiffers)
{
  ::ad::rss::state::UnstructuredSceneRssState valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad::rss::state::UnstructuredSceneRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSceneRssStateTests, comparisonOperatorResponseDiffers)
{
  ::ad::rss::state::UnstructuredSceneRssState valueA = mValue;
  ::ad::rss::state::UnstructuredSceneResponse response(::ad::rss::state::UnstructuredSceneResponse::Brake);
  valueA.response = response;
  ::ad::rss::state::UnstructuredSceneRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSceneRssStateTests, comparisonOperatorHeadingRangeDiffers)
{
  ::ad::rss::state::UnstructuredSceneRssState valueA = mValue;
  ::ad::rss::state::HeadingRange headingRange;
  ::ad::physics::Angle headingRangeBegin(6.283185308);
  headingRange.begin = headingRangeBegin;
  ::ad::physics::Angle headingRangeEnd(6.283185308);
  headingRange.end = headingRangeEnd;
  valueA.headingRange = headingRange;
  ::ad::rss::state::UnstructuredSceneRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSceneRssStateTests, comparisonOperatorRssStateInformationDiffers)
{
  ::ad::rss::state::UnstructuredSceneRssState valueA = mValue;
  ::ad::rss::state::UnstructuredSceneStateInformation rssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet rssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D rssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance rssStateInformationBrakeTrajectorySetElementX(1e9);
  rssStateInformationBrakeTrajectorySetElement.x = rssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance rssStateInformationBrakeTrajectorySetElementY(1e9);
  rssStateInformationBrakeTrajectorySetElement.y = rssStateInformationBrakeTrajectorySetElementY;
  rssStateInformationBrakeTrajectorySet.resize(2, rssStateInformationBrakeTrajectorySetElement);
  rssStateInformation.brakeTrajectorySet = rssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet rssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D rssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance rssStateInformationContinueForwardTrajectorySetElementX(1e9);
  rssStateInformationContinueForwardTrajectorySetElement.x = rssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance rssStateInformationContinueForwardTrajectorySetElementY(1e9);
  rssStateInformationContinueForwardTrajectorySetElement.y = rssStateInformationContinueForwardTrajectorySetElementY;
  rssStateInformationContinueForwardTrajectorySet.resize(2, rssStateInformationContinueForwardTrajectorySetElement);
  rssStateInformation.continueForwardTrajectorySet = rssStateInformationContinueForwardTrajectorySet;
  valueA.rssStateInformation = rssStateInformation;
  ::ad::rss::state::UnstructuredSceneRssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
