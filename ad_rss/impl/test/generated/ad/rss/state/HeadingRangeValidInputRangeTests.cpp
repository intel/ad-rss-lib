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

#include "ad/rss/state/HeadingRangeValidInputRange.hpp"

TEST(HeadingRangeValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::AngleRange valueOuterRange;
  ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
  valueOuterRange.minimum = valueOuterRangeMinimum;
  ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
  valueOuterRange.maximum = valueOuterRangeMaximum;
  value.outerRange = valueOuterRange;
  ::ad::physics::AngleRange valueInnerRange;
  ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
  valueInnerRange.minimum = valueInnerRangeMinimum;
  ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
  valueInnerRange.maximum = valueInnerRangeMaximum;
  value.innerRange = valueInnerRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeOuterRangeTooSmall)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::AngleRange valueOuterRange;
  ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
  valueOuterRange.minimum = valueOuterRangeMinimum;
  ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
  valueOuterRange.maximum = valueOuterRangeMaximum;
  value.outerRange = valueOuterRange;
  ::ad::physics::AngleRange valueInnerRange;
  ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
  valueInnerRange.minimum = valueInnerRangeMinimum;
  ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
  valueInnerRange.maximum = valueInnerRangeMaximum;
  value.innerRange = valueInnerRange;

  // override member with data type value below input range minimum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(-6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.outerRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeOuterRangeTooBig)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::AngleRange valueOuterRange;
  ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
  valueOuterRange.minimum = valueOuterRangeMinimum;
  ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
  valueOuterRange.maximum = valueOuterRangeMaximum;
  value.outerRange = valueOuterRange;
  ::ad::physics::AngleRange valueInnerRange;
  ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
  valueInnerRange.minimum = valueInnerRangeMinimum;
  ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
  valueInnerRange.maximum = valueInnerRangeMaximum;
  value.innerRange = valueInnerRange;

  // override member with data type value above input range maximum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.outerRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeInnerRangeTooSmall)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::AngleRange valueOuterRange;
  ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
  valueOuterRange.minimum = valueOuterRangeMinimum;
  ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
  valueOuterRange.maximum = valueOuterRangeMaximum;
  value.outerRange = valueOuterRange;
  ::ad::physics::AngleRange valueInnerRange;
  ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
  valueInnerRange.minimum = valueInnerRangeMinimum;
  ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
  valueInnerRange.maximum = valueInnerRangeMaximum;
  value.innerRange = valueInnerRange;

  // override member with data type value below input range minimum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(-6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.innerRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(HeadingRangeValidInputRangeTests, testValidInputRangeInnerRangeTooBig)
{
  ::ad::rss::state::HeadingRange value;
  ::ad::physics::AngleRange valueOuterRange;
  ::ad::physics::Angle valueOuterRangeMinimum(-6.283185308);
  valueOuterRange.minimum = valueOuterRangeMinimum;
  ::ad::physics::Angle valueOuterRangeMaximum(-6.283185308);
  valueOuterRange.maximum = valueOuterRangeMaximum;
  value.outerRange = valueOuterRange;
  ::ad::physics::AngleRange valueInnerRange;
  ::ad::physics::Angle valueInnerRangeMinimum(-6.283185308);
  valueInnerRange.minimum = valueInnerRangeMinimum;
  ::ad::physics::Angle valueInnerRangeMaximum(-6.283185308);
  valueInnerRange.maximum = valueInnerRangeMaximum;
  value.innerRange = valueInnerRange;

  // override member with data type value above input range maximum
  ::ad::physics::AngleRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberMinimum(6.283185308 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.innerRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
