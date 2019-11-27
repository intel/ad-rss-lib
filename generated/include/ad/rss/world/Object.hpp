/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1878
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/rss/world/ObjectId.hpp"
#include "ad/rss/world/ObjectType.hpp"
#include "ad/rss/world/OccupiedRegionVector.hpp"
#include "ad/rss/world/Velocity.hpp"
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
 * \brief DataType Object
 *
 * An object is described by several aspects: the unique id of an object, the type of the object, the lane regions the
 * object occupies, the objects velocity within its lane.
 */
struct Object
{
  using Ptr = std::shared_ptr<Object>;
  using ConstPtr = std::shared_ptr<Object const>;

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
  ::ad::rss::world::ObjectId objectId;

  /*!
   * Defines the type of the object.
   */
  ::ad::rss::world::ObjectType objectType{::ad::rss::world::ObjectType::Invalid};

  /*!
   * Defines the lane regions the object occupies.
   */
  ::ad::rss::world::OccupiedRegionVector occupiedRegions;

  /*!
   * Defines the objects velocity in respect to its current major lane.
   */
  ::ad::rss::world::Velocity velocity;
};

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_WORLD_OBJECT
#define OSTREAM_AD_RSS_WORLD_OBJECT
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

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value Object value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Object const &_value)
{
  os << "Object(";
  os << "objectId:";
  os << _value.objectId;
  os << ",";
  os << "objectType:";
  os << _value.objectType;
  os << ",";
  os << "occupiedRegions:";
  os << _value.occupiedRegions;
  os << ",";
  os << "velocity:";
  os << _value.velocity;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_WORLD_OBJECT
