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

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLonInvalid)
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

TEST(VelocityValidInputRangeTests, testValidInputRangeSpeedLatInvalid)
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
