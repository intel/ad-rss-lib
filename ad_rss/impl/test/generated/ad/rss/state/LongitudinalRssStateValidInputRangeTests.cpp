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

#include "ad/rss/state/LongitudinalRssStateValidInputRange.hpp"

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(0. - ::ad::physics::Distance::cPrecisionValue);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(1e9 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
