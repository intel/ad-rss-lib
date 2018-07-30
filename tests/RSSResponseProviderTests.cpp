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

#include <gtest/gtest.h>

#include "rss_core/RSSResponseProvider.hpp"

class RSSResponseProviderTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    firstResponse.id = 1u;
    firstResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::Safe;
    firstResponse.mLateralResponseLeft = rss_core::LateralResponse::Safe;
    firstResponse.mLateralResponseRight = rss_core::LateralResponse::Safe;

    secondResponse = firstResponse;
  }

  virtual void TearDown()
  {
    responseVector.clear();
  }

  rss_core::RSSResponseProvider provider;
  rss_core::Response firstResponse;
  rss_core::Response secondResponse;
  std::vector<rss_core::Response> responseVector;
};

TEST_F(RSSResponseProviderTests, provideProperResponseLateralLeft)
{
  firstResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  secondResponse.mLateralResponseLeft = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::BrakeMin);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLateralRight)
{
  firstResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  secondResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::BrakeMin);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinal)
{
  firstResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  secondResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinal_None)
{
  firstResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::None;
  secondResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::None);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, provideProperResponseBothDirections)
{
  firstResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  firstResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::BrakeMin);
  responseVector.clear();
}

TEST_F(RSSResponseProviderTests, provideProperResponseLongitudinalMoreSevere)
{
  firstResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMinCorrect;
  secondResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::BrakeMinCorrect);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);

  responseVector.clear();

  secondResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  secondResponse.mLateralResponseRight = rss_core::LateralResponse::BrakeMin;

  responseVector.push_back(secondResponse);
  ASSERT_TRUE(provider.provideProperResponse(responseVector, resultResponse));

  ASSERT_EQ(resultResponse.mLongitudinalResponse, rss_core::LongitudinalResponse::BrakeMin);
  ASSERT_EQ(resultResponse.mLateralResponseLeft, rss_core::LateralResponse::Safe);
  ASSERT_EQ(resultResponse.mLateralResponseRight, rss_core::LateralResponse::Safe);
}

TEST_F(RSSResponseProviderTests, threeResponsesSameId)
{
  firstResponse.mLongitudinalResponse = rss_core::LongitudinalResponse::BrakeMin;
  responseVector.push_back(firstResponse);
  responseVector.push_back(firstResponse);
  responseVector.push_back(firstResponse);

  rss_core::Response resultResponse;
  ASSERT_FALSE(provider.provideProperResponse(responseVector, resultResponse));
}
