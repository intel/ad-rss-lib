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
#include "core/RSSState.hpp"

namespace rss {
namespace state {

TEST(RSSStateCombineRssStateTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalSafe), cLongitudinalSafe);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalNone), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSStateCombineRssStateTests, longitudinal_previous_None)
{
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalSafe), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalNone), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSStateCombineRssStateTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalSafe), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalNone), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMin);
}

TEST(RSSStateCombineRssStateTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalSafe), cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalNone), cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSStateCombineRssStateTests, lateral_previous_Safe)
{
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralSafe), cLateralSafe);
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralNone), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralBrakeMin), cLateralBrakeMin);
}

TEST(RSSStateCombineRssStateTests, lateral_previous_None)
{
  ASSERT_EQ(combineRssState(cLateralNone, cLateralSafe), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralNone, cLateralNone), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralNone, cLateralBrakeMin), cLateralBrakeMin);
}

TEST(RSSStateCombineRssStateTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralSafe), cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralNone), cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralBrakeMin), cLateralBrakeMin);
}

} // namespace state
} // namespace rss
