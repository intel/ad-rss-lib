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
    return (lateralLeftRange == other.lateralLeftRange) && (longitudinalRange == other.longitudinalRange)
      && (lateralRightRange == other.lateralRightRange);
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
  ::ad::physics::AccelerationRange lateralLeftRange;

  /*!
   * The range of the acceleration restriction in longitudinal direction.
   */
  ::ad::physics::AccelerationRange longitudinalRange;

  /*!
   * The range of the acceleration restriction in lateral right direction.
   */
  ::ad::physics::AccelerationRange lateralRightRange;
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
  os << "lateralLeftRange:";
  os << _value.lateralLeftRange;
  os << ",";
  os << "longitudinalRange:";
  os << _value.longitudinalRange;
  os << ",";
  os << "lateralRightRange:";
  os << _value.lateralRightRange;
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
#endif // GEN_GUARD_AD_RSS_STATE_ACCELERATIONRESTRICTION
