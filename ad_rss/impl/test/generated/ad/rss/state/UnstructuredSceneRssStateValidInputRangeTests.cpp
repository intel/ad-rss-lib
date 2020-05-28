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
  ::ad::physics::AngleRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeMinimum(-6.283185308);
  valueHeadingRange.minimum = valueHeadingRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeMaximum(-6.283185308);
  valueHeadingRange.maximum = valueHeadingRangeMaximum;
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredSceneRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::UnstructuredSceneRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::UnstructuredSceneResponse valueResponse(::ad::rss::state::UnstructuredSceneResponse::None);
  value.response = valueResponse;
  ::ad::physics::AngleRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeMinimum(-6.283185308);
  valueHeadingRange.minimum = valueHeadingRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeMaximum(-6.283185308);
  valueHeadingRange.maximum = valueHeadingRangeMaximum;
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
  ::ad::physics::AngleRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeMinimum(-6.283185308);
  valueHeadingRange.minimum = valueHeadingRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeMaximum(-6.283185308);
  valueHeadingRange.maximum = valueHeadingRangeMaximum;
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
  ::ad::physics::AngleRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeMinimum(-6.283185308);
  valueHeadingRange.minimum = valueHeadingRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeMaximum(-6.283185308);
  valueHeadingRange.maximum = valueHeadingRangeMaximum;
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

  // override member with data type value below input range minimum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(-6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
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
  ::ad::physics::AngleRange valueHeadingRange;
  ::ad::physics::Angle valueHeadingRangeMinimum(-6.283185308);
  valueHeadingRange.minimum = valueHeadingRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeMaximum(-6.283185308);
  valueHeadingRange.maximum = valueHeadingRangeMaximum;
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

  // override member with data type value above input range maximum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.headingRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
