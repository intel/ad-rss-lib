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
#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/world/Dynamics.hpp"
#include "ad_rss/world/ObjectId.hpp"
#include "ad_rss/world/ObjectType.hpp"
#include "ad_rss/world/OccupiedRegionVector.hpp"
#include "ad_rss/world/Velocity.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType Object
 *
 * An object is described by several aspects: the unique id of an object, the type of the object, the lane regions the
 * object occupies, the objects velocity within its lane and finally the area of interaction of ego vehicle and the
 * object.
 */
struct Object
{
  /*!
   * \brief standard constructor
   */
  Object() = default;

  /*!
   * \brief standard destructor
   */
  ~Object() = default;

  /*!
   * \brief standard copy constructor
   */
  Object(const Object &other) = default;

  /*!
   * \brief standard move constructor
   */
  Object(Object &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Object
   *
   * \returns Reference to this Object.
   */
  Object &operator=(const Object &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Object
   *
   * \returns Reference to this Object.
   */
  Object &operator=(Object &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Object
   *
   * \returns \c true if both Object are equal
   */
  bool operator==(const Object &other) const
  {
    return (objectId == other.objectId) && (objectType == other.objectType)
      && (occupiedRegions == other.occupiedRegions) && (dynamics == other.dynamics) && (velocity == other.velocity)
      && (responseTime == other.responseTime);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Object.
   *
   * \returns \c true if both Object are different
   */
  bool operator!=(const Object &other) const
  {
    return !operator==(other);
  }

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad_rss::world::ObjectId objectId;

  /*!
   * Defines the type of the object.
   */
  ::ad_rss::world::ObjectType objectType;

  /*!
   * Defines the lane regions the object occupies.
   */
  ::ad_rss::world::OccupiedRegionVector occupiedRegions;

  /*!
   * Defines the objects dynamics to be applied. This parameters are provided on a per object basis to be able to adapt
   * these e.g. in respect to object type or the weather conditions.
   */
  ::ad_rss::world::Dynamics dynamics;

  /*!
   * Defines the objects velocity in respect to its current major lane.
   */
  ::ad_rss::world::Velocity velocity;

  /*!
   * Defines the response time of the object within the current scene.
   */
  ::ad_rss::physics::Duration responseTime;
};

} // namespace world
} // namespace ad_rss
