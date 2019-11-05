/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
