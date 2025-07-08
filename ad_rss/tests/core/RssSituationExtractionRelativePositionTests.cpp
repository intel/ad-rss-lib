// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

namespace ad {
namespace rss {
namespace core {

using physics::MetricRange;

void performCalculateRelativePositionTest(Distance minA,
                                          Distance maxA,
                                          Distance minB,
                                          Distance maxB,
                                          core::LateralRelativePosition expectedPositionLatAtoB,
                                          core::LongitudinalRelativePosition expectedPositionLonAtoB,
                                          core::LateralRelativePosition expectedPositionLatBtoA,
                                          core::LongitudinalRelativePosition expectedPositionLonBtoA,
                                          Distance expectedDistance)
{
  RssSituationExtraction constellationExtraction;
  MetricRange vehicleALonMetricRange;
  MetricRange vehicleALatMetricRange;
  MetricRange vehicleBLonMetricRange;
  MetricRange vehicleBLatMetricRange;
  core::RelativePosition relative_position;

  vehicleALatMetricRange.minimum = minA;
  vehicleALatMetricRange.maximum = maxA;
  vehicleALonMetricRange = vehicleALatMetricRange;

  vehicleBLatMetricRange.minimum = minB;
  vehicleBLatMetricRange.maximum = maxB;
  vehicleBLonMetricRange = vehicleBLatMetricRange;

  constellationExtraction.calcluateRelativeLongitudinalPosition(vehicleALonMetricRange,
                                                                vehicleBLonMetricRange,
                                                                relative_position.longitudinal_position,
                                                                relative_position.longitudinal_distance);
  constellationExtraction.calcluateRelativeLateralPosition(vehicleALatMetricRange,
                                                           vehicleBLatMetricRange,
                                                           relative_position.lateral_position,
                                                           relative_position.lateral_distance);

  ASSERT_EQ(expectedPositionLatAtoB, relative_position.lateral_position);
  ASSERT_EQ(expectedPositionLonAtoB, relative_position.longitudinal_position);
  ASSERT_EQ(expectedDistance, relative_position.lateral_distance);
  ASSERT_EQ(expectedDistance, relative_position.longitudinal_distance);

  constellationExtraction.calcluateRelativeLongitudinalPosition(vehicleBLonMetricRange,
                                                                vehicleALonMetricRange,
                                                                relative_position.longitudinal_position,
                                                                relative_position.longitudinal_distance);
  constellationExtraction.calcluateRelativeLateralPosition(vehicleBLatMetricRange,
                                                           vehicleALatMetricRange,
                                                           relative_position.lateral_position,
                                                           relative_position.lateral_distance);

  ASSERT_EQ(expectedPositionLatBtoA, relative_position.lateral_position);
  ASSERT_EQ(expectedPositionLonBtoA, relative_position.longitudinal_position);
  ASSERT_EQ(expectedDistance, relative_position.lateral_distance);
  ASSERT_EQ(expectedDistance, relative_position.longitudinal_distance);
}

TEST(CalcluateRelativePositionTest, no_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(1.),
                                       Distance(2.),
                                       Distance(3.),
                                       Distance(5.),
                                       core::LateralRelativePosition::AtLeft,
                                       core::LongitudinalRelativePosition::AtBack,
                                       core::LateralRelativePosition::AtRight,
                                       core::LongitudinalRelativePosition::InFront,
                                       Distance(1.));
}

TEST(CalcluateRelativePositionTest, no_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-5.),
                                       Distance(-8.),
                                       core::LateralRelativePosition::AtLeft,
                                       core::LongitudinalRelativePosition::AtBack,
                                       core::LateralRelativePosition::AtRight,
                                       core::LongitudinalRelativePosition::InFront,
                                       Distance(3.));
}

TEST(CalcluateRelativePositionTest, no_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(3.),
                                       Distance(5.),
                                       core::LateralRelativePosition::AtLeft,
                                       core::LongitudinalRelativePosition::AtBack,
                                       core::LateralRelativePosition::AtRight,
                                       core::LongitudinalRelativePosition::InFront,
                                       Distance(11.));
}

TEST(CalcluateRelativePositionTest, no_overlap_vehicle_crossing_null)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-3.),
                                       Distance(5.),
                                       core::LateralRelativePosition::AtLeft,
                                       core::LongitudinalRelativePosition::AtBack,
                                       core::LateralRelativePosition::AtRight,
                                       core::LongitudinalRelativePosition::InFront,
                                       Distance(5.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(2.),
                                       Distance(4.),
                                       Distance(3.),
                                       Distance(5.),
                                       core::LateralRelativePosition::OverlapLeft,
                                       core::LongitudinalRelativePosition::OverlapBack,
                                       core::LateralRelativePosition::OverlapRight,
                                       core::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(-3.),
                                       core::LateralRelativePosition::OverlapLeft,
                                       core::LongitudinalRelativePosition::OverlapBack,
                                       core::LateralRelativePosition::OverlapRight,
                                       core::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(5.),
                                       core::LateralRelativePosition::OverlapLeft,
                                       core::LongitudinalRelativePosition::OverlapBack,
                                       core::LateralRelativePosition::OverlapRight,
                                       core::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(2.),
                                       Distance(4.),
                                       Distance(2.5),
                                       Distance(3.5),
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(-8.1),
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(8.),
                                       Distance(-9.),
                                       Distance(5.),
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       core::LateralRelativePosition::Overlap,
                                       core::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

} // namespace core
} // namespace rss
} // namespace ad
