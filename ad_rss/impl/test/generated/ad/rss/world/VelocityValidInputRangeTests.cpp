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

#include "ad/rss/world/VelocityValidInputRange.hpp"

TEST(VelocityValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonMinTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLonMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Speed(0. - ::ad::physics::Speed::cPrecisionValue); // set to invalid value within struct
  value.speedLonMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonMinTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLonMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLonMinDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLonMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonMaxTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLonMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonMaxTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLonMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLonMaxDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLonMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatMinTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLatMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Speed(-10. * 1.1); // set to invalid value within struct
  value.speedLatMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatMinTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLatMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLatMinDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLatMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatMaxTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLatMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatMaxTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLonMin(-100.);
  valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLonMin = valueSpeedLonMin;
  ::ad::physics::Speed valueSpeedLonMax(-100.);
  value.speedLonMax = valueSpeedLonMax;
  ::ad::physics::Speed valueSpeedLatMin(-100.);
  valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLatMin = valueSpeedLatMin;
  ::ad::physics::Speed valueSpeedLatMax(-100.);
  value.speedLatMax = valueSpeedLatMax;
  value.speedLonMax = value.speedLonMin;
  value.speedLatMax = value.speedLatMin;
  value.speedLonMin = value.speedLonMax;
  value.speedLatMin = value.speedLatMax;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLatMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Speed(10. * 1.1); // set to invalid value within struct
  value.speedLatMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLatMaxDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLatMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
