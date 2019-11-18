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
 * \brief Forward declaration of Distance
 *
 * Since DistanceSquared is defined explicitly as a physical type we have to consider this
 * within operations. Therefore this square-rooted type is defined.
 */
class Distance;

/*!
 * \brief DataType DistanceSquared
 *
 * DistanceSquared represents a squared Distance.
 * The unit is: SquareMeter
 */
class DistanceSquared
{
public:
  /*!
   * \brief constant defining the minimum valid DistanceSquared value
   */
  static const double cMinValue;

  /*!
   * \brief constant defining the maximum valid DistanceSquared value
   */
  static const double cMaxValue;

  /*!
   * \brief constant defining the assumed DistanceSquared value accuracy
   *   used in comparison operator==(), operator!=().
   */
  static const double cPrecisionValue;

  /*!
   * \brief default constructor
   *
   * The default value of DistanceSquared is:
   * std::numeric_limits<double>::quiet_NaN()
   */
  DistanceSquared()
    : mDistanceSquared(std::numeric_limits<double>::quiet_NaN())
  {
  }

  /*!
   * \brief standard constructor
   */
  explicit DistanceSquared(double const iDistanceSquared)
    : mDistanceSquared(iDistanceSquared)
  {
  }

  /*!
   * \brief standard copy constructor
   */
  DistanceSquared(const DistanceSquared &other) = default;

  /*!
   * \brief standard move constructor
   */
  DistanceSquared(DistanceSquared &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Reference to this DistanceSquared.
   */
  DistanceSquared &operator=(const DistanceSquared &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Reference to this DistanceSquared.
   */
  DistanceSquared &operator=(DistanceSquared &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns \c true if both DistanceSquared are valid and can be taken as numerically equal
   */
  bool operator==(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return std::fabs(mDistanceSquared - other.mDistanceSquared) < cPrecisionValue;
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared.
   *
   * \returns \c true if one of the DistanceSquared is not valid or they can be taken as numerically different
   */
  bool operator!=(const DistanceSquared &other) const
  {
    return !operator==(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared.
   *
   * \returns \c true if both DistanceSquared are valid and
   *   this DistanceSquared is strictly numerically greater than other.
   * \note the precision of DistanceSquared is considered
   */
  bool operator>(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDistanceSquared > other.mDistanceSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared.
   *
   * \returns \c true if both DistanceSquared are valid and
   *   this DistanceSquared is strictly numerically smaller than other.
   * \note the precision of DistanceSquared is considered
   */
  bool operator<(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return (mDistanceSquared < other.mDistanceSquared) && operator!=(other);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared.
   *
   * \returns \c true if both DistanceSquared are valid and
   *   this DistanceSquared is numerically greater than other.
   * \note the precision of DistanceSquared is considered
   */
  bool operator>=(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDistanceSquared > other.mDistanceSquared) || operator==(other));
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns \c true if both DistanceSquared are valid and
   *   this DistanceSquared is numerically smaller than other.
   * \note the precision of DistanceSquared is considered
   */
  bool operator<=(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    return ((mDistanceSquared < other.mDistanceSquared) || operator==(other));
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DistanceSquared operator+(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    DistanceSquared const result(mDistanceSquared + other.mDistanceSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DistanceSquared &operator+=(const DistanceSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mDistanceSquared += other.mDistanceSquared;
    ensureValid();
    return *this;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DistanceSquared operator-(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValid();
    DistanceSquared const result(mDistanceSquared - other.mDistanceSquared);
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid
   */
  DistanceSquared operator-=(const DistanceSquared &other)
  {
    ensureValid();
    other.ensureValid();
    mDistanceSquared -= other.mDistanceSquared;
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
  DistanceSquared operator*(const double &scalar) const
  {
    ensureValid();
    DistanceSquared const result(mDistanceSquared * scalar);
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
  DistanceSquared operator/(const double &scalar) const
  {
    DistanceSquared const scalarDistanceSquared(scalar);
    DistanceSquared const result(operator/(scalarDistanceSquared));
    result.ensureValid();
    return result;
  }

  /**
   * \brief standard arithmetic operator
   *
   * \param[in] other Other DistanceSquared
   *
   * \returns Result of arithmetic operation.
   *
   * \note throws a std::out_of_range exception if one of the two operands or the result of
   *   the operation is not valid or other is zero
   * \note since DistanceSquared is a type with physical unit, the division results in the dimensionless type.
   */
  double operator/(const DistanceSquared &other) const
  {
    ensureValid();
    other.ensureValidNonZero();
    double const result = mDistanceSquared / other.mDistanceSquared;
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
  DistanceSquared operator-() const
  {
    ensureValid();
    DistanceSquared const result(-mDistanceSquared);
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
    return mDistanceSquared;
  }

  /*!
   * \returns \c true if the DistanceSquared in a valid range
   *
   * An DistanceSquared value is defined to be valid if:
   * - It is normal or zero (see std::fpclassify()
   * - cMinDistanceSquaredValue <= value <= cMaxDistanceSquaredValue
   */
  bool isValid() const
  {
    auto const valueClass = std::fpclassify(mDistanceSquared);
    return ((valueClass == FP_NORMAL) || (valueClass == FP_ZERO)) && (cMinValue <= mDistanceSquared)
      && (mDistanceSquared <= cMaxValue);
  }

  /*!
   * \brief ensure that the DistanceSquared is valid
   *
   * Throws an std::out_of_range() exception if the DistanceSquared
   * in not valid (i.e. isValid() returns false)
   */
  void ensureValid() const
  {
    if (!isValid())
    {
      throw std::out_of_range("DistanceSquared value out of range"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief ensure that the DistanceSquared is valid and non zero
   *
   * Throws an std::out_of_range() exception if the DistanceSquared
   * in not valid or zero (i.e. isValid() returns false)
   */
  void ensureValidNonZero() const
  {
    ensureValid();
    if (operator==(DistanceSquared(0.))) // LCOV_EXCL_BR_LINE
    {
      throw std::out_of_range("DistanceSquared value is zero"); // LCOV_EXCL_BR_LINE
    }
  }

  /*!
   * \brief get minimum valid DistanceSquared
   */
  static DistanceSquared getMin()
  {
    return DistanceSquared(cMinValue);
  }

  /*!
   * \brief get maximum valid DistanceSquared
   */
  static DistanceSquared getMax()
  {
    return DistanceSquared(cMaxValue);
  }

  /*!
   * \brief get assumed accuracy of DistanceSquared
   *   used in comparison operator==(), operator!=().
   */
  static DistanceSquared getPrecision()
  {
    return DistanceSquared(cPrecisionValue);
  }

private:
  /*!
   * \brief the actual value of the type
   */
  double mDistanceSquared;
};

} // namespace physics
} // namespace ad_rss
/**
 * \brief standard arithmetic operator
 *
 * \param[in] other Other DistanceSquared as double value
 * \param[in] value DistanceSquared value
 *
 * \returns Result of arithmetic operation.
 *
 * \note throws a std::out_of_range exception if \c value or the result of
 *   the operation is not valid
 */
inline ::ad_rss::physics::DistanceSquared operator*(const double &other,
                                                    ::ad_rss::physics::DistanceSquared const &value)
{
  return value.operator*(other);
}

/*!
 * \brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::fabs for DistanceSquared
 */
inline ::ad_rss::physics::DistanceSquared fabs(const ::ad_rss::physics::DistanceSquared other)
{
  ::ad_rss::physics::DistanceSquared const result(std::fabs(static_cast<double>(other)));
  return result;
}

/*!
 * \brief specialization of the std::numeric_limits for DistanceSquared
 *
 * Derived from std::numeric_limits<double> with overloaded functions:
 * std::numeric_limits<DistanceSquared>::lowest()  (\see DistanceSquared::getMin())
 * std::numeric_limits<DistanceSquared>::max()  (\see DistanceSquared::getMax())
 * std::numeric_limits<DistanceSquared>::epsilon()  (\see DistanceSquared::getPrecision())
 */
template <> class numeric_limits<::ad_rss::physics::DistanceSquared> : public numeric_limits<double>
{
public:
  /*!
   * \see std::numeric_limits::lowest()
   */
  static inline ::ad_rss::physics::DistanceSquared lowest()
  {
    return ::ad_rss::physics::DistanceSquared::getMin();
  }
  /*!
   * \see std::numeric_limits::max()
   */
  static inline ::ad_rss::physics::DistanceSquared max()
  {
    return ::ad_rss::physics::DistanceSquared::getMax();
  }
  /*!
   * \see std::numeric_limits::epsilon()
   */
  static inline ::ad_rss::physics::DistanceSquared epsilon()
  {
    return ::ad_rss::physics::DistanceSquared::getPrecision();
  }
};

/*!
 * \brief overload of the std::sqrt for DistanceSquared
 *
 * The square root of a squared type is basic type: Distance.
 */
::ad_rss::physics::Distance sqrt(::ad_rss::physics::DistanceSquared const other);

} // namespace std
