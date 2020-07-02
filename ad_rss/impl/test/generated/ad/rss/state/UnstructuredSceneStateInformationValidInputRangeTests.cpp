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

#include "ad/rss/state/UnstructuredSceneStateInformationValidInputRange.hpp"

TEST(UnstructuredSceneStateInformationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::UnstructuredSceneStateInformation value;
  ::ad::rss::world::UnstructuredTrajectorySet valueBrakeTrajectorySet;
  ::ad::physics::Distance2D valueBrakeTrajectorySetElement;
  ::ad::physics::Distance valueBrakeTrajectorySetElementX(-1e9);
  valueBrakeTrajectorySetElement.x = valueBrakeTrajectorySetElementX;
  ::ad::physics::Distance valueBrakeTrajectorySetElementY(-1e9);
  valueBrakeTrajectorySetElement.y = valueBrakeTrajectorySetElementY;
  valueBrakeTrajectorySet.resize(1, valueBrakeTrajectorySetElement);
  value.brakeTrajectorySet = valueBrakeTrajectorySet;
  ::ad::rss::world::UnstructuredTrajectorySet valueContinueForwardTrajectorySet;
  ::ad::physics::Distance2D valueContinueForwardTrajectorySetElement;
  ::ad::physics::Distance valueContinueForwardTrajectorySetElementX(-1e9);
  valueContinueForwardTrajectorySetElement.x = valueContinueForwardTrajectorySetElementX;
  ::ad::physics::Distance valueContinueForwardTrajectorySetElementY(-1e9);
  valueContinueForwardTrajectorySetElement.y = valueContinueForwardTrajectorySetElementY;
  valueContinueForwardTrajectorySet.resize(1, valueContinueForwardTrajectorySetElement);
  value.continueForwardTrajectorySet = valueContinueForwardTrajectorySet;
  ASSERT_TRUE(withinValidInputRange(value));
}
