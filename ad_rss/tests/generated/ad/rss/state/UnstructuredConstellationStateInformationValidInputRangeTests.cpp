/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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

#include "ad/rss/state/UnstructuredConstellationStateInformationValidInputRange.hpp"

TEST(UnstructuredConstellationStateInformationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  ::ad::physics::Distance2DList valueBrake_trajectory_set;
  ::ad::physics::Distance2D valueBrake_trajectory_setElement;
  ::ad::physics::Distance valueBrake_trajectory_setElementX(-1e9);
  valueBrake_trajectory_setElement.x = valueBrake_trajectory_setElementX;
  ::ad::physics::Distance valueBrake_trajectory_setElementY(-1e9);
  valueBrake_trajectory_setElement.y = valueBrake_trajectory_setElementY;
  valueBrake_trajectory_set.resize(1, valueBrake_trajectory_setElement);
  value.brake_trajectory_set = valueBrake_trajectory_set;
  ::ad::physics::Distance2DList valueContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementX(-1e9);
  valueContinue_forward_trajectory_setElement.x = valueContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementY(-1e9);
  valueContinue_forward_trajectory_setElement.y = valueContinue_forward_trajectory_setElementY;
  valueContinue_forward_trajectory_set.resize(1, valueContinue_forward_trajectory_setElement);
  value.continue_forward_trajectory_set = valueContinue_forward_trajectory_set;
  ::ad::physics::Angle valueConsidered_drive_away_steering_angle(-6.283185308);
  value.considered_drive_away_steering_angle = valueConsidered_drive_away_steering_angle;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationStateInformationValidInputRangeTests,
     testValidInputRangeConsidered_drive_away_steering_angleTooSmall)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  ::ad::physics::Distance2DList valueBrake_trajectory_set;
  ::ad::physics::Distance2D valueBrake_trajectory_setElement;
  ::ad::physics::Distance valueBrake_trajectory_setElementX(-1e9);
  valueBrake_trajectory_setElement.x = valueBrake_trajectory_setElementX;
  ::ad::physics::Distance valueBrake_trajectory_setElementY(-1e9);
  valueBrake_trajectory_setElement.y = valueBrake_trajectory_setElementY;
  valueBrake_trajectory_set.resize(1, valueBrake_trajectory_setElement);
  value.brake_trajectory_set = valueBrake_trajectory_set;
  ::ad::physics::Distance2DList valueContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementX(-1e9);
  valueContinue_forward_trajectory_setElement.x = valueContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementY(-1e9);
  valueContinue_forward_trajectory_setElement.y = valueContinue_forward_trajectory_setElementY;
  valueContinue_forward_trajectory_set.resize(1, valueContinue_forward_trajectory_setElement);
  value.continue_forward_trajectory_set = valueContinue_forward_trajectory_set;
  ::ad::physics::Angle valueConsidered_drive_away_steering_angle(-6.283185308);
  value.considered_drive_away_steering_angle = valueConsidered_drive_away_steering_angle;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.considered_drive_away_steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationStateInformationValidInputRangeTests,
     testValidInputRangeConsidered_drive_away_steering_angleTooBig)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  ::ad::physics::Distance2DList valueBrake_trajectory_set;
  ::ad::physics::Distance2D valueBrake_trajectory_setElement;
  ::ad::physics::Distance valueBrake_trajectory_setElementX(-1e9);
  valueBrake_trajectory_setElement.x = valueBrake_trajectory_setElementX;
  ::ad::physics::Distance valueBrake_trajectory_setElementY(-1e9);
  valueBrake_trajectory_setElement.y = valueBrake_trajectory_setElementY;
  valueBrake_trajectory_set.resize(1, valueBrake_trajectory_setElement);
  value.brake_trajectory_set = valueBrake_trajectory_set;
  ::ad::physics::Distance2DList valueContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementX(-1e9);
  valueContinue_forward_trajectory_setElement.x = valueContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueContinue_forward_trajectory_setElementY(-1e9);
  valueContinue_forward_trajectory_setElement.y = valueContinue_forward_trajectory_setElementY;
  valueContinue_forward_trajectory_set.resize(1, valueContinue_forward_trajectory_setElement);
  value.continue_forward_trajectory_set = valueContinue_forward_trajectory_set;
  ::ad::physics::Angle valueConsidered_drive_away_steering_angle(-6.283185308);
  value.considered_drive_away_steering_angle = valueConsidered_drive_away_steering_angle;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.considered_drive_away_steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationStateInformationValidInputRangeTests,
     testValidInputRangeconsidered_drive_away_steering_angleDefault)
{
  ::ad::rss::state::UnstructuredConstellationStateInformation value;
  ::ad::physics::Angle valueDefault;
  value.considered_drive_away_steering_angle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
