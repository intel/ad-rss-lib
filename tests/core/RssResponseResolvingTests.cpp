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
    resetRssState(responseStateT1O1, 1u);
    resetRssState(responseStateT1O2, 2u);
    resetRssState(responseStateT2O1, 1u);
    responseStateT2O1.timeIndex = 2u;
    resetRssState(responseStateT2O2, 2u);
    responseStateT2O2.timeIndex = 2u;
    resetRssState(responseStateT3O1, 1u);
    responseStateT2O1.timeIndex = 3u;
    resetRssState(responseStateT3O2, 2u);
    responseStateT2O2.timeIndex = 3u;
    resetRssState(resultResponseStateT1, 0u);
    resetRssState(resultResponseStateT2, 0u);
    resetRssState(resultResponseStateT3, 0u);
  }

  void TearDown() override
  {
  }

  void testResultState(state::ResponseState &resultResponseState,
                       LongitudinalResponse lonResponse,
                       LateralResponse latResponseLeft,
                       LateralResponse latResponseRight)
  {
    testResultState(resultResponseState,
                    lonResponse,
                    lonResponse == LongitudinalResponse::None,
                    latResponseLeft,
                    latResponseLeft == LateralResponse::None,
                    latResponseRight,
                    latResponseRight == LateralResponse::None);
  }

  void testResultState(state::ResponseState &resultResponseState,
                       LongitudinalResponse lonResponse,
                       bool lonSafe,
                       LateralResponse latResponseLeft,
                       bool latLeftSafe,
                       LateralResponse latResponseRight,
                       bool latRightSafe)
  {
    EXPECT_EQ(lonResponse, resultResponseState.longitudinalState.response);
    EXPECT_EQ(lonSafe, resultResponseState.longitudinalState.isSafe);
    EXPECT_EQ(latResponseLeft, resultResponseState.lateralStateLeft.response);
    EXPECT_EQ(latLeftSafe, resultResponseState.lateralStateLeft.isSafe);
    EXPECT_EQ(latResponseRight, resultResponseState.lateralStateRight.response);
    EXPECT_EQ(latRightSafe, resultResponseState.lateralStateRight.isSafe);
  }

  void performTest(bool expectedResultT1 = true, bool expectedResultT2 = true, bool expectedResultT3 = true)
  {
    RssResponseResolving provider;
    std::vector<state::ResponseState> responseStateVectorT1;
    responseStateVectorT1.push_back(responseStateT1O1);
    responseStateVectorT1.push_back(responseStateT1O2);

    std::vector<state::ResponseState> responseStateVectorT2;
    responseStateVectorT2.push_back(responseStateT2O1);
    responseStateVectorT2.push_back(responseStateT2O2);

    std::vector<state::ResponseState> responseStateVectorT3;
    responseStateVectorT3.push_back(responseStateT3O1);
    responseStateVectorT3.push_back(responseStateT3O2);

    EXPECT_EQ(expectedResultT1, provider.provideProperResponse(responseStateVectorT1, resultResponseStateT1));
    EXPECT_EQ(expectedResultT2, provider.provideProperResponse(responseStateVectorT2, resultResponseStateT2));
    EXPECT_EQ(expectedResultT3, provider.provideProperResponse(responseStateVectorT3, resultResponseStateT3));
  }

  state::ResponseState responseStateT1O1;
  state::ResponseState responseStateT1O2;
  state::ResponseState responseStateT2O1;
  state::ResponseState responseStateT2O2;
  state::ResponseState responseStateT3O1;
  state::ResponseState responseStateT3O2;
  state::ResponseState resultResponseStateT1;
  state::ResponseState resultResponseStateT2;
  state::ResponseState resultResponseStateT3;
};

TEST_F(RssResponseResolvingTests, validateTestSetup)
{
  performTest(true);
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT2, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, invalidTimeStamp)
{
  responseStateT1O2.timeIndex = 1234u;
  performTest(false);
}

TEST_F(RssResponseResolvingTests, invalidState)
{
  responseStateT1O1.longitudinalState.response = LongitudinalResponse(-1);
  performTest(false);
}

TEST_F(RssResponseResolvingTests, extremeTimeIndexAreAccepted)
{
  responseStateT2O1.timeIndex = static_cast<uint64_t>(-1);
  responseStateT2O2.timeIndex = static_cast<uint64_t>(-1);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT2, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, sameTimeSameId)
{
  responseStateT1O2 = responseStateT1O1;
  performTest(false);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralLeft)
{
  setRssStateUnsafe(responseStateT1O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.lateralStateLeft, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT2, LongitudinalResponse::None, LateralResponse::BrakeMin, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralRight)
{
  setRssStateUnsafe(responseStateT1O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT2, LongitudinalResponse::None, LateralResponse::None, LateralResponse::BrakeMin);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal)
{
  setRssStateUnsafe(responseStateT1O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT2, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal_None)
{
  setRssStateUnsafe(responseStateT1O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::None);
  setRssStateUnsafe(responseStateT2O1.lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(
    resultResponseStateT2, LongitudinalResponse::None, false, LateralResponse::None, true, LateralResponse::None, true);
}

TEST_F(RssResponseResolvingTests, provideProperResponseBothDirections)
{
  setRssStateUnsafe(responseStateT1O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT1O1.lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(
    resultResponseStateT1, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);
  testResultState(resultResponseStateT2, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinalMoreSevere)
{
  setRssStateUnsafe(responseStateT1O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::BrakeMinCorrect);
  setRssStateUnsafe(responseStateT2O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT3O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT3O1.lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultResponseStateT1, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  testResultState(
    resultResponseStateT2, LongitudinalResponse::BrakeMinCorrect, LateralResponse::None, LateralResponse::None);
  testResultState(resultResponseStateT3, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None);
}

TEST_F(RssResponseResolvingTests, provideProperResponseDangerousInitialState)
{
  setRssStateUnsafe(responseStateT1O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT1O1.longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(responseStateT2O1.longitudinalState, LongitudinalResponse::BrakeMin);

  performTest();
  testResultState(
    resultResponseStateT1, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);
  testResultState(
    resultResponseStateT2, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::BrakeMin);
  testResultState(resultResponseStateT3, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
}

} // namespace core
} // namespace ad_rss
