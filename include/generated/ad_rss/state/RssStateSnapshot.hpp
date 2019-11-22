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

#include <cstdint>
#include <limits>
#include <memory>
#include "ad_rss/physics/TimeIndex.hpp"
#include "ad_rss/state/RssStateVector.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
  ::ad_rss::physics::TimeIndex timeIndex{0u};
  ::ad_rss::state::RssStateVector individualResponses;
};

} // namespace state
} // namespace ad_rss
