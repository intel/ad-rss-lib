/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
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
 * \brief Forward declaration of Speed
 *
 * Since SpeedSquared is defined explicitly as a physical type we have to consider this
 * within operations. Therefore this square-rooted type is defined.
 */
class Speed;

/*!
 * \brief DataType SpeedSquared
 *
 * SpeedSquared represents a squared Speed.
 * The unit is: SquareMeterPerSecondSquared
 */
class SpeedSquared
{
public:
  /*!
   * \brief constant defining the minimum valid SpeedSquared value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid SpeedSquared value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed SpeedSquared value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of SpeedSquared is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  SpeedSquared()
    : mSpeedSquared(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit SpeedSquared(double const iSpeedSquared)
    : mSpeedSquared(iSpeedSquared)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  SpeedSquared(const SpeedSquared &other) = default;

  /*!
   * \brief standard move constructor
   */
  SpeedSquared(SpeedSquared &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Reference to this SpeedSquared.
   */
  SpeedSquared &operator=(const SpeedSquared &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Reference to this SpeedSquared.
   */
  SpeedSquared &operator=(SpeedSquared &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns \c true if both SpeedSquared are valid and can be taken as numerically equal
   */
  bool operator==(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mSpeedSquared - other.mSpeedSquared) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared.
   *
   * \returns \c true if one of the SpeedSquared is not valid or they can be taken as numerically different
   */
  bool operator!=(const SpeedSquared &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared.
   *
   * \returns \c true if both SpeedSquared are valid and
   *   this SpeedSquared is strictly numerically greater than other.
   * \note the precision of SpeedSquared is considered
   */
  bool operator>(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mSpeedSquared > other.mSpeedSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared.
   *
   * \returns \c true if both SpeedSquared are valid and
   *   this SpeedSquared is strictly numerically smaller than other.
   * \note the precision of SpeedSquared is considered
   */
  bool operator<(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mSpeedSquared < other.mSpeedSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared.
   *
   * \returns \c true if both SpeedSquared are valid and
   *   this SpeedSquared is numerically greater than other.
   * \note the precision of SpeedSquared is considered
   */
  bool operator>=(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mSpeedSquared > other.mSpeedSquared) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns \c true if both SpeedSquared are valid and
   *   this SpeedSquared is numerically smaller than other.
   * \note the precision of SpeedSquared is considered
   */
  bool operator<=(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mSpeedSquared < other.mSpeedSquared) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  SpeedSquared operator+(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    SpeedSquared const result(mSpeedSquared + other.mSpeedSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  SpeedSquared &operator+=(const SpeedSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mSpeedSquared += other.mSpeedSquared;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  SpeedSquared operator-(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    SpeedSquared const result(mSpeedSquared - other.mSpeedSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  SpeedSquared operator-=(const SpeedSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mSpeedSquared -= other.mSpeedSquared;
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
  SpeedSquared operator*(const double &scalar) const
  {
    ensureValid();
    SpeedSquared const result(mSpeedSquared * scalar);
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
  SpeedSquared operator/(const double &scalar) const
  {
    SpeedSquared const scalarSpeedSquared(scalar);
    SpeedSquared const result(operator/(scalarSpeedSquared));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other SpeedSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since SpeedSquared is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const SpeedSquared &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mSpeedSquared / other.mSpeedSquared;
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
  SpeedSquared operator-() const
  {
    ensureValid();
    SpeedSquared const result(-mSpeedSquared);
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
    return mSpeedSquared;
  }

  /*!
   * \returns \c true if the SpeedSquared in a valid range
   *
   * An SpeedSquared value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinSpeedSquaredValue <= value <= cMaxSpeedSquaredValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mSpeedSquared);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mSpeedSquared)
      && (mSpeedSquared <= cMaxValue);
  }

  /*!
   * \brief ensure that the SpeedSquared is valid
   *
   * Throws an std::out_of_range() exception if the SpeedSquared
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("SpeedSquared value out of range"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief ensure that the SpeedSquared is valid and non zero
   *
   * Throws an std::out_of_range() exception if the SpeedSquared
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(SpeedSquared(0.))) // LCOV_EXCL_BR_LINE
    {
      throw std::out_of_range("SpeedSquared value is zero"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief get minimum valid SpeedSquared
   */
  static SpeedSquared getMin()
  {
    return SpeedSquared(cMinValue);
  }

  /*!
   * \brief get maximum valid SpeedSquared
   */
  static SpeedSquared getMax()
  {
    return SpeedSquared(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of SpeedSquared
   *   used in comparison operator==(), operator!=().
   */
  static SpeedSquared getPrecision()
  {
    return SpeedSquared(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mSpeedSquared;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other SpeedSquared as double value
 * \param[in] value SpeedSquared value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::SpeedSquared operator*(const double &other, ::ad_rss::physics::SpeedSquared const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for SpeedSquared
 */
inline ::ad_rss::physics::SpeedSquared fabs(const ::ad_rss::physics::SpeedSquared other)
{
  ::ad_rss::physics::SpeedSquared const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for SpeedSquared
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<SpeedSquared>::lowest()  (\see SpeedSquared::getMin())
 * std::numeric_limits<SpeedSquared>::max()  (\see SpeedSquared::getMax())
 * std::numeric_limits<SpeedSquared>::epsilon()  (\see SpeedSquared::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::SpeedSquared> : public numeric_limits<double>
{
public:
  /*!
   * \see std::numeric_limits::lowest()
   */
  static inline ::ad_rss::physics::SpeedSquared lowest()
  {
    return ::ad_rss::physics::SpeedSquared::getMin();
  }
  /*!
   * \see std::numeric_limits::max()
   */
  static inline ::ad_rss::physics::SpeedSquared max()
  {
    return ::ad_rss::physics::SpeedSquared::getMax();
  }
  /*!
   * \see std::numeric_limits::epsilon()
   */
  static inline ::ad_rss::physics::SpeedSquared epsilon()
  {
    return ::ad_rss::physics::SpeedSquared::getPrecision();
  }
};

/*!
 * \brief overload of the std::sqrt for SpeedSquared
 *
 * The square root of a squared type is basic type: Speed.
 */
::ad_rss::physics::Speed sqrt(::ad_rss::physics::SpeedSquared const other);

} // namespace std
