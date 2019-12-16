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
#include "ad/rss/state/RssStateVector.hpp"

TEST(RssStateVectorTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::RssStateVector value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
}
