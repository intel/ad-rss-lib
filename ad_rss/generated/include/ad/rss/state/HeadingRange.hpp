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
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include "ad/physics/AngleRange.hpp"
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
    return (outerRange == other.outerRange) && (innerRange == other.innerRange);
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

  ::ad::physics::AngleRange outerRange;
  ::ad::physics::AngleRange innerRange;
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
  os << "outerRange:";
  os << _value.outerRange;
  os << ",";
  os << "innerRange:";
  os << _value.innerRange;
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
