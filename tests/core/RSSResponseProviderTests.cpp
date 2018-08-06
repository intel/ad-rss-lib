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
#include "rss/core/RSSResponseProvider.hpp"

namespace rss {
namespace core {

using check::Response;
using check::LateralResponse;
using check::LongitudinalResponse;

class RSSResponseProviderTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    firstResponse.situationId = 1u;
    firstResponse.longitudinalResponse = LongitudinalResponse::Safe;
    firstResponse.lateralResponseLeft = LateralResponse::Safe;
    firstResponse.lateralResponseRight = LateralResponse::Safe;

    secondResponse = firstResponse;
  }

  virtual void TearDown()
  {
    responseVector.clear();
  }

  RSSResponseProvider provider;
  Response firstResponse;
  Response secondResponse;
  std::vector<Response> responseVector;
};

TEST_F(RSSResponseProviderTests, provideProperResponseLateralLeft)
{
  firstResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  secondResponse.lateralResponseLeft = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLateralRight)
{
  firstResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  secondResponse.lateralResponseRight = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::BrakeMin);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinal)
{
  firstResponse.lateralResponseRight = LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  secondResponse.lateralResponseRight = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinal_None)
{
  firstResponse.lateralResponseRight = LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::None;
  secondResponse.lateralResponseRight = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::None);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseBothDirections)
{
  firstResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  firstResponse.lateralResponseRight = LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::BrakeMin);
  responseVector.clear();
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinalMoreSevere)
{
  firstResponse.lateralResponseRight = LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::BrakeMinCorrect;
  secondResponse.lateralResponseRight = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);

  responseVector.clear();

  secondResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  secondResponse.lateralResponseRight = LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, threeResponsesSameId)
{
  firstResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);
  responseVector.push_back(firstResponse);
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_FALSE(provider.provideProperResponse(responseVector, resultResponse));
}

TEST_F(RSSResponseProviderTests, provideProperResponseDangerousInitialState)
{
  firstResponse.lateralResponseRight = LateralResponse::BrakeMin;
  firstResponse.longitudinalResponse = LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::BrakeMin);

  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.longitudinalResponse, LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.lateralResponseLeft, LateralResponse::Safe);
  ASSERT_EQ(resultResponse.lateralResponseRight, LateralResponse::BrakeMin);
}

} // namespace core
} // namespace rss
