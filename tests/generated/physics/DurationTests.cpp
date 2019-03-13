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

TEST(DurationTests, defaultConstructionIsInvalid)
{
  ::ad_rss::physics::Duration value;
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e6, ::ad_rss::physics::Duration::cMinValue);
  EXPECT_EQ(::ad_rss::physics::Duration::cMinValue, static_cast<double>(::ad_rss::physics::Duration::getMin()));
}

TEST(DurationTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e6, ::ad_rss::physics::Duration::cMaxValue);
  EXPECT_EQ(::ad_rss::physics::Duration::cMaxValue, static_cast<double>(::ad_rss::physics::Duration::getMax()));
}

TEST(DurationTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad_rss::physics::Duration::cPrecisionValue);
  EXPECT_EQ(1e-3, ::ad_rss::physics::Duration::cPrecisionValue);
  EXPECT_EQ(::ad_rss::physics::Duration::cPrecisionValue,
            static_cast<double>(::ad_rss::physics::Duration::getPrecision()));
}

TEST(DurationTests, minIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Duration::getMin().isValid());
}

TEST(DurationTests, aboveMinIsValid)
{
  ::ad_rss::physics::Duration value(-1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DurationTests, belowMinIsInvalid)
{
  ::ad_rss::physics::Duration value(-1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, maxIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Duration::getMax().isValid());
}

TEST(DurationTests, AboveMaxIsInvalid)
{
  ::ad_rss::physics::Duration value(1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, BelowMaxIsValid)
{
  ::ad_rss::physics::Duration value(1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DurationTests, ensureValidThrowsOnInvalid)
{
  ::ad_rss::physics::Duration value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(DurationTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad_rss::physics::Duration value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DurationTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad_rss::physics::Duration value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DurationTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Duration::getMin()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Duration>::lowest()));
}

TEST(DurationTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Duration::getMax()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Duration>::max()));
}

TEST(DurationTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Duration::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Duration>::epsilon()));
}

TEST(DurationTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad_rss::physics::Duration(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad_rss::physics::Duration(-1.))));
  EXPECT_EQ(::ad_rss::physics::Duration::cPrecisionValue,
            static_cast<double>(std::fabs(::ad_rss::physics::Duration(::ad_rss::physics::Duration::cPrecisionValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Duration::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Duration::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Duration(-::ad_rss::physics::Duration::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Duration::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMaxValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Duration::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Duration(-::ad_rss::physics::Duration::cMaxValue))));
}

TEST(DurationTests, constructionFromValidDouble)
{
  double const validValue = ::ad_rss::physics::Duration::cMinValue;
  ::ad_rss::physics::Duration value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(DurationTests, copyConstructionFromValidValue)
{
  ::ad_rss::physics::Duration const validValue(::ad_rss::physics::Duration::cMinValue);
  ::ad_rss::physics::Duration value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DurationTests, moveConstructionFromValidValue)
{
  ::ad_rss::physics::Duration value(std::move(::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMinValue)));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::Duration::cMinValue, static_cast<double>(value));
}

TEST(DurationTests, assignmentFromValidValue)
{
  ::ad_rss::physics::Duration const validValue(::ad_rss::physics::Duration::cMinValue);
  ::ad_rss::physics::Duration value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DurationTests, moveAssignmentFromValidValue)
{
  ::ad_rss::physics::Duration value;
  value = std::move(::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMinValue));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::Duration::cMinValue, static_cast<double>(value));
}

TEST(DurationTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad_rss::physics::Duration value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, copyConstructionFromInvalidValue)
{
  ::ad_rss::physics::Duration const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Duration value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, assignmentFromInvalidValue)
{
  ::ad_rss::physics::Duration const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Duration value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(DurationTests, selfAssignment)
{
  ::ad_rss::physics::Duration value(::ad_rss::physics::Duration::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(DurationTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::Duration const value(::ad_rss::physics::Duration::cMinValue);
  ::ad_rss::physics::Duration const invalidValue;

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

TEST(DurationTests, arithmeticOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::Duration const minimalValue(::ad_rss::physics::Duration::cMinValue);
  ::ad_rss::physics::Duration const maximalValue(::ad_rss::physics::Duration::cMaxValue);
  ::ad_rss::physics::Duration const invalidValue;
  ::ad_rss::physics::Duration calculationValue;

  //  operator+(::ad_rss::physics::Duration)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad_rss::physics::Duration)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad_rss::physics::Duration)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad_rss::physics::Duration)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue -= minimalValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= invalidValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= maximalValue, std::out_of_range);

  //  operator*(double)
  EXPECT_THROW(invalidValue * static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue * static_cast<double>(maximalValue), std::out_of_range);

  //  operator*(::ad_rss::physics::Duration)
  EXPECT_THROW(invalidValue * maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue * invalidValue, std::out_of_range);

  //  operator/(double)
  EXPECT_THROW(invalidValue / static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue / static_cast<double>(invalidValue), std::out_of_range);
  EXPECT_THROW(maximalValue / 0.0, std::out_of_range);
  EXPECT_THROW(maximalValue / 0.5, std::out_of_range);

  //  operator/(::ad_rss::physics::Duration)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad_rss::physics::Duration(0.0), std::out_of_range);

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

TEST(DurationTests, comparisonOperatorsRespectPrecision)
{
  double const precisionValueTimesTen = ::ad_rss::physics::Duration::cPrecisionValue * 10.;
  ::ad_rss::physics::Duration value;
  if (::ad_rss::physics::Duration::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Duration::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Duration(precisionValueTimesTen);
  }
  ::ad_rss::physics::Duration const sameValue = value;
  ::ad_rss::physics::Duration const slightlyBiggerValue(static_cast<double>(value)
                                                        + ::ad_rss::physics::Duration::cPrecisionValue * 0.9);
  ::ad_rss::physics::Duration const slightlySmallerValue(static_cast<double>(value)
                                                         - ::ad_rss::physics::Duration::cPrecisionValue * 0.9);
  ::ad_rss::physics::Duration const actuallyBiggerValue(static_cast<double>(value)
                                                        + ::ad_rss::physics::Duration::cPrecisionValue * 1.1);
  ::ad_rss::physics::Duration const actuallySmallerValue(static_cast<double>(value)
                                                         - ::ad_rss::physics::Duration::cPrecisionValue * 1.1);

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

TEST(DurationTests, arithmeticOperatorsComputeCorrectly)
{
  double const cDoubleNear = ::ad_rss::physics::Duration::cPrecisionValue;
  double const precisionValueTimesTen = ::ad_rss::physics::Duration::cPrecisionValue * 10.;
  ::ad_rss::physics::Duration value;
  if (::ad_rss::physics::Duration::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Duration::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Duration(::ad_rss::physics::Duration::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Duration(precisionValueTimesTen);
  }

  ::ad_rss::physics::Duration result;

  //  operator+(::ad_rss::physics::Duration)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad_rss::physics::Duration)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad_rss::physics::Duration)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad_rss::physics::Duration)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator*(::ad_rss::physics::Duration)
  ::ad_rss::physics::DurationSquared const squaredResult = value * value;
  EXPECT_NEAR(static_cast<double>(value) * static_cast<double>(value), static_cast<double>(squaredResult), cDoubleNear);

  //  operator*(double, ::ad_rss::physics::Duration)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad_rss::physics::Duration)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad_rss::physics::Duration::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad_rss::physics::Duration::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
