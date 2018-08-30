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
#include "rss/core/RssSituationExtraction.hpp"

namespace rss {

namespace core {

namespace RssSituationExtraction {

#if 0
void performCalculateRelativePositionTest(situation::Distance minA,
                                          situation::Distance maxA,
                                          situation::Distance minB,
                                          situation::Distance maxB,
                                          situation::LateralRelativePosition expectedPositionLatAtoB,
                                          situation::LongitudinalRelativePosition expectedPositionLonAtoB,
                                          situation::LateralRelativePosition expectedPositionLatBtoA,
                                          situation::LongitudinalRelativePosition expectedPositionLonBtoA,
                                          situation::Distance expectedDistance)
{
  lane::Position vehicleAPosition;
  lane::Position vehicleBPosition;
  situation::RelativePosition relativePosition;
  const situation::Distance cEpsilon = 1e-10;

  vehicleAPosition.latInterval.minimum = minA;
  vehicleAPosition.latInterval.maximum = maxA;
  vehicleAPosition.lonInterval = vehicleAPosition.latInterval;

  vehicleBPosition.latInterval.minimum = minB;
  vehicleBPosition.latInterval.maximum = maxB;
  vehicleBPosition.lonInterval = vehicleBPosition.latInterval;

  relativePosition = calcluateRelativePosition(vehicleAPosition, vehicleBPosition, true);

  ASSERT_EQ(expectedPositionLatAtoB, relativePosition.lateralPosition);
  ASSERT_EQ(expectedPositionLonAtoB, relativePosition.longitudinalPosition);
  ASSERT_NEAR(expectedDistance, relativePosition.lateralDistance, cEpsilon);
  ASSERT_NEAR(expectedDistance, relativePosition.longitudinalDistance, cEpsilon);
  ASSERT_TRUE(relativePosition.isDrivingInOppositeDirection);

  relativePosition = calcluateRelativePosition(vehicleBPosition, vehicleAPosition, false);

  ASSERT_EQ(expectedPositionLatBtoA, relativePosition.lateralPosition);
  ASSERT_EQ(expectedPositionLonBtoA, relativePosition.longitudinalPosition);
  ASSERT_NEAR(expectedDistance, relativePosition.lateralDistance, cEpsilon);
  ASSERT_NEAR(expectedDistance, relativePosition.longitudinalDistance, cEpsilon);
  ASSERT_FALSE(relativePosition.isDrivingInOppositeDirection);
}

TEST(CalcluateRelativePositionTest, no_overlap_positive)
{
  performCalculateRelativePositionTest(1.,
                                       2.,
                                       3.,
                                       5.,
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       1.);
}

TEST(CalcluateRelativePositionTest, no_overlap_negative)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       -5.,
                                       -8.,
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       3.);
}

TEST(CalcluateRelativePositionTest, no_overlap_mixed)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       3.,
                                       5.,
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       11.);
}

TEST(CalcluateRelativePositionTest, no_overlap_vehicle_crossing_null)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       -3.,
                                       5.,
                                       situation::LateralRelativePosition::AtLeft,
                                       situation::LongitudinalRelativePosition::AtBack,
                                       situation::LateralRelativePosition::AtRight,
                                       situation::LongitudinalRelativePosition::InFront,
                                       5.);
}

TEST(CalcluateRelativePositionTest, partly_overlap_positive)
{
  performCalculateRelativePositionTest(2.,
                                       4.,
                                       3.,
                                       5.,
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       0.);
}

TEST(CalcluateRelativePositionTest, partly_overlap_negative)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       -9.,
                                       -3.,
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       0.);
}

TEST(CalcluateRelativePositionTest, partly_overlap_mixed)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       -9.,
                                       5.,
                                       situation::LateralRelativePosition::OverlapLeft,
                                       situation::LongitudinalRelativePosition::OverlapBack,
                                       situation::LateralRelativePosition::OverlapRight,
                                       situation::LongitudinalRelativePosition::OverlapFront,
                                       0.);
}

TEST(CalcluateRelativePositionTest, full_overlap_positive)
{
  performCalculateRelativePositionTest(2.,
                                       4.,
                                       2.5,
                                       3.5,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       0.);
}

TEST(CalcluateRelativePositionTest, full_overlap_negative)
{
  performCalculateRelativePositionTest(-10.,
                                       -8.,
                                       -9.,
                                       -8.1,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       0.);
}

TEST(CalcluateRelativePositionTest, full_overlap_mixed)
{
  performCalculateRelativePositionTest(-10.,
                                       8.,
                                       -9.,
                                       5.,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       situation::LateralRelativePosition::Overlap,
                                       situation::LongitudinalRelativePosition::Overlap,
                                       0.);
}
#endif

} // namespace RSSWorld
} // namespace check
} // namespace rss
