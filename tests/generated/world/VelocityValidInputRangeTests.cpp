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

#include "ad_rss/world/VelocityValidInputRange.hpp"

TEST(VelocityValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonTooSmall)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonTooBig)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLonDefault)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueDefault;
  value.speedLon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatTooSmall)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatTooBig)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(100. * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Speed(10. * 1.1); // set to valid value within struct
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLatDefault)
{
  ::ad_rss::world::Velocity value;
  ::ad_rss::physics::Speed valueDefault;
  value.speedLat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
