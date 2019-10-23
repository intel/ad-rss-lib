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
#include "ad/physics/Speed.hpp"
#include "ad/physics/SpeedSquared.hpp"

TEST(SpeedSquaredTests, defaultConstructionIsInvalid)
{
  ::ad::physics::SpeedSquared value;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e6, ::ad::physics::SpeedSquared::cMinValue);
  EXPECT_EQ(::ad::physics::SpeedSquared::cMinValue, static_cast<double>(::ad::physics::SpeedSquared::getMin()));
}

TEST(SpeedSquaredTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e6, ::ad::physics::SpeedSquared::cMaxValue);
  EXPECT_EQ(::ad::physics::SpeedSquared::cMaxValue, static_cast<double>(::ad::physics::SpeedSquared::getMax()));
}

TEST(SpeedSquaredTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad::physics::SpeedSquared::cPrecisionValue);
  EXPECT_EQ(1e-6, ::ad::physics::SpeedSquared::cPrecisionValue);
  EXPECT_EQ(::ad::physics::SpeedSquared::cPrecisionValue,
            static_cast<double>(::ad::physics::SpeedSquared::getPrecision()));
}

TEST(SpeedSquaredTests, minIsValid)
{
  EXPECT_TRUE(::ad::physics::SpeedSquared::getMin().isValid());
}

TEST(SpeedSquaredTests, aboveMinIsValid)
{
  ::ad::physics::SpeedSquared value(-1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedSquaredTests, belowMinIsInvalid)
{
  ::ad::physics::SpeedSquared value(-1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, maxIsValid)
{
  EXPECT_TRUE(::ad::physics::SpeedSquared::getMax().isValid());
}

TEST(SpeedSquaredTests, AboveMaxIsInvalid)
{
  ::ad::physics::SpeedSquared value(1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, BelowMaxIsValid)
{
  ::ad::physics::SpeedSquared value(1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedSquaredTests, ensureValidThrowsOnInvalid)
{
  ::ad::physics::SpeedSquared value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(SpeedSquaredTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad::physics::SpeedSquared value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedSquaredTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad::physics::SpeedSquared value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedSquaredTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::SpeedSquared::getMin()),
            static_cast<double>(std::numeric_limits<::ad::physics::SpeedSquared>::lowest()));
}

TEST(SpeedSquaredTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::SpeedSquared::getMax()),
            static_cast<double>(std::numeric_limits<::ad::physics::SpeedSquared>::max()));
}

TEST(SpeedSquaredTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::SpeedSquared::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad::physics::SpeedSquared>::epsilon()));
}

TEST(SpeedSquaredTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad::physics::SpeedSquared(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad::physics::SpeedSquared(-1.))));
  EXPECT_EQ(::ad::physics::SpeedSquared::cPrecisionValue,
            static_cast<double>(std::fabs(::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cPrecisionValue))));
  EXPECT_EQ(std::fabs(::ad::physics::SpeedSquared::cMinValue),
            static_cast<double>(std::fabs(::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMinValue))));
  EXPECT_EQ(std::fabs(::ad::physics::SpeedSquared::cMinValue),
            static_cast<double>(std::fabs(::ad::physics::SpeedSquared(-::ad::physics::SpeedSquared::cMinValue))));
  EXPECT_EQ(std::fabs(::ad::physics::SpeedSquared::cMaxValue),
            static_cast<double>(std::fabs(::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMaxValue))));
  EXPECT_EQ(std::fabs(::ad::physics::SpeedSquared::cMaxValue),
            static_cast<double>(std::fabs(::ad::physics::SpeedSquared(-::ad::physics::SpeedSquared::cMaxValue))));
}

TEST(SpeedSquaredTests, constructionFromValidDouble)
{
  double const validValue = ::ad::physics::SpeedSquared::cMinValue;
  ::ad::physics::SpeedSquared value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(SpeedSquaredTests, copyConstructionFromValidValue)
{
  ::ad::physics::SpeedSquared const validValue(::ad::physics::SpeedSquared::cMinValue);
  ::ad::physics::SpeedSquared value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedSquaredTests, moveConstructionFromValidValue)
{
  ::ad::physics::SpeedSquared value(std::move(::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMinValue)));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad::physics::SpeedSquared::cMinValue, static_cast<double>(value));
}

TEST(SpeedSquaredTests, assignmentFromValidValue)
{
  ::ad::physics::SpeedSquared const validValue(::ad::physics::SpeedSquared::cMinValue);
  ::ad::physics::SpeedSquared value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedSquaredTests, moveAssignmentFromValidValue)
{
  ::ad::physics::SpeedSquared value;
  value = std::move(::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMinValue));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad::physics::SpeedSquared::cMinValue, static_cast<double>(value));
}

TEST(SpeedSquaredTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad::physics::SpeedSquared value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, copyConstructionFromInvalidValue)
{
  ::ad::physics::SpeedSquared const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad::physics::SpeedSquared value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, assignmentFromInvalidValue)
{
  ::ad::physics::SpeedSquared const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad::physics::SpeedSquared value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedSquaredTests, selfAssignment)
{
  ::ad::physics::SpeedSquared value(::ad::physics::SpeedSquared::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedSquaredTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad::physics::SpeedSquared const value(::ad::physics::SpeedSquared::cMinValue);
  ::ad::physics::SpeedSquared const invalidValue;

  EXPECT_THROW(invalidValue == value, std::out_of_range);
  EXPECT_THROW(value == invalidValue, std::out_of_range);

  EXPECT_THROW(invalidValue != value, std::out_of_range);
  EXPECT_THROW(value != invalidValue, std::out_of_range);

  EXPECT_THROW(invalidValue > value, std::out_of_range);
  EXPECT_THROW(value > invalidValue, std::out_of_range);

  EXPECT_THROW(invalidValue < value, std::out_of_range);
  EXPECT_THROW(value < invalidValue, std::out_of_range);

  EXPECT_THROW(invalidValue >= value, std::out_of_range);
  EXPECT_THROW(value >= invalidValue, std::out_of_range);

  EXPECT_THROW(invalidValue <= value, std::out_of_range);
  EXPECT_THROW(value <= invalidValue, std::out_of_range);
}

TEST(SpeedSquaredTests, arithmeticOperatorsThrowOnInvalid)
{
  ::ad::physics::SpeedSquared const minimalValue(::ad::physics::SpeedSquared::cMinValue);
  ::ad::physics::SpeedSquared const maximalValue(::ad::physics::SpeedSquared::cMaxValue);
  ::ad::physics::SpeedSquared const invalidValue;
  ::ad::physics::SpeedSquared calculationValue;

  //  operator+(::ad::physics::SpeedSquared)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad::physics::SpeedSquared)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad::physics::SpeedSquared)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad::physics::SpeedSquared)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue -= minimalValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= invalidValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= maximalValue, std::out_of_range);

  //  operator*(double)
  EXPECT_THROW(invalidValue * static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue * static_cast<double>(maximalValue), std::out_of_range);

  //  std::sqrt()
  EXPECT_THROW(std::sqrt(invalidValue), std::out_of_range);

  //  operator/(double)
  EXPECT_THROW(invalidValue / static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue / static_cast<double>(invalidValue), std::out_of_range);
  EXPECT_THROW(maximalValue / 0.0, std::out_of_range);
  EXPECT_THROW(maximalValue / 0.5, std::out_of_range);

  //  operator/(::ad::physics::SpeedSquared)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad::physics::SpeedSquared(0.0), std::out_of_range);

  //  operator-()
  EXPECT_THROW(-invalidValue, std::out_of_range);
  if (std::fabs(static_cast<double>(maximalValue)) > std::fabs(static_cast<double>(minimalValue)))
  {
    EXPECT_THROW(-maximalValue, std::out_of_range);
  }
  else if (std::fabs(static_cast<double>(maximalValue)) < std::fabs(static_cast<double>(minimalValue)))
  {
    EXPECT_THROW(-minimalValue, std::out_of_range);
  }
  else
  {
    // impossible to trigger invalid result while operand is valid
  }
}

TEST(SpeedSquaredTests, comparisonOperatorsRespectPrecision)
{
  double const precisionValueTimesTen = ::ad::physics::SpeedSquared::cPrecisionValue * 10.;
  ::ad::physics::SpeedSquared value;
  if (::ad::physics::SpeedSquared::cMinValue > precisionValueTimesTen)
  {
    value = ::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMinValue + precisionValueTimesTen);
  }
  else if (::ad::physics::SpeedSquared::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad::physics::SpeedSquared(precisionValueTimesTen);
  }
  ::ad::physics::SpeedSquared const sameValue = value;
  ::ad::physics::SpeedSquared const slightlyBiggerValue(static_cast<double>(value)
                                                        + ::ad::physics::SpeedSquared::cPrecisionValue * 0.9);
  ::ad::physics::SpeedSquared const slightlySmallerValue(static_cast<double>(value)
                                                         - ::ad::physics::SpeedSquared::cPrecisionValue * 0.9);
  ::ad::physics::SpeedSquared const actuallyBiggerValue(static_cast<double>(value)
                                                        + ::ad::physics::SpeedSquared::cPrecisionValue * 1.1);
  ::ad::physics::SpeedSquared const actuallySmallerValue(static_cast<double>(value)
                                                         - ::ad::physics::SpeedSquared::cPrecisionValue * 1.1);

  // operator ==
  EXPECT_TRUE(value == sameValue);
  EXPECT_TRUE(value == slightlyBiggerValue);
  EXPECT_TRUE(value == slightlySmallerValue);
  EXPECT_FALSE(value == actuallyBiggerValue);
  EXPECT_FALSE(value == actuallySmallerValue);

  // operator !=
  EXPECT_FALSE(value != sameValue);
  EXPECT_FALSE(value != slightlyBiggerValue);
  EXPECT_FALSE(value != slightlySmallerValue);
  EXPECT_TRUE(value != actuallyBiggerValue);
  EXPECT_TRUE(value != actuallySmallerValue);

  // operator >
  EXPECT_FALSE(value > value);
  EXPECT_FALSE(slightlyBiggerValue > value);
  EXPECT_TRUE(actuallyBiggerValue > value);

  // operator >=
  EXPECT_FALSE(actuallySmallerValue >= value);
  EXPECT_TRUE(slightlySmallerValue >= value);
  EXPECT_TRUE(value >= value);
  EXPECT_TRUE(slightlyBiggerValue >= value);
  EXPECT_TRUE(actuallyBiggerValue >= value);

  // operator <
  EXPECT_FALSE(value < value);
  EXPECT_FALSE(slightlySmallerValue < value);
  EXPECT_TRUE(actuallySmallerValue < value);

  // operator <=
  EXPECT_FALSE(actuallyBiggerValue <= value);
  EXPECT_TRUE(slightlyBiggerValue <= value);
  EXPECT_TRUE(value <= value);
  EXPECT_TRUE(slightlySmallerValue <= value);
  EXPECT_TRUE(actuallySmallerValue <= value);
}

TEST(SpeedSquaredTests, arithmeticOperatorsComputeCorrectly)
{
  double const cDoubleNear = ::ad::physics::SpeedSquared::cPrecisionValue;
  double const precisionValueTimesTen = ::ad::physics::SpeedSquared::cPrecisionValue * 10.;
  ::ad::physics::SpeedSquared value;
  if (::ad::physics::SpeedSquared::cMinValue > precisionValueTimesTen)
  {
    value = ::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMinValue + precisionValueTimesTen);
  }
  else if (::ad::physics::SpeedSquared::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad::physics::SpeedSquared(::ad::physics::SpeedSquared::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad::physics::SpeedSquared(precisionValueTimesTen);
  }

  ::ad::physics::SpeedSquared result;

  //  operator+(::ad::physics::SpeedSquared)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad::physics::SpeedSquared)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad::physics::SpeedSquared)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad::physics::SpeedSquared)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  std::sqrt()
  ::ad::physics::Speed const squareRootResult = std::sqrt(value);
  EXPECT_NEAR(std::sqrt(static_cast<double>(value)), static_cast<double>(squareRootResult), cDoubleNear);

  //  operator*(double, ::ad::physics::SpeedSquared)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad::physics::SpeedSquared)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad::physics::SpeedSquared::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad::physics::SpeedSquared::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
