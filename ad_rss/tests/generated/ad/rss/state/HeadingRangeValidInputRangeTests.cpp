/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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

#include "ad/rss/state/HeadingRangeValidInputRange.hpp"

TEST(HeadingRangeValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueBegin(-6.283185308);
  value.begin = valueBegin;
  ::ad::physics::Angle valueEnd(-6.283185308);
  value.end = valueEnd;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeBeginTooSmall)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueBegin(-6.283185308);
  value.begin = valueBegin;
  ::ad::physics::Angle valueEnd(-6.283185308);
  value.end = valueEnd;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.begin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeBeginTooBig)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueBegin(-6.283185308);
  value.begin = valueBegin;
  ::ad::physics::Angle valueEnd(-6.283185308);
  value.end = valueEnd;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.begin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangebeginDefault)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueDefault;
  value.begin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeEndTooSmall)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueBegin(-6.283185308);
  value.begin = valueBegin;
  ::ad::physics::Angle valueEnd(-6.283185308);
  value.end = valueEnd;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.end = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeEndTooBig)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueBegin(-6.283185308);
  value.begin = valueBegin;
  ::ad::physics::Angle valueEnd(-6.283185308);
  value.end = valueEnd;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.end = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeendDefault)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::Angle valueDefault;
  value.end = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
