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
#include "ad/rss/state/RssState.hpp"

class RssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::RssState value;
    ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad::rss::situation::SituationId valueSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
    bool valueLongitudinalStateIsSafe{true};
    valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
    ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
    valueLongitudinalState.response = valueLongitudinalStateResponse;
    ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
    ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(0.);
    valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(0.);
    valueLongitudinalStateRssStateInformation.currentDistance
      = valueLongitudinalStateRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
    valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
    value.longitudinalState = valueLongitudinalState;
    ::ad::rss::state::LateralRssState valueLateralStateRight;
    bool valueLateralStateRightIsSafe{true};
    valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
    ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
    valueLateralStateRight.response = valueLateralStateRightResponse;
    ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
    ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(0.);
    valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(0.);
    valueLateralStateRightRssStateInformation.currentDistance
      = valueLateralStateRightRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
    valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
    value.lateralStateRight = valueLateralStateRight;
    ::ad::rss::state::LateralRssState valueLateralStateLeft;
    bool valueLateralStateLeftIsSafe{true};
    valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
    ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
    valueLateralStateLeft.response = valueLateralStateLeftResponse;
    ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
    ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(0.);
    valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(0.);
    valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
    valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
    value.lateralStateLeft = valueLateralStateLeft;
    mValue = value;
  }

  ::ad::rss::state::RssState mValue;
};

TEST_F(RssStateTests, copyConstruction)
{
  ::ad::rss::state::RssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveConstruction)
{
  ::ad::rss::state::RssState value(std::move(::ad::rss::state::RssState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, copyAssignment)
{
  ::ad::rss::state::RssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveAssignment)
{
  ::ad::rss::state::RssState value;
  value = std::move(::ad::rss::state::RssState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorObjectIdDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::world::ObjectId objectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorSituationIdDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::situation::SituationId situationId(std::numeric_limits<::ad::rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLongitudinalStateDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LongitudinalRssState longitudinalState;
  bool longitudinalStateIsSafe{false};
  longitudinalState.isSafe = longitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse longitudinalStateResponse(::ad::rss::state::LongitudinalResponse::BrakeMin);
  longitudinalState.response = longitudinalStateResponse;
  ::ad::rss::state::RssStateInformation longitudinalStateRssStateInformation;
  ::ad::physics::Distance longitudinalStateRssStateInformationSafeDistance(1e6);
  longitudinalStateRssStateInformation.safeDistance = longitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance longitudinalStateRssStateInformationCurrentDistance(1e6);
  longitudinalStateRssStateInformation.currentDistance = longitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator longitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  longitudinalStateRssStateInformation.evaluator = longitudinalStateRssStateInformationEvaluator;
  longitudinalState.rssStateInformation = longitudinalStateRssStateInformation;
  valueA.longitudinalState = longitudinalState;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateRightDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateralStateRight;
  bool lateralStateRightIsSafe{false};
  lateralStateRight.isSafe = lateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse lateralStateRightResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateralStateRight.response = lateralStateRightResponse;
  ::ad::rss::state::RssStateInformation lateralStateRightRssStateInformation;
  ::ad::physics::Distance lateralStateRightRssStateInformationSafeDistance(1e6);
  lateralStateRightRssStateInformation.safeDistance = lateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance lateralStateRightRssStateInformationCurrentDistance(1e6);
  lateralStateRightRssStateInformation.currentDistance = lateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator lateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateRightRssStateInformation.evaluator = lateralStateRightRssStateInformationEvaluator;
  lateralStateRight.rssStateInformation = lateralStateRightRssStateInformation;
  valueA.lateralStateRight = lateralStateRight;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateLeftDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateralStateLeft;
  bool lateralStateLeftIsSafe{false};
  lateralStateLeft.isSafe = lateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse lateralStateLeftResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateralStateLeft.response = lateralStateLeftResponse;
  ::ad::rss::state::RssStateInformation lateralStateLeftRssStateInformation;
  ::ad::physics::Distance lateralStateLeftRssStateInformationSafeDistance(1e6);
  lateralStateLeftRssStateInformation.safeDistance = lateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance lateralStateLeftRssStateInformationCurrentDistance(1e6);
  lateralStateLeftRssStateInformation.currentDistance = lateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator lateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateLeftRssStateInformation.evaluator = lateralStateLeftRssStateInformationEvaluator;
  lateralStateLeft.rssStateInformation = lateralStateLeftRssStateInformation;
  valueA.lateralStateLeft = lateralStateLeft;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
