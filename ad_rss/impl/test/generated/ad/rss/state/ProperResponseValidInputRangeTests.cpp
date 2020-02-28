/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLatRightTooSmall)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLatRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLatRightTooBig)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLatRight = invalidInitializedMember;
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLatLeftTooSmall)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLatLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAlphaLatLeftTooBig)
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
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatRight;
  ::ad::physics::Acceleration valueAlphaLatRightAccelMax(-1e2);
  valueAlphaLatRightAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatRight.accelMax = valueAlphaLatRightAccelMax;
  ::ad::physics::Acceleration valueAlphaLatRightBrakeMin(-1e2);
  valueAlphaLatRightBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatRight.brakeMin = valueAlphaLatRightBrakeMin;
  value.alphaLatRight = valueAlphaLatRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLatLeft;
  ::ad::physics::Acceleration valueAlphaLatLeftAccelMax(-1e2);
  valueAlphaLatLeftAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLatLeft.accelMax = valueAlphaLatLeftAccelMax;
  ::ad::physics::Acceleration valueAlphaLatLeftBrakeMin(-1e2);
  valueAlphaLatLeftBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLatLeft.brakeMin = valueAlphaLatLeftBrakeMin;
  value.alphaLatLeft = valueAlphaLatLeft;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLatLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
