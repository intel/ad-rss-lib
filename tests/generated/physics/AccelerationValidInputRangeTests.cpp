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

#include "ad_rss/physics/AccelerationValidInputRange.hpp"

TEST(AccelerationValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::Acceleration value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::Acceleration value(-1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::Acceleration value(1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::Acceleration value(-1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::Acceleration value(1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::Acceleration value(-1e2);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::Acceleration value(1e2);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::Acceleration value(-1e2 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::Acceleration value(1e2 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
