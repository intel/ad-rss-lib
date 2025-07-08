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

#include "ad/rss/world/VelocityValidInputRange.hpp"

TEST(VelocityValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lon_minTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speed_lon_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Speed(0. - ::ad::physics::Speed::cPrecisionValue); // set to invalid value within struct
  value.speed_lon_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lon_minTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speed_lon_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeed_lon_minDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speed_lon_min = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lon_maxTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speed_lon_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lon_maxTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speed_lon_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeed_lon_maxDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speed_lon_max = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lat_minTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speed_lat_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lat_minTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speed_lat_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeed_lat_minDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speed_lat_min = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lat_maxTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speed_lat_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeed_lat_maxTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeed_lon_min(-100.);
  valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speed_lon_min = valueSpeed_lon_min;
  ::ad::physics::Speed valueSpeed_lon_max(-100.);
  value.speed_lon_max = valueSpeed_lon_max;
  ::ad::physics::Speed valueSpeed_lat_min(-100.);
  value.speed_lat_min = valueSpeed_lat_min;
  ::ad::physics::Speed valueSpeed_lat_max(-100.);
  value.speed_lat_max = valueSpeed_lat_max;
  value.speed_lon_max = value.speed_lon_min;
  value.speed_lat_max = value.speed_lat_min;
  value.speed_lon_min = value.speed_lon_max;
  value.speed_lat_min = value.speed_lat_max;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speed_lat_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeed_lat_maxDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speed_lat_max = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
