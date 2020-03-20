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
 * Generator Version : 11.0.0-1917
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
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
 * Defines the velocity of an object within its current lane. The velocity consists
 * of a longitudinal and a lateral component.
 * Both allow to provide a range with minimum and maximum value to allow for variations
 * when measuring the velocity at different points within the vehicle i.e. in respect
 * to the lane within curves.
 */
struct Velocity
{
  /*!
   * \brief Smart pointer on Velocity
   */
  typedef std::shared_ptr<Velocity> Ptr;

  /*!
   * \brief Smart pointer on constant Velocity
   */
  typedef std::shared_ptr<Velocity const> ConstPtr;

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
    return (speedLonMin == other.speedLonMin) && (speedLonMax == other.speedLonMax)
      && (speedLatMin == other.speedLatMin) && (speedLatMax == other.speedLatMax);
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
   * The range minimum of the longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::Speed speedLonMin{0.};

  /*!
   * The range maximum of the longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::Speed speedLonMax{100.};

  /*!
   * The range minimum of the lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::Speed speedLatMin{-100.};

  /*!
   * The range maximum of the lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::Speed speedLatMax{100.};
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_VELOCITY
#define GEN_GUARD_AD_RSS_WORLD_VELOCITY
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
 * \param[in] _value Velocity value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Velocity const &_value)
{
  os << "Velocity(";
  os << "speedLonMin:";
  os << _value.speedLonMin;
  os << ",";
  os << "speedLonMax:";
  os << _value.speedLonMax;
  os << ",";
  os << "speedLatMin:";
  os << _value.speedLatMin;
  os << ",";
  os << "speedLatMax:";
  os << _value.speedLatMax;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for Velocity
 */
inline std::string to_string(::ad::rss::world::Velocity const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_VELOCITY
