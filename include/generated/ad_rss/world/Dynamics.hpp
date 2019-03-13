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
#include "ad_rss/world/LateralRssAccelerationValues.hpp"
#include "ad_rss/world/LongitudinalRssAccelerationValues.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType Dynamics
 *
 * Describes the RSS dynamics values to be applied for an object within the metric world frame. The dynamics consist of
 * a longitudinal component, a lateral component and a lateral fluctuation margin to be taken into account to compensate
 * for lateral fluctuations.
 */
struct Dynamics
{
  /*!
   * \brief standard constructor
   */
  Dynamics() = default;

  /*!
   * \brief standard destructor
   */
  ~Dynamics() = default;

  /*!
   * \brief standard copy constructor
   */
  Dynamics(const Dynamics &other) = default;

  /*!
   * \brief standard move constructor
   */
  Dynamics(Dynamics &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Dynamics
   *
   * \returns Reference to this Dynamics.
   */
  Dynamics &operator=(const Dynamics &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Dynamics
   *
   * \returns Reference to this Dynamics.
   */
  Dynamics &operator=(Dynamics &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Dynamics
   *
   * \returns \c true if both Dynamics are equal
   */
  bool operator==(const Dynamics &other) const
  {
    return (alphaLon == other.alphaLon) && (alphaLat == other.alphaLat)
      && (lateralFluctuationMargin == other.lateralFluctuationMargin);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Dynamics.
   *
   * \returns \c true if both Dynamics are different
   */
  bool operator!=(const Dynamics &other) const
  {
    return !operator==(other);
  }

  /*!
   * RSS dynamics values along longitudinal coordinate system axis.
   */
  ::ad_rss::world::LongitudinalRssAccelerationValues alphaLon;

  /*!
   * RSS dynamics values along lateral coordinate system axis.
   */
  ::ad_rss::world::LateralRssAccelerationValues alphaLat;

  /*!
   * Defines the lateral fluctuation margin to be taken into account.
   */
  ::ad_rss::physics::Distance lateralFluctuationMargin{0.0};
};

} // namespace world
} // namespace ad_rss
