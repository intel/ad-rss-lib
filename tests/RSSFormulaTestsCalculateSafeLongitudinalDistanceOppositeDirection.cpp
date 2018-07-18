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
#include "TestSupport.hpp"
#include "rss_core/RSSFormulas.hpp"
#include "rss_core/RSSParameters.hpp"

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane, negative_ego_speed)
{
  rss_core::Distance safeDistance = 0.;

  ASSERT_FALSE(rss_core::calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(-10., 1, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane, negative_other_speed)
{
  rss_core::Distance safeDistance = 0.;

  ASSERT_FALSE(rss_core::calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(10., -10, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane, checks_100kmh)
{
  rss_core::Distance safeDistance = 0.;
  ASSERT_TRUE(rss_core::calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(
    kmhToMeterPerSec(100), kmhToMeterPerSec(100), safeDistance));
  ASSERT_NEAR(safeDistance, 406.32, cDoubleNear);
}
