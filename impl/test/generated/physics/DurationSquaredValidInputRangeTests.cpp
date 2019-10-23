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

#include "ad/physics/DurationSquaredValidInputRange.hpp"

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad::physics::DurationSquared value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad::physics::DurationSquared value(-1e12);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad::physics::DurationSquared value(1e12);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad::physics::DurationSquared value(-1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad::physics::DurationSquared value(1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad::physics::DurationSquared value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad::physics::DurationSquared value(10000.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad::physics::DurationSquared value(0. - ::ad::physics::DurationSquared::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad::physics::DurationSquared value(10000. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
