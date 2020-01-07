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
#include "ad/rss/situation/SituationVector.hpp"

TEST(SituationVectorTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::situation::SituationVector value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}
