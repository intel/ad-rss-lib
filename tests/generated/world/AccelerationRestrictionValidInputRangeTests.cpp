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
