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

#include "ad_rss/state/LongitudinalRssStateValidInputRange.hpp"

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::ResponseInformation valueResponseInformation;
  ::ad_rss::physics::Distance valueResponseInformationSafeDistance(0.);
  valueResponseInformation.safeDistance = valueResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueResponseInformationCurrentDistance(0.);
  valueResponseInformation.currentDistance = valueResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueResponseInformation.responseEvaluator = valueResponseInformationResponseEvaluator;
  value.responseInformation = valueResponseInformation;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::ResponseInformation valueResponseInformation;
  ::ad_rss::physics::Distance valueResponseInformationSafeDistance(0.);
  valueResponseInformation.safeDistance = valueResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueResponseInformationCurrentDistance(0.);
  valueResponseInformation.currentDistance = valueResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueResponseInformation.responseEvaluator = valueResponseInformationResponseEvaluator;
  value.responseInformation = valueResponseInformation;

  // override member with invalid value
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::ResponseInformation valueResponseInformation;
  ::ad_rss::physics::Distance valueResponseInformationSafeDistance(0.);
  valueResponseInformation.safeDistance = valueResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueResponseInformationCurrentDistance(0.);
  valueResponseInformation.currentDistance = valueResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueResponseInformation.responseEvaluator = valueResponseInformationResponseEvaluator;
  value.responseInformation = valueResponseInformation;

  // override member with invalid value
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseInformationTooSmall)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::ResponseInformation valueResponseInformation;
  ::ad_rss::physics::Distance valueResponseInformationSafeDistance(0.);
  valueResponseInformation.safeDistance = valueResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueResponseInformationCurrentDistance(0.);
  valueResponseInformation.currentDistance = valueResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueResponseInformation.responseEvaluator = valueResponseInformationResponseEvaluator;
  value.responseInformation = valueResponseInformation;

  // override member with invalid value
  ::ad_rss::state::ResponseInformation invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberSafeDistance(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.responseInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseInformationTooBig)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::ResponseInformation valueResponseInformation;
  ::ad_rss::physics::Distance valueResponseInformationSafeDistance(0.);
  valueResponseInformation.safeDistance = valueResponseInformationSafeDistance;
  ::ad_rss::physics::Distance valueResponseInformationCurrentDistance(0.);
  valueResponseInformation.currentDistance = valueResponseInformationCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseInformationResponseEvaluator(
    ::ad_rss::state::ResponseEvaluator::None);
  valueResponseInformation.responseEvaluator = valueResponseInformationResponseEvaluator;
  value.responseInformation = valueResponseInformation;

  // override member with invalid value
  ::ad_rss::state::ResponseInformation invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberSafeDistance(1e6 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.responseInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
