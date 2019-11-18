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

#include <memory>
#include "ad_rss/state/LongitudinalResponse.hpp"
#include "ad_rss/state/RssStateInformation.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
  ::ad_rss::state::LongitudinalResponse response{::ad_rss::state::LongitudinalResponse::BrakeMin};

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad_rss::state::RssStateInformation rssStateInformation;
};

} // namespace state
} // namespace ad_rss
