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
