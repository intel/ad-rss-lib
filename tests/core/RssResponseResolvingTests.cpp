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
    state::RssState rssStateT1O1;
    state::RssState rssStateT1O2;
    state::RssState rssStateT2O1;
    state::RssState rssStateT2O2;
    state::RssState rssStateT3O1;
    state::RssState rssStateT3O2;
    resetRssState(rssStateT1O1, 1u, 1u);
    resetRssState(rssStateT1O2, 2u, 2u);
    resetRssState(rssStateT2O1, 1u, 1u);
    resetRssState(rssStateT2O2, 2u, 2u);
    resetRssState(rssStateT3O1, 1u, 1u);
    resetRssState(rssStateT3O2, 2u, 2u);
    rssStateSnapshotT1.timeIndex = 1u;
    rssStateSnapshotT1.individualResponses.push_back(rssStateT1O1);
    rssStateSnapshotT1.individualResponses.push_back(rssStateT1O2);

    rssStateSnapshotT2.timeIndex = 2u;
    rssStateSnapshotT2.individualResponses.push_back(rssStateT2O1);
    rssStateSnapshotT2.individualResponses.push_back(rssStateT2O2);

    rssStateSnapshotT3.timeIndex = 3u;
    rssStateSnapshotT3.individualResponses.push_back(rssStateT3O1);
    rssStateSnapshotT3.individualResponses.push_back(rssStateT3O2);

    resetRssState(resultProperResponseT1);
    resetRssState(resultProperResponseT2);
    resetRssState(resultProperResponseT3);
  }

  void TearDown() override
  {
  }

  void testResultStateNone(state::ProperResponse &resultProperResponse)
  {
    testResultState(
      resultProperResponse, true, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  }

  void testResultState(state::ProperResponse &resultProperResponse,
                       bool isSafe,
                       LongitudinalResponse lonResponse,
                       LateralResponse latResponseLeft,
                       LateralResponse latResponseRight,
                       ::ad_rss::world::ObjectIdVector dangerousObjects = ::ad_rss::world::ObjectIdVector())
  {
    EXPECT_EQ(isSafe, resultProperResponse.isSafe);
    EXPECT_EQ(lonResponse, resultProperResponse.longitudinalResponse);
    EXPECT_EQ(latResponseLeft, resultProperResponse.lateralResponseLeft);
    EXPECT_EQ(latResponseRight, resultProperResponse.lateralResponseRight);
    EXPECT_EQ(dangerousObjects, resultProperResponse.dangerousObjects);
  }

  void performTest(bool expectedResultT1 = true, bool expectedResultT2 = true, bool expectedResultT3 = true)
  {
    RssResponseResolving provider;

    EXPECT_EQ(expectedResultT1, provider.provideProperResponse(rssStateSnapshotT1, resultProperResponseT1));
    EXPECT_EQ(expectedResultT2, provider.provideProperResponse(rssStateSnapshotT2, resultProperResponseT2));
    EXPECT_EQ(expectedResultT3, provider.provideProperResponse(rssStateSnapshotT3, resultProperResponseT3));
  }

  state::RssStateSnapshot rssStateSnapshotT1;
  state::RssStateSnapshot rssStateSnapshotT2;
  state::RssStateSnapshot rssStateSnapshotT3;

  state::ProperResponse resultProperResponseT1;
  state::ProperResponse resultProperResponseT2;
  state::ProperResponse resultProperResponseT3;
};

TEST_F(RssResponseResolvingTests, validateTestSetup)
{
  performTest(true);
  testResultStateNone(resultProperResponseT1);
  testResultStateNone(resultProperResponseT2);
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, invalidState)
{
  rssStateSnapshotT1.individualResponses[0].longitudinalState.response = LongitudinalResponse(-1);
  performTest(false);
}

TEST_F(RssResponseResolvingTests, sameTimeSameSituationId)
{
  rssStateSnapshotT1.individualResponses[1] = rssStateSnapshotT1.individualResponses[0];
  performTest(false);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralLeft)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateLeft, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::None, LateralResponse::BrakeMin, LateralResponse::None, {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralRight)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::None, LateralResponse::None, LateralResponse::BrakeMin, {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None, {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal_None)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::None);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None, {1});
}

TEST_F(RssResponseResolvingTests, provideProperResponseBothDirections)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultProperResponseT1,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT2);
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinalMoreSevere)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMinCorrect);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT3.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT3.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMinCorrect,
                  LateralResponse::None,
                  LateralResponse::None,
                  {1});
  testResultState(
    resultProperResponseT3, false, LongitudinalResponse::BrakeMin, LateralResponse::None, LateralResponse::None, {1});
}

TEST_F(RssResponseResolvingTests, provideProperResponseDangerousInitialState)
{
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT1.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].lateralStateRight, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individualResponses[0].longitudinalState, LongitudinalResponse::BrakeMin);

  performTest();
  testResultState(resultProperResponseT1,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT3);
}

} // namespace core
} // namespace ad_rss
