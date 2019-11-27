/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/state/ProperResponse.hpp"

class ProperResponseTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::ProperResponse value;
    ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    bool valueIsSafe{true};
    value.isSafe = valueIsSafe;
    ::ad::rss::world::ObjectIdVector valueDangerousObjects;
    ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueDangerousObjects.resize(1, valueDangerousObjectsElement);
    value.dangerousObjects = valueDangerousObjects;
    ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
    value.longitudinalResponse = valueLongitudinalResponse;
    ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
    value.lateralResponseRight = valueLateralResponseRight;
    ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
    value.lateralResponseLeft = valueLateralResponseLeft;
    mValue = value;
  }

  ::ad::rss::state::ProperResponse mValue;
};

TEST_F(ProperResponseTests, copyConstruction)
{
  ::ad::rss::state::ProperResponse value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ProperResponseTests, moveConstruction)
{
  ::ad::rss::state::ProperResponse value(std::move(::ad::rss::state::ProperResponse(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(ProperResponseTests, copyAssignment)
{
  ::ad::rss::state::ProperResponse value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ProperResponseTests, moveAssignment)
{
  ::ad::rss::state::ProperResponse value;
  value = std::move(::ad::rss::state::ProperResponse(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ProperResponseTests, comparisonOperatorEqual)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ProperResponseTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::ProperResponse value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
}

TEST_F(ProperResponseTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorIsSafeDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  bool isSafe{false};
  valueA.isSafe = isSafe;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorDangerousObjectsDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::ObjectIdVector dangerousObjects;
  ::ad::rss::world::ObjectId dangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  dangerousObjects.resize(0 + 1, dangerousObjectsElement);
  valueA.dangerousObjects = dangerousObjects;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLongitudinalResponseDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LongitudinalResponse longitudinalResponse(::ad::rss::state::LongitudinalResponse::BrakeMin);
  valueA.longitudinalResponse = longitudinalResponse;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLateralResponseRightDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LateralResponse lateralResponseRight(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.lateralResponseRight = lateralResponseRight;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLateralResponseLeftDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LateralResponse lateralResponseLeft(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.lateralResponseLeft = lateralResponseLeft;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
