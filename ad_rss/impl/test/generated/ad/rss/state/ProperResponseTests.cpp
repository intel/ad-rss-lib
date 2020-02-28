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
    ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
    ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
    valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLon.accelMax = valueAlphaLonAccelMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
    valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
    valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
    valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
    valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
    valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
    value.alphaLon = valueAlphaLon;
    ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
    value.lateralResponseRight = valueLateralResponseRight;
    ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
    ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
    valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
    ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
    valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
    value.alphaLatRight = valueAlphaLatRight;
    ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
    value.lateralResponseLeft = valueLateralResponseLeft;
    ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
    ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
    valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
    ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
    valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
    value.alphaLatLeft = valueAlphaLatLeft;
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

TEST_F(ProperResponseTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
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

TEST_F(ProperResponseTests, comparisonOperatorAlphaLonDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues alphaLon;
  ::ad::physics::Acceleration alphaLonAccelMax(1e2);
  alphaLon.accelMax = alphaLonAccelMax;
  ::ad::physics::Acceleration alphaLonBrakeMax(1e2);
  alphaLon.brakeMax = alphaLonBrakeMax;
  ::ad::physics::Acceleration alphaLonBrakeMin(1e2);
  alphaLon.brakeMin = alphaLonBrakeMin;
  ::ad::physics::Acceleration alphaLonBrakeMinCorrect(1e2);
  alphaLon.brakeMinCorrect = alphaLonBrakeMinCorrect;
  alphaLon.brakeMax = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMinCorrect;
  alphaLon.brakeMinCorrect = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMax;
  valueA.alphaLon = alphaLon;
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

TEST_F(ProperResponseTests, comparisonOperatorAlphaLatRightDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alphaLatRight;
  ::ad::physics::Acceleration alphaLatRightAccelMax(1e2);
  alphaLatRight.accelMax = alphaLatRightAccelMax;
  ::ad::physics::Acceleration alphaLatRightBrakeMin(1e2);
  alphaLatRight.brakeMin = alphaLatRightBrakeMin;
  valueA.alphaLatRight = alphaLatRight;
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

TEST_F(ProperResponseTests, comparisonOperatorAlphaLatLeftDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alphaLatLeft;
  ::ad::physics::Acceleration alphaLatLeftAccelMax(1e2);
  alphaLatLeft.accelMax = alphaLatLeftAccelMax;
  ::ad::physics::Acceleration alphaLatLeftBrakeMin(1e2);
  alphaLatLeft.brakeMin = alphaLatLeftBrakeMin;
  valueA.alphaLatLeft = alphaLatLeft;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
