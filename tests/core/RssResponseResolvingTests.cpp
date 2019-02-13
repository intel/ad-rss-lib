// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad_rss/core/RssResponseResolving.hpp"

namespace ad_rss {
namespace core {

using state::LateralResponse;
using state::LongitudinalResponse;

class RssResponseResolvingTests : public testing::Test
{
protected:
  void SetUp() override
  {
    resetRssState(firstResponseState, 1u);
    resetRssState(secondResponseState, 1u);
    resetRssState(resultResponseState, 1u);
  }

  void TearDown() override
  {
    responseStateVector.clear();
  }

  void
  testResultState(LongitudinalResponse lonResponse, LateralResponse latResponseLeft, LateralResponse latResponseRight)
  {
    return testResultState(lonResponse,
                           lonResponse == LongitudinalResponse::None,
                           latResponseLeft,
                           latResponseLeft == LateralResponse::None,
                           latResponseRight,
                           latResponseRight == LateralResponse::None);
  }

  void testResultState(LongitudinalResponse lonResponse,
                       bool lonSafe,
                       LateralResponse latResponseLeft,
                       bool latLeftSafe,
                       LateralResponse latResponseRight,
                       bool latRightSafe)
  {
    ASSERT_EQ(lonResponse, resultResponseState.longitudinalState.response);
    ASSERT_EQ(lonSafe, resultResponseState.longitudinalState.isSafe);
    ASSERT_EQ(latResponseLeft, resultResponseState.lateralStateLeft.response);
    ASSERT_EQ(latLeftSafe, resultResponseState.lateralStateLeft.isSafe);
    ASSERT_EQ(latResponseRight, resultResponseState.lateralStateRight.response);
    ASSERT_EQ(latRightSafe, resultResponseState.lateralStateRight.isSafe);
  }

  RssResponseResolving provider;
  state::ResponseState firstResponseState;
  state::ResponseState secondResponseState;
  std::vector<state::ResponseState> responseStateVector;
  state::ResponseState resultResponseState;
};

TEST_F(RssResponseResolvingTests, invalidTimeStamp)
{
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(secondResponseState.lateralStateLeft, LateralResponse::BrakeMin);

  secondResponseState.timeIndex = 1234u;
  responseStateVector.push_back(secondResponseState);

  ASSERT_FALSE(provider.provideProperResponse(responseStateVector, resultResponseState));
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralLeft)
{
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));
  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);

  responseStateVector.clear();
  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(secondResponseState.lateralStateLeft, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::BrakeMin, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralRight)
{
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  responseStateVector.clear();

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(secondResponseState.lateralStateRight, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::BrakeMin);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal)
{
  setRssStateUnsafe(firstResponseState.lateralStateRight, LateralResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  responseStateVector.clear();

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(secondResponseState.lateralStateRight, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal_None)
{
  setRssStateUnsafe(firstResponseState.lateralStateRight, LateralResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  responseStateVector.clear();

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::None);
  setRssStateUnsafe(secondResponseState.lateralStateRight, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, false, LateralResponse::None, true, LateralResponse::None, true);
}

TEST_F(RssResponseResolvingTests, provideProperResponseBothDirections)
{
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(firstResponseState.lateralStateRight, LateralResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);
  responseStateVector.clear();
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinalMoreSevere)
{
  setRssStateUnsafe(firstResponseState.lateralStateRight, LateralResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  responseStateVector.clear();

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMinCorrect);
  setRssStateUnsafe(secondResponseState.lateralStateRight, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMinCorrect, LateralResponse::None, LateralResponse::None);

  responseStateVector.clear();

  setRssStateUnsafe(secondResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(secondResponseState.lateralStateRight, LateralResponse::BrakeMin);

  responseStateVector.push_back(secondResponseState);
  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, threeResponsesSameId)
{
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);
  responseStateVector.push_back(firstResponseState);
  responseStateVector.push_back(firstResponseState);

  ASSERT_FALSE(provider.provideProperResponse(responseStateVector, resultResponseState));
}

TEST_F(RssResponseResolvingTests, provideProperResponseDangerousInitialState)
{
  setRssStateUnsafe(firstResponseState.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(firstResponseState.longitudinalState, LongitudinalResponse::BrakeMin);
  responseStateVector.push_back(firstResponseState);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);

  ASSERT_TRUE(provider.provideProperResponse(responseStateVector, resultResponseState));

  testResultState(LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);
}

} // namespace core
} // namespace ad_rss
