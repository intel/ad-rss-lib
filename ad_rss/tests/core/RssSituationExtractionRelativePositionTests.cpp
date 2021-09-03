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
                                          situation::LateralRelativePosition expectedPositionLatAtoB,
                                          situation::LongitudinalRelativePosition expectedPositionLonAtoB,
                                          situation::LateralRelativePosition expectedPositionLatBtoA,
                                          situation::LongitudinalRelativePosition expectedPositionLonBtoA,
                                          Distance expectedDistance)
{
  RssSituationExtraction situationExtraction;
  MetricRange vehicleALonMetricRange;
  MetricRange vehicleALatMetricRange;
  MetricRange vehicleBLonMetricRange;
  MetricRange vehicleBLatMetricRange;
  situation::RelativePosition relativePosition;

  vehicleALatMetricRange.minimum = minA;
  vehicleALatMetricRange.maximum = maxA;
  vehicleALonMetricRange = vehicleALatMetricRange;

  vehicleBLatMetricRange.minimum = minB;
  vehicleBLatMetricRange.maximum = maxB;
  vehicleBLonMetricRange = vehicleBLatMetricRange;

  situationExtraction.calcluateRelativeLongitudinalPosition(vehicleALonMetricRange,
                                                            vehicleBLonMetricRange,
                                                            relativePosition.longitudinalPosition,
                                                            relativePosition.longitudinalDistance);
  situationExtraction.calcluateRelativeLateralPosition(
    vehicleALatMetricRange, vehicleBLatMetricRange, relativePosition.lateralPosition, relativePosition.lateralDistance);

  ASSERT_EQ(expectedPositionLatAtoB, relativePosition.lateralPosition);
  ASSERT_EQ(expectedPositionLonAtoB, relativePosition.longitudinalPosition);
  ASSERT_EQ(expectedDistance, relativePosition.lateralDistance);
  ASSERT_EQ(expectedDistance, relativePosition.longitudinalDistance);

  situationExtraction.calcluateRelativeLongitudinalPosition(vehicleBLonMetricRange,
                                                            vehicleALonMetricRange,
                                                            relativePosition.longitudinalPosition,
                                                            relativePosition.longitudinalDistance);
  situationExtraction.calcluateRelativeLateralPosition(
    vehicleBLatMetricRange, vehicleALatMetricRange, relativePosition.lateralPosition, relativePosition.lateralDistance);

  ASSERT_EQ(expectedPositionLatBtoA, relativePosition.lateralPosition);
  ASSERT_EQ(expectedPositionLonBtoA, relativePosition.longitudinalPosition);
  ASSERT_EQ(expectedDistance, relativePosition.lateralDistance);
  ASSERT_EQ(expectedDistance, relativePosition.longitudinalDistance);
}

TEST(CalcluateRelativePositionTest, no_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(1.),
                                       Distance(2.),
                                       Distance(3.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       Distance(1.));
}

TEST(CalcluateRelativePositionTest, no_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-5.),
                                       Distance(-8.),
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       Distance(3.));
}

TEST(CalcluateRelativePositionTest, no_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(3.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       Distance(11.));
}

TEST(CalcluateRelativePositionTest, no_overlap_vehicle_crossing_null)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-3.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       Distance(5.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(2.),
                                       Distance(4.),
                                       Distance(3.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(-3.),
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, partly_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_positive)
{
  performCalculateRelativePositionTest(Distance(2.),
                                       Distance(4.),
                                       Distance(2.5),
                                       Distance(3.5),
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_negative)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(-8.),
                                       Distance(-9.),
                                       Distance(-8.1),
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

TEST(CalcluateRelativePositionTest, full_overlap_mixed)
{
  performCalculateRelativePositionTest(Distance(-10.),
                                       Distance(8.),
                                       Distance(-9.),
                                       Distance(5.),
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       Distance(0.));
}

} // namespace core
} // namespace rss
} // namespace ad
