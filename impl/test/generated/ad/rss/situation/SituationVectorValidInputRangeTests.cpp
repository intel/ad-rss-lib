/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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

#include "ad/rss/situation/SituationVectorValidInputRange.hpp"

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::situation::SituationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeed(-100.);
  elementEgoVehicleStateDynamics.maxSpeed = elementEgoVehicleStateDynamicsMaxSpeed;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeed(-100.);
  elementOtherVehicleStateDynamics.maxSpeed = elementOtherVehicleStateDynamicsMaxSpeed;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeed(-100.);
  elementEgoVehicleStateDynamics.maxSpeed = elementEgoVehicleStateDynamicsMaxSpeed;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeed(-100.);
  elementOtherVehicleStateDynamics.maxSpeed = elementOtherVehicleStateDynamicsMaxSpeed;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::situation::VehicleState elementEgoVehicleState;
  ::ad::rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementEgoVehicleStateDynamicsMaxSpeed(-100.);
  elementEgoVehicleStateDynamics.maxSpeed = elementEgoVehicleStateDynamicsMaxSpeed;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad::rss::situation::VehicleState elementOtherVehicleState;
  ::ad::rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed elementOtherVehicleStateDynamicsMaxSpeed(-100.);
  elementOtherVehicleStateDynamics.maxSpeed = elementOtherVehicleStateDynamicsMaxSpeed;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad::rss::situation::RelativePosition elementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::situation::SituationVector value;
  ::ad::rss::situation::Situation element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
