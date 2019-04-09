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

#include "ad_rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"

class LongitudinalRssAccelerationValuesValidInputRangeTests : public ::testing::Test
{
public:
  void SetUp() override
  {
    DLT_REGISTER_CONTEXT(mDltContext, "TEST", "LongitudinalRssAccelerationValuesValidInputRangeTests");
  }

  void TearDown() override
  {
    DLT_UNREGISTER_CONTEXT(mDltContext);
  }

  DltContext mDltContext;
};

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;
  ASSERT_TRUE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMaxDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinCorrectDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMinCorrect = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}
