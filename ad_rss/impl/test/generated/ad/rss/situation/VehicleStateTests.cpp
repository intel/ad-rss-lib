/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/situation/VehicleState.hpp"

class VehicleStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::VehicleState value;
    ::ad::rss::situation::VelocityRange valueVelocity;
    ::ad::physics::SpeedRange valueVelocitySpeedLon;
    ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
    valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
    valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
    valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
    valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
    valueVelocity.speedLon = valueVelocitySpeedLon;
    ::ad::physics::SpeedRange valueVelocitySpeedLat;
    ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
    valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
    valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
    valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
    valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
    valueVelocity.speedLat = valueVelocitySpeedLat;
    value.velocity = valueVelocity;
    ::ad::rss::world::RssDynamics valueDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
    ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
    valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
    valueDynamics.alphaLon = valueDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
    ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
    valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
    valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
    valueDynamics.alphaLat = valueDynamicsAlphaLat;
    ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
    valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueDynamicsResponseTime(0.);
    valueDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueDynamics.responseTime = valueDynamicsResponseTime;
    ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
    valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
    value.dynamics = valueDynamics;
    bool valueHasPriority{true};
    value.hasPriority = valueHasPriority;
    bool valueIsInCorrectLane{true};
    value.isInCorrectLane = valueIsInCorrectLane;
    ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
    value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
    ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
    value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
    value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
    value.distanceToEnterIntersection = value.distanceToLeaveIntersection;
    mValue = value;
  }

  ::ad::rss::situation::VehicleState mValue;
};

TEST_F(VehicleStateTests, copyConstruction)
{
  ::ad::rss::situation::VehicleState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, moveConstruction)
{
  ::ad::rss::situation::VehicleState value(std::move(::ad::rss::situation::VehicleState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, copyAssignment)
{
  ::ad::rss::situation::VehicleState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, moveAssignment)
{
  ::ad::rss::situation::VehicleState value;
  value = std::move(::ad::rss::situation::VehicleState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VehicleStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(VehicleStateTests, comparisonOperatorVelocityDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  ::ad::rss::situation::VelocityRange velocity;
  ::ad::physics::SpeedRange velocitySpeedLon;
  ::ad::physics::Speed velocitySpeedLonMinimum(100.);
  velocitySpeedLon.minimum = velocitySpeedLonMinimum;
  ::ad::physics::Speed velocitySpeedLonMaximum(100.);
  velocitySpeedLon.maximum = velocitySpeedLonMaximum;
  velocitySpeedLon.maximum = velocitySpeedLon.minimum;
  velocitySpeedLon.minimum = velocitySpeedLon.maximum;
  velocity.speedLon = velocitySpeedLon;
  ::ad::physics::SpeedRange velocitySpeedLat;
  ::ad::physics::Speed velocitySpeedLatMinimum(100.);
  velocitySpeedLat.minimum = velocitySpeedLatMinimum;
  ::ad::physics::Speed velocitySpeedLatMaximum(100.);
  velocitySpeedLat.maximum = velocitySpeedLatMaximum;
  velocitySpeedLat.maximum = velocitySpeedLat.minimum;
  velocitySpeedLat.minimum = velocitySpeedLat.maximum;
  velocity.speedLat = velocitySpeedLat;
  valueA.velocity = velocity;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDynamicsDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  ::ad::rss::world::RssDynamics dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues dynamicsAlphaLon;
  ::ad::physics::Acceleration dynamicsAlphaLonAccelMax(1e2);
  dynamicsAlphaLon.accelMax = dynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration dynamicsAlphaLonBrakeMax(1e2);
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration dynamicsAlphaLonBrakeMin(1e2);
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration dynamicsAlphaLonBrakeMinCorrect(1e2);
  dynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLonBrakeMinCorrect;
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMax;
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMinCorrect;
  dynamics.alphaLon = dynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues dynamicsAlphaLat;
  ::ad::physics::Acceleration dynamicsAlphaLatAccelMax(1e2);
  dynamicsAlphaLat.accelMax = dynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration dynamicsAlphaLatBrakeMin(1e2);
  dynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  dynamicsAlphaLat.brakeMin = dynamicsAlphaLatBrakeMin;
  dynamics.alphaLat = dynamicsAlphaLat;
  ::ad::physics::Distance dynamicsLateralFluctuationMargin(1e9);
  dynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  dynamics.lateralFluctuationMargin = dynamicsLateralFluctuationMargin;
  ::ad::physics::Duration dynamicsResponseTime(1e6);
  dynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  dynamics.responseTime = dynamicsResponseTime;
  ::ad::physics::Speed dynamicsMaxSpeed(100.);
  dynamics.maxSpeed = dynamicsMaxSpeed;
  valueA.dynamics = dynamics;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorHasPriorityDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  bool hasPriority{false};
  valueA.hasPriority = hasPriority;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorIsInCorrectLaneDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  bool isInCorrectLane{false};
  valueA.isInCorrectLane = isInCorrectLane;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDistanceToEnterIntersectionDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  ::ad::physics::Distance distanceToEnterIntersection(1e9);
  valueA.distanceToEnterIntersection = distanceToEnterIntersection;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDistanceToLeaveIntersectionDiffers)
{
  ::ad::rss::situation::VehicleState valueA = mValue;
  ::ad::physics::Distance distanceToLeaveIntersection(1e9);
  valueA.distanceToLeaveIntersection = distanceToLeaveIntersection;
  ::ad::rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
