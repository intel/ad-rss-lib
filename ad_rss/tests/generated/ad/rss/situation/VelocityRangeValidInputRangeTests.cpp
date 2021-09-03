/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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

#include "ad/rss/situation/VelocityRangeValidInputRange.hpp"

TEST(VelocityRangeValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::VelocityRange value;
  ::ad::physics::SpeedRange valueSpeedLon;
  ::ad::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad::physics::SpeedRange valueSpeedLat;
  ::ad::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLonTooSmall)
{
  ::ad::rss::situation::VelocityRange value;
  ::ad::physics::SpeedRange valueSpeedLon;
  ::ad::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad::physics::SpeedRange valueSpeedLat;
  ::ad::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with data type value below input range minimum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLonTooBig)
{
  ::ad::rss::situation::VelocityRange value;
  ::ad::physics::SpeedRange valueSpeedLon;
  ::ad::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad::physics::SpeedRange valueSpeedLat;
  ::ad::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with data type value above input range maximum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLatTooSmall)
{
  ::ad::rss::situation::VelocityRange value;
  ::ad::physics::SpeedRange valueSpeedLon;
  ::ad::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad::physics::SpeedRange valueSpeedLat;
  ::ad::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with data type value below input range minimum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLatTooBig)
{
  ::ad::rss::situation::VelocityRange value;
  ::ad::physics::SpeedRange valueSpeedLon;
  ::ad::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad::physics::SpeedRange valueSpeedLat;
  ::ad::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with data type value above input range maximum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
