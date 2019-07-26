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
#include "ad/rss/situation/LateralRelativePosition.hpp"
#include "ad/rss/situation/LongitudinalRelativePosition.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType RelativePosition
 *
 * Describes the relative position between two objects within their situation coordinate system.
 */
struct RelativePosition
{
  using Ptr = std::shared_ptr<RelativePosition>;
  using ConstPtr = std::shared_ptr<RelativePosition const>;

  /*!
   * \brief standard constructor
   */
  RelativePosition() = default;

  /*!
   * \brief standard destructor
   */
  ~RelativePosition() = default;

  /*!
   * \brief standard copy constructor
   */
  RelativePosition(const RelativePosition &other) = default;

  /*!
   * \brief standard move constructor
   */
  RelativePosition(RelativePosition &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(const RelativePosition &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(RelativePosition &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns \c true if both RelativePosition are equal
   */
  bool operator==(const RelativePosition &other) const
  {
    return (longitudinalPosition == other.longitudinalPosition) && (longitudinalDistance == other.longitudinalDistance)
      && (lateralPosition == other.lateralPosition) && (lateralDistance == other.lateralDistance);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition.
   *
   * \returns \c true if both RelativePosition are different
   */
  bool operator!=(const RelativePosition &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal relative position between to objects within their situation coordinate system.
   */
  ::ad::rss::situation::LongitudinalRelativePosition longitudinalPosition{
    ::ad::rss::situation::LongitudinalRelativePosition::Overlap};

  /*!
   * The longitudinal distance between the two objects within their situation coordinate system.
   */
  ::ad::physics::Distance longitudinalDistance{0.0};

  /*!
   * The lateral relative position between to objects within their situation coordinate system.
   */
  ::ad::rss::situation::LateralRelativePosition lateralPosition{::ad::rss::situation::LateralRelativePosition::Overlap};

  /*!
   * The lateral distance between the two objects within their situation coordinate system.
   */
  ::ad::physics::Distance lateralDistance{0.0};
};

} // namespace situation
} // namespace rss
} // namespace ad
