/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1997
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Angle.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType HeadingRange
 *
 * Defines an interval for the allowed heading range of the vehicle.
 */
struct HeadingRange
{
  /*!
   * \brief Smart pointer on HeadingRange
   */
  typedef std::shared_ptr<HeadingRange> Ptr;

  /*!
   * \brief Smart pointer on constant HeadingRange
   */
  typedef std::shared_ptr<HeadingRange const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  HeadingRange() = default;

  /*!
   * \brief standard destructor
   */
  ~HeadingRange() = default;

  /*!
   * \brief standard copy constructor
   */
  HeadingRange(const HeadingRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  HeadingRange(HeadingRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other HeadingRange
   *
   * \returns Reference to this HeadingRange.
   */
  HeadingRange &operator=(const HeadingRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other HeadingRange
   *
   * \returns Reference to this HeadingRange.
   */
  HeadingRange &operator=(HeadingRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other HeadingRange
   *
   * \returns \c true if both HeadingRange are equal
   */
  bool operator==(const HeadingRange &other) const
  {
    return (begin == other.begin) && (end == other.end);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other HeadingRange.
   *
   * \returns \c true if both HeadingRange are different
   */
  bool operator!=(const HeadingRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The begin of the heading range interval.
   */
  ::ad::physics::Angle begin;

  /*!
   * The end of the heading range interval.
   */
  ::ad::physics::Angle end;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_HEADINGRANGE
#define GEN_GUARD_AD_RSS_STATE_HEADINGRANGE
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value HeadingRange value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, HeadingRange const &_value)
{
  os << "HeadingRange(";
  os << "begin:";
  os << _value.begin;
  os << ",";
  os << "end:";
  os << _value.end;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for HeadingRange
 */
inline std::string to_string(::ad::rss::state::HeadingRange const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_HEADINGRANGE
