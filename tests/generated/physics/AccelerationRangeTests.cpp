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
#include "ad/physics/AccelerationRange.hpp"

class AccelerationRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::physics::AccelerationRange value;
    ::ad::physics::Acceleration valueMinimum(-1e2);
    value.minimum = valueMinimum;
    ::ad::physics::Acceleration valueMaximum(-1e2);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad::physics::AccelerationRange mValue;
};

TEST_F(AccelerationRangeTests, copyConstruction)
{
  ::ad::physics::AccelerationRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, moveConstruction)
{
  ::ad::physics::AccelerationRange value(std::move(::ad::physics::AccelerationRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, copyAssignment)
{
  ::ad::physics::AccelerationRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, moveAssignment)
{
  ::ad::physics::AccelerationRange value;
  value = std::move(::ad::physics::AccelerationRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, comparisonOperatorEqual)
{
  ::ad::physics::AccelerationRange valueA = mValue;
  ::ad::physics::AccelerationRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad::physics::AccelerationRange valueA = mValue;
  ::ad::physics::Acceleration minimum(1e2);
  valueA.minimum = minimum;
  ::ad::physics::AccelerationRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad::physics::AccelerationRange valueA = mValue;
  ::ad::physics::Acceleration maximum(1e2);
  valueA.maximum = maximum;
  ::ad::physics::AccelerationRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
