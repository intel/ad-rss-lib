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
#include "ad/physics/Speed.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType Velocity
 *
 * Defines the velocity of an object within its current lane. The velocity consists of a longitudinal and a lateral
 * component.
 */
struct Velocity
{
  using Ptr = std::shared_ptr<Velocity>;
  using ConstPtr = std::shared_ptr<Velocity const>;

  /*!
   * \brief standard constructor
   */
  Velocity() = default;

  /*!
   * \brief standard destructor
   */
  ~Velocity() = default;

  /*!
   * \brief standard copy constructor
   */
  Velocity(const Velocity &other) = default;

  /*!
   * \brief standard move constructor
   */
  Velocity(Velocity &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Velocity
   *
   * \returns Reference to this Velocity.
   */
  Velocity &operator=(const Velocity &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Velocity
   *
   * \returns Reference to this Velocity.
   */
  Velocity &operator=(Velocity &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Velocity
   *
   * \returns \c true if both Velocity are equal
   */
  bool operator==(const Velocity &other) const
  {
    return (speedLon == other.speedLon) && (speedLat == other.speedLat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Velocity.
   *
   * \returns \c true if both Velocity are different
   */
  bool operator!=(const Velocity &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::Speed speedLon{0.0};

  /*!
   * The lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::Speed speedLat{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad
