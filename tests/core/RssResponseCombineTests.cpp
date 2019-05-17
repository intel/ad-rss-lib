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
