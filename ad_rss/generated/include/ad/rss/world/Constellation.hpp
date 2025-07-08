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
#include <memory>
#include <sstream>
#include "ad/rss/world/ConstellationType.hpp"
#include "ad/rss/world/Object.hpp"
#include "ad/rss/world/RoadArea.hpp"
#include "ad/rss/world/RssDynamics.hpp"
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
 * \brief DataType Constellation
 *
 * A Constellation defines the relation between the ego vehicle and another object. It consists of the type of
 * constellation between these two, the objects rss dynamics and the corresponding road areas of interest. All lane
 * segments on the route between ego vehicle and the object have to be part of this. RSS has to be able to calculate
 * minimum and maximum distances between ego vehicle and object as well as accelerated movements within this area.
 */
struct Constellation
{
  /*!
   * \brief Smart pointer on Constellation
   */
  typedef std::shared_ptr<Constellation> Ptr;

  /*!
   * \brief Smart pointer on constant Constellation
   */
  typedef std::shared_ptr<Constellation const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  Constellation() = default;

  /*!
   * \brief standard destructor
   */
  ~Constellation() = default;

  /*!
   * \brief standard copy constructor
   */
  Constellation(const Constellation &other) = default;

  /*!
   * \brief standard move constructor
   */
  Constellation(Constellation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Constellation
   *
   * \returns Reference to this Constellation.
   */
  Constellation &operator=(const Constellation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Constellation
   *
   * \returns Reference to this Constellation.
   */
  Constellation &operator=(Constellation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Constellation
   *
   * \returns \c true if both Constellation are equal
   */
  bool operator==(const Constellation &other) const
  {
    return (constellation_type == other.constellation_type) && (ego_vehicle == other.ego_vehicle)
      && (ego_vehicle_rss_dynamics == other.ego_vehicle_rss_dynamics) && (object == other.object)
      && (object_rss_dynamics == other.object_rss_dynamics) && (intersecting_road == other.intersecting_road)
      && (ego_vehicle_road == other.ego_vehicle_road);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Constellation.
   *
   * \returns \c true if both Constellation are different
   */
  bool operator!=(const Constellation &other) const
  {
    return !operator==(other);
  }

  /*!
   * The type of the current constellation. Depending on this type the other fields of the RssArea might be left empty.
   */
  ::ad::rss::world::ConstellationType constellation_type{::ad::rss::world::ConstellationType::SameDirection};

  /*!
   * The ego vehicle in the context of this constellation.
   */
  ::ad::rss::world::Object ego_vehicle;

  /*!
   * Defines the ego vehicle dynamics to be applied.
   * This parameters are provided on a per constellation basis to be able to adapt these
   * e.g. in respect to object type.
   */
  ::ad::rss::world::RssDynamics ego_vehicle_rss_dynamics;

  /*!
   * The object this constellation refers to.
   */
  ::ad::rss::world::Object object;

  /*!
   * Defines the objects dynamics to be applied. This parameters are provided on a per object basis to be able to adapt
   * these e.g. in respect to object type or the weather conditions.
   */
  ::ad::rss::world::RssDynamics object_rss_dynamics;

  /*!
   * The RssRoadArea an intersecting vehicle is driving in. The driving direction of the intersecting vehicle define the
   * ordering of the road segments. The road area should contain all neigboring lanes the other vehcile is able to drive
   * in.  In non-intersection constellations this road area is empty.
   */
  ::ad::rss::world::RoadArea intersecting_road;

  /*!
   * The RssRoadArea the ego vehicle is driving in. The driving direction of the ego vehicle define the ordering of the
   * road segments. In non-intersection constellations the object is also driving in this road area.
   */
  ::ad::rss::world::RoadArea ego_vehicle_road;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_CONSTELLATION
#define GEN_GUARD_AD_RSS_WORLD_CONSTELLATION
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
 * \param[in] _value Constellation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Constellation const &_value)
{
  os << "Constellation(";
  os << "constellation_type:";
  os << _value.constellation_type;
  os << ",";
  os << "ego_vehicle:";
  os << _value.ego_vehicle;
  os << ",";
  os << "ego_vehicle_rss_dynamics:";
  os << _value.ego_vehicle_rss_dynamics;
  os << ",";
  os << "object:";
  os << _value.object;
  os << ",";
  os << "object_rss_dynamics:";
  os << _value.object_rss_dynamics;
  os << ",";
  os << "intersecting_road:";
  os << _value.intersecting_road;
  os << ",";
  os << "ego_vehicle_road:";
  os << _value.ego_vehicle_road;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for Constellation
 */
inline std::string to_string(::ad::rss::world::Constellation const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::Constellation> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::Constellation const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_CONSTELLATION
