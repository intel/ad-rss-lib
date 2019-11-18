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

#include "ad_rss/situation/VelocityRangeValidInputRange.hpp"

TEST(VelocityRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::VelocityRange value;
  ::ad_rss::physics::SpeedRange valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad_rss::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::SpeedRange valueSpeedLat;
  ::ad_rss::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad_rss::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLonTooSmall)
{
  ::ad_rss::situation::VelocityRange value;
  ::ad_rss::physics::SpeedRange valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad_rss::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::SpeedRange valueSpeedLat;
  ::ad_rss::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad_rss::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::SpeedRange invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLonTooBig)
{
  ::ad_rss::situation::VelocityRange value;
  ::ad_rss::physics::SpeedRange valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad_rss::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::SpeedRange valueSpeedLat;
  ::ad_rss::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad_rss::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::SpeedRange invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLatTooSmall)
{
  ::ad_rss::situation::VelocityRange value;
  ::ad_rss::physics::SpeedRange valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad_rss::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::SpeedRange valueSpeedLat;
  ::ad_rss::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad_rss::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::SpeedRange invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VelocityRangeValidInputRangeTests, testValidInputRangeSpeedLatTooBig)
{
  ::ad_rss::situation::VelocityRange value;
  ::ad_rss::physics::SpeedRange valueSpeedLon;
  ::ad_rss::physics::Speed valueSpeedLonMinimum(-100.);
  valueSpeedLon.minimum = valueSpeedLonMinimum;
  ::ad_rss::physics::Speed valueSpeedLonMaximum(-100.);
  valueSpeedLon.maximum = valueSpeedLonMaximum;
  valueSpeedLon.maximum = valueSpeedLon.minimum;
  valueSpeedLon.minimum = valueSpeedLon.maximum;
  value.speedLon = valueSpeedLon;
  ::ad_rss::physics::SpeedRange valueSpeedLat;
  ::ad_rss::physics::Speed valueSpeedLatMinimum(-100.);
  valueSpeedLat.minimum = valueSpeedLatMinimum;
  ::ad_rss::physics::Speed valueSpeedLatMaximum(-100.);
  valueSpeedLat.maximum = valueSpeedLatMaximum;
  valueSpeedLat.maximum = valueSpeedLat.minimum;
  valueSpeedLat.minimum = valueSpeedLat.maximum;
  value.speedLat = valueSpeedLat;

  // override member with invalid value
  ::ad_rss::physics::SpeedRange invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speedLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
