/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/AccelerationRestrictionValidInputRange.hpp"

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralLeftRangeTooSmall)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralLeftRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralLeftRangeTooBig)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralLeftRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinalRangeTooSmall)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinalRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinalRangeTooBig)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinalRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralRightRangeTooSmall)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralRightRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralRightRangeTooBig)
{
  ::ad::rss::world::AccelerationRestriction value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::physics::AccelerationRange valueLateralLeftRange;
  ::ad::physics::Acceleration valueLateralLeftRangeMinimum(-1e2);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueLateralLeftRangeMaximum(-1e2);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad::physics::AccelerationRange valueLongitudinalRange;
  ::ad::physics::Acceleration valueLongitudinalRangeMinimum(-1e2);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueLongitudinalRangeMaximum(-1e2);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad::physics::AccelerationRange valueLateralRightRange;
  ::ad::physics::Acceleration valueLateralRightRangeMinimum(-1e2);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueLateralRightRangeMaximum(-1e2);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralRightRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
