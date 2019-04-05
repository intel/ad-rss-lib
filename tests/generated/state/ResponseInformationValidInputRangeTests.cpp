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

#include "ad_rss/state/ResponseInformationValidInputRange.hpp"

TEST(ResponseInformationValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooSmall)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooBig)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangesafeDistanceDefault)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueDefault;
  value.safeDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooSmall)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooBig)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangecurrentDistanceDefault)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueDefault;
  value.currentDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeResponseEvaluatorTooSmall)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::state::ResponseEvaluator invalidInitializedMember(static_cast<::ad_rss::state::ResponseEvaluator>(-1));
  value.responseEvaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ResponseInformationValidInputRangeTests, testValidInputRangeResponseEvaluatorTooBig)
{
  ::ad_rss::state::ResponseInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::ResponseEvaluator valueResponseEvaluator(::ad_rss::state::ResponseEvaluator::None);
  value.responseEvaluator = valueResponseEvaluator;

  // override member with invalid value
  ::ad_rss::state::ResponseEvaluator invalidInitializedMember(static_cast<::ad_rss::state::ResponseEvaluator>(-1));
  value.responseEvaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
