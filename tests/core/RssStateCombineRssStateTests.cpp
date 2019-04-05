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
#include "core/RssState.hpp"

namespace ad_rss {
namespace state {

TEST(RssStateCombineRssStateTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalSafe, cTestSupport.cLongitudinalSafe),
            cTestSupport.cLongitudinalSafe);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalSafe, cTestSupport.cLongitudinalNone),
            cTestSupport.cLongitudinalNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalSafe, cTestSupport.cLongitudinalBrakeMin),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalSafe, cTestSupport.cLongitudinalBrakeMinCorrect),
            cTestSupport.cLongitudinalBrakeMinCorrect);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_None)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalNone, cTestSupport.cLongitudinalSafe),
            cTestSupport.cLongitudinalNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalNone, cTestSupport.cLongitudinalNone),
            cTestSupport.cLongitudinalNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalNone, cTestSupport.cLongitudinalBrakeMin),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalNone, cTestSupport.cLongitudinalBrakeMinCorrect),
            cTestSupport.cLongitudinalBrakeMinCorrect);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMin, cTestSupport.cLongitudinalSafe),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMin, cTestSupport.cLongitudinalNone),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMin, cTestSupport.cLongitudinalBrakeMin),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMin, cTestSupport.cLongitudinalBrakeMinCorrect),
            cTestSupport.cLongitudinalBrakeMin);
}

TEST(RssStateCombineRssStateTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMinCorrect, cTestSupport.cLongitudinalSafe),
            cTestSupport.cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMinCorrect, cTestSupport.cLongitudinalNone),
            cTestSupport.cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMinCorrect, cTestSupport.cLongitudinalBrakeMin),
            cTestSupport.cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLongitudinalBrakeMinCorrect, cTestSupport.cLongitudinalBrakeMinCorrect),
            cTestSupport.cLongitudinalBrakeMinCorrect);
}

TEST(RssStateCombineRssStateTests, lateral_previous_Safe)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLateralSafe, cTestSupport.cLateralSafe), cTestSupport.cLateralSafe);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralSafe, cTestSupport.cLateralNone), cTestSupport.cLateralNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralSafe, cTestSupport.cLateralBrakeMin), cTestSupport.cLateralBrakeMin);
}

TEST(RssStateCombineRssStateTests, lateral_previous_None)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLateralNone, cTestSupport.cLateralSafe), cTestSupport.cLateralNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralNone, cTestSupport.cLateralNone), cTestSupport.cLateralNone);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralNone, cTestSupport.cLateralBrakeMin), cTestSupport.cLateralBrakeMin);
}

TEST(RssStateCombineRssStateTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cTestSupport.cLateralBrakeMin, cTestSupport.cLateralSafe), cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralBrakeMin, cTestSupport.cLateralNone), cTestSupport.cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cTestSupport.cLateralBrakeMin, cTestSupport.cLateralBrakeMin),
            cTestSupport.cLateralBrakeMin);
}

} // namespace state
} // namespace ad_rss
