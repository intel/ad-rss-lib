/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.1-1894
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/state/RssStateVector.hpp"
#include "ad/rss/world/TimeIndex.hpp"
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
 * \brief DataType RssStateSnapshot
 *
 * The current snapshot of individual situation responses RSS calculated from the SituationSnapshot.
 */
struct RssStateSnapshot
{
  /*!
   * \brief Smart pointer on RssStateSnapshot
   */
  using Ptr = std::shared_ptr<RssStateSnapshot>;

  /*!
   * \brief Smart pointer on constant RssStateSnapshot
   */
  using ConstPtr = std::shared_ptr<RssStateSnapshot const>;

  /*!
   * \brief standard constructor
   */
  RssStateSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~RssStateSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  RssStateSnapshot(const RssStateSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssStateSnapshot(RssStateSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(const RssStateSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(RssStateSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns \c true if both RssStateSnapshot are equal
   */
  bool operator==(const RssStateSnapshot &other) const
  {
    return (timeIndex == other.timeIndex) && (individualResponses == other.individualResponses);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot.
   *
   * \returns \c true if both RssStateSnapshot are different
   */
  bool operator!=(const RssStateSnapshot &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back. Each world model referring to another point in time should get another time index. The time index of the
   * world model must not be zero.
   */
  ::ad::rss::world::TimeIndex timeIndex{0u};
  ::ad::rss::state::RssStateVector individualResponses;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
#define GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
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
 * \param[in] _value RssStateSnapshot value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateSnapshot const &_value)
{
  os << "RssStateSnapshot(";
  os << "timeIndex:";
  os << _value.timeIndex;
  os << ",";
  os << "individualResponses:";
  os << _value.individualResponses;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssStateSnapshot
 */
inline std::string to_string(::ad::rss::state::RssStateSnapshot const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
