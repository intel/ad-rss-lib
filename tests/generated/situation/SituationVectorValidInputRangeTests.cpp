/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/situation/SituationVectorValidInputRange.hpp"

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::situation::SituationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::world::ObjectId elementObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::situation::VehicleState elementEgoVehicleState;
  ::ad_rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad_rss::situation::VehicleState elementOtherVehicleState;
  ::ad_rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad_rss::situation::RelativePosition elementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::world::ObjectId elementObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::situation::VehicleState elementEgoVehicleState;
  ::ad_rss::situation::VelocityRange elementEgoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLonMaximum;
  elementEgoVehicleStateVelocitySpeedLon.maximum = elementEgoVehicleStateVelocitySpeedLon.minimum;
  elementEgoVehicleStateVelocitySpeedLon.minimum = elementEgoVehicleStateVelocitySpeedLon.maximum;
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange elementEgoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLatMaximum;
  elementEgoVehicleStateVelocitySpeedLat.maximum = elementEgoVehicleStateVelocitySpeedLat.minimum;
  elementEgoVehicleStateVelocitySpeedLat.minimum = elementEgoVehicleStateVelocitySpeedLat.maximum;
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics elementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementEgoVehicleStateDynamicsResponseTime(0.);
  elementEgoVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamics.responseTime = elementEgoVehicleStateDynamicsResponseTime;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad_rss::situation::VehicleState elementOtherVehicleState;
  ::ad_rss::situation::VelocityRange elementOtherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLonMaximum;
  elementOtherVehicleStateVelocitySpeedLon.maximum = elementOtherVehicleStateVelocitySpeedLon.minimum;
  elementOtherVehicleStateVelocitySpeedLon.minimum = elementOtherVehicleStateVelocitySpeedLon.maximum;
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange elementOtherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLatMaximum;
  elementOtherVehicleStateVelocitySpeedLat.maximum = elementOtherVehicleStateVelocitySpeedLat.minimum;
  elementOtherVehicleStateVelocitySpeedLat.minimum = elementOtherVehicleStateVelocitySpeedLat.maximum;
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics elementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementOtherVehicleStateDynamicsResponseTime(0.);
  elementOtherVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamics.responseTime = elementOtherVehicleStateDynamicsResponseTime;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad_rss::situation::RelativePosition elementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::situation::SituationType elementSituationType(static_cast<::ad_rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
