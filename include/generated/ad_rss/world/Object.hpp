/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
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
 * object occupies, the objects velocity within its lane.
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
      && (occupiedRegions == other.occupiedRegions) && (velocity == other.velocity);
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
  ::ad_rss::world::ObjectType objectType{::ad_rss::world::ObjectType::Invalid};

  /*!
   * Defines the lane regions the object occupies.
   */
  ::ad_rss::world::OccupiedRegionVector occupiedRegions;

  /*!
   * Defines the objects velocity in respect to its current major lane.
   */
  ::ad_rss::world::Velocity velocity;
};

} // namespace world
} // namespace ad_rss
