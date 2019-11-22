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
#include "ad_rss/state/LateralResponse.hpp"
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
 * \brief DataType LateralRssState
 *
 * Struct to store the lateral RSS state.
 */
struct LateralRssState
{
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
  ::ad_rss::state::LateralResponse response;

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad_rss::state::RssStateInformation rssStateInformation;
};

} // namespace state
} // namespace ad_rss
