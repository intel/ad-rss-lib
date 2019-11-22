/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/situation/RelativePositionValidInputRange.hpp"

TEST(RelativePositionValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelongitudinalDistanceDefault)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::physics::Distance valueDefault;
  value.longitudinalDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelateralDistanceDefault)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::physics::Distance valueDefault;
  value.lateralDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
