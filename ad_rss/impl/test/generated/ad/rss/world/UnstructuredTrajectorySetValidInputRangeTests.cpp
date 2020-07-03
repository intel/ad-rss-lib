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

#include "ad/rss/world/UnstructuredTrajectorySetValidInputRange.hpp"

TEST(UnstructuredTrajectorySetValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::UnstructuredTrajectorySet value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredTrajectorySetValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::UnstructuredTrajectorySet value;
  ::ad::physics::Distance2D element;
  ::ad::physics::Distance elementX(-1e9);
  element.x = elementX;
  ::ad::physics::Distance elementY(-1e9);
  element.y = elementY;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredTrajectorySetValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::UnstructuredTrajectorySet value;
  ::ad::physics::Distance2D element;
  ::ad::physics::Distance elementX(-1e9 * 1.1);
  element.x = elementX;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
