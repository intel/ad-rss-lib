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

#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"

TEST(RssStateSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssStateSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::state::RssStateVector valueIndividualResponses;
  ::ad::rss::state::RssState valueIndividualResponsesElement;
  ::ad::rss::world::ObjectId valueIndividualResponsesElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueIndividualResponsesElement.objectId = valueIndividualResponsesElementObjectId;
  ::ad::rss::situation::SituationId valueIndividualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueIndividualResponsesElement.situationId = valueIndividualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState valueIndividualResponsesElementLongitudinalState;
  bool valueIndividualResponsesElementLongitudinalStateIsSafe{true};
  valueIndividualResponsesElementLongitudinalState.isSafe = valueIndividualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse valueIndividualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  valueIndividualResponsesElementLongitudinalState.response = valueIndividualResponsesElementLongitudinalStateResponse;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  valueIndividualResponsesElementLongitudinalState.rssStateInformation
    = valueIndividualResponsesElementLongitudinalStateRssStateInformation;
  valueIndividualResponsesElement.longitudinalState = valueIndividualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateRight;
  bool valueIndividualResponsesElementLateralStateRightIsSafe{true};
  valueIndividualResponsesElementLateralStateRight.isSafe = valueIndividualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateRight.response = valueIndividualResponsesElementLateralStateRightResponse;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateRightRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateRight.rssStateInformation
    = valueIndividualResponsesElementLateralStateRightRssStateInformation;
  valueIndividualResponsesElement.lateralStateRight = valueIndividualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateLeft;
  bool valueIndividualResponsesElementLateralStateLeftIsSafe{true};
  valueIndividualResponsesElementLateralStateLeft.isSafe = valueIndividualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::None);
  valueIndividualResponsesElementLateralStateLeft.response = valueIndividualResponsesElementLateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(0.);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  valueIndividualResponsesElementLateralStateLeft.rssStateInformation
    = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
  valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
  valueIndividualResponses.resize(1, valueIndividualResponsesElement);
  value.individualResponses = valueIndividualResponses;
  ASSERT_TRUE(withinValidInputRange(value));
}
