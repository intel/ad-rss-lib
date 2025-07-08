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
#include "ad/rss/map/RssConstellationCreationMode.hpp"
#include "ad/rss/map/RssRestrictSpeedLimitMode.hpp"
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
 * @brief namespace map
 */
namespace map {

/*!
 * \brief DataType RssConstellationConfiguration
 */
struct RssConstellationConfiguration
{
  /*!
   * \brief Smart pointer on RssConstellationConfiguration
   */
  typedef std::shared_ptr<RssConstellationConfiguration> Ptr;

  /*!
   * \brief Smart pointer on constant RssConstellationConfiguration
   */
  typedef std::shared_ptr<RssConstellationConfiguration const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssConstellationConfiguration() = default;

  /*!
   * \brief standard destructor
   */
  ~RssConstellationConfiguration() = default;

  /*!
   * \brief standard copy constructor
   */
  RssConstellationConfiguration(const RssConstellationConfiguration &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssConstellationConfiguration(RssConstellationConfiguration &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssConstellationConfiguration
   *
   * \returns Reference to this RssConstellationConfiguration.
   */
  RssConstellationConfiguration &operator=(const RssConstellationConfiguration &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssConstellationConfiguration
   *
   * \returns Reference to this RssConstellationConfiguration.
   */
  RssConstellationConfiguration &operator=(RssConstellationConfiguration &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssConstellationConfiguration
   *
   * \returns \c true if both RssConstellationConfiguration are equal
   */
  bool operator==(const RssConstellationConfiguration &other) const
  {
    return (constellation_creation_mode == other.constellation_creation_mode)
      && (restrict_speed_limit_mode == other.restrict_speed_limit_mode)
      && (ego_vehicle_dynamics == other.ego_vehicle_dynamics) && (object_dynamics == other.object_dynamics);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssConstellationConfiguration.
   *
   * \returns \c true if both RssConstellationConfiguration are different
   */
  bool operator!=(const RssConstellationConfiguration &other) const
  {
    return !operator==(other);
  }

  /*!
   * The mode to be considered on scene creation of this constellation.
   */
  ::ad::rss::map::RssConstellationCreationMode constellation_creation_mode{
    ::ad::rss::map::RssConstellationCreationMode::Ignore};

  /*!
   * The mode for restricting speed limits within acceleration phase.
   */
  ::ad::rss::map::RssRestrictSpeedLimitMode restrict_speed_limit_mode{::ad::rss::map::RssRestrictSpeedLimitMode::None};

  /*!
   * The RSS dynamics to be used for the ego vehicle in this constellation.
   */
  ::ad::rss::world::RssDynamics ego_vehicle_dynamics;

  /*!
   * The RSS dynamics to be used for the other object in this constellation.
   */
  ::ad::rss::world::RssDynamics object_dynamics;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSCONSTELLATIONCONFIGURATION
#define GEN_GUARD_AD_RSS_MAP_RSSCONSTELLATIONCONFIGURATION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssConstellationConfiguration value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssConstellationConfiguration const &_value)
{
  os << "RssConstellationConfiguration(";
  os << "constellation_creation_mode:";
  os << _value.constellation_creation_mode;
  os << ",";
  os << "restrict_speed_limit_mode:";
  os << _value.restrict_speed_limit_mode;
  os << ",";
  os << "ego_vehicle_dynamics:";
  os << _value.ego_vehicle_dynamics;
  os << ",";
  os << "object_dynamics:";
  os << _value.object_dynamics;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssConstellationConfiguration
 */
inline std::string to_string(::ad::rss::map::RssConstellationConfiguration const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssConstellationConfiguration> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssConstellationConfiguration const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSCONSTELLATIONCONFIGURATION
