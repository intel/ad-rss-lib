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
 * Generated file
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
 * \brief Forward declaration of SpeedSquared
 *
 * Since Speed is defined explicitly as a physical type we have to consider this
 * within operations. Therefore this squared type is defined.
 */
class SpeedSquared;

/*!
 * \brief DataType Speed
 *
 * The rate of change of an object's position with respect to time. The speed of an object is the magnitude of its
 * velocity.
 * The unit is: MeterPerSecond
 */
class Speed
{
public:
  /*!
   * \brief constant defining the minimum valid Speed value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid Speed value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed Speed value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of Speed is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  Speed()
    : mSpeed(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit Speed(double const iSpeed)
    : mSpeed(iSpeed)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  Speed(const Speed &other) = default;

  /*!
   * \brief standard move constructor
   */
  Speed(Speed &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Speed
   *
   * \returns Reference to this Speed.
   */
  Speed &operator=(const Speed &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Speed
   *
   * \returns Reference to this Speed.
   */
  Speed &operator=(Speed &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed
   *
   * \returns \c true if both Speed are valid and can be taken as numerically equal
   */
  bool operator==(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mSpeed - other.mSpeed) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed.
   *
   * \returns \c true if one of the Speed is not valid or they can be taken as numerically different
   */
  bool operator!=(const Speed &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed.
   *
   * \returns \c true if both Speed are valid and
   *   this Speed is strictly numerically greater than other.
   * \note the precision of Speed is considered
   */
  bool operator>(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mSpeed > other.mSpeed) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed.
   *
   * \returns \c true if both Speed are valid and
   *   this Speed is strictly numerically smaller than other.
   * \note the precision of Speed is considered
   */
  bool operator<(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mSpeed < other.mSpeed) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed.
   *
   * \returns \c true if both Speed are valid and
   *   this Speed is numerically greater than other.
   * \note the precision of Speed is considered
   */
  bool operator>=(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mSpeed > other.mSpeed) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Speed
   *
   * \returns \c true if both Speed are valid and
   *   this Speed is numerically smaller than other.
   * \note the precision of Speed is considered
   */
  bool operator<=(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mSpeed < other.mSpeed) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Speed operator+(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    Speed const result(mSpeed + other.mSpeed);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Speed &operator+=(const Speed &other)
  {
    ensureValid();
    other.ensureValid();
    mSpeed += other.mSpeed;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Speed operator-(const Speed &other) const
  {
    ensureValid();
    other.ensureValid();
    Speed const result(mSpeed - other.mSpeed);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Speed operator-=(const Speed &other)
  {
    ensureValid();
    other.ensureValid();
    mSpeed -= other.mSpeed;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   * \note since Speed is a type with physical unit, the multiplication results in the Squared type.
   */
  SpeedSquared operator*(const Speed &other) const;

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
  Speed operator*(const double &scalar) const
  {
    ensureValid();
    Speed const result(mSpeed * scalar);
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
  Speed operator/(const double &scalar) const
  {
    Speed const scalarSpeed(scalar);
    Speed const result(operator/(scalarSpeed));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Speed
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since Speed is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const Speed &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mSpeed / other.mSpeed;
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
  Speed operator-() const
  {
    ensureValid();
    Speed const result(-mSpeed);
    result.ensureValid(); // LCOV_EXCL_BR_LINE Some types do not throw an exception
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
    return mSpeed;
  }

  /*!
   * \returns \c true if the Speed in a valid range
   *
   * An Speed value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinSpeedValue <= value <= cMaxSpeedValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mSpeed);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mSpeed) && (mSpeed <= cMaxValue);
  }

  /*!
   * \brief ensure that the Speed is valid
   *
   * Throws an std::out_of_range() exception if the Speed
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("Speed value out of range"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief ensure that the Speed is valid and non zero
   *
   * Throws an std::out_of_range() exception if the Speed
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(Speed(0.))) // LCOV_EXCL_BR_LINE
    {
      throw std::out_of_range("Speed value is zero"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief get minimum valid Speed
   */
  static Speed getMin()
  {
    return Speed(cMinValue);
  }

  /*!
   * \brief get maximum valid Speed
   */
  static Speed getMax()
  {
    return Speed(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of Speed
   *   used in comparison operator==(), operator!=().
   */
  static Speed getPrecision()
  {
    return Speed(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mSpeed;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other Speed as double value
 * \param[in] value Speed value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::Speed operator*(const double &other, ::ad_rss::physics::Speed const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for Speed
 */
inline ::ad_rss::physics::Speed fabs(const ::ad_rss::physics::Speed other)
{
  ::ad_rss::physics::Speed const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for Speed
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<Speed>::lowest()  (\see Speed::getMin())
 * std::numeric_limits<Speed>::max()  (\see Speed::getMax())
 * std::numeric_limits<Speed>::epsilon()  (\see Speed::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::Speed> : public numeric_limits<double>
{
public:
  /*!
   * \see std::numeric_limits::lowest()
   */
  static inline ::ad_rss::physics::Speed lowest()
  {
    return ::ad_rss::physics::Speed::getMin();
  }
  /*!
   * \see std::numeric_limits::max()
   */
  static inline ::ad_rss::physics::Speed max()
  {
    return ::ad_rss::physics::Speed::getMax();
  }
  /*!
   * \see std::numeric_limits::epsilon()
   */
  static inline ::ad_rss::physics::Speed epsilon()
  {
    return ::ad_rss::physics::Speed::getPrecision();
  }
};

} // namespace std
