/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Angle.hpp"
#include "ad/physics/AngularVelocity.hpp"
#include "ad/physics/Dimension2D.hpp"
#include "ad/physics/Distance2D.hpp"
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
 * \brief DataType ObjectState
 *
 * State of an object
 */
struct ObjectState
{
  /*!
   * \brief Smart pointer on ObjectState
   */
  typedef std::shared_ptr<ObjectState> Ptr;

  /*!
   * \brief Smart pointer on constant ObjectState
   */
  typedef std::shared_ptr<ObjectState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  ObjectState() = default;

  /*!
   * \brief standard destructor
   */
  ~ObjectState() = default;

  /*!
   * \brief standard copy constructor
   */
  ObjectState(const ObjectState &other) = default;

  /*!
   * \brief standard move constructor
   */
  ObjectState(ObjectState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns Reference to this ObjectState.
   */
  ObjectState &operator=(const ObjectState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns Reference to this ObjectState.
   */
  ObjectState &operator=(ObjectState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ObjectState
   *
   * \returns \c true if both ObjectState are equal
   */
  bool operator==(const ObjectState &other) const
  {
    return (yaw == other.yaw) && (dimension == other.dimension) && (yawRate == other.yawRate)
      && (centerPoint == other.centerPoint) && (speed == other.speed);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ObjectState.
   *
   * \returns \c true if both ObjectState are different
   */
  bool operator!=(const ObjectState &other) const
  {
    return !operator==(other);
  }

  ::ad::physics::Angle yaw;
  ::ad::physics::Dimension2D dimension;
  ::ad::physics::AngularVelocity yawRate;
  ::ad::physics::Distance2D centerPoint;
  ::ad::physics::Speed speed;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE
#define GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE
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
 * \param[in] _value ObjectState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, ObjectState const &_value)
{
  os << "ObjectState(";
  os << "yaw:";
  os << _value.yaw;
  os << ",";
  os << "dimension:";
  os << _value.dimension;
  os << ",";
  os << "yawRate:";
  os << _value.yawRate;
  os << ",";
  os << "centerPoint:";
  os << _value.centerPoint;
  os << ",";
  os << "speed:";
  os << _value.speed;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for ObjectState
 */
inline std::string to_string(::ad::rss::world::ObjectState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_OBJECTSTATE