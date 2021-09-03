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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/state/RssStateVectorValidInputRange.hpp"

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::state::RssStateVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonAccelMax(-1e2);
  elementLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinalStateAlphaLon.accelMax = elementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMax(-1e2);
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMin(-1e2);
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLonBrakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMax;
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalState.alphaLon = elementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatAccelMax(-1e2);
  elementLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateRightAlphaLat.accelMax = elementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatBrakeMin(-1e2);
  elementLateralStateRightAlphaLat.brakeMin = elementLateralStateRightAlphaLatBrakeMin;
  elementLateralStateRight.alphaLat = elementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(-1e9);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatAccelMax(-1e2);
  elementLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateLeftAlphaLat.accelMax = elementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatBrakeMin(-1e2);
  elementLateralStateLeftAlphaLat.brakeMin = elementLateralStateLeftAlphaLatBrakeMin;
  elementLateralStateLeft.alphaLat = elementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState elementUnstructuredSceneState;
  bool elementUnstructuredSceneStateIsSafe{true};
  elementUnstructuredSceneState.isSafe = elementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse elementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  elementUnstructuredSceneState.response = elementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange elementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.begin = elementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.end = elementUnstructuredSceneStateHeadingRangeEnd;
  elementUnstructuredSceneState.headingRange = elementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation elementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  elementUnstructuredSceneState.rssStateInformation = elementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  elementUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructuredSceneStateAlphaLon.accelMax = elementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMax;
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneState.alphaLon = elementUnstructuredSceneStateAlphaLon;
  element.unstructuredSceneState = elementUnstructuredSceneState;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonAccelMax(-1e2);
  elementLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinalStateAlphaLon.accelMax = elementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMax(-1e2);
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMin(-1e2);
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLonBrakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMax;
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalState.alphaLon = elementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatAccelMax(-1e2);
  elementLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateRightAlphaLat.accelMax = elementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatBrakeMin(-1e2);
  elementLateralStateRightAlphaLat.brakeMin = elementLateralStateRightAlphaLatBrakeMin;
  elementLateralStateRight.alphaLat = elementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(-1e9);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatAccelMax(-1e2);
  elementLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateLeftAlphaLat.accelMax = elementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatBrakeMin(-1e2);
  elementLateralStateLeftAlphaLat.brakeMin = elementLateralStateLeftAlphaLatBrakeMin;
  elementLateralStateLeft.alphaLat = elementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState elementUnstructuredSceneState;
  bool elementUnstructuredSceneStateIsSafe{true};
  elementUnstructuredSceneState.isSafe = elementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse elementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  elementUnstructuredSceneState.response = elementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange elementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.begin = elementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.end = elementUnstructuredSceneStateHeadingRangeEnd;
  elementUnstructuredSceneState.headingRange = elementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation elementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  elementUnstructuredSceneState.rssStateInformation = elementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  elementUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructuredSceneStateAlphaLon.accelMax = elementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMax;
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneState.alphaLon = elementUnstructuredSceneStateAlphaLon;
  element.unstructuredSceneState = elementUnstructuredSceneState;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  element.longitudinalState = elementLongitudinalState;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.objectId = elementObjectId;
  ::ad::rss::situation::SituationId elementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  bool elementLongitudinalStateIsSafe{true};
  elementLongitudinalState.isSafe = elementLongitudinalStateIsSafe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinalStateAlphaLon;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonAccelMax(-1e2);
  elementLongitudinalStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinalStateAlphaLon.accelMax = elementLongitudinalStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMax(-1e2);
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMin(-1e2);
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementLongitudinalStateAlphaLonBrakeMinCorrect(-1e2);
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLonBrakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMax;
  elementLongitudinalStateAlphaLon.brakeMinCorrect = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalStateAlphaLon.brakeMin = elementLongitudinalStateAlphaLon.brakeMinCorrect;
  elementLongitudinalStateAlphaLon.brakeMax = elementLongitudinalStateAlphaLon.brakeMin;
  elementLongitudinalState.alphaLon = elementLongitudinalStateAlphaLon;
  ::ad::rss::state::RssStateInformation elementLongitudinalStateRssStateInformation;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationSafeDistance(-1e9);
  elementLongitudinalStateRssStateInformation.safeDistance = elementLongitudinalStateRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLongitudinalStateRssStateInformationCurrentDistance(-1e9);
  elementLongitudinalStateRssStateInformation.currentDistance
    = elementLongitudinalStateRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinalStateRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinalStateRssStateInformation.evaluator = elementLongitudinalStateRssStateInformationEvaluator;
  elementLongitudinalState.rssStateInformation = elementLongitudinalStateRssStateInformation;
  element.longitudinalState = elementLongitudinalState;
  ::ad::rss::state::LateralRssState elementLateralStateRight;
  bool elementLateralStateRightIsSafe{true};
  elementLateralStateRight.isSafe = elementLateralStateRightIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateRightResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateRight.response = elementLateralStateRightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateRightAlphaLat;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatAccelMax(-1e2);
  elementLateralStateRightAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateRightAlphaLat.accelMax = elementLateralStateRightAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateRightAlphaLatBrakeMin(-1e2);
  elementLateralStateRightAlphaLat.brakeMin = elementLateralStateRightAlphaLatBrakeMin;
  elementLateralStateRight.alphaLat = elementLateralStateRightAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateRightRssStateInformation;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationSafeDistance(-1e9);
  elementLateralStateRightRssStateInformation.safeDistance = elementLateralStateRightRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateRightRssStateInformationCurrentDistance(-1e9);
  elementLateralStateRightRssStateInformation.currentDistance
    = elementLateralStateRightRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateRightRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateRightRssStateInformation.evaluator = elementLateralStateRightRssStateInformationEvaluator;
  elementLateralStateRight.rssStateInformation = elementLateralStateRightRssStateInformation;
  element.lateralStateRight = elementLateralStateRight;
  ::ad::rss::state::LateralRssState elementLateralStateLeft;
  bool elementLateralStateLeftIsSafe{true};
  elementLateralStateLeft.isSafe = elementLateralStateLeftIsSafe;
  ::ad::rss::state::LateralResponse elementLateralStateLeftResponse(::ad::rss::state::LateralResponse::None);
  elementLateralStateLeft.response = elementLateralStateLeftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateralStateLeftAlphaLat;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatAccelMax(-1e2);
  elementLateralStateLeftAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateralStateLeftAlphaLat.accelMax = elementLateralStateLeftAlphaLatAccelMax;
  ::ad::physics::Acceleration elementLateralStateLeftAlphaLatBrakeMin(-1e2);
  elementLateralStateLeftAlphaLat.brakeMin = elementLateralStateLeftAlphaLatBrakeMin;
  elementLateralStateLeft.alphaLat = elementLateralStateLeftAlphaLat;
  ::ad::rss::state::RssStateInformation elementLateralStateLeftRssStateInformation;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationSafeDistance(-1e9);
  elementLateralStateLeftRssStateInformation.safeDistance = elementLateralStateLeftRssStateInformationSafeDistance;
  ::ad::physics::Distance elementLateralStateLeftRssStateInformationCurrentDistance(-1e9);
  elementLateralStateLeftRssStateInformation.currentDistance
    = elementLateralStateLeftRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator elementLateralStateLeftRssStateInformationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateralStateLeftRssStateInformation.evaluator = elementLateralStateLeftRssStateInformationEvaluator;
  elementLateralStateLeft.rssStateInformation = elementLateralStateLeftRssStateInformation;
  element.lateralStateLeft = elementLateralStateLeft;
  ::ad::rss::state::UnstructuredSceneRssState elementUnstructuredSceneState;
  bool elementUnstructuredSceneStateIsSafe{true};
  elementUnstructuredSceneState.isSafe = elementUnstructuredSceneStateIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse elementUnstructuredSceneStateResponse(
    ::ad::rss::state::UnstructuredSceneResponse::None);
  elementUnstructuredSceneState.response = elementUnstructuredSceneStateResponse;
  ::ad::rss::state::HeadingRange elementUnstructuredSceneStateHeadingRange;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeBegin(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.begin = elementUnstructuredSceneStateHeadingRangeBegin;
  ::ad::physics::Angle elementUnstructuredSceneStateHeadingRangeEnd(-6.283185308);
  elementUnstructuredSceneStateHeadingRange.end = elementUnstructuredSceneStateHeadingRangeEnd;
  elementUnstructuredSceneState.headingRange = elementUnstructuredSceneStateHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation elementUnstructuredSceneStateRssStateInformation;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.brakeTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2DList elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.x
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement.y
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElementY;
  elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet.resize(
    1, elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySetElement);
  elementUnstructuredSceneStateRssStateInformation.continueForwardTrajectorySet
    = elementUnstructuredSceneStateRssStateInformationContinueForwardTrajectorySet;
  elementUnstructuredSceneState.rssStateInformation = elementUnstructuredSceneStateRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructuredSceneStateAlphaLon;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonAccelMax(-1e2);
  elementUnstructuredSceneStateAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructuredSceneStateAlphaLon.accelMax = elementUnstructuredSceneStateAlphaLonAccelMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMax(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMin(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementUnstructuredSceneStateAlphaLonBrakeMinCorrect(-1e2);
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLonBrakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMax;
  elementUnstructuredSceneStateAlphaLon.brakeMinCorrect = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneStateAlphaLon.brakeMin = elementUnstructuredSceneStateAlphaLon.brakeMinCorrect;
  elementUnstructuredSceneStateAlphaLon.brakeMax = elementUnstructuredSceneStateAlphaLon.brakeMin;
  elementUnstructuredSceneState.alphaLon = elementUnstructuredSceneStateAlphaLon;
  element.unstructuredSceneState = elementUnstructuredSceneState;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinalState;
  ::ad::rss::state::LongitudinalResponse elementLongitudinalStateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinalState.response = elementLongitudinalStateResponse;
  element.longitudinalState = elementLongitudinalState;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
