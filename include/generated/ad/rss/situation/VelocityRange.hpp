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

#include <memory>
#include "ad/physics/SpeedRange.hpp"
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
 * \brief DataType VelocityRange
 *
 * Defines the velocity range of an object within its current lane. The velocity range consists of a longitudinal and a
 * lateral component.
 */
struct VelocityRange
{
  using Ptr = std::shared_ptr<VelocityRange>;
  using ConstPtr = std::shared_ptr<VelocityRange const>;

  /*!
   * \brief standard constructor
   */
  VelocityRange() = default;

  /*!
   * \brief standard destructor
   */
  ~VelocityRange() = default;

  /*!
   * \brief standard copy constructor
   */
  VelocityRange(const VelocityRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  VelocityRange(VelocityRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(const VelocityRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(VelocityRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns \c true if both VelocityRange are equal
   */
  bool operator==(const VelocityRange &other) const
  {
    return (speedLon == other.speedLon) && (speedLat == other.speedLat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange.
   *
   * \returns \c true if both VelocityRange are different
   */
  bool operator!=(const VelocityRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::SpeedRange speedLon;

  /*!
   * The lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::SpeedRange speedLat;
};

} // namespace situation
} // namespace rss
} // namespace ad
