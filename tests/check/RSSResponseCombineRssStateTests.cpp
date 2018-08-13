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
#include "check/RSSResponseFunctions.hpp"

namespace rss {
namespace check {

TEST(RSSResponseCombineRssStateTests, longitudinal_previous_Safe)
{
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalSafe), cLongitudinalSafe);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalNone), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalSafe, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSResponseCombineRssStateTests, longitudinal_previous_None)
{
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalSafe), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalNone), cLongitudinalNone);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalNone, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSResponseCombineRssStateTests, longitudinal_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalSafe), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalNone), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMin, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMin);
}

TEST(RSSResponseCombineRssStateTests, longitudinal_previous_BrakeMinCorrect)
{
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalSafe), cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalNone), cLongitudinalBrakeMinCorrect);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalBrakeMin), cLongitudinalBrakeMin);
  ASSERT_EQ(combineRssState(cLongitudinalBrakeMinCorrect, cLongitudinalBrakeMinCorrect), cLongitudinalBrakeMinCorrect);
}

TEST(RSSResponseCombineRssStateTests, lateral_previous_Safe)
{
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralSafe), cLateralSafe);
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralNone), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralSafe, cLateralBrakeMin), cLateralBrakeMin);
}

TEST(RSSResponseCombineRssStateTests, lateral_previous_None)
{
  ASSERT_EQ(combineRssState(cLateralNone, cLateralSafe), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralNone, cLateralNone), cLateralNone);
  ASSERT_EQ(combineRssState(cLateralNone, cLateralBrakeMin), cLateralBrakeMin);
}

TEST(RSSResponseCombineRssStateTests, lateral_previous_BrakeMin)
{
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralSafe), cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralNone), cLateralBrakeMin);
  ASSERT_EQ(combineRssState(cLateralBrakeMin, cLateralBrakeMin), cLateralBrakeMin);
}

} // namespace check
} // namespace rss
