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
    ::ad::rss::state::HeadingRange valueHeadingRange;
    ::ad::physics::AngleRange valueHeadingRangeOuterRange;
    ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
    valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
    ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
    valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
    valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
    ::ad::physics::AngleRange valueHeadingRangeInnerRange;
    ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
    valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
    ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
    valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
    valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
    value.headingRange = valueHeadingRange;
    ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
    ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
    valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
    valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
    valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
    valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
    valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
    ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
    valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
    valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
    valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
    valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
    valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
    ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
    valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
    ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
    valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
    valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
    valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
    valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
    value.accelerationRestrictions = valueAccelerationRestrictions;
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
  ::ad::rss::state::ProperResponse tmpValue(mValue);
  ::ad::rss::state::ProperResponse value(std::move(tmpValue));
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
  ::ad::rss::state::ProperResponse tmpValue(mValue);
  ::ad::rss::state::ProperResponse value;
  value = std::move(tmpValue);
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

TEST_F(ProperResponseTests, comparisonOperatorHeadingRangeDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::HeadingRange headingRange;
  ::ad::physics::AngleRange headingRangeOuterRange;
  ::ad::physics::Angle headingRangeOuterRangeMinimum(6.283185308);
  headingRangeOuterRange.minimum = headingRangeOuterRangeMinimum;
  ::ad::physics::Angle headingRangeOuterRangeMaximum(6.283185308);
  headingRangeOuterRange.maximum = headingRangeOuterRangeMaximum;
  headingRange.outerRange = headingRangeOuterRange;
  ::ad::physics::AngleRange headingRangeInnerRange;
  ::ad::physics::Angle headingRangeInnerRangeMinimum(6.283185308);
  headingRangeInnerRange.minimum = headingRangeInnerRangeMinimum;
  ::ad::physics::Angle headingRangeInnerRangeMaximum(6.283185308);
  headingRangeInnerRange.maximum = headingRangeInnerRangeMaximum;
  headingRange.innerRange = headingRangeInnerRange;
  valueA.headingRange = headingRange;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorAccelerationRestrictionsDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::AccelerationRestriction accelerationRestrictions;
  ::ad::physics::AccelerationRange accelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration accelerationRestrictionsLateralLeftRangeMinimum(1e2);
  accelerationRestrictionsLateralLeftRange.minimum = accelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration accelerationRestrictionsLateralLeftRangeMaximum(1e2);
  accelerationRestrictionsLateralLeftRange.maximum = accelerationRestrictionsLateralLeftRangeMaximum;
  accelerationRestrictionsLateralLeftRange.maximum = accelerationRestrictionsLateralLeftRange.minimum;
  accelerationRestrictionsLateralLeftRange.minimum = accelerationRestrictionsLateralLeftRange.maximum;
  accelerationRestrictions.lateralLeftRange = accelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange accelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration accelerationRestrictionsLongitudinalRangeMinimum(1e2);
  accelerationRestrictionsLongitudinalRange.minimum = accelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration accelerationRestrictionsLongitudinalRangeMaximum(1e2);
  accelerationRestrictionsLongitudinalRange.maximum = accelerationRestrictionsLongitudinalRangeMaximum;
  accelerationRestrictionsLongitudinalRange.maximum = accelerationRestrictionsLongitudinalRange.minimum;
  accelerationRestrictionsLongitudinalRange.minimum = accelerationRestrictionsLongitudinalRange.maximum;
  accelerationRestrictions.longitudinalRange = accelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange accelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration accelerationRestrictionsLateralRightRangeMinimum(1e2);
  accelerationRestrictionsLateralRightRange.minimum = accelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration accelerationRestrictionsLateralRightRangeMaximum(1e2);
  accelerationRestrictionsLateralRightRange.maximum = accelerationRestrictionsLateralRightRangeMaximum;
  accelerationRestrictionsLateralRightRange.maximum = accelerationRestrictionsLateralRightRange.minimum;
  accelerationRestrictionsLateralRightRange.minimum = accelerationRestrictionsLateralRightRange.maximum;
  accelerationRestrictions.lateralRightRange = accelerationRestrictionsLateralRightRange;
  valueA.accelerationRestrictions = accelerationRestrictions;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
