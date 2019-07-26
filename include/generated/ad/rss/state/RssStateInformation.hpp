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
#include "ad/physics/Distance.hpp"
#include "ad/rss/state/RssStateEvaluator.hpp"
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
 * \brief DataType RssStateInformation
 *
 * Structure holding additional information on the reason for the response.
 */
struct RssStateInformation
{
  using Ptr = std::shared_ptr<RssStateInformation>;
  using ConstPtr = std::shared_ptr<RssStateInformation const>;

  /*!
   * \brief standard constructor
   */
  RssStateInformation() = default;

  /*!
   * \brief standard destructor
   */
  ~RssStateInformation() = default;

  /*!
   * \brief standard copy constructor
   */
  RssStateInformation(const RssStateInformation &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssStateInformation(RssStateInformation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns Reference to this RssStateInformation.
   */
  RssStateInformation &operator=(const RssStateInformation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns Reference to this RssStateInformation.
   */
  RssStateInformation &operator=(RssStateInformation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns \c true if both RssStateInformation are equal
   */
  bool operator==(const RssStateInformation &other) const
  {
    return (safeDistance == other.safeDistance) && (currentDistance == other.currentDistance)
      && (evaluator == other.evaluator);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateInformation.
   *
   * \returns \c true if both RssStateInformation are different
   */
  bool operator!=(const RssStateInformation &other) const
  {
    return !operator==(other);
  }

  /*!
   * Required safe distance.
   */
  ::ad::physics::Distance safeDistance{-1.};

  /*!
   * current longitudinal distance
   */
  ::ad::physics::Distance currentDistance{-1.};

  /*!
   * The response information in respect to safeDistance and currentDistance are in respect to the given evaluation
   * method.
   */
  ::ad::rss::state::RssStateEvaluator evaluator{::ad::rss::state::RssStateEvaluator::None};
};

} // namespace state
} // namespace rss
} // namespace ad
