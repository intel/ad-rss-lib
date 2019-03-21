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
#include "ad_rss/state/ResponseState.hpp"

class ResponseStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::ResponseState value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad_rss::state::LongitudinalRssState valueLongitudinalState;
    bool valueLongitudinalStateIsSafe{true};
    valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
    ::ad_rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad_rss::state::LongitudinalResponse::None);
    valueLongitudinalState.response = valueLongitudinalStateResponse;
    value.longitudinalState = valueLongitudinalState;
    ::ad_rss::state::LateralRssState valueLateralStateRight;
    bool valueLateralStateRightIsSafe{true};
    valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
    ::ad_rss::state::LateralResponse valueLateralStateRightResponse(::ad_rss::state::LateralResponse::None);
    valueLateralStateRight.response = valueLateralStateRightResponse;
    value.lateralStateRight = valueLateralStateRight;
    ::ad_rss::state::LateralRssState valueLateralStateLeft;
    bool valueLateralStateLeftIsSafe{true};
    valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
    ::ad_rss::state::LateralResponse valueLateralStateLeftResponse(::ad_rss::state::LateralResponse::None);
    valueLateralStateLeft.response = valueLateralStateLeftResponse;
    value.lateralStateLeft = valueLateralStateLeft;
    mValue = value;
  }

  ::ad_rss::state::ResponseState mValue;
};

TEST_F(ResponseStateTests, copyConstruction)
{
  ::ad_rss::state::ResponseState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ResponseStateTests, moveConstruction)
{
  ::ad_rss::state::ResponseState value(std::move(::ad_rss::state::ResponseState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(ResponseStateTests, copyAssignment)
{
  ::ad_rss::state::ResponseState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ResponseStateTests, moveAssignment)
{
  ::ad_rss::state::ResponseState value;
  value = std::move(::ad_rss::state::ResponseState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ResponseStateTests, comparisonOperatorEqual)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ResponseStateTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ResponseStateTests, comparisonOperatorSituationIdDiffers)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::situation::SituationId situationId(std::numeric_limits<::ad_rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ResponseStateTests, comparisonOperatorLongitudinalStateDiffers)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::state::LongitudinalRssState longitudinalState;
  bool longitudinalStateIsSafe{false};
  longitudinalState.isSafe = longitudinalStateIsSafe;
  ::ad_rss::state::LongitudinalResponse longitudinalStateResponse(::ad_rss::state::LongitudinalResponse::BrakeMin);
  longitudinalState.response = longitudinalStateResponse;
  valueA.longitudinalState = longitudinalState;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ResponseStateTests, comparisonOperatorLateralStateRightDiffers)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::state::LateralRssState lateralStateRight;
  bool lateralStateRightIsSafe{false};
  lateralStateRight.isSafe = lateralStateRightIsSafe;
  ::ad_rss::state::LateralResponse lateralStateRightResponse(::ad_rss::state::LateralResponse::BrakeMin);
  lateralStateRight.response = lateralStateRightResponse;
  valueA.lateralStateRight = lateralStateRight;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ResponseStateTests, comparisonOperatorLateralStateLeftDiffers)
{
  ::ad_rss::state::ResponseState valueA = mValue;
  ::ad_rss::state::LateralRssState lateralStateLeft;
  bool lateralStateLeftIsSafe{false};
  lateralStateLeft.isSafe = lateralStateLeftIsSafe;
  ::ad_rss::state::LateralResponse lateralStateLeftResponse(::ad_rss::state::LateralResponse::BrakeMin);
  lateralStateLeft.response = lateralStateLeftResponse;
  valueA.lateralStateLeft = lateralStateLeft;
  ::ad_rss::state::ResponseState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
