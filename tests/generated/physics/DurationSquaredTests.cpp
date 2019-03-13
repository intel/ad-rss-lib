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
#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/physics/DurationSquared.hpp"

TEST(DurationSquaredTests, defaultConstructionIsInvalid)
{
  ::ad_rss::physics::DurationSquared value;
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e12, ::ad_rss::physics::DurationSquared::cMinValue);
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cMinValue,
            static_cast<double>(::ad_rss::physics::DurationSquared::getMin()));
}

TEST(DurationSquaredTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e12, ::ad_rss::physics::DurationSquared::cMaxValue);
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cMaxValue,
            static_cast<double>(::ad_rss::physics::DurationSquared::getMax()));
}

TEST(DurationSquaredTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad_rss::physics::DurationSquared::cPrecisionValue);
  EXPECT_EQ(1e-6, ::ad_rss::physics::DurationSquared::cPrecisionValue);
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cPrecisionValue,
            static_cast<double>(::ad_rss::physics::DurationSquared::getPrecision()));
}

TEST(DurationSquaredTests, minIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::DurationSquared::getMin().isValid());
}

TEST(DurationSquaredTests, aboveMinIsValid)
{
  ::ad_rss::physics::DurationSquared value(-1e12 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DurationSquaredTests, belowMinIsInvalid)
{
  ::ad_rss::physics::DurationSquared value(-1e12 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, maxIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::DurationSquared::getMax().isValid());
}

TEST(DurationSquaredTests, AboveMaxIsInvalid)
{
  ::ad_rss::physics::DurationSquared value(1e12 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, BelowMaxIsValid)
{
  ::ad_rss::physics::DurationSquared value(1e12 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DurationSquaredTests, ensureValidThrowsOnInvalid)
{
  ::ad_rss::physics::DurationSquared value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(DurationSquaredTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad_rss::physics::DurationSquared value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DurationSquaredTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad_rss::physics::DurationSquared value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DurationSquaredTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::DurationSquared::getMin()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::DurationSquared>::lowest()));
}

TEST(DurationSquaredTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::DurationSquared::getMax()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::DurationSquared>::max()));
}

TEST(DurationSquaredTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::DurationSquared::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::DurationSquared>::epsilon()));
}

TEST(DurationSquaredTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(-1.))));
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cPrecisionValue,
            static_cast<double>(
              std::fabs(::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cPrecisionValue))));
  EXPECT_EQ(
    std::fabs(::ad_rss::physics::DurationSquared::cMinValue),
    static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMinValue))));
  EXPECT_EQ(
    std::fabs(::ad_rss::physics::DurationSquared::cMinValue),
    static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(-::ad_rss::physics::DurationSquared::cMinValue))));
  EXPECT_EQ(
    std::fabs(::ad_rss::physics::DurationSquared::cMaxValue),
    static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMaxValue))));
  EXPECT_EQ(
    std::fabs(::ad_rss::physics::DurationSquared::cMaxValue),
    static_cast<double>(std::fabs(::ad_rss::physics::DurationSquared(-::ad_rss::physics::DurationSquared::cMaxValue))));
}

TEST(DurationSquaredTests, constructionFromValidDouble)
{
  double const validValue = ::ad_rss::physics::DurationSquared::cMinValue;
  ::ad_rss::physics::DurationSquared value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(DurationSquaredTests, copyConstructionFromValidValue)
{
  ::ad_rss::physics::DurationSquared const validValue(::ad_rss::physics::DurationSquared::cMinValue);
  ::ad_rss::physics::DurationSquared value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DurationSquaredTests, moveConstructionFromValidValue)
{
  ::ad_rss::physics::DurationSquared value(
    std::move(::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMinValue)));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cMinValue, static_cast<double>(value));
}

TEST(DurationSquaredTests, assignmentFromValidValue)
{
  ::ad_rss::physics::DurationSquared const validValue(::ad_rss::physics::DurationSquared::cMinValue);
  ::ad_rss::physics::DurationSquared value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DurationSquaredTests, moveAssignmentFromValidValue)
{
  ::ad_rss::physics::DurationSquared value;
  value = std::move(::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMinValue));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::DurationSquared::cMinValue, static_cast<double>(value));
}

TEST(DurationSquaredTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad_rss::physics::DurationSquared value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, copyConstructionFromInvalidValue)
{
  ::ad_rss::physics::DurationSquared const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::DurationSquared value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, assignmentFromInvalidValue)
{
  ::ad_rss::physics::DurationSquared const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::DurationSquared value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(DurationSquaredTests, selfAssignment)
{
  ::ad_rss::physics::DurationSquared value(::ad_rss::physics::DurationSquared::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(DurationSquaredTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::DurationSquared const value(::ad_rss::physics::DurationSquared::cMinValue);
  ::ad_rss::physics::DurationSquared const invalidValue;

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

TEST(DurationSquaredTests, arithmeticOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::DurationSquared const minimalValue(::ad_rss::physics::DurationSquared::cMinValue);
  ::ad_rss::physics::DurationSquared const maximalValue(::ad_rss::physics::DurationSquared::cMaxValue);
  ::ad_rss::physics::DurationSquared const invalidValue;
  ::ad_rss::physics::DurationSquared calculationValue;

  //  operator+(::ad_rss::physics::DurationSquared)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad_rss::physics::DurationSquared)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad_rss::physics::DurationSquared)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad_rss::physics::DurationSquared)
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

  //  operator/(::ad_rss::physics::DurationSquared)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad_rss::physics::DurationSquared(0.0), std::out_of_range);

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

TEST(DurationSquaredTests, comparisonOperatorsRespectPrecision)
{
  double const precisionValueTimesTen = ::ad_rss::physics::DurationSquared::cPrecisionValue * 10.;
  ::ad_rss::physics::DurationSquared value;
  if (::ad_rss::physics::DurationSquared::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::DurationSquared::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::DurationSquared(precisionValueTimesTen);
  }
  ::ad_rss::physics::DurationSquared const sameValue = value;
  ::ad_rss::physics::DurationSquared const slightlyBiggerValue(
    static_cast<double>(value) + ::ad_rss::physics::DurationSquared::cPrecisionValue * 0.9);
  ::ad_rss::physics::DurationSquared const slightlySmallerValue(
    static_cast<double>(value) - ::ad_rss::physics::DurationSquared::cPrecisionValue * 0.9);
  ::ad_rss::physics::DurationSquared const actuallyBiggerValue(
    static_cast<double>(value) + ::ad_rss::physics::DurationSquared::cPrecisionValue * 1.1);
  ::ad_rss::physics::DurationSquared const actuallySmallerValue(
    static_cast<double>(value) - ::ad_rss::physics::DurationSquared::cPrecisionValue * 1.1);

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

TEST(DurationSquaredTests, arithmeticOperatorsComputeCorrectly)
{
  double const cDoubleNear = ::ad_rss::physics::DurationSquared::cPrecisionValue;
  double const precisionValueTimesTen = ::ad_rss::physics::DurationSquared::cPrecisionValue * 10.;
  ::ad_rss::physics::DurationSquared value;
  if (::ad_rss::physics::DurationSquared::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::DurationSquared::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::DurationSquared(::ad_rss::physics::DurationSquared::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::DurationSquared(precisionValueTimesTen);
  }

  ::ad_rss::physics::DurationSquared result;

  //  operator+(::ad_rss::physics::DurationSquared)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad_rss::physics::DurationSquared)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad_rss::physics::DurationSquared)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad_rss::physics::DurationSquared)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  std::sqrt()
  ::ad_rss::physics::Duration const squareRootResult = std::sqrt(value);
  EXPECT_NEAR(std::sqrt(static_cast<double>(value)), static_cast<double>(squareRootResult), cDoubleNear);

  //  operator*(double, ::ad_rss::physics::DurationSquared)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad_rss::physics::DurationSquared)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad_rss::physics::DurationSquared::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad_rss::physics::DurationSquared::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
