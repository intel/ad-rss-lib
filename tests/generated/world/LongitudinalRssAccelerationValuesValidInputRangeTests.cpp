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

#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMaxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinCorrectDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMinCorrect = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
