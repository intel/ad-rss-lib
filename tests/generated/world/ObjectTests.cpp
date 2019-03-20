/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/world/Object.hpp"

class ObjectTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::Object value;
    ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::EgoVehicle);
    value.objectType = valueObjectType;
    ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
    value.occupiedRegions = valueOccupiedRegions;
    ::ad_rss::world::Dynamics valueDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
    valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
    valueDynamics.alphaLon = valueDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
    valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
    valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
    valueDynamics.alphaLat = valueDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
    valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
    value.dynamics = valueDynamics;
    ::ad_rss::world::Velocity valueVelocity;
    ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
    valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueVelocity.speedLon = valueVelocitySpeedLon;
    ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
    valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueVelocity.speedLat = valueVelocitySpeedLat;
    value.velocity = valueVelocity;
    ::ad_rss::physics::Duration valueResponseTime(0.);
    valueResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    value.responseTime = valueResponseTime;
    mValue = value;
  }

  ::ad_rss::world::Object mValue;
};

TEST_F(ObjectTests, copyConstruction)
{
  ::ad_rss::world::Object value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveConstruction)
{
  ::ad_rss::world::Object value(std::move(::ad_rss::world::Object(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, copyAssignment)
{
  ::ad_rss::world::Object value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveAssignment)
{
  ::ad_rss::world::Object value;
  value = std::move(::ad_rss::world::Object(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObjectIdDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::ObjectId objectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObjectTypeDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::ObjectType objectType(::ad_rss::world::ObjectType::ArtificialObject);
  valueA.objectType = objectType;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorOccupiedRegionsDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::OccupiedRegionVector occupiedRegions;
  ::ad_rss::world::OccupiedRegion occupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId occupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  occupiedRegionsElement.segmentId = occupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange occupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLonRangeMinimum(1.);
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLonRangeMaximum(1.);
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRangeMaximum;
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRange.minimum;
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRange.maximum;
  occupiedRegionsElement.lonRange = occupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange occupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLatRangeMinimum(1.);
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLatRangeMaximum(1.);
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRangeMaximum;
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRange.minimum;
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRange.maximum;
  occupiedRegionsElement.latRange = occupiedRegionsElementLatRange;
  occupiedRegions.resize(0 + 1, occupiedRegionsElement);
  valueA.occupiedRegions = occupiedRegions;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorDynamicsDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::Dynamics dynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues dynamicsAlphaLon;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonAccelMax(1e2);
  dynamicsAlphaLon.accelMax = dynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMax(1e2);
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMin(1e2);
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMinCorrect(1e2);
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLonBrakeMinCorrect;
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMinCorrect;
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMax;
  dynamics.alphaLon = dynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues dynamicsAlphaLat;
  ::ad_rss::physics::Acceleration dynamicsAlphaLatAccelMax(1e2);
  dynamicsAlphaLat.accelMax = dynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLatBrakeMin(1e2);
  dynamicsAlphaLat.brakeMin = dynamicsAlphaLatBrakeMin;
  dynamics.alphaLat = dynamicsAlphaLat;
  ::ad_rss::physics::Distance dynamicsLateralFluctuationMargin(1e6);
  dynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  dynamics.lateralFluctuationMargin = dynamicsLateralFluctuationMargin;
  valueA.dynamics = dynamics;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorVelocityDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::Velocity velocity;
  ::ad_rss::physics::Speed velocitySpeedLon(100.);
  velocity.speedLon = velocitySpeedLon;
  ::ad_rss::physics::Speed velocitySpeedLat(100.);
  velocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  velocity.speedLat = velocitySpeedLat;
  valueA.velocity = velocity;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorResponseTimeDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::physics::Duration responseTime(100.);
  valueA.responseTime = responseTime;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
