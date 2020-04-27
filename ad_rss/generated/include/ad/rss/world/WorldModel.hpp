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
#include "ad/rss/world/RssDynamics.hpp"
#include "ad/rss/world/SceneVector.hpp"
#include "ad/rss/world/TimeIndex.hpp"
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
 * \brief DataType WorldModel
 *
 * The world model, RSS requires as input, consists of a timeIndex, the egoVehicleDynamics and object description as
 * well as the list of relevant scenes.
 */
struct WorldModel
{
  /*!
   * \brief Smart pointer on WorldModel
   */
  typedef std::shared_ptr<WorldModel> Ptr;

  /*!
   * \brief Smart pointer on constant WorldModel
   */
  typedef std::shared_ptr<WorldModel const> ConstPtr;

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
    return (timeIndex == other.timeIndex) && (defaultEgoVehicleRssDynamics == other.defaultEgoVehicleRssDynamics)
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
  ::ad::rss::world::TimeIndex timeIndex{0u};

  /*!
   * Defines the standard ego vehicle dynamics to be applied i.e. when there is no  dangerous
   * scene.
   * This parameters are provided in addtion on a per situation basis to be able to adapt
   * these e.g. in respect to object type or the weather conditions
   */
  ::ad::rss::world::RssDynamics defaultEgoVehicleRssDynamics;

  /*!
   * All scenes
   */
  ::ad::rss::world::SceneVector scenes;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_WORLDMODEL
#define GEN_GUARD_AD_RSS_WORLD_WORLDMODEL
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
 * \param[in] _value WorldModel value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, WorldModel const &_value)
{
  os << "WorldModel(";
  os << "timeIndex:";
  os << _value.timeIndex;
  os << ",";
  os << "defaultEgoVehicleRssDynamics:";
  os << _value.defaultEgoVehicleRssDynamics;
  os << ",";
  os << "scenes:";
  os << _value.scenes;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for WorldModel
 */
inline std::string to_string(::ad::rss::world::WorldModel const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_WORLDMODEL
