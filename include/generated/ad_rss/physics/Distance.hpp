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
 * \brief Forward declaration of DistanceSquared
 *
 * Since Distance is defined explicitly as a physical type we have to consider this
 * within operations. Therefore this squared type is defined.
 */
class DistanceSquared;

/*!
 * \brief DataType Distance
 *
 * The length of a specific path traveled between two points.
 * The unit is: Meter
 */
class Distance
{
public:
  /*!
   * \brief constant defining the minimum valid Distance value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid Distance value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed Distance value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of Distance is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  Distance()
    : mDistance(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit Distance(double const iDistance)
    : mDistance(iDistance)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  Distance(const Distance &other) = default;

  /*!
   * \brief standard move constructor
   */
  Distance(Distance &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Distance
   *
   * \returns Reference to this Distance.
   */
  Distance &operator=(const Distance &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Distance
   *
   * \returns Reference to this Distance.
   */
  Distance &operator=(Distance &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance
   *
   * \returns \c true if both Distance are valid and can be taken as numerically equal
   */
  bool operator==(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mDistance - other.mDistance) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance.
   *
   * \returns \c true if one of the Distance is not valid or they can be taken as numerically different
   */
  bool operator!=(const Distance &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance.
   *
   * \returns \c true if both Distance are valid and
   *   this Distance is strictly numerically greater than other.
   * \note the precision of Distance is considered
   */
  bool operator>(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDistance > other.mDistance) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance.
   *
   * \returns \c true if both Distance are valid and
   *   this Distance is strictly numerically smaller than other.
   * \note the precision of Distance is considered
   */
  bool operator<(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDistance < other.mDistance) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance.
   *
   * \returns \c true if both Distance are valid and
   *   this Distance is numerically greater than other.
   * \note the precision of Distance is considered
   */
  bool operator>=(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDistance > other.mDistance) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Distance
   *
   * \returns \c true if both Distance are valid and
   *   this Distance is numerically smaller than other.
   * \note the precision of Distance is considered
   */
  bool operator<=(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDistance < other.mDistance) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Distance operator+(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    Distance const result(mDistance + other.mDistance);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Distance &operator+=(const Distance &other)
  {
    ensureValid();
    other.ensureValid();
    mDistance += other.mDistance;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Distance operator-(const Distance &other) const
  {
    ensureValid();
    other.ensureValid();
    Distance const result(mDistance - other.mDistance);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  Distance operator-=(const Distance &other)
  {
    ensureValid();
    other.ensureValid();
    mDistance -= other.mDistance;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   * \note since Distance is a type with physical unit, the multiplication results in the Squared type.
   */
  DistanceSquared operator*(const Distance &other) const;

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
  Distance operator*(const double &scalar) const
  {
    ensureValid();
    Distance const result(mDistance * scalar);
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
  Distance operator/(const double &scalar) const
  {
    Distance const scalarDistance(scalar);
    Distance const result(operator/(scalarDistance));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other Distance
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since Distance is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const Distance &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mDistance / other.mDistance;
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
  Distance operator-() const
  {
    ensureValid();
    Distance const result(-mDistance);
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
    return mDistance;
  }

  /*!
   * \returns \c true if the Distance in a valid range
   *
   * An Distance value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinDistanceValue <= value <= cMaxDistanceValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mDistance);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mDistance)
      && (mDistance <= cMaxValue);
  }

  /*!
   * \brief ensure that the Distance is valid
   *
   * Throws an std::out_of_range() exception if the Distance
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("Distance value out of range"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief ensure that the Distance is valid and non zero
   *
   * Throws an std::out_of_range() exception if the Distance
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(Distance(0.))) // LCOV_EXCL_BR_LINE
    {
      throw std::out_of_range("Distance value is zero"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief get minimum valid Distance
   */
  static Distance getMin()
  {
    return Distance(cMinValue);
  }

  /*!
   * \brief get maximum valid Distance
   */
  static Distance getMax()
  {
    return Distance(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of Distance
   *   used in comparison operator==(), operator!=().
   */
  static Distance getPrecision()
  {
    return Distance(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mDistance;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other Distance as double value
 * \param[in] value Distance value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::Distance operator*(const double &other, ::ad_rss::physics::Distance const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for Distance
 */
inline ::ad_rss::physics::Distance fabs(const ::ad_rss::physics::Distance other)
{
  ::ad_rss::physics::Distance const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for Distance
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<Distance>::lowest()  (\see Distance::getMin())
 * std::numeric_limits<Distance>::max()  (\see Distance::getMax())
 * std::numeric_limits<Distance>::epsilon()  (\see Distance::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::Distance> : public numeric_limits<double>
{
public:
  /*!
   * \see std::numeric_limits::lowest()
   */
  static inline ::ad_rss::physics::Distance lowest()
  {
    return ::ad_rss::physics::Distance::getMin();
  }
  /*!
   * \see std::numeric_limits::max()
   */
  static inline ::ad_rss::physics::Distance max()
  {
    return ::ad_rss::physics::Distance::getMax();
  }
  /*!
   * \see std::numeric_limits::epsilon()
   */
  static inline ::ad_rss::physics::Distance epsilon()
  {
    return ::ad_rss::physics::Distance::getPrecision();
  }
};

} // namespace std
