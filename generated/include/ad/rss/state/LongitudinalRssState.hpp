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
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <iostream>
#include <memory>
#include "ad/rss/state/LongitudinalResponse.hpp"
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
 * \brief DataType LongitudinalRssState
 *
 * Struct to store the longitudinal RSS state.
 */
struct LongitudinalRssState
{
  using Ptr = std::shared_ptr<LongitudinalRssState>;
  using ConstPtr = std::shared_ptr<LongitudinalRssState const>;

  /*!
   * \brief standard constructor
   */
  LongitudinalRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~LongitudinalRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  LongitudinalRssState(const LongitudinalRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  LongitudinalRssState(LongitudinalRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns Reference to this LongitudinalRssState.
   */
  LongitudinalRssState &operator=(const LongitudinalRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns Reference to this LongitudinalRssState.
   */
  LongitudinalRssState &operator=(LongitudinalRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns \c true if both LongitudinalRssState are equal
   */
  bool operator==(const LongitudinalRssState &other) const
  {
    return (isSafe == other.isSafe) && (response == other.response)
      && (rssStateInformation == other.rssStateInformation);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssState.
   *
   * \returns \c true if both LongitudinalRssState are different
   */
  bool operator!=(const LongitudinalRssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Flag to indicate if the state is longitudinal safe.
   */
  bool isSafe{false};

  /*!
   * required response in longitudinal direction
   */
  ::ad::rss::state::LongitudinalResponse response{::ad::rss::state::LongitudinalResponse::BrakeMin};

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad::rss::state::RssStateInformation rssStateInformation;
};

} // namespace state
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_STATE_LONGITUDINALRSSSTATE
#define OSTREAM_AD_RSS_STATE_LONGITUDINALRSSSTATE
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
 * \param[in] stream The output stream to write to
 * \param[in] value LongitudinalRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRssState const &_value)
{
  os << "LongitudinalRssState(";
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
#endif // OSTREAM_AD_RSS_STATE_LONGITUDINALRSSSTATE
