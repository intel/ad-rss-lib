/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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
#include "ad/rss/world/RoadArea.hpp"

TEST(RoadAreaTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::RoadArea value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
}
