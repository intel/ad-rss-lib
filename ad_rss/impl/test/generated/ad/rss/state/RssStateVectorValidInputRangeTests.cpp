/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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

#include "ad/rss/state/RssStateVectorValidInputRange.hpp"

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::state::RssStateVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(0.);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(0.);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(0.);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(0.);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(0.);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(0.);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(0.);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(0.);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(0.);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(0.);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(0.);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(0.);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  element.longitudinalState = elementLongitudinalState;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(0.);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(0.);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(0.);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(0.);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(0.);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(0.);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  element.longitudinalState = elementLongitudinalState;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
