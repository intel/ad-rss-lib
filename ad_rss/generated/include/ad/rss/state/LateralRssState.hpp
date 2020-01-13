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
 * Generator Version : 11.0.0-1911
 */

#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include "ad/rss/state/LateralResponse.hpp"
#include "ad/rss/state/RssStateInformation.hpp"
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
 * \brief DataType LateralRssState
 *
 * Struct to store the lateral RSS state.
 */
struct LateralRssState
{
  /*!
   * \brief Smart pointer on LateralRssState
   */
  using Ptr = std::shared_ptr<LateralRssState>;

  /*!
   * \brief Smart pointer on constant LateralRssState
   */
  using ConstPtr = std::shared_ptr<LateralRssState const>;

  /*!
   * \brief standard constructor
   */
  LateralRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~LateralRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  LateralRssState(const LateralRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  LateralRssState(LateralRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns Reference to this LateralRssState.
   */
  LateralRssState &operator=(const LateralRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns Reference to this LateralRssState.
   */
  LateralRssState &operator=(LateralRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns \c true if both LateralRssState are equal
   */
  bool operator==(const LateralRssState &other) const
  {
    return (isSafe == other.isSafe) && (response == other.response)
      && (rssStateInformation == other.rssStateInformation);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssState.
   *
   * \returns \c true if both LateralRssState are different
   */
  bool operator!=(const LateralRssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Flag to indicate if the state is lateral safe.
   */
  bool isSafe{false};

  /*!
   * required response in lateral direction
   */
  ::ad::rss::state::LateralResponse response;

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad::rss::state::RssStateInformation rssStateInformation;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
#define GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
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
 * \param[in] _value LateralRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LateralRssState const &_value)
{
  os << "LateralRssState(";
  os << "isSafe:";
  os << _value.isSafe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "rssStateInformation:";
  os << _value.rssStateInformation;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LateralRssState
 */
inline std::string to_string(::ad::rss::state::LateralRssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
