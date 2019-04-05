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
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/state/ResponseEvaluator.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType ResponseInformation
 *
 * Structure holding additional information on the reason for the response.
 */
struct ResponseInformation
{
  /*!
   * \brief standard constructor
   */
  ResponseInformation() = default;

  /*!
   * \brief standard destructor
   */
  ~ResponseInformation() = default;

  /*!
   * \brief standard copy constructor
   */
  ResponseInformation(const ResponseInformation &other) = default;

  /*!
   * \brief standard move constructor
   */
  ResponseInformation(ResponseInformation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ResponseInformation
   *
   * \returns Reference to this ResponseInformation.
   */
  ResponseInformation &operator=(const ResponseInformation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ResponseInformation
   *
   * \returns Reference to this ResponseInformation.
   */
  ResponseInformation &operator=(ResponseInformation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ResponseInformation
   *
   * \returns \c true if both ResponseInformation are equal
   */
  bool operator==(const ResponseInformation &other) const
  {
    return (safeDistance == other.safeDistance) && (currentDistance == other.currentDistance)
      && (responseEvaluator == other.responseEvaluator);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ResponseInformation.
   *
   * \returns \c true if both ResponseInformation are different
   */
  bool operator!=(const ResponseInformation &other) const
  {
    return !operator==(other);
  }

  /*!
   * Required safe distance.
   */
  ::ad_rss::physics::Distance safeDistance{-1.};

  /*!
   * current longitudinal distance
   */
  ::ad_rss::physics::Distance currentDistance{-1.};

  /*!
   * The response information in respect to safeDistance and currentDistance are in respect to the given evaluation
   * method.
   */
  ::ad_rss::state::ResponseEvaluator responseEvaluator{::ad_rss::state::ResponseEvaluator::None};
};

} // namespace state
} // namespace ad_rss
