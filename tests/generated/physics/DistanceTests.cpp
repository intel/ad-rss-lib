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
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/physics/DistanceSquared.hpp"

TEST(DistanceTests, defaultConstructionIsInvalid)
{
  ::ad_rss::physics::Distance value;
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e6, ::ad_rss::physics::Distance::cMinValue);
  EXPECT_EQ(::ad_rss::physics::Distance::cMinValue, static_cast<double>(::ad_rss::physics::Distance::getMin()));
}

TEST(DistanceTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e6, ::ad_rss::physics::Distance::cMaxValue);
  EXPECT_EQ(::ad_rss::physics::Distance::cMaxValue, static_cast<double>(::ad_rss::physics::Distance::getMax()));
}

TEST(DistanceTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad_rss::physics::Distance::cPrecisionValue);
  EXPECT_EQ(1e-3, ::ad_rss::physics::Distance::cPrecisionValue);
  EXPECT_EQ(::ad_rss::physics::Distance::cPrecisionValue,
            static_cast<double>(::ad_rss::physics::Distance::getPrecision()));
}

TEST(DistanceTests, minIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Distance::getMin().isValid());
}

TEST(DistanceTests, aboveMinIsValid)
{
  ::ad_rss::physics::Distance value(-1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DistanceTests, belowMinIsInvalid)
{
  ::ad_rss::physics::Distance value(-1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, maxIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Distance::getMax().isValid());
}

TEST(DistanceTests, AboveMaxIsInvalid)
{
  ::ad_rss::physics::Distance value(1e6 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, BelowMaxIsValid)
{
  ::ad_rss::physics::Distance value(1e6 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(DistanceTests, ensureValidThrowsOnInvalid)
{
  ::ad_rss::physics::Distance value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(DistanceTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad_rss::physics::Distance value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DistanceTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad_rss::physics::Distance value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(DistanceTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Distance::getMin()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Distance>::lowest()));
}

TEST(DistanceTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Distance::getMax()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Distance>::max()));
}

TEST(DistanceTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Distance::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Distance>::epsilon()));
}

TEST(DistanceTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad_rss::physics::Distance(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad_rss::physics::Distance(-1.))));
  EXPECT_EQ(::ad_rss::physics::Distance::cPrecisionValue,
            static_cast<double>(std::fabs(::ad_rss::physics::Distance(::ad_rss::physics::Distance::cPrecisionValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Distance::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Distance::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Distance(-::ad_rss::physics::Distance::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Distance::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMaxValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Distance::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Distance(-::ad_rss::physics::Distance::cMaxValue))));
}

TEST(DistanceTests, constructionFromValidDouble)
{
  double const validValue = ::ad_rss::physics::Distance::cMinValue;
  ::ad_rss::physics::Distance value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(DistanceTests, copyConstructionFromValidValue)
{
  ::ad_rss::physics::Distance const validValue(::ad_rss::physics::Distance::cMinValue);
  ::ad_rss::physics::Distance value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DistanceTests, assignmentFromValidValue)
{
  ::ad_rss::physics::Distance const validValue(::ad_rss::physics::Distance::cMinValue);
  ::ad_rss::physics::Distance value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(DistanceTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad_rss::physics::Distance value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, copyConstructionFromInvalidValue)
{
  ::ad_rss::physics::Distance const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Distance value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, assignmentFromInvalidValue)
{
  ::ad_rss::physics::Distance const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Distance value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(DistanceTests, selfAssignment)
{
  ::ad_rss::physics::Distance value(::ad_rss::physics::Distance::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(DistanceTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::Distance const value(::ad_rss::physics::Distance::cMinValue);
  ::ad_rss::physics::Distance const invalidValue;

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

TEST(DistanceTests, arithmeticOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::Distance const minimalValue(::ad_rss::physics::Distance::cMinValue);
  ::ad_rss::physics::Distance const maximalValue(::ad_rss::physics::Distance::cMaxValue);
  ::ad_rss::physics::Distance const invalidValue;
  ::ad_rss::physics::Distance calculationValue;

  //  operator+(::ad_rss::physics::Distance)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad_rss::physics::Distance)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad_rss::physics::Distance)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad_rss::physics::Distance)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue -= minimalValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= invalidValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= maximalValue, std::out_of_range);

  //  operator*(double)
  EXPECT_THROW(invalidValue * static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue * static_cast<double>(maximalValue), std::out_of_range);

  //  operator/(double)
  EXPECT_THROW(invalidValue / static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue / static_cast<double>(invalidValue), std::out_of_range);
  EXPECT_THROW(maximalValue / 0.0, std::out_of_range);
  EXPECT_THROW(maximalValue / 0.5, std::out_of_range);

  //  operator/(::ad_rss::physics::Distance)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad_rss::physics::Distance(0.0), std::out_of_range);

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

TEST(DistanceTests, comparisonOperatorsRespectPrecision)
{
  double const precisionValueTimesTen = ::ad_rss::physics::Distance::cPrecisionValue * 10.;
  ::ad_rss::physics::Distance value;
  if (::ad_rss::physics::Distance::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Distance::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Distance(precisionValueTimesTen);
  }
  ::ad_rss::physics::Distance const sameValue = value;
  ::ad_rss::physics::Distance const slightlyBiggerValue(static_cast<double>(value)
                                                        + ::ad_rss::physics::Distance::cPrecisionValue * 0.9);
  ::ad_rss::physics::Distance const slightlySmallerValue(static_cast<double>(value)
                                                         - ::ad_rss::physics::Distance::cPrecisionValue * 0.9);
  ::ad_rss::physics::Distance const actuallyBiggerValue(static_cast<double>(value)
                                                        + ::ad_rss::physics::Distance::cPrecisionValue * 1.1);
  ::ad_rss::physics::Distance const actuallySmallerValue(static_cast<double>(value)
                                                         - ::ad_rss::physics::Distance::cPrecisionValue * 1.1);

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
  EXPECT_TRUE(value >= value);
  EXPECT_TRUE(slightlyBiggerValue >= value);
  EXPECT_TRUE(actuallyBiggerValue >= value);

  // operator <
  EXPECT_FALSE(value < value);
  EXPECT_FALSE(slightlySmallerValue < value);
  EXPECT_TRUE(actuallySmallerValue < value);

  // operator <=
  EXPECT_TRUE(value <= value);
  EXPECT_TRUE(slightlySmallerValue <= value);
  EXPECT_TRUE(actuallySmallerValue <= value);
}

TEST(DistanceTests, arithmeticOperatorsComputeCorrectly)
{
  double const cDoubleNear = ::ad_rss::physics::Distance::cPrecisionValue;
  double const precisionValueTimesTen = ::ad_rss::physics::Distance::cPrecisionValue * 10.;
  ::ad_rss::physics::Distance value;
  if (::ad_rss::physics::Distance::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Distance::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Distance(::ad_rss::physics::Distance::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Distance(precisionValueTimesTen);
  }

  ::ad_rss::physics::Distance result;

  //  operator+(::ad_rss::physics::Distance)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad_rss::physics::Distance)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad_rss::physics::Distance)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad_rss::physics::Distance)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator*(::ad_rss::physics::Distance)
  ::ad_rss::physics::DistanceSquared const squaredResult = value * value;
  EXPECT_NEAR(static_cast<double>(value) * static_cast<double>(value), static_cast<double>(squaredResult), cDoubleNear);

  //  operator*(double, ::ad_rss::physics::Distance)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad_rss::physics::Distance)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad_rss::physics::Distance::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad_rss::physics::Distance::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
