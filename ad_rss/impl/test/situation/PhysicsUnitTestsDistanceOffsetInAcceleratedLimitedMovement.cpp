// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/Physics.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffset)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(4.0), Speed(36.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedAtEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(4.0), Speed(8.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedBeforeEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(11.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedAtBeginning)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetDecelerationToNonzeroSpeed)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(8.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetNoAccel)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(0.0), Duration(2.0), result));
  ASSERT_EQ(Distance(8.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetDecelerationZeroSpeedAtEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(2.0), result));
  ASSERT_EQ(Distance(6.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedLimitedMovement, calculateDistanceOffsetDecelerationZeroSpeedBeforeEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(3.0), result));

  ASSERT_EQ(Distance(6.0), result);
}
} // namespace situation
} // namespace rss
} // namespace ad
