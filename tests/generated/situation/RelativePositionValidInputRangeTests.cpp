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

#include "ad_rss/situation/RelativePositionValidInputRange.hpp"

TEST(RelativePositionValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalPositionTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  value.longitudinalPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLongitudinalDistanceTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.longitudinalDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelongitudinalDistanceDefault)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::physics::Distance valueDefault;
  value.longitudinalDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralPositionTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::situation::LateralRelativePosition invalidInitializedMember(
    static_cast<::ad_rss::situation::LateralRelativePosition>(-1));
  value.lateralPosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooSmall)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangeLateralDistanceTooBig)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::situation::LongitudinalRelativePosition valueLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  value.longitudinalPosition = valueLongitudinalPosition;
  ::ad_rss::physics::Distance valueLongitudinalDistance(0.);
  value.longitudinalDistance = valueLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition valueLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  value.lateralPosition = valueLateralPosition;
  ::ad_rss::physics::Distance valueLateralDistance(0.);
  value.lateralDistance = valueLateralDistance;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.lateralDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativePositionValidInputRangeTests, testValidInputRangelateralDistanceDefault)
{
  ::ad_rss::situation::RelativePosition value;
  ::ad_rss::physics::Distance valueDefault;
  value.lateralDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
