/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/state/RssState.hpp"

class RssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::RssState value;
    ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad::rss::situation::SituationId valueSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad::rss::state::LongitudinalRssState valueLongitudinalState;
    bool valueLongitudinalStateIsSafe{true};
    valueLongitudinalState.isSafe = valueLongitudinalStateIsSafe;
    ::ad::rss::state::LongitudinalResponse valueLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
    valueLongitudinalState.response = valueLongitudinalStateResponse;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinalStateAlphaLon;
    ::ad::physics::Acceleration valueLongitudinalStateAlphaLonAccelMax(-1e2);
    valueLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueLongitudinalStateAlphaLon.accelMax = valueLongitudinalStateAlphaLonAccelMax;
    ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMax(-1e2);
    valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMin(-1e2);
    valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
    valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLonBrakeMinCorrect;
    valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMax;
    valueLongitudinalStateAlphaLon.brakeMinCorrect = valueLongitudinalStateAlphaLon.brakeMin;
    valueLongitudinalStateAlphaLon.brakeMin = valueLongitudinalStateAlphaLon.brakeMinCorrect;
    valueLongitudinalStateAlphaLon.brakeMax = valueLongitudinalStateAlphaLon.brakeMin;
    valueLongitudinalState.alphaLon = valueLongitudinalStateAlphaLon;
    ::ad::rss::state::RssStateInformation valueLongitudinalStateRssStateInformation;
    ::ad::physics::Distance valueLongitudinalStateRssStateInformationSafeDistance(-1e9);
    valueLongitudinalStateRssStateInformation.safeDistance = valueLongitudinalStateRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLongitudinalStateRssStateInformationCurrentDistance(-1e9);
    valueLongitudinalStateRssStateInformation.currentDistance
      = valueLongitudinalStateRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLongitudinalStateRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLongitudinalStateRssStateInformation.evaluator = valueLongitudinalStateRssStateInformationEvaluator;
    valueLongitudinalState.rssStateInformation = valueLongitudinalStateRssStateInformation;
    value.longitudinalState = valueLongitudinalState;
    ::ad::rss::state::LateralRssState valueLateralStateRight;
    bool valueLateralStateRightIsSafe{true};
    valueLateralStateRight.isSafe = valueLateralStateRightIsSafe;
    ::ad::rss::state::LateralResponse valueLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
    valueLateralStateRight.response = valueLateralStateRightResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueLateralStateRightAlphaLat;
    ::ad::physics::Acceleration valueLateralStateRightAlphaLatAccelMax(-1e2);
    valueLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueLateralStateRightAlphaLat.accelMax = valueLateralStateRightAlphaLatAccelMax;
    ::ad::physics::Acceleration valueLateralStateRightAlphaLatBrakeMin(-1e2);
    valueLateralStateRightAlphaLat.brakeMin = valueLateralStateRightAlphaLatBrakeMin;
    valueLateralStateRight.alphaLat = valueLateralStateRightAlphaLat;
    ::ad::rss::state::RssStateInformation valueLateralStateRightRssStateInformation;
    ::ad::physics::Distance valueLateralStateRightRssStateInformationSafeDistance(-1e9);
    valueLateralStateRightRssStateInformation.safeDistance = valueLateralStateRightRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLateralStateRightRssStateInformationCurrentDistance(-1e9);
    valueLateralStateRightRssStateInformation.currentDistance
      = valueLateralStateRightRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLateralStateRightRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLateralStateRightRssStateInformation.evaluator = valueLateralStateRightRssStateInformationEvaluator;
    valueLateralStateRight.rssStateInformation = valueLateralStateRightRssStateInformation;
    value.lateralStateRight = valueLateralStateRight;
    ::ad::rss::state::LateralRssState valueLateralStateLeft;
    bool valueLateralStateLeftIsSafe{true};
    valueLateralStateLeft.isSafe = valueLateralStateLeftIsSafe;
    ::ad::rss::state::LateralResponse valueLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
    valueLateralStateLeft.response = valueLateralStateLeftResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueLateralStateLeftAlphaLat;
    ::ad::physics::Acceleration valueLateralStateLeftAlphaLatAccelMax(-1e2);
    valueLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueLateralStateLeftAlphaLat.accelMax = valueLateralStateLeftAlphaLatAccelMax;
    ::ad::physics::Acceleration valueLateralStateLeftAlphaLatBrakeMin(-1e2);
    valueLateralStateLeftAlphaLat.brakeMin = valueLateralStateLeftAlphaLatBrakeMin;
    valueLateralStateLeft.alphaLat = valueLateralStateLeftAlphaLat;
    ::ad::rss::state::RssStateInformation valueLateralStateLeftRssStateInformation;
    ::ad::physics::Distance valueLateralStateLeftRssStateInformationSafeDistance(-1e9);
    valueLateralStateLeftRssStateInformation.safeDistance = valueLateralStateLeftRssStateInformationSafeDistance;
    ::ad::physics::Distance valueLateralStateLeftRssStateInformationCurrentDistance(-1e9);
    valueLateralStateLeftRssStateInformation.currentDistance = valueLateralStateLeftRssStateInformationCurrentDistance;
    ::ad::rss::state::RssStateEvaluator valueLateralStateLeftRssStateInformationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
    valueLateralStateLeftRssStateInformation.evaluator = valueLateralStateLeftRssStateInformationEvaluator;
    valueLateralStateLeft.rssStateInformation = valueLateralStateLeftRssStateInformation;
    value.lateralStateLeft = valueLateralStateLeft;
    ::ad::rss::state::UnstructuredSceneRssState valueUnstructuredSceneState;
    bool valueUnstructuredSceneStateIsSafe{true};
    valueUnstructuredSceneState.isSafe = valueUnstructuredSceneStateIsSafe;
    ::ad::rss::state::UnstructuredSceneResponse valueUnstructuredSceneStateResponse(
      ::ad::rss::state::UnstructuredSceneResponse::None);
    valueUnstructuredSceneState.response = valueUnstructuredSceneStateResponse;
    ::ad::rss::state::HeadingRange valueUnstructuredSceneStateHeadingRange;
    ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
    valueUnstructuredSceneStateHeadingRange.begin = valueUnstructuredSceneStateHeadingRangeBegin;
    ::ad::physics::Angle valueUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
    valueUnstructuredSceneStateHeadingRange.end = valueUnstructuredSceneStateHeadingRangeEnd;
    valueUnstructuredSceneState.headingRange = valueUnstructuredSceneStateHeadingRange;
    ::ad::rss::state::UnstructuredSceneStateInformation valueUnstructuredSceneStateRssStateInformation;
    ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
    ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
    ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
    valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
      = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
    ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
    valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
      = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
    valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
      1, valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
    valueUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
      = valueUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
    ::ad::physics::Distance2DList valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
    ::ad::physics::Distance2D valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
    ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
    valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
      = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
    ::ad::physics::Distance valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
    valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
      = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
    valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
      1, valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
    valueUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
      = valueUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
    valueUnstructuredSceneState.rssStateInformation = valueUnstructuredSceneStateRssStateInformation;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructuredSceneStateAlphaLon;
    ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonAccelMax(-1e2);
    valueUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueUnstructuredSceneStateAlphaLon.accelMax = valueUnstructuredSceneStateAlphaLonAccelMax;
    ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
    valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
    valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
    valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLonBrakeMinCorrect;
    valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMax;
    valueUnstructuredSceneStateAlphaLon.brakeMinCorrect = valueUnstructuredSceneStateAlphaLon.brakeMin;
    valueUnstructuredSceneStateAlphaLon.brakeMin = valueUnstructuredSceneStateAlphaLon.brakeMinCorrect;
    valueUnstructuredSceneStateAlphaLon.brakeMax = valueUnstructuredSceneStateAlphaLon.brakeMin;
    valueUnstructuredSceneState.alphaLon = valueUnstructuredSceneStateAlphaLon;
    value.unstructuredSceneState = valueUnstructuredSceneState;
    ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    mValue = value;
  }

  ::ad::rss::state::RssState mValue;
};

TEST_F(RssStateTests, copyConstruction)
{
  ::ad::rss::state::RssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveConstruction)
{
  ::ad::rss::state::RssState tmpValue(mValue);
  ::ad::rss::state::RssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, copyAssignment)
{
  ::ad::rss::state::RssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveAssignment)
{
  ::ad::rss::state::RssState tmpValue(mValue);
  ::ad::rss::state::RssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssStateTests, comparisonOperatorObjectIdDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::world::ObjectId objectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorSituationIdDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::situation::SituationId situationId(std::numeric_limits<::ad::rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLongitudinalStateDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LongitudinalRssState longitudinalState;
  bool longitudinalStateIsSafe{false};
  longitudinalState.isSafe = longitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse longitudinalStateResponse(::ad::rss::state::LongitudinalResponse::BrakeMin);
  longitudinalState.response = longitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues longitudinalStateAlphaLon;
  ::ad::physics::Acceleration longitudinalStateAlphaLonAccelMax(1e2);
  longitudinalStateAlphaLon.accelMax = longitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration longitudinalStateAlphaLonBrakeMax(1e2);
  longitudinalStateAlphaLon.brakeMax = longitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration longitudinalStateAlphaLonBrakeMin(1e2);
  longitudinalStateAlphaLon.brakeMin = longitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration longitudinalStateAlphaLonBrakeMinCorrect(1e2);
  longitudinalStateAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  longitudinalStateAlphaLon.brakeMinCorrect = longitudinalStateAlphaLonBrakeMinCorrect;
  longitudinalStateAlphaLon.brakeMinCorrect = longitudinalStateAlphaLon.brakeMin;
  longitudinalStateAlphaLon.brakeMin = longitudinalStateAlphaLon.brakeMax;
  longitudinalStateAlphaLon.brakeMax = longitudinalStateAlphaLon.brakeMin;
  longitudinalStateAlphaLon.brakeMin = longitudinalStateAlphaLon.brakeMinCorrect;
  longitudinalState.alphaLon = longitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation longitudinalStateRssStateInformation;
  ::ad::physics::Distance longitudinalStateRssStateInformationSafeDistance(1e9);
  longitudinalStateRssStateInformation.safeDistance = longitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance longitudinalStateRssStateInformationCurrentDistance(1e9);
  longitudinalStateRssStateInformation.currentDistance = longitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator longitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  longitudinalStateRssStateInformation.evaluator = longitudinalStateRssStateInformationEvaluator;
  longitudinalState.rssStateInformation = longitudinalStateRssStateInformation;
  valueA.longitudinalState = longitudinalState;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateRightDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateralStateRight;
  bool lateralStateRightIsSafe{false};
  lateralStateRight.isSafe = lateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse lateralStateRightResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateralStateRight.response = lateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues lateralStateRightAlphaLat;
  ::ad::physics::Acceleration lateralStateRightAlphaLatAccelMax(1e2);
  lateralStateRightAlphaLat.accelMax = lateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration lateralStateRightAlphaLatBrakeMin(1e2);
  lateralStateRightAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  lateralStateRightAlphaLat.brakeMin = lateralStateRightAlphaLatBrakeMin;
  lateralStateRight.alphaLat = lateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation lateralStateRightRssStateInformation;
  ::ad::physics::Distance lateralStateRightRssStateInformationSafeDistance(1e9);
  lateralStateRightRssStateInformation.safeDistance = lateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance lateralStateRightRssStateInformationCurrentDistance(1e9);
  lateralStateRightRssStateInformation.currentDistance = lateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator lateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateRightRssStateInformation.evaluator = lateralStateRightRssStateInformationEvaluator;
  lateralStateRight.rssStateInformation = lateralStateRightRssStateInformation;
  valueA.lateralStateRight = lateralStateRight;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateralStateLeftDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateralStateLeft;
  bool lateralStateLeftIsSafe{false};
  lateralStateLeft.isSafe = lateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse lateralStateLeftResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateralStateLeft.response = lateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues lateralStateLeftAlphaLat;
  ::ad::physics::Acceleration lateralStateLeftAlphaLatAccelMax(1e2);
  lateralStateLeftAlphaLat.accelMax = lateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration lateralStateLeftAlphaLatBrakeMin(1e2);
  lateralStateLeftAlphaLatBrakeMin = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  lateralStateLeftAlphaLat.brakeMin = lateralStateLeftAlphaLatBrakeMin;
  lateralStateLeft.alphaLat = lateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation lateralStateLeftRssStateInformation;
  ::ad::physics::Distance lateralStateLeftRssStateInformationSafeDistance(1e9);
  lateralStateLeftRssStateInformation.safeDistance = lateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance lateralStateLeftRssStateInformationCurrentDistance(1e9);
  lateralStateLeftRssStateInformation.currentDistance = lateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator lateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateralStateLeftRssStateInformation.evaluator = lateralStateLeftRssStateInformationEvaluator;
  lateralStateLeft.rssStateInformation = lateralStateLeftRssStateInformation;
  valueA.lateralStateLeft = lateralStateLeft;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorUnstructuredSceneStateDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::UnstructuredSceneRssState unstructuredSceneState;
  bool unstructuredSceneStateIsSafe{false};
  unstructuredSceneState.isSafe = unstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse unstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::Brake);
  unstructuredSceneState.response = unstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange unstructuredSceneStateHeadingRange;
  ::ad::physics::Angle unstructuredSceneStateHeadingRangeBegin(6.283185308);
  unstructuredSceneStateHeadingRange.begin = unstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle unstructuredSceneStateHeadingRangeEnd(6.283185308);
  unstructuredSceneStateHeadingRange.end = unstructuredSceneStateHeadingRangeEnd;
  unstructuredSceneState.headingRange = unstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation unstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList unstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D unstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance unstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(1e9);
  unstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = unstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance unstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(1e9);
  unstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = unstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  unstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    2, unstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  unstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = unstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList unstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(1e9);
  unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(1e9);
  unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  unstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    2, unstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  unstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = unstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  unstructuredSceneState.rssStateInformation = unstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues unstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration unstructuredSceneStateAlphaLonAccelMax(1e2);
  unstructuredSceneStateAlphaLon.accelMax = unstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration unstructuredSceneStateAlphaLonBrakeMax(1e2);
  unstructuredSceneStateAlphaLon.brakeMax = unstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration unstructuredSceneStateAlphaLonBrakeMin(1e2);
  unstructuredSceneStateAlphaLon.brakeMin = unstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration unstructuredSceneStateAlphaLonBrakeMinCorrect(1e2);
  unstructuredSceneStateAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  unstructuredSceneStateAlphaLon.brakeMinCorrect = unstructuredSceneStateAlphaLonBrakeMinCorrect;
  unstructuredSceneStateAlphaLon.brakeMinCorrect = unstructuredSceneStateAlphaLon.brakeMin;
  unstructuredSceneStateAlphaLon.brakeMin = unstructuredSceneStateAlphaLon.brakeMax;
  unstructuredSceneStateAlphaLon.brakeMax = unstructuredSceneStateAlphaLon.brakeMin;
  unstructuredSceneStateAlphaLon.brakeMin = unstructuredSceneStateAlphaLon.brakeMinCorrect;
  unstructuredSceneState.alphaLon = unstructuredSceneStateAlphaLon;
  valueA.unstructuredSceneState = unstructuredSceneState;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::situation::SituationType situationType(::ad::rss::situation::SituationType::Unstructured);
  valueA.situationType = situationType;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
