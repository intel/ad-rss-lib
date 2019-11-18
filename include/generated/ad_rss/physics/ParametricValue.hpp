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
 * \brief DataType ParametricValue
 *
 * A parametric value in the range of [0.0; 1.0] describing the relative progress.
 * The unit is:
 */
class ParametricValue
{
public:
  /*!
   * \brief constant defining the minimum valid ParametricValue value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid ParametricValue value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed ParametricValue value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of ParametricValue is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  ParametricValue()
    : mParametricValue(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit ParametricValue(double const iParametricValue)
    : mParametricValue(iParametricValue)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  ParametricValue(const ParametricValue &other) = default;

  /*!
   * \brief standard move constructor
   */
  ParametricValue(ParametricValue &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Reference to this ParametricValue.
   */
  ParametricValue &operator=(const ParametricValue &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Reference to this ParametricValue.
   */
  ParametricValue &operator=(ParametricValue &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns \c true if both ParametricValue are valid and can be taken as numerically equal
   */
  bool operator==(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mParametricValue - other.mParametricValue) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue.
   *
   * \returns \c true if one of the ParametricValue is not valid or they can be taken as numerically different
   */
  bool operator!=(const ParametricValue &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue.
   *
   * \returns \c true if both ParametricValue are valid and
   *   this ParametricValue is strictly numerically greater than other.
   * \note the precision of ParametricValue is considered
   */
  bool operator>(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mParametricValue > other.mParametricValue) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue.
   *
   * \returns \c true if both ParametricValue are valid and
   *   this ParametricValue is strictly numerically smaller than other.
   * \note the precision of ParametricValue is considered
   */
  bool operator<(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mParametricValue < other.mParametricValue) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue.
   *
   * \returns \c true if both ParametricValue are valid and
   *   this ParametricValue is numerically greater than other.
   * \note the precision of ParametricValue is considered
   */
  bool operator>=(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mParametricValue > other.mParametricValue) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns \c true if both ParametricValue are valid and
   *   this ParametricValue is numerically smaller than other.
   * \note the precision of ParametricValue is considered
   */
  bool operator<=(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mParametricValue < other.mParametricValue) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  ParametricValue operator+(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    ParametricValue const result(mParametricValue + other.mParametricValue);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  ParametricValue &operator+=(const ParametricValue &other)
  {
    ensureValid();
    other.ensureValid();
    mParametricValue += other.mParametricValue;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  ParametricValue operator-(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValid();
    ParametricValue const result(mParametricValue - other.mParametricValue);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  ParametricValue operator-=(const ParametricValue &other)
  {
    ensureValid();
    other.ensureValid();
    mParametricValue -= other.mParametricValue;
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
  ParametricValue operator*(const double &scalar) const
  {
    ensureValid();
    ParametricValue const result(mParametricValue * scalar);
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
  ParametricValue operator/(const double &scalar) const
  {
    ParametricValue const scalarParametricValue(scalar);
    ParametricValue const result(operator/(scalarParametricValue));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other ParametricValue
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since ParametricValue is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const ParametricValue &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mParametricValue / other.mParametricValue;
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
  ParametricValue operator-() const
  {
    ensureValid();
    ParametricValue const result(-mParametricValue);
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
    return mParametricValue;
  }

  /*!
   * \returns \c true if the ParametricValue in a valid range
   *
   * An ParametricValue value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinParametricValueValue <= value <= cMaxParametricValueValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mParametricValue);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mParametricValue)
      && (mParametricValue <= cMaxValue);
  }

  /*!
   * \brief ensure that the ParametricValue is valid
   *
   * Throws an std::out_of_range() exception if the ParametricValue
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("ParametricValue value out of range"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief ensure that the ParametricValue is valid and non zero
   *
   * Throws an std::out_of_range() exception if the ParametricValue
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(ParametricValue(0.))) // LCOV_EXCL_BR_LINE
    {
      throw std::out_of_range("ParametricValue value is zero"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief get minimum valid ParametricValue
   */
  static ParametricValue getMin()
  {
    return ParametricValue(cMinValue);
  }

  /*!
   * \brief get maximum valid ParametricValue
   */
  static ParametricValue getMax()
  {
    return ParametricValue(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of ParametricValue
   *   used in comparison operator==(), operator!=().
   */
  static ParametricValue getPrecision()
  {
    return ParametricValue(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mParametricValue;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other ParametricValue as double value
 * \param[in] value ParametricValue value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::ParametricValue operator*(const double &other,
                                                    ::ad_rss::physics::ParametricValue const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for ParametricValue
 */
inline ::ad_rss::physics::ParametricValue fabs(const ::ad_rss::physics::ParametricValue other)
{
  ::ad_rss::physics::ParametricValue const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for ParametricValue
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<ParametricValue>::lowest()  (\see ParametricValue::getMin())
 * std::numeric_limits<ParametricValue>::max()  (\see ParametricValue::getMax())
 * std::numeric_limits<ParametricValue>::epsilon()  (\see ParametricValue::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::ParametricValue> : public numeric_limits<double>
{
public:
  /*!
   * \see std::numeric_limits::lowest()
   */
  static inline ::ad_rss::physics::ParametricValue lowest()
  {
    return ::ad_rss::physics::ParametricValue::getMin();
  }
  /*!
   * \see std::numeric_limits::max()
   */
  static inline ::ad_rss::physics::ParametricValue max()
  {
    return ::ad_rss::physics::ParametricValue::getMax();
  }
  /*!
   * \see std::numeric_limits::epsilon()
   */
  static inline ::ad_rss::physics::ParametricValue epsilon()
  {
    return ::ad_rss::physics::ParametricValue::getPrecision();
  }
};

} // namespace std
