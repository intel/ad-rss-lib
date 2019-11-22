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

#include "ad_rss/state/ProperResponseValidInputRange.hpp"

TEST(ProperResponseValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooSmall)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooBig)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooSmall)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooBig)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooSmall)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooBig)
{
  ::ad_rss::state::ProperResponse value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::world::ObjectIdVector valueDangerousObjects;
  value.dangerousObjects = valueDangerousObjects;
  ::ad_rss::state::LongitudinalResponse valueLongitudinalResponse(::ad_rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad_rss::state::LateralResponse valueLateralResponseRight(::ad_rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad_rss::state::LateralResponse valueLateralResponseLeft(::ad_rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
