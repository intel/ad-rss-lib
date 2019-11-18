/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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
#include "ad_rss/physics/Speed.hpp"
#include "ad_rss/physics/SpeedSquared.hpp"

TEST(SpeedTests, defaultConstructionIsInvalid)
{
  ::ad_rss::physics::Speed value;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, minIsDefinedAsExpected)
{
  EXPECT_EQ(-1e3, ::ad_rss::physics::Speed::cMinValue);
  EXPECT_EQ(::ad_rss::physics::Speed::cMinValue, static_cast<double>(::ad_rss::physics::Speed::getMin()));
}

TEST(SpeedTests, maxIsDefinedAsExpected)
{
  EXPECT_EQ(1e3, ::ad_rss::physics::Speed::cMaxValue);
  EXPECT_EQ(::ad_rss::physics::Speed::cMaxValue, static_cast<double>(::ad_rss::physics::Speed::getMax()));
}

TEST(SpeedTests, precisionIsDefinedAsExpected)
{
  EXPECT_LT(0., ::ad_rss::physics::Speed::cPrecisionValue);
  EXPECT_EQ(1e-3, ::ad_rss::physics::Speed::cPrecisionValue);
  EXPECT_EQ(::ad_rss::physics::Speed::cPrecisionValue, static_cast<double>(::ad_rss::physics::Speed::getPrecision()));
}

TEST(SpeedTests, minIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Speed::getMin().isValid());
}

TEST(SpeedTests, aboveMinIsValid)
{
  ::ad_rss::physics::Speed value(-1e3 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, belowMinIsInvalid)
{
  ::ad_rss::physics::Speed value(-1e3 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, maxIsValid)
{
  EXPECT_TRUE(::ad_rss::physics::Speed::getMax().isValid());
}

TEST(SpeedTests, AboveMaxIsInvalid)
{
  ::ad_rss::physics::Speed value(1e3 * 1.1);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, BelowMaxIsValid)
{
  ::ad_rss::physics::Speed value(1e3 * 0.9);
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, ensureValidThrowsOnInvalid)
{
  ::ad_rss::physics::Speed value;
  EXPECT_THROW(value.ensureValid(), std::out_of_range);
}

TEST(SpeedTests, ensureValidNonZeroThrowsOnInvalid)
{
  ::ad_rss::physics::Speed value;
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedTests, ensureValidNonZeroThrowsOnZero)
{
  ::ad_rss::physics::Speed value(0.);
  EXPECT_THROW(value.ensureValidNonZero(), std::out_of_range);
}

TEST(SpeedTestsStd, numericLimitsLowestIsMin)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Speed::getMin()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Speed>::lowest()));
}

TEST(SpeedTestsStd, numericLimitsMaxIsMax)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Speed::getMax()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Speed>::max()));
}

TEST(SpeedTestsStd, numericLimitsEpsilonIsPrecision)
{
  EXPECT_EQ(static_cast<double>(::ad_rss::physics::Speed::getPrecision()),
            static_cast<double>(std::numeric_limits<::ad_rss::physics::Speed>::epsilon()));
}

TEST(SpeedTestsStd, fabsIsWorkingCorrectly)
{
  EXPECT_EQ(0., static_cast<double>(std::fabs(::ad_rss::physics::Speed(-0.))));
  EXPECT_EQ(1., static_cast<double>(std::fabs(::ad_rss::physics::Speed(-1.))));
  EXPECT_EQ(::ad_rss::physics::Speed::cPrecisionValue,
            static_cast<double>(std::fabs(::ad_rss::physics::Speed(::ad_rss::physics::Speed::cPrecisionValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Speed::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Speed::cMinValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Speed(-::ad_rss::physics::Speed::cMinValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Speed::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMaxValue))));
  EXPECT_EQ(std::fabs(::ad_rss::physics::Speed::cMaxValue),
            static_cast<double>(std::fabs(::ad_rss::physics::Speed(-::ad_rss::physics::Speed::cMaxValue))));
}

TEST(SpeedTests, constructionFromValidDouble)
{
  double const validValue = ::ad_rss::physics::Speed::cMinValue;
  ::ad_rss::physics::Speed value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(validValue, static_cast<double>(value));
}

TEST(SpeedTests, copyConstructionFromValidValue)
{
  ::ad_rss::physics::Speed const validValue(::ad_rss::physics::Speed::cMinValue);
  ::ad_rss::physics::Speed value(validValue);
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedTests, moveConstructionFromValidValue)
{
  ::ad_rss::physics::Speed value(std::move(::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMinValue)));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::Speed::cMinValue, static_cast<double>(value));
}

TEST(SpeedTests, assignmentFromValidValue)
{
  ::ad_rss::physics::Speed const validValue(::ad_rss::physics::Speed::cMinValue);
  ::ad_rss::physics::Speed value;
  value = validValue;
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(static_cast<double>(validValue), static_cast<double>(value));
}

TEST(SpeedTests, moveAssignmentFromValidValue)
{
  ::ad_rss::physics::Speed value;
  value = std::move(::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMinValue));
  EXPECT_TRUE(value.isValid());
  EXPECT_EQ(::ad_rss::physics::Speed::cMinValue, static_cast<double>(value));
}

TEST(SpeedTests, constructionFromInvalidDouble)
{
  double const invalidValue = std::numeric_limits<double>::quiet_NaN();
  ::ad_rss::physics::Speed value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, copyConstructionFromInvalidValue)
{
  ::ad_rss::physics::Speed const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Speed value(invalidValue);
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, assignmentFromInvalidValue)
{
  ::ad_rss::physics::Speed const invalidValue(std::numeric_limits<double>::quiet_NaN());
  ::ad_rss::physics::Speed value;
  value = invalidValue;
  EXPECT_FALSE(value.isValid());
}

TEST(SpeedTests, selfAssignment)
{
  ::ad_rss::physics::Speed value(::ad_rss::physics::Speed::cMinValue);
  EXPECT_TRUE(value.isValid());
  value = value;
  EXPECT_TRUE(value.isValid());
}

TEST(SpeedTests, comparisonOperatorsThrowOnInvalid)
{
  ::ad_rss::physics::Speed const value(::ad_rss::physics::Speed::cMinValue);
  ::ad_rss::physics::Speed const invalidValue;

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
  ::ad_rss::physics::Speed const minimalValue(::ad_rss::physics::Speed::cMinValue);
  ::ad_rss::physics::Speed const maximalValue(::ad_rss::physics::Speed::cMaxValue);
  ::ad_rss::physics::Speed const invalidValue;
  ::ad_rss::physics::Speed calculationValue;

  //  operator+(::ad_rss::physics::Speed)
  EXPECT_THROW(invalidValue + maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue + invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue + maximalValue, std::out_of_range);

  //  operator+=(::ad_rss::physics::Speed)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += invalidValue, std::out_of_range);
  calculationValue = maximalValue;
  EXPECT_THROW(calculationValue += maximalValue, std::out_of_range);

  //  operator-(::ad_rss::physics::Speed)
  EXPECT_THROW(invalidValue - minimalValue, std::out_of_range);
  EXPECT_THROW(minimalValue - invalidValue, std::out_of_range);
  EXPECT_THROW(minimalValue - maximalValue, std::out_of_range);

  //  operator-=(::ad_rss::physics::Speed)
  calculationValue = invalidValue;
  EXPECT_THROW(calculationValue -= minimalValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= invalidValue, std::out_of_range);
  calculationValue = minimalValue;
  EXPECT_THROW(calculationValue -= maximalValue, std::out_of_range);

  //  operator*(double)
  EXPECT_THROW(invalidValue * static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue * static_cast<double>(maximalValue), std::out_of_range);

  //  operator*(::ad_rss::physics::Speed)
  EXPECT_THROW(invalidValue * maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue * invalidValue, std::out_of_range);

  //  operator/(double)
  EXPECT_THROW(invalidValue / static_cast<double>(maximalValue), std::out_of_range);
  EXPECT_THROW(maximalValue / static_cast<double>(invalidValue), std::out_of_range);
  EXPECT_THROW(maximalValue / 0.0, std::out_of_range);
  EXPECT_THROW(maximalValue / 0.5, std::out_of_range);

  //  operator/(::ad_rss::physics::Speed)
  EXPECT_THROW(invalidValue / maximalValue, std::out_of_range);
  EXPECT_THROW(maximalValue / invalidValue, std::out_of_range);
  EXPECT_THROW(maximalValue / ::ad_rss::physics::Speed(0.0), std::out_of_range);

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
  double const precisionValueTimesTen = ::ad_rss::physics::Speed::cPrecisionValue * 10.;
  ::ad_rss::physics::Speed value;
  if (::ad_rss::physics::Speed::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Speed::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Speed(precisionValueTimesTen);
  }
  ::ad_rss::physics::Speed const sameValue = value;
  ::ad_rss::physics::Speed const slightlyBiggerValue(static_cast<double>(value)
                                                     + ::ad_rss::physics::Speed::cPrecisionValue * 0.9);
  ::ad_rss::physics::Speed const slightlySmallerValue(static_cast<double>(value)
                                                      - ::ad_rss::physics::Speed::cPrecisionValue * 0.9);
  ::ad_rss::physics::Speed const actuallyBiggerValue(static_cast<double>(value)
                                                     + ::ad_rss::physics::Speed::cPrecisionValue * 1.1);
  ::ad_rss::physics::Speed const actuallySmallerValue(static_cast<double>(value)
                                                      - ::ad_rss::physics::Speed::cPrecisionValue * 1.1);

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
  double const cDoubleNear = ::ad_rss::physics::Speed::cPrecisionValue;
  double const precisionValueTimesTen = ::ad_rss::physics::Speed::cPrecisionValue * 10.;
  ::ad_rss::physics::Speed value;
  if (::ad_rss::physics::Speed::cMinValue > precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMinValue + precisionValueTimesTen);
  }
  else if (::ad_rss::physics::Speed::cMaxValue < precisionValueTimesTen)
  {
    value = ::ad_rss::physics::Speed(::ad_rss::physics::Speed::cMaxValue - precisionValueTimesTen);
  }
  else
  {
    value = ::ad_rss::physics::Speed(precisionValueTimesTen);
  }

  ::ad_rss::physics::Speed result;

  //  operator+(::ad_rss::physics::Speed)
  result = value + value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator+=(::ad_rss::physics::Speed)
  result = value;
  result += value;
  EXPECT_NEAR(static_cast<double>(value) + static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-(::ad_rss::physics::Speed)
  result = value - value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator-=(::ad_rss::physics::Speed)
  result = value;
  result -= value;
  EXPECT_NEAR(static_cast<double>(value) - static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator*(double)
  result = value * 5.;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator*(::ad_rss::physics::Speed)
  ::ad_rss::physics::SpeedSquared const squaredResult = value * value;
  EXPECT_NEAR(static_cast<double>(value) * static_cast<double>(value), static_cast<double>(squaredResult), cDoubleNear);

  //  operator*(double, ::ad_rss::physics::Speed)
  result = 5. * value;
  EXPECT_NEAR(static_cast<double>(value) * 5., static_cast<double>(result), cDoubleNear);

  //  operator/(double)
  result = value / static_cast<double>(value);
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), static_cast<double>(result), cDoubleNear);

  //  operator/(::ad_rss::physics::Speed)
  double const doubleResult = value / value;
  EXPECT_NEAR(static_cast<double>(value) / static_cast<double>(value), doubleResult, cDoubleNear);

  //  operator-()
  if ((::ad_rss::physics::Speed::cMinValue < -static_cast<double>(value))
      && (-static_cast<double>(value) < ::ad_rss::physics::Speed::cMaxValue))
  {
    result = -value;
  }
  else
  {
    // not clear on how to trigger valid result if such small value is not working
  }
}
