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
#include "ad/rss/world/RoadSegment.hpp"

TEST(RoadSegmentTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::RoadSegment value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}
