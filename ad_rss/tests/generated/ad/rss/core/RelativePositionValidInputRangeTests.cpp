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

#include "ad/rss/core/RelativePositionValidInputRange.hpp"

TEST(RelativePositionValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinal_positionTooSmall)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value below input range minimum
  ::ad::rss::core::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::core::LongitudinalRelativePosition>(-1));
  value.longitudinal_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinal_positionTooBig)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value above input range maximum
  ::ad::rss::core::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::core::LongitudinalRelativePosition>(-1));
  value.longitudinal_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinal_distanceTooSmall)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.longitudinal_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinal_distanceTooBig)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.longitudinal_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelongitudinal_distanceDefault)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::physics::Distance valueDefault;
  value.longitudinal_distance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateral_positionTooSmall)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value below input range minimum
  ::ad::rss::core::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::core::LateralRelativePosition>(-1));
  value.lateral_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateral_positionTooBig)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value above input range maximum
  ::ad::rss::core::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::core::LateralRelativePosition>(-1));
  value.lateral_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateral_distanceTooSmall)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.lateral_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateral_distanceTooBig)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::rss::core::LongitudinalRelativePosition valueLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  value.longitudinal_position = valueLongitudinal_position;
  ::ad::physics::Distance valueLongitudinal_distance(-1e9);
  value.longitudinal_distance = valueLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueLateral_position(::ad::rss::core::LateralRelativePosition::AtLeft);
  value.lateral_position = valueLateral_position;
  ::ad::physics::Distance valueLateral_distance(-1e9);
  value.lateral_distance = valueLateral_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.lateral_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelateral_distanceDefault)
{
  ::ad::rss::core::RelativePosition value;
  ::ad::physics::Distance valueDefault;
  value.lateral_distance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
