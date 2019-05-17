/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
