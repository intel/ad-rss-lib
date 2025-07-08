/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/world/ObjectId.hpp"
#include "ad/rss/world/ObjectState.hpp"
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
 * object occupies, the objects velocity within its lane and its state.
 */
struct Object
{
  /*!
   * \brief Smart pointer on Object
   */
  typedef std::shared_ptr<Object> Ptr;

  /*!
   * \brief Smart pointer on constant Object
   */
  typedef std::shared_ptr<Object const> ConstPtr;

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
    return (object_id == other.object_id) && (object_type == other.object_type)
      && (occupied_regions == other.occupied_regions) && (velocity == other.velocity) && (state == other.state);
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
  ::ad::rss::world::ObjectId object_id;

  /*!
   * Defines the type of the object.
   */
  ::ad::rss::world::ObjectType object_type{::ad::rss::world::ObjectType::Invalid};

  /*!
   * Defines the lane regions the object occupies.
   */
  ::ad::rss::world::OccupiedRegionVector occupied_regions;

  /*!
   * Defines the objects velocity in respect to its current major lane.
   */
  ::ad::rss::world::Velocity velocity;

  /*!
   * Defines the state of the object in respect to a reference coordinate system (e.g. ENU)
   */
  ::ad::rss::world::ObjectState state;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_OBJECT
#define GEN_GUARD_AD_RSS_WORLD_OBJECT
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
 * \param[in] os The output stream to write to
 * \param[in] _value Object value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Object const &_value)
{
  os << "Object(";
  os << "object_id:";
  os << _value.object_id;
  os << ",";
  os << "object_type:";
  os << _value.object_type;
  os << ",";
  os << "occupied_regions:";
  os << _value.occupied_regions;
  os << ",";
  os << "velocity:";
  os << _value.velocity;
  os << ",";
  os << "state:";
  os << _value.state;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for Object
 */
inline std::string to_string(::ad::rss::world::Object const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::Object> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::Object const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_OBJECT
