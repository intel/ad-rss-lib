/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include "ad/physics/AccelerationRange.hpp"
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
 * \brief DataType AccelerationRestriction
 *
 * Defines restrictions of the vehicle acceleration.
 */
struct AccelerationRestriction
{
  /*!
   * \brief Smart pointer on AccelerationRestriction
   */
  typedef std::shared_ptr<AccelerationRestriction> Ptr;

  /*!
   * \brief Smart pointer on constant AccelerationRestriction
   */
  typedef std::shared_ptr<AccelerationRestriction const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  AccelerationRestriction() = default;

  /*!
   * \brief standard destructor
   */
  ~AccelerationRestriction() = default;

  /*!
   * \brief standard copy constructor
   */
  AccelerationRestriction(const AccelerationRestriction &other) = default;

  /*!
   * \brief standard move constructor
   */
  AccelerationRestriction(AccelerationRestriction &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other AccelerationRestriction
   *
   * \returns Reference to this AccelerationRestriction.
   */
  AccelerationRestriction &operator=(const AccelerationRestriction &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other AccelerationRestriction
   *
   * \returns Reference to this AccelerationRestriction.
   */
  AccelerationRestriction &operator=(AccelerationRestriction &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other AccelerationRestriction
   *
   * \returns \c true if both AccelerationRestriction are equal
   */
  bool operator==(const AccelerationRestriction &other) const
  {
    return (lateral_left_range == other.lateral_left_range) && (longitudinal_range == other.longitudinal_range)
      && (lateral_right_range == other.lateral_right_range);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other AccelerationRestriction.
   *
   * \returns \c true if both AccelerationRestriction are different
   */
  bool operator!=(const AccelerationRestriction &other) const
  {
    return !operator==(other);
  }

  /*!
   * The range of the acceleration restriction in lateral left direction.
   */
  ::ad::physics::AccelerationRange lateral_left_range;

  /*!
   * The range of the acceleration restriction in longitudinal direction.
   */
  ::ad::physics::AccelerationRange longitudinal_range;

  /*!
   * The range of the acceleration restriction in lateral right direction.
   */
  ::ad::physics::AccelerationRange lateral_right_range;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_ACCELERATIONRESTRICTION
#define GEN_GUARD_AD_RSS_STATE_ACCELERATIONRESTRICTION
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
 * \param[in] _value AccelerationRestriction value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, AccelerationRestriction const &_value)
{
  os << "AccelerationRestriction(";
  os << "lateral_left_range:";
  os << _value.lateral_left_range;
  os << ",";
  os << "longitudinal_range:";
  os << _value.longitudinal_range;
  os << ",";
  os << "lateral_right_range:";
  os << _value.lateral_right_range;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for AccelerationRestriction
 */
inline std::string to_string(::ad::rss::state::AccelerationRestriction const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::AccelerationRestriction> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::state::AccelerationRestriction const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_ACCELERATIONRESTRICTION
