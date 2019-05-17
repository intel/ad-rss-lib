/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
