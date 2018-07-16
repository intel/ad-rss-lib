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

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirection, negative_ego_velocity)
{
  rss_core::Distance safeDistance = 0.;

  ASSERT_FALSE(rss_core::calculateSafeLongitudinalDistanceOppositeDirection(-10., 1, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirection, negative_other_velocity)
{
  rss_core::Distance safeDistance = 0.;

  ASSERT_FALSE(rss_core::calculateSafeLongitudinalDistanceOppositeDirection(10., -10, safeDistance));
}

TEST(RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirection, checks_100kmh)
{
  rss_core::Distance safeDistance = 0.;
  ASSERT_TRUE(rss_core::calculateSafeLongitudinalDistanceOppositeDirection(
    kmhToMeterPerSec(100), kmhToMeterPerSec(100), safeDistance));
  ASSERT_NEAR(safeDistance, 365.55, cDoubleNear);
}
