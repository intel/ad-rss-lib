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

#include <limits>
#include <memory>
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
  using Ptr = std::shared_ptr<RssStateSnapshot>;
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
