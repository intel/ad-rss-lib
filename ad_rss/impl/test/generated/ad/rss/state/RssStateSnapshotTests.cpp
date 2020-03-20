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
#include "ad/rss/state/RssStateSnapshot.hpp"

class RssStateSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::RssStateSnapshot value;
    ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect
      = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
    valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
    valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
    valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
    valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
      = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
    valueDefaultEgoVehicleRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
    ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
    valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
    value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
    ::ad::rss::state::RssStateVector valueIndividualResponses;
    ::ad::rss::state::RssState valueIndividualResponsesElement;
    ::ad::rss::world::ObjectId valueIndividualResponsesElementObjectId(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueIndividualResponsesElement.objectId = valueIndividualResponsesElementObjectId;
    ::ad::rss::situation::SituationId valueIndividualResponsesElementSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    valueIndividualResponsesElement.situationId = valueIndividualResponsesElementSituationId;
    ::ad::rss::state::LongitudinalRssState valueIndividualResponsesElementLongitudinalState;
    bool valueIndividualResponsesElementLongitudinalStateIsSafe{true};
    valueIndividualResponsesElementLongitudinalState.isSafe = valueIndividualResponsesElementLongitudinalStateIsSafe;
    ::ad::rss::state::LongitudinalResponse valueIndividualResponsesElementLongitudinalStateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
    valueIndividualResponsesElementLongitudinalState.response
      = valueIndividualResponsesElementLongitudinalStateResponse;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividualResponsesElementLongitudinalStateAlphaLon;
    ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax(-1e2);
    valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividualResponsesElementLongitudinalStateAlphaLon.accelMax
      = valueIndividualResponsesElementLongitudinalStateAlphaLonAccelMax;
    ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax(-1e2);
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
      = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin(-1e2);
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
      = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
      = valueIndividualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect;
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
      = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax;
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
      = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin
      = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect;
    valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMax
      = valueIndividualResponsesElementLongitudinalStateAlphaLon.brakeMin;
    valueIndividualResponsesElementLongitudinalState.alphaLon
      = valueIndividualResponsesElementLongitudinalStateAlphaLon;
    ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLongitudinalStateRssStateInformation;
    ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance(0.);
    valueIndividualResponsesElementLongitudinalStateRssStateInformation.safeDistance
      = valueIndividualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
    ::ad::physics::Distance valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(0.);
    valueIndividualResponsesElementLongitudinalStateRssStateInformation.currentDistance
      = valueIndividualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueIndividualResponsesElementLongitudinalStateRssStateInformation.evaluator
      = valueIndividualResponsesElementLongitudinalStateRssStateInformationEvaluator;
    valueIndividualResponsesElementLongitudinalState.rssStateInformation
      = valueIndividualResponsesElementLongitudinalStateRssStateInformation;
    valueIndividualResponsesElement.longitudinalState = valueIndividualResponsesElementLongitudinalState;
    ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateRight;
    bool valueIndividualResponsesElementLateralStateRightIsSafe{true};
    valueIndividualResponsesElementLateralStateRight.isSafe = valueIndividualResponsesElementLateralStateRightIsSafe;
    ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateRightResponse(
      ::ad::rss::state::LateralResponse::None);
    valueIndividualResponsesElementLateralStateRight.response
      = valueIndividualResponsesElementLateralStateRightResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateRightAlphaLat;
    ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax(-1e2);
    valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividualResponsesElementLateralStateRightAlphaLat.accelMax
      = valueIndividualResponsesElementLateralStateRightAlphaLatAccelMax;
    ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin(-1e2);
    valueIndividualResponsesElementLateralStateRightAlphaLat.brakeMin
      = valueIndividualResponsesElementLateralStateRightAlphaLatBrakeMin;
    valueIndividualResponsesElementLateralStateRight.alphaLat
      = valueIndividualResponsesElementLateralStateRightAlphaLat;
    ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateRightRssStateInformation;
    ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance(0.);
    valueIndividualResponsesElementLateralStateRightRssStateInformation.safeDistance
      = valueIndividualResponsesElementLateralStateRightRssStateInformationSafeDistance;
    ::ad::physics::Distance valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance(0.);
    valueIndividualResponsesElementLateralStateRightRssStateInformation.currentDistance
      = valueIndividualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueIndividualResponsesElementLateralStateRightRssStateInformation.evaluator
      = valueIndividualResponsesElementLateralStateRightRssStateInformationEvaluator;
    valueIndividualResponsesElementLateralStateRight.rssStateInformation
      = valueIndividualResponsesElementLateralStateRightRssStateInformation;
    valueIndividualResponsesElement.lateralStateRight = valueIndividualResponsesElementLateralStateRight;
    ::ad::rss::state::LateralRssState valueIndividualResponsesElementLateralStateLeft;
    bool valueIndividualResponsesElementLateralStateLeftIsSafe{true};
    valueIndividualResponsesElementLateralStateLeft.isSafe = valueIndividualResponsesElementLateralStateLeftIsSafe;
    ::ad::rss::state::LateralResponse valueIndividualResponsesElementLateralStateLeftResponse(
      ::ad::rss::state::LateralResponse::None);
    valueIndividualResponsesElementLateralStateLeft.response = valueIndividualResponsesElementLateralStateLeftResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueIndividualResponsesElementLateralStateLeftAlphaLat;
    ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax(-1e2);
    valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividualResponsesElementLateralStateLeftAlphaLat.accelMax
      = valueIndividualResponsesElementLateralStateLeftAlphaLatAccelMax;
    ::ad::physics::Acceleration valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin(-1e2);
    valueIndividualResponsesElementLateralStateLeftAlphaLat.brakeMin
      = valueIndividualResponsesElementLateralStateLeftAlphaLatBrakeMin;
    valueIndividualResponsesElementLateralStateLeft.alphaLat = valueIndividualResponsesElementLateralStateLeftAlphaLat;
    ::ad::rss::state::RssStateInformation valueIndividualResponsesElementLateralStateLeftRssStateInformation;
    ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance(0.);
    valueIndividualResponsesElementLateralStateLeftRssStateInformation.safeDistance
      = valueIndividualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
    ::ad::physics::Distance valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(0.);
    valueIndividualResponsesElementLateralStateLeftRssStateInformation.currentDistance
      = valueIndividualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueIndividualResponsesElementLateralStateLeftRssStateInformation.evaluator
      = valueIndividualResponsesElementLateralStateLeftRssStateInformationEvaluator;
    valueIndividualResponsesElementLateralStateLeft.rssStateInformation
      = valueIndividualResponsesElementLateralStateLeftRssStateInformation;
    valueIndividualResponsesElement.lateralStateLeft = valueIndividualResponsesElementLateralStateLeft;
    valueIndividualResponses.resize(1, valueIndividualResponsesElement);
    value.individualResponses = valueIndividualResponses;
    mValue = value;
  }

  ::ad::rss::state::RssStateSnapshot mValue;
};

TEST_F(RssStateSnapshotTests, copyConstruction)
{
  ::ad::rss::state::RssStateSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveConstruction)
{
  ::ad::rss::state::RssStateSnapshot value(std::move(::ad::rss::state::RssStateSnapshot(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, copyAssignment)
{
  ::ad::rss::state::RssStateSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveAssignment)
{
  ::ad::rss::state::RssStateSnapshot value;
  value = std::move(::ad::rss::state::RssStateSnapshot(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorDefaultEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::world::RssDynamics defaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues defaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.accelMax = defaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMax = defaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = defaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = defaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMax = defaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  defaultEgoVehicleRssDynamicsAlphaLon.brakeMin = defaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  defaultEgoVehicleRssDynamics.alphaLon = defaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues defaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  defaultEgoVehicleRssDynamicsAlphaLat.accelMax = defaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration defaultEgoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  defaultEgoVehicleRssDynamicsAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  defaultEgoVehicleRssDynamicsAlphaLat.brakeMin = defaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  defaultEgoVehicleRssDynamics.alphaLat = defaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance defaultEgoVehicleRssDynamicsLateralFluctuationMargin(1e9);
  defaultEgoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within
                                                                                      // struct
  defaultEgoVehicleRssDynamics.lateralFluctuationMargin = defaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration defaultEgoVehicleRssDynamicsResponseTime(1e6);
  defaultEgoVehicleRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  defaultEgoVehicleRssDynamics.responseTime = defaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed defaultEgoVehicleRssDynamicsMaxSpeed(100.);
  defaultEgoVehicleRssDynamics.maxSpeed = defaultEgoVehicleRssDynamicsMaxSpeed;
  valueA.defaultEgoVehicleRssDynamics = defaultEgoVehicleRssDynamics;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorIndividualResponsesDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateVector individualResponses;
  ::ad::rss::state::RssState individualResponsesElement;
  ::ad::rss::world::ObjectId individualResponsesElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  individualResponsesElement.objectId = individualResponsesElementObjectId;
  ::ad::rss::situation::SituationId individualResponsesElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  individualResponsesElement.situationId = individualResponsesElementSituationId;
  ::ad::rss::state::LongitudinalRssState individualResponsesElementLongitudinalState;
  bool individualResponsesElementLongitudinalStateIsSafe{false};
  individualResponsesElementLongitudinalState.isSafe = individualResponsesElementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse individualResponsesElementLongitudinalStateResponse(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  individualResponsesElementLongitudinalState.response = individualResponsesElementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues individualResponsesElementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration individualResponsesElementLongitudinalStateAlphaLonAccelMax(1e2);
  individualResponsesElementLongitudinalStateAlphaLon.accelMax
    = individualResponsesElementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration individualResponsesElementLongitudinalStateAlphaLonBrakeMax(1e2);
  individualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = individualResponsesElementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration individualResponsesElementLongitudinalStateAlphaLonBrakeMin(1e2);
  individualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = individualResponsesElementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration individualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect(1e2);
  individualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = individualResponsesElementLongitudinalStateAlphaLonBrakeMinCorrect;
  individualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect
    = individualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  individualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = individualResponsesElementLongitudinalStateAlphaLon.brakeMax;
  individualResponsesElementLongitudinalStateAlphaLon.brakeMax
    = individualResponsesElementLongitudinalStateAlphaLon.brakeMin;
  individualResponsesElementLongitudinalStateAlphaLon.brakeMin
    = individualResponsesElementLongitudinalStateAlphaLon.brakeMinCorrect;
  individualResponsesElementLongitudinalState.alphaLon = individualResponsesElementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation individualResponsesElementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationSafeDistance(1e9);
  individualResponsesElementLongitudinalStateRssStateInformation.safeDistance
    = individualResponsesElementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance(1e9);
  individualResponsesElementLongitudinalStateRssStateInformation.currentDistance
    = individualResponsesElementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLongitudinalStateRssStateInformation.evaluator
    = individualResponsesElementLongitudinalStateRssStateInformationEvaluator;
  individualResponsesElementLongitudinalState.rssStateInformation
    = individualResponsesElementLongitudinalStateRssStateInformation;
  individualResponsesElement.longitudinalState = individualResponsesElementLongitudinalState;
  ::ad::rss::state::LateralRssState individualResponsesElementLateralStateRight;
  bool individualResponsesElementLateralStateRightIsSafe{false};
  individualResponsesElementLateralStateRight.isSafe = individualResponsesElementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse individualResponsesElementLateralStateRightResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateRight.response = individualResponsesElementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues individualResponsesElementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration individualResponsesElementLateralStateRightAlphaLatAccelMax(1e2);
  individualResponsesElementLateralStateRightAlphaLat.accelMax
    = individualResponsesElementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration individualResponsesElementLateralStateRightAlphaLatBrakeMin(1e2);
  individualResponsesElementLateralStateRightAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individualResponsesElementLateralStateRightAlphaLat.brakeMin
    = individualResponsesElementLateralStateRightAlphaLatBrakeMin;
  individualResponsesElementLateralStateRight.alphaLat = individualResponsesElementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation individualResponsesElementLateralStateRightRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationSafeDistance(1e9);
  individualResponsesElementLateralStateRightRssStateInformation.safeDistance
    = individualResponsesElementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateRightRssStateInformationCurrentDistance(1e9);
  individualResponsesElementLateralStateRightRssStateInformation.currentDistance
    = individualResponsesElementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateRightRssStateInformation.evaluator
    = individualResponsesElementLateralStateRightRssStateInformationEvaluator;
  individualResponsesElementLateralStateRight.rssStateInformation
    = individualResponsesElementLateralStateRightRssStateInformation;
  individualResponsesElement.lateralStateRight = individualResponsesElementLateralStateRight;
  ::ad::rss::state::LateralRssState individualResponsesElementLateralStateLeft;
  bool individualResponsesElementLateralStateLeftIsSafe{false};
  individualResponsesElementLateralStateLeft.isSafe = individualResponsesElementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse individualResponsesElementLateralStateLeftResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individualResponsesElementLateralStateLeft.response = individualResponsesElementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues individualResponsesElementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration individualResponsesElementLateralStateLeftAlphaLatAccelMax(1e2);
  individualResponsesElementLateralStateLeftAlphaLat.accelMax
    = individualResponsesElementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration individualResponsesElementLateralStateLeftAlphaLatBrakeMin(1e2);
  individualResponsesElementLateralStateLeftAlphaLatBrakeMin
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individualResponsesElementLateralStateLeftAlphaLat.brakeMin
    = individualResponsesElementLateralStateLeftAlphaLatBrakeMin;
  individualResponsesElementLateralStateLeft.alphaLat = individualResponsesElementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation individualResponsesElementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationSafeDistance(1e9);
  individualResponsesElementLateralStateLeftRssStateInformation.safeDistance
    = individualResponsesElementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance(1e9);
  individualResponsesElementLateralStateLeftRssStateInformation.currentDistance
    = individualResponsesElementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator individualResponsesElementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individualResponsesElementLateralStateLeftRssStateInformation.evaluator
    = individualResponsesElementLateralStateLeftRssStateInformationEvaluator;
  individualResponsesElementLateralStateLeft.rssStateInformation
    = individualResponsesElementLateralStateLeftRssStateInformation;
  individualResponsesElement.lateralStateLeft = individualResponsesElementLateralStateLeft;
  individualResponses.resize(0 + 1, individualResponsesElement);
  valueA.individualResponses = individualResponses;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
