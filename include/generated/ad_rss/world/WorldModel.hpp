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
#include "ad_rss/world/RssDynamics.hpp"
#include "ad_rss/world/SceneVector.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType WorldModel
 *
 * The world model, RSS requires as input, consists of a timeIndex, the egoVehicleDynamics and object description as
 * well as the list of relevant scenes.
 */
struct WorldModel
{
  /*!
   * \brief standard constructor
   */
  WorldModel() = default;

  /*!
   * \brief standard destructor
   */
  ~WorldModel() = default;

  /*!
   * \brief standard copy constructor
   */
  WorldModel(const WorldModel &other) = default;

  /*!
   * \brief standard move constructor
   */
  WorldModel(WorldModel &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other WorldModel
   *
   * \returns Reference to this WorldModel.
   */
  WorldModel &operator=(const WorldModel &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other WorldModel
   *
   * \returns Reference to this WorldModel.
   */
  WorldModel &operator=(WorldModel &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other WorldModel
   *
   * \returns \c true if both WorldModel are equal
   */
  bool operator==(const WorldModel &other) const
  {
    return (timeIndex == other.timeIndex) && (egoVehicleRssDynamics == other.egoVehicleRssDynamics)
      && (scenes == other.scenes);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other WorldModel.
   *
   * \returns \c true if both WorldModel are different
   */
  bool operator!=(const WorldModel &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back. Each world model referring to another point in time should get another time index. The time index of the
   * world model must not be zero.
   */
  ::ad_rss::physics::TimeIndex timeIndex{0u};

  /*!
   * Defines the ego vehicle dynamics to be applied. This parameters are provided on a per object basis to be able to
   * adapt these e.g. in respect to object type or the weather conditions.
   */
  ::ad_rss::world::RssDynamics egoVehicleRssDynamics;

  /*!
   * All scenes
   */
  ::ad_rss::world::SceneVector scenes;
};

} // namespace world
} // namespace ad_rss
