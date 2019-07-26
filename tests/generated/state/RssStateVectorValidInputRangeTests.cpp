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
