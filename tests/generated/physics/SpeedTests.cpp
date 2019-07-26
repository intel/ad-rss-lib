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

TEST(SpeedTests, defaultConstructionIsInvalid)
{
  ::ad::physics::Speed value;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e3, ::ad::physics::Speed::cMinValue);
  EXPECT_EQ(::ad::physics::Speed::cMinValue, static_cast<double>(::ad::physics::Speed::getMin()));
}

TEST(SpeedTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e3, ::ad::physics::Speed::cMaxValue);
  EXPECT_EQ(::ad::physics::Speed::cMaxValue, static_cast<double>(::ad::physics::Speed::getMax()));
}

TEST(SpeedTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad::physics::Speed::cPrecisionValue);
  EXPECT_EQ(1e-3, ::ad::physics::Speed::cPrecisionValue);
  EXPECT_EQ(::ad::physics::Speed::cPrecisionValue, static_cast<double>(::ad::physics::Speed::getPrecision()));
}

TEST(SpeedTests, minIsValid)
{
  EXPECT_TRUE(::ad::physics::Speed::getMin().isValid());
}

TEST(SpeedTests, aboveMinIsValid)
{
  ::ad::physics::Speed value(-1e3 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, belowMinIsInvalid)
{
  ::ad::physics::Speed value(-1e3 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, maxIsValid)
{
  EXPECT_TRUE(::ad::physics::Speed::getMax().isValid());
}

TEST(SpeedTests, AboveMaxIsInvalid)
{
  ::ad::physics::Speed value(1e3 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, BelowMaxIsValid)
{
  ::ad::physics::Speed value(1e3 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, ensureValidThrowsOnInvalid)
{
  ::ad::physics::Speed value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(SpeedTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad::physics::Speed value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad::physics::Speed value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::Speed::getMin()),
            static_cast<double>(std::numeric_limits<::ad::physics::Speed>::lowest()));
}

TEST(SpeedTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::Speed::getMax()),
            static_cast<double>(std::numeric_limits<::ad::physics::Speed>::max()));
}

TEST(SpeedTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad::physics::Speed::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad::physics::Speed>::epsilon()));
}

TEST(SpeedTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad::physics::Speed(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad::physics::Speed(-1.))));
  EXPECT_EQ(::ad::physics::Speed::cPrecisionValue,
            static_cast<double>(std::fabs(::ad::physics::Speed(::ad::physics::Speed::cPrecisionValue))));
  EXPECT_EQ(std::fabs(::ad::physics::Speed::cMinValue),
            static_cast<double>(std::fabs(::ad::physics::Speed(::ad::physics::Speed::cMinValue))));
  EXPECT_EQ(std::fabs(::ad::physics::Speed::cMinValue),
            static_cast<double>(std::fabs(::ad::physics::Speed(-::ad::physics::Speed::cMinValue))));
  EXPECT_EQ(std::fabs(::ad::physics::Speed::cMaxValue),
            static_cast<double>(std::fabs(::ad::physics::Speed(::ad::physics::Speed::cMaxValue))));
  EXPECT_EQ(std::fabs(::ad::physics::Speed::cMaxValue),
            static_cast<double>(std::fabs(::ad::physics::Speed(-::ad::physics::Speed::cMaxValue))));
}

TEST(SpeedTests, constructionFromValidDouble)
{
  double const validValue = ::ad::physics::Speed::cMinValue;
  ::ad::physics::Speed value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(SpeedTests, copyConstructionFromValidValue)
{
  ::ad::physics::Speed const validValue(::ad::physics::Speed::cMinValue);
  ::ad::physics::Speed value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedTests, moveConstructionFromValidValue)
{
  ::ad::physics::Speed value(std::move(::ad::physics::Speed(::ad::physics::Speed::cMinValue)));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad::physics::Speed::cMinValue, static_cast<double>(value));
}

TEST(SpeedTests, assignmentFromValidValue)
{
  ::ad::physics::Speed const validValue(::ad::physics::Speed::cMinValue);
  ::ad::physics::Speed value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedTests, moveAssignmentFromValidValue)
{
  ::ad::physics::Speed value;
  value = std::move(::ad::physics::Speed(::ad::physics::Speed::cMinValue));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad::physics::Speed::cMinValue, static_cast<double>(value));
}

TEST(SpeedTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad::physics::Speed value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, copyConstructionFromInvalidValue)
{
  ::ad::physics::Speed const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad::physics::Speed value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, assignmentFromInvalidValue)
{
  ::ad::physics::Speed const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad::physics::Speed value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, selfAssignment)
{
  ::ad::physics::Speed value(::ad::physics::Speed::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad::physics::Speed const value(::ad::physics::Speed::cMinValue);
  ::ad::physics::Speed const invalidValue;

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

TEST(SpeedTests, arithmeticOperatorsThrowOnInvalid)
{
  ::ad::physics::Speed const minimalValue(::ad::physics::Speed::cMinValue);
  ::ad::physics::Speed const maximalValue(::ad::physics::Speed::cMaxValue);
  ::ad::physics::Speed const invalidValue;
  ::ad::physics::Speed calculationValue;

  //  operator+(::ad::physics::Speed)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad::physics::Speed)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad::physics::Speed)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad::physics::Speed)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue -= minimalValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= invalidValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= maximalValue, std::out_of_range);

  //  operator*(double)
  EXPECT_THROW(invalidValue * static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue * static_cast<double>(maximalValue), std::out_of_range);

  //  operator*(::ad::physics::Speed)
  EXPECT_THROW(invalidValue * maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue * invalidValue, std::out_of_range);

  //  operator/(double)
  EXPECT_THROW(invalidValue / static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue / static_cast<double>(invalidValue), std::out_of_range);
  EXPECT_THROW(maximalValue / 0.0, std::out_of_range);
  EXPECT_THROW(maximalValue / 0.5, std::out_of_range);

  //  operator/(::ad::physics::Speed)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad::physics::Speed(0.0), std::out_of_range);

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

TEST(SpeedTests, comparisonOperatorsRespectPrecision)
{
  double const precisionValueTimesTen = ::ad::physics::Speed::cPrecisionValue * 10.;
  ::ad::physics::Speed value;
  if (::ad::physics::Speed::cMinValue > precisionValueTimesTen)
  {
    value = ::ad::physics::Speed(::ad::physics::Speed::cMinValue + precisionValueTimesTen);
  }
  else if (::ad::physics::Speed::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad::physics::Speed(::ad::physics::Speed::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad::physics::Speed(precisionValueTimesTen);
  }
  ::ad::physics::Speed const sameValue = value;
  ::ad::physics::Speed const slightlyBiggerValue(static_cast<double>(value)
                                                 + ::ad::physics::Speed::cPrecisionValue * 0.9);
  ::ad::physics::Speed const slightlySmallerValue(static_cast<double>(value)
                                                  - ::ad::physics::Speed::cPrecisionValue * 0.9);
  ::ad::physics::Speed const actuallyBiggerValue(static_cast<double>(value)
                                                 + ::ad::physics::Speed::cPrecisionValue * 1.1);
  ::ad::physics::Speed const actuallySmallerValue(static_cast<double>(value)
                                                  - ::ad::physics::Speed::cPrecisionValue * 1.1);

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

TEST(SpeedTests, arithmeticOperatorsComputeCorrectly)
{
  double const cDoubleNear = ::ad::physics::Speed::cPrecisionValue;
  double const precisionValueTimesTen = ::ad::physics::Speed::cPrecisionValue * 10.;
  ::ad::physics::Speed value;
  if (::ad::physics::Speed::cMinValue > precisionValueTimesTen)
  {
    value = ::ad::physics::Speed(::ad::physics::Speed::cMinValue + precisionValueTimesTen);
  }
  else if (::ad::physics::Speed::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad::physics::Speed(::ad::physics::Speed::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad::physics::Speed(precisionValueTimesTen);
  }

  ::ad::physics::Speed result;

  //  operator+(::ad::physics::Speed)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad::physics::Speed)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad::physics::Speed)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad::physics::Speed)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator*(::ad::physics::Speed)
  ::ad::physics::SpeedSquared const squaredResult = value * value;
  EXPECT_NEAR(static_cast<double>(value) * static_cast<double>(value), static_cast<double>(squaredResult), cDoubleNear);

  //  operator*(double, ::ad::physics::Speed)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad::physics::Speed)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad::physics::Speed::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad::physics::Speed::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
