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

#include "ad/rss/state/ProperResponseValidInputRange.hpp"

TEST(ProperResponseValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
