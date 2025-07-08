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

#include "ad/rss/core/StructuredObjectStateValidInputRange.hpp"

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value below input range minimum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeed_lon_min(-100. * 1.1);
  invalidInitializedMember.speed_lon_min = invalidInitializedMemberSpeed_lon_min;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value above input range maximum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeed_lon_min(100. * 1.1);
  invalidInitializedMember.speed_lon_min = invalidInitializedMemberSpeed_lon_min;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeDistance_to_enter_intersectionTooSmall)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.distance_to_enter_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Distance(0. - ::ad::physics::Distance::cPrecisionValue); // set to invalid value within struct
  value.distance_to_enter_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeDistance_to_enter_intersectionTooBig)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.distance_to_enter_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangedistance_to_enter_intersectionDefault)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::physics::Distance valueDefault;
  value.distance_to_enter_intersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeDistance_to_leave_intersectionTooSmall)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.distance_to_leave_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangeDistance_to_leave_intersectionTooBig)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::rss::world::Velocity valueVelocity;
  ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
  valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
  ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
  valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
  ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
  valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
  ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
  valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
  valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
  valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
  valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
  valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
  value.velocity = valueVelocity;
  bool valueHas_priority{true};
  value.has_priority = valueHas_priority;
  bool valueIs_in_correct_lane{true};
  value.is_in_correct_lane = valueIs_in_correct_lane;
  ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
  valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
  value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
  ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
  value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
  value.distance_to_leave_intersection = value.distance_to_enter_intersection;
  value.distance_to_enter_intersection = value.distance_to_leave_intersection;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.distance_to_leave_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1e4 * 1.1); // set to invalid value within struct
  value.distance_to_leave_intersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(StructuredObjectStateValidInputRangeTests, testValidInputRangedistance_to_leave_intersectionDefault)
{
  ::ad::rss::core::StructuredObjectState value;
  ::ad::physics::Distance valueDefault;
  value.distance_to_leave_intersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
