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
#include "ad/rss/world/ObjectIdVector.hpp"

TEST(ObjectIdVectorTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::ObjectIdVector value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}
