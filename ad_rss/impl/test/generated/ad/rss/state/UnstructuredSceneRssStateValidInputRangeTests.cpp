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

#include "ad/rss/state/UnstructuredSceneRssStateValidInputRange.hpp"

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredSceneResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredSceneResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredSceneResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredSceneResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeHeadingRangeTooSmall)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value below input range minimum
  ::ad::rss::state::HeadingRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberBegin(-6.283185308 * 1.1);
  invalidInitializedMember.begin = invalidInitializedMemberBegin;
  value.headingRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeHeadingRangeTooBig)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value above input range maximum
  ::ad::rss::state::HeadingRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberBegin(6.283185308 * 1.1);
  invalidInitializedMember.begin = invalidInitializedMemberBegin;
  value.headingRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeBegin(-6.283185308);
  valueHeadingRange.begin = valueHeadingRangeBegin;
  ::ad::physics::Angle valueHeadingRangeEnd(-6.283185308);
  valueHeadingRange.end = valueHeadingRangeEnd;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation valueRssStateInformation;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationBrakeTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationBrakeTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementX(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.x = valueRssStateInformationBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationBrakeTrajectorySetElementY(-1e9);
  valueRssStateInformationBrakeTrajectorySetElement.y = valueRssStateInformationBrakeTrajectorySetElementY;
  valueRssStateInformationBrakeTrajectorySet.resize(1, valueRssStateInformationBrakeTrajectorySetElement);
  valueRssStateInformation.brakeTrajectorySet = valueRssStateInformationBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueRssStateInformationContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueRssStateInformationContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementX(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.x
    = valueRssStateInformationContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueRssStateInformationContinueForwardTrajectorySetElementY(-1e9);
  valueRssStateInformationContinueForwardTrajectorySetElement.y
    = valueRssStateInformationContinueForwardTrajectorySetElementY;
  valueRssStateInformationContinueForwardTrajectorySet.resize(
    1, valueRssStateInformationContinueForwardTrajectorySetElement);
  valueRssStateInformation.continueForwardTrajectorySet = valueRssStateInformationContinueForwardTrajectorySet;
  value.rssStateInformation = valueRssStateInformation;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
