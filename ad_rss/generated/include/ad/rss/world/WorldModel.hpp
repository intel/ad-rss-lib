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
#include "ad/rss/world/ConstellationVector.hpp"
#include "ad/rss/world/RssDynamics.hpp"
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
 * The world model RSS requires as input describing a situation consisting of a time_index, the ego_vehicle_dynamics and
 * object description as well as the list of relevant constellations.
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
    return (time_index == other.time_index)
      && (default_ego_vehicle_rss_dynamics == other.default_ego_vehicle_rss_dynamics)
      && (constellations == other.constellations);
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
  ::ad::rss::world::TimeIndex time_index{0u};

  /*!
   * Defines the standard ego vehicle dynamics to be applied i.e. when there is no  dangerous
   * constellation.
   * This parameters are provided in addtion on a per constellation basis to be able
   * to adapt these e.g. in respect to object type or the weather conditions
   */
  ::ad::rss::world::RssDynamics default_ego_vehicle_rss_dynamics;

  /*!
   * All constellations.
   */
  ::ad::rss::world::ConstellationVector constellations;
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
  os << "time_index:";
  os << _value.time_index;
  os << ",";
  os << "default_ego_vehicle_rss_dynamics:";
  os << _value.default_ego_vehicle_rss_dynamics;
  os << ",";
  os << "constellations:";
  os << _value.constellations;
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

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::WorldModel> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::WorldModel const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_WORLDMODEL
