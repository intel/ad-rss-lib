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

#include "ad_rss/world/AccelerationRestrictionValidInputRange.hpp"

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-10);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-10);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-10);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-10);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-10);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-10);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralLeftRangeInvalid)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-10);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-10);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-10);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-10);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-10);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-10);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-10 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralLeftRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinalRangeInvalid)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-10);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-10);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-10);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-10);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-10);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-10);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-10 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinalRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateralRightRangeInvalid)
{
  ::ad_rss::world::AccelerationRestriction value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::physics::AccelerationRange valueLateralLeftRange;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMinimum(-10);
  valueLateralLeftRange.minimum = valueLateralLeftRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralLeftRangeMaximum(-10);
  valueLateralLeftRange.maximum = valueLateralLeftRangeMaximum;
  valueLateralLeftRange.maximum = valueLateralLeftRange.minimum;
  valueLateralLeftRange.minimum = valueLateralLeftRange.maximum;
  value.lateralLeftRange = valueLateralLeftRange;
  ::ad_rss::physics::AccelerationRange valueLongitudinalRange;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMinimum(-10);
  valueLongitudinalRange.minimum = valueLongitudinalRangeMinimum;
  ::ad_rss::physics::Acceleration valueLongitudinalRangeMaximum(-10);
  valueLongitudinalRange.maximum = valueLongitudinalRangeMaximum;
  valueLongitudinalRange.maximum = valueLongitudinalRange.minimum;
  valueLongitudinalRange.minimum = valueLongitudinalRange.maximum;
  value.longitudinalRange = valueLongitudinalRange;
  ::ad_rss::physics::AccelerationRange valueLateralRightRange;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMinimum(-10);
  valueLateralRightRange.minimum = valueLateralRightRangeMinimum;
  ::ad_rss::physics::Acceleration valueLateralRightRangeMaximum(-10);
  valueLateralRightRange.maximum = valueLateralRightRangeMaximum;
  valueLateralRightRange.maximum = valueLateralRightRange.minimum;
  valueLateralRightRange.minimum = valueLateralRightRange.maximum;
  value.lateralRightRange = valueLateralRightRange;

  // override member with invalid value
  ::ad_rss::physics::AccelerationRange invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberMinimum(-10 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateralRightRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
