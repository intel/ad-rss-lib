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

#include "ad_rss/world/DynamicsValidInputRange.hpp"

TEST(DynamicsValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooSmall)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooBig)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooSmall)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooBig)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Distance(1. * 1.1); // set to valid value within struct
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DynamicsValidInputRangeTests, testValidInputRangelateralFluctuationMarginDefault)
{
  ::ad_rss::world::Dynamics value;
  ::ad_rss::physics::Distance valueDefault;
  value.lateralFluctuationMargin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
