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

#include "ad_rss/state/ResponseStateVectorValidInputRange.hpp"

TEST(ResponseStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::state::ResponseStateVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ResponseStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::state::ResponseStateVector value;
  ::ad_rss::state::ResponseState element;
  ::ad_rss::physics::TimeIndex elementTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  elementTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  element.timeIndex = elementTimeIndex;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation elementLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance elementLongitudinalStateResponseInformationSafeDistance(0.);
  elementLongitudinalStateResponseInformation.safeDistance = elementLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLongitudinalStateResponseInformationCurrentDistance(0.);
  elementLongitudinalStateResponseInformation.currentDistance
    = elementLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLongitudinalStateResponseInformation.responseEvaluator
    = elementLongitudinalStateResponseInformationResponseEvaluator;
  elementLongitudinalState.responseInformation = elementLongitudinalStateResponseInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad_rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse elementLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation elementLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance elementLateralStateRightResponseInformationSafeDistance(0.);
  elementLateralStateRightResponseInformation.safeDistance = elementLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLateralStateRightResponseInformationCurrentDistance(0.);
  elementLateralStateRightResponseInformation.currentDistance
    = elementLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLateralStateRightResponseInformation.responseEvaluator
    = elementLateralStateRightResponseInformationResponseEvaluator;
  elementLateralStateRight.responseInformation = elementLateralStateRightResponseInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad_rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse elementLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation elementLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance elementLateralStateLeftResponseInformationSafeDistance(0.);
  elementLateralStateLeftResponseInformation.safeDistance = elementLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLateralStateLeftResponseInformationCurrentDistance(0.);
  elementLateralStateLeftResponseInformation.currentDistance
    = elementLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLateralStateLeftResponseInformation.responseEvaluator
    = elementLateralStateLeftResponseInformationResponseEvaluator;
  elementLateralStateLeft.responseInformation = elementLateralStateLeftResponseInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ResponseStateVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::state::ResponseStateVector value;
  ::ad_rss::state::ResponseState element;
  ::ad_rss::physics::TimeIndex elementTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  elementTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  element.timeIndex = elementTimeIndex;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad_rss::state::ResponseInformation elementLongitudinalStateResponseInformation;
  ::ad_rss::physics::Distance elementLongitudinalStateResponseInformationSafeDistance(0.);
  elementLongitudinalStateResponseInformation.safeDistance = elementLongitudinalStateResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLongitudinalStateResponseInformationCurrentDistance(0.);
  elementLongitudinalStateResponseInformation.currentDistance
    = elementLongitudinalStateResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLongitudinalStateResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLongitudinalStateResponseInformation.responseEvaluator
    = elementLongitudinalStateResponseInformationResponseEvaluator;
  elementLongitudinalState.responseInformation = elementLongitudinalStateResponseInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad_rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse elementLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad_rss::state::ResponseInformation elementLateralStateRightResponseInformation;
  ::ad_rss::physics::Distance elementLateralStateRightResponseInformationSafeDistance(0.);
  elementLateralStateRightResponseInformation.safeDistance = elementLateralStateRightResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLateralStateRightResponseInformationCurrentDistance(0.);
  elementLateralStateRightResponseInformation.currentDistance
    = elementLateralStateRightResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLateralStateRightResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLateralStateRightResponseInformation.responseEvaluator
    = elementLateralStateRightResponseInformationResponseEvaluator;
  elementLateralStateRight.responseInformation = elementLateralStateRightResponseInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad_rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse elementLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad_rss::state::ResponseInformation elementLateralStateLeftResponseInformation;
  ::ad_rss::physics::Distance elementLateralStateLeftResponseInformationSafeDistance(0.);
  elementLateralStateLeftResponseInformation.safeDistance = elementLateralStateLeftResponseInformationSafeDistance;
  ::ad_rss::physics::Distance elementLateralStateLeftResponseInformationCurrentDistance(0.);
  elementLateralStateLeftResponseInformation.currentDistance
    = elementLateralStateLeftResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator elementLateralStateLeftResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  elementLateralStateLeftResponseInformation.responseEvaluator
    = elementLateralStateLeftResponseInformationResponseEvaluator;
  elementLateralStateLeft.responseInformation = elementLateralStateLeftResponseInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseStateVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::state::ResponseStateVector value;
  ::ad_rss::state::ResponseState element;
  ::ad_rss::state::LongitudinalRssState elementLongitudinalState;
  ::ad_rss::state::LongitudinalResponse elementLongitudinalStateResponse(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  element.longitudinalState = elementLongitudinalState;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
