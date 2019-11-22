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

#include "ad_rss/world/AccelerationRestrictionValidInputRange.hpp"

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralLeftRangeTooSmall)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralLeftRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralLeftRangeTooBig)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralLeftRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinalRangeTooSmall)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinalRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinalRangeTooBig)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinalRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralRightRangeTooSmall)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralRightRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralRightRangeTooBig)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralRightRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
