// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad_rss/core/RssResponseResolving.hpp"

namespace ad_rss {
namespace core {

TEST(RssStateCombineRssStateTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalSafe.response,
                                                  cTestSupport.cLongitudinalSafe.response),
            cTestSupport.cLongitudinalSafe.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalSafe.response,
                                                  cTestSupport.cLongitudinalNone.response),
            cTestSupport.cLongitudinalNone.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalSafe.response,
                                                  cTestSupport.cLongitudinalBrakeMin.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalSafe.response,
                                                  cTestSupport.cLongitudinalBrakeMinCorrect.response),
            cTestSupport.cLongitudinalBrakeMinCorrect.response);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_None)
{
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalNone.response,
                                                  cTestSupport.cLongitudinalSafe.response),
            cTestSupport.cLongitudinalNone.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalNone.response,
                                                  cTestSupport.cLongitudinalNone.response),
            cTestSupport.cLongitudinalNone.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalNone.response,
                                                  cTestSupport.cLongitudinalBrakeMin.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalNone.response,
                                                  cTestSupport.cLongitudinalBrakeMinCorrect.response),
            cTestSupport.cLongitudinalBrakeMinCorrect.response);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMin.response,
                                                  cTestSupport.cLongitudinalSafe.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMin.response,
                                                  cTestSupport.cLongitudinalNone.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMin.response,
                                                  cTestSupport.cLongitudinalBrakeMin.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMin.response,
                                                  cTestSupport.cLongitudinalBrakeMinCorrect.response),
            cTestSupport.cLongitudinalBrakeMin.response);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMinCorrect.response,
                                                  cTestSupport.cLongitudinalSafe.response),
            cTestSupport.cLongitudinalBrakeMinCorrect.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMinCorrect.response,
                                                  cTestSupport.cLongitudinalNone.response),
            cTestSupport.cLongitudinalBrakeMinCorrect.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMinCorrect.response,
                                                  cTestSupport.cLongitudinalBrakeMin.response),
            cTestSupport.cLongitudinalBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLongitudinalBrakeMinCorrect.response,
                                                  cTestSupport.cLongitudinalBrakeMinCorrect.response),
            cTestSupport.cLongitudinalBrakeMinCorrect.response);
}

TEST(RssStateCombineRssStateTests, lateral_previous_Safe)
{
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralSafe.response, cTestSupport.cLateralSafe.response),
    cTestSupport.cLateralSafe.response);
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralSafe.response, cTestSupport.cLateralNone.response),
    cTestSupport.cLateralNone.response);
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralSafe.response, cTestSupport.cLateralBrakeMin.response),
    cTestSupport.cLateralBrakeMin.response);
}

TEST(RssStateCombineRssStateTests, lateral_previous_None)
{
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralNone.response, cTestSupport.cLateralSafe.response),
    cTestSupport.cLateralNone.response);
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralNone.response, cTestSupport.cLateralNone.response),
    cTestSupport.cLateralNone.response);
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralNone.response, cTestSupport.cLateralBrakeMin.response),
    cTestSupport.cLateralBrakeMin.response);
}

TEST(RssStateCombineRssStateTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralBrakeMin.response, cTestSupport.cLateralSafe.response),
    cTestSupport.cLateralBrakeMin.response);
  ASSERT_EQ(
    RssResponseResolving::combineResponse(cTestSupport.cLateralBrakeMin.response, cTestSupport.cLateralNone.response),
    cTestSupport.cLateralBrakeMin.response);
  ASSERT_EQ(RssResponseResolving::combineResponse(cTestSupport.cLateralBrakeMin.response,
                                                  cTestSupport.cLateralBrakeMin.response),
            cTestSupport.cLateralBrakeMin.response);
}

} // namespace core
} // namespace ad_rss
