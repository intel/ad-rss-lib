/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/VelocityValidInputRange.hpp"

TEST(VelocityValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLonDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatTooSmall)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatTooBig)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueSpeedLon(-100.);
  valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  value.speedLon = valueSpeedLon;
  ::ad::physics::Speed valueSpeedLat(-100.);
  valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  invalidInitializedMember = ::ad::physics::Speed(10. * 1.1); // set to invalid value within struct
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityValidInputRangeTests, testValidInputRangespeedLatDefault)
{
  ::ad::rss::world::Velocity value;
  ::ad::physics::Speed valueDefault;
  value.speedLat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
