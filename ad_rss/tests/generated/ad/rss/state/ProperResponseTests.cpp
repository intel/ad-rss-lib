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
#include "ad/rss/state/ProperResponse.hpp"

class ProperResponseTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::ProperResponse value;
    ::ad::rss::world::TimeIndex valueTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.time_index = valueTime_index;
    bool valueIs_safe{true};
    value.is_safe = valueIs_safe;
    ::ad::rss::world::ObjectIdVector valueDangerous_objects;
    ::ad::rss::world::ObjectId valueDangerous_objectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueDangerous_objects.resize(1, valueDangerous_objectsElement);
    value.dangerous_objects = valueDangerous_objects;
    ::ad::rss::state::LongitudinalResponse valueLongitudinal_response(::ad::rss::state::LongitudinalResponse::None);
    value.longitudinal_response = valueLongitudinal_response;
    ::ad::rss::state::LateralResponse valueLateral_response_right(::ad::rss::state::LateralResponse::None);
    value.lateral_response_right = valueLateral_response_right;
    ::ad::rss::state::LateralResponse valueLateral_response_left(::ad::rss::state::LateralResponse::None);
    value.lateral_response_left = valueLateral_response_left;
    ::ad::geometry::HeadingRangeVector valueHeading_ranges;
    ::ad::geometry::HeadingRange valueHeading_rangesElement;
    ::ad::physics::Angle valueHeading_rangesElementBegin(-6.283185308);
    valueHeading_rangesElement.begin = valueHeading_rangesElementBegin;
    ::ad::physics::Angle valueHeading_rangesElementEnd(-6.283185308);
    valueHeading_rangesElement.end = valueHeading_rangesElementEnd;
    valueHeading_ranges.resize(1, valueHeading_rangesElement);
    value.heading_ranges = valueHeading_ranges;
    ::ad::rss::state::AccelerationRestriction valueAcceleration_restrictions;
    ::ad::physics::AccelerationRange valueAcceleration_restrictionsLateral_left_range;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
    valueAcceleration_restrictionsLateral_left_range.minimum = valueAcceleration_restrictionsLateral_left_rangeMinimum;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
    valueAcceleration_restrictionsLateral_left_range.maximum = valueAcceleration_restrictionsLateral_left_rangeMaximum;
    valueAcceleration_restrictionsLateral_left_range.maximum = valueAcceleration_restrictionsLateral_left_range.minimum;
    valueAcceleration_restrictionsLateral_left_range.minimum = valueAcceleration_restrictionsLateral_left_range.maximum;
    valueAcceleration_restrictions.lateral_left_range = valueAcceleration_restrictionsLateral_left_range;
    ::ad::physics::AccelerationRange valueAcceleration_restrictionsLongitudinal_range;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
    valueAcceleration_restrictionsLongitudinal_range.minimum = valueAcceleration_restrictionsLongitudinal_rangeMinimum;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
    valueAcceleration_restrictionsLongitudinal_range.maximum = valueAcceleration_restrictionsLongitudinal_rangeMaximum;
    valueAcceleration_restrictionsLongitudinal_range.maximum = valueAcceleration_restrictionsLongitudinal_range.minimum;
    valueAcceleration_restrictionsLongitudinal_range.minimum = valueAcceleration_restrictionsLongitudinal_range.maximum;
    valueAcceleration_restrictions.longitudinal_range = valueAcceleration_restrictionsLongitudinal_range;
    ::ad::physics::AccelerationRange valueAcceleration_restrictionsLateral_right_range;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
    valueAcceleration_restrictionsLateral_right_range.minimum
      = valueAcceleration_restrictionsLateral_right_rangeMinimum;
    ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
    valueAcceleration_restrictionsLateral_right_range.maximum
      = valueAcceleration_restrictionsLateral_right_rangeMaximum;
    valueAcceleration_restrictionsLateral_right_range.maximum
      = valueAcceleration_restrictionsLateral_right_range.minimum;
    valueAcceleration_restrictionsLateral_right_range.minimum
      = valueAcceleration_restrictionsLateral_right_range.maximum;
    valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
    value.acceleration_restrictions = valueAcceleration_restrictions;
    ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
    value.unstructured_constellation_response = valueUnstructured_constellation_response;
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

TEST_F(ProperResponseTests, comparisonOperatorTime_indexDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::TimeIndex time_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.time_index = time_index;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorIs_safeDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  bool is_safe{false};
  valueA.is_safe = is_safe;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorDangerous_objectsDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::world::ObjectIdVector dangerous_objects;
  ::ad::rss::world::ObjectId dangerous_objectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  dangerous_objects.resize(0 + 1, dangerous_objectsElement);
  valueA.dangerous_objects = dangerous_objects;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLongitudinal_responseDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LongitudinalResponse longitudinal_response(::ad::rss::state::LongitudinalResponse::BrakeMin);
  valueA.longitudinal_response = longitudinal_response;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLateral_response_rightDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LateralResponse lateral_response_right(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.lateral_response_right = lateral_response_right;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorLateral_response_leftDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::LateralResponse lateral_response_left(::ad::rss::state::LateralResponse::BrakeMin);
  valueA.lateral_response_left = lateral_response_left;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorHeading_rangesDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::geometry::HeadingRangeVector heading_ranges;
  ::ad::geometry::HeadingRange heading_rangesElement;
  ::ad::physics::Angle heading_rangesElementBegin(6.283185308);
  heading_rangesElement.begin = heading_rangesElementBegin;
  ::ad::physics::Angle heading_rangesElementEnd(6.283185308);
  heading_rangesElement.end = heading_rangesElementEnd;
  heading_ranges.resize(2, heading_rangesElement);
  valueA.heading_ranges = heading_ranges;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorAcceleration_restrictionsDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::AccelerationRestriction acceleration_restrictions;
  ::ad::physics::AccelerationRange acceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration acceleration_restrictionsLateral_left_rangeMinimum(1e2);
  acceleration_restrictionsLateral_left_range.minimum = acceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration acceleration_restrictionsLateral_left_rangeMaximum(1e2);
  acceleration_restrictionsLateral_left_range.maximum = acceleration_restrictionsLateral_left_rangeMaximum;
  acceleration_restrictionsLateral_left_range.maximum = acceleration_restrictionsLateral_left_range.minimum;
  acceleration_restrictionsLateral_left_range.minimum = acceleration_restrictionsLateral_left_range.maximum;
  acceleration_restrictions.lateral_left_range = acceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange acceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration acceleration_restrictionsLongitudinal_rangeMinimum(1e2);
  acceleration_restrictionsLongitudinal_range.minimum = acceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration acceleration_restrictionsLongitudinal_rangeMaximum(1e2);
  acceleration_restrictionsLongitudinal_range.maximum = acceleration_restrictionsLongitudinal_rangeMaximum;
  acceleration_restrictionsLongitudinal_range.maximum = acceleration_restrictionsLongitudinal_range.minimum;
  acceleration_restrictionsLongitudinal_range.minimum = acceleration_restrictionsLongitudinal_range.maximum;
  acceleration_restrictions.longitudinal_range = acceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange acceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration acceleration_restrictionsLateral_right_rangeMinimum(1e2);
  acceleration_restrictionsLateral_right_range.minimum = acceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration acceleration_restrictionsLateral_right_rangeMaximum(1e2);
  acceleration_restrictionsLateral_right_range.maximum = acceleration_restrictionsLateral_right_rangeMaximum;
  acceleration_restrictionsLateral_right_range.maximum = acceleration_restrictionsLateral_right_range.minimum;
  acceleration_restrictionsLateral_right_range.minimum = acceleration_restrictionsLateral_right_range.maximum;
  acceleration_restrictions.lateral_right_range = acceleration_restrictionsLateral_right_range;
  valueA.acceleration_restrictions = acceleration_restrictions;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ProperResponseTests, comparisonOperatorUnstructured_constellation_responseDiffers)
{
  ::ad::rss::state::ProperResponse valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationResponse unstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  valueA.unstructured_constellation_response = unstructured_constellation_response;
  ::ad::rss::state::ProperResponse valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
