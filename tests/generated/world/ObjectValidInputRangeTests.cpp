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

#include "ad_rss/world/ObjectValidInputRange.hpp"

TEST(ObjectValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::world::ObjectType invalidInitializedMember(static_cast<::ad_rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooBig)
{
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

  // override member with invalid value
  ::ad_rss::world::ObjectType invalidInitializedMember(static_cast<::ad_rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeOccupiedRegionsTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.latRange
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  invalidInitializedMember.resize(1001, invalidInitializedMemberOccupiedRegionVectorElement);
  value.occupiedRegions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeOccupiedRegionsTooBig)
{
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

  // override member with invalid value
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.latRange
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  invalidInitializedMember.resize(1001, invalidInitializedMemberOccupiedRegionVectorElement);
  value.occupiedRegions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::world::Dynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
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

  // override member with invalid value
  ::ad_rss::world::Dynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(-100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
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

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeResponseTimeTooSmall)
{
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

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(0. - ::ad_rss::physics::Duration::cPrecisionValue);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeResponseTimeTooBig)
{
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

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(100. * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Duration(10. * 1.1); // set to valid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeresponseTimeDefault)
{
  ::ad_rss::world::Object value;
  value.objectType = ::ad_rss::world::ObjectType::EgoVehicle;
  ::ad_rss::physics::Duration valueDefault;
  value.responseTime = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
