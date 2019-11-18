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
#include "ad_rss/situation/SituationVector.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType SituationSnapshot
 *
 * A snashot in time of the current situations RSS extracted from the WorldModel.
 */
struct SituationSnapshot
{
  /*!
   * \brief standard constructor
   */
  SituationSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~SituationSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  SituationSnapshot(const SituationSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  SituationSnapshot(SituationSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns Reference to this SituationSnapshot.
   */
  SituationSnapshot &operator=(const SituationSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns Reference to this SituationSnapshot.
   */
  SituationSnapshot &operator=(SituationSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns \c true if both SituationSnapshot are equal
   */
  bool operator==(const SituationSnapshot &other) const
  {
    return (timeIndex == other.timeIndex) && (situations == other.situations);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SituationSnapshot.
   *
   * \returns \c true if both SituationSnapshot are different
   */
  bool operator!=(const SituationSnapshot &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back.
   */
  ::ad_rss::physics::TimeIndex timeIndex{0u};

  /*!
   * The vector of situations at a given time.
   */
  ::ad_rss::situation::SituationVector situations;
};

} // namespace situation
} // namespace ad_rss
