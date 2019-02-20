/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad_rss/physics/ParametricRangeValidInputRange.hpp"

TEST(ParametricRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMinimumInvalid)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMaximumInvalid)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
