// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "rss/core/RssResponseResolving.hpp"

namespace rss {
namespace core {

using state::LateralResponse;
using state::LongitudinalResponse;

class RssResponseResolvingTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    resetRssState(firstResponseState, 1u);
    resetRssState(secondResponseState, 1u);
    resetRssState(resultResponseState, 1u);
  }

  virtual void TearDown()
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
} // namespace rss
