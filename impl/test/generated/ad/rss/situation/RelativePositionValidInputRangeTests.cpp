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

#include "ad/rss/situation/RelativePositionValidInputRange.hpp"

TEST(RelativePositionValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooSmall)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value below input range minimum
  ::ad::rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooBig)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value above input range maximum
  ::ad::rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooSmall)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooBig)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelongitudinalDistanceDefault)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::physics::Distance valueDefault;
  value.longitudinalDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooSmall)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value below input range minimum
  ::ad::rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooBig)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value above input range maximum
  ::ad::rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad::rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooSmall)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooBig)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelateralDistanceDefault)
{
  ::ad::rss::situation::RelativePosition value;
  ::ad::physics::Distance valueDefault;
  value.lateralDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
