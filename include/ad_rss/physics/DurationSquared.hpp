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

/**
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include <stdexcept>
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief Forward declaration of Duration
 *
 * Since DurationSquared is defined explicitly as a physical type we have to consider this
 * within operations. Therefore this square-rooted type is defined.
 */
class Duration;

/*!
 * \brief DataType DurationSquared
 *
 * DurationSquared represents a squared Duration
 * Unit: second^2
 * The unit is: SecondSquared
 */
class DurationSquared
{
public:
  /*!
   * \brief constant defining the minimum valid DurationSquared value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid DurationSquared value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed DurationSquared value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of DurationSquared is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  DurationSquared()
    : mDurationSquared(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit DurationSquared(double const iDurationSquared)
    : mDurationSquared(iDurationSquared)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  DurationSquared(const DurationSquared &other)
    : mDurationSquared(other.mDurationSquared)
  {
  }

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Reference to this DurationSquared.
   */
  DurationSquared &operator=(const DurationSquared &other)
  {
    if (&other != this)
    {
      mDurationSquared = other.mDurationSquared;
    }
    return *this;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns \c true if both DurationSquared are valid and can be taken as numerically equal
   */
  bool operator==(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mDurationSquared - other.mDurationSquared) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared.
   *
   * \returns \c true if one of the DurationSquared is not valid or they can be taken as numerically different
   */
  bool operator!=(const DurationSquared &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared.
   *
   * \returns \c true if both DurationSquared are valid and
   *   this DurationSquared is strictly numerically greater than other.
   * \note the precision of DurationSquared is considered
   */
  bool operator>(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDurationSquared > other.mDurationSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared.
   *
   * \returns \c true if both DurationSquared are valid and
   *   this DurationSquared is strictly numerically smaller than other.
   * \note the precision of DurationSquared is considered
   */
  bool operator<(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDurationSquared < other.mDurationSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared.
   *
   * \returns \c true if both DurationSquared are valid and
   *   this DurationSquared is numerically greater than other.
   * \note the precision of DurationSquared is considered
   */
  bool operator>=(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDurationSquared > other.mDurationSquared) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns \c true if both DurationSquared are valid and
   *   this DurationSquared is numerically smaller than other.
   * \note the precision of DurationSquared is considered
   */
  bool operator<=(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDurationSquared < other.mDurationSquared) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DurationSquared operator+(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    DurationSquared const result(mDurationSquared + other.mDurationSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DurationSquared &operator+=(const DurationSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mDurationSquared += other.mDurationSquared;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DurationSquared operator-(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    DurationSquared const result(mDurationSquared - other.mDurationSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DurationSquared operator-=(const DurationSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mDurationSquared -= other.mDurationSquared;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] scalar Scalar double value
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if \c value or the result of
   *   the operation is not valid
   */
  DurationSquared operator*(const double &scalar) const
  {
    ensureValid();
    DurationSquared const result(mDurationSquared * scalar);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] scalar Scalar double value
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if this or the result of
   *   the operation is not valid or other is zero
   */
  DurationSquared operator/(const double &scalar) const
  {
    DurationSquared const scalarDurationSquared(scalar);
    DurationSquared const result(operator/(scalarDurationSquared));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DurationSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since DurationSquared is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const DurationSquared &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mDurationSquared / other.mDurationSquared;
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if this or the result of
   *   the operation is not valid
   */
  DurationSquared operator-() const
  {
    ensureValid();
    DurationSquared const result(-mDurationSquared);
    result.ensureValid();
    return result;
  }

  /*!
   * \brief conversion to base type: double
   *
   * \note conversion to the base type removes the physical unit;
   * therefore only explicit calls are allowed
   */
  explicit operator double() const
  {
    return mDurationSquared;
  }

  /*!
   * \returns \c true if the DurationSquared in a valid range
   *
   * An DurationSquared value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinDurationSquaredValue <= value <= cMaxDurationSquaredValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mDurationSquared);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mDurationSquared)
      && (mDurationSquared <= cMaxValue);
  }

  /*!
   * \brief ensure that the DurationSquared is valid
   *
   * Throws an std::out_of_range() exception if the DurationSquared
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("DurationSquared value out of range");
    }
  }

  /*!
   * \brief ensure that the DurationSquared is valid and non zero
   *
   * Throws an std::out_of_range() exception if the DurationSquared
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(DurationSquared(0.)))
    {
      throw std::out_of_range("DurationSquared value is zero");
    }
  }

  /*!
   * \brief get minimum valid DurationSquared
   */
  static DurationSquared getMin()
  {
    return DurationSquared(cMinValue);
  }

  /*!
   * \brief get maximum valid DurationSquared
   */
  static DurationSquared getMax()
  {
    return DurationSquared(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of DurationSquared
   *   used in comparison operator==(), operator!=().
   */
  static DurationSquared getPrecision()
  {
    return DurationSquared(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mDurationSquared;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other DurationSquared as double value
 * \param[in] value DurationSquared value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::DurationSquared operator*(const double &other,
                                                    ::ad_rss::physics::DurationSquared const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for DurationSquared
 */
inline ::ad_rss::physics::DurationSquared fabs(const ::ad_rss::physics::DurationSquared other)
{
  ::ad_rss::physics::DurationSquared const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for DurationSquared
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<DurationSquared>::lowest()  (\see DurationSquared::getMin())
 * std::numeric_limits<DurationSquared>::max()  (\see DurationSquared::getMax())
 * std::numeric_limits<DurationSquared>::epsilon()  (\see DurationSquared::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::DurationSquared> : public numeric_limits<double>
{
public:
  static inline ::ad_rss::physics::DurationSquared lowest()
  {
    return ::ad_rss::physics::DurationSquared::getMin();
  }
  static inline ::ad_rss::physics::DurationSquared max()
  {
    return ::ad_rss::physics::DurationSquared::getMax();
  }
  static inline ::ad_rss::physics::DurationSquared epsilon()
  {
    return ::ad_rss::physics::DurationSquared::getPrecision();
  }
};

/*!
 * \brief overload of the std::sqrt for DurationSquared
 *
 * The square root of a squared type is basic type: Duration.
 */
::ad_rss::physics::Duration sqrt(::ad_rss::physics::DurationSquared const other);

} // namespace std
