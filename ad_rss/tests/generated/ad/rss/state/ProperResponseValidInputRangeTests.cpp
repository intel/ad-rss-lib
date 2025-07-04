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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/state/ProperResponseValidInputRange.hpp"

TEST(ProperResponseValidInputRangeTests, testValidInputRange)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinal_responseTooSmall)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinal_response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinal_responseTooBig)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinal_response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateral_response_rightTooSmall)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateral_response_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateral_response_rightTooBig)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateral_response_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateral_response_leftTooSmall)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateral_response_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateral_response_leftTooBig)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateral_response_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAcceleration_restrictionsTooSmall)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value below input range minimum
  ::ad::rss::state::AccelerationRestriction invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLateral_left_range;
  ::ad::physics::Acceleration invalidInitializedMemberLateral_left_rangeMinimum(-1e2 * 1.1);
  invalidInitializedMemberLateral_left_range.minimum = invalidInitializedMemberLateral_left_rangeMinimum;
  invalidInitializedMember.lateral_left_range = invalidInitializedMemberLateral_left_range;
  value.acceleration_restrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAcceleration_restrictionsTooBig)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value above input range maximum
  ::ad::rss::state::AccelerationRestriction invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLateral_left_range;
  ::ad::physics::Acceleration invalidInitializedMemberLateral_left_rangeMinimum(1e2 * 1.1);
  invalidInitializedMemberLateral_left_range.minimum = invalidInitializedMemberLateral_left_rangeMinimum;
  invalidInitializedMember.lateral_left_range = invalidInitializedMemberLateral_left_range;
  value.acceleration_restrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeUnstructured_constellation_responseTooSmall)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  value.unstructured_constellation_response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeUnstructured_constellation_responseTooBig)
{
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
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_rangeMaximum;
  valueAcceleration_restrictionsLateral_right_range.maximum = valueAcceleration_restrictionsLateral_right_range.minimum;
  valueAcceleration_restrictionsLateral_right_range.minimum = valueAcceleration_restrictionsLateral_right_range.maximum;
  valueAcceleration_restrictions.lateral_right_range = valueAcceleration_restrictionsLateral_right_range;
  value.acceleration_restrictions = valueAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.unstructured_constellation_response = valueUnstructured_constellation_response;

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  value.unstructured_constellation_response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
