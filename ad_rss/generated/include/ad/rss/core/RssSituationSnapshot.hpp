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
#include "ad/rss/core/RelativeConstellationVector.hpp"
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
 * @brief namespace core
 */
namespace core {

/*!
 * \brief DataType RssSituationSnapshot
 *
 * A snapshot in time of the current relative constellations within their constellation specific lane coordinate system.
 */
struct RssSituationSnapshot
{
  /*!
   * \brief Smart pointer on RssSituationSnapshot
   */
  typedef std::shared_ptr<RssSituationSnapshot> Ptr;

  /*!
   * \brief Smart pointer on constant RssSituationSnapshot
   */
  typedef std::shared_ptr<RssSituationSnapshot const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssSituationSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~RssSituationSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  RssSituationSnapshot(const RssSituationSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssSituationSnapshot(RssSituationSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssSituationSnapshot
   *
   * \returns Reference to this RssSituationSnapshot.
   */
  RssSituationSnapshot &operator=(const RssSituationSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssSituationSnapshot
   *
   * \returns Reference to this RssSituationSnapshot.
   */
  RssSituationSnapshot &operator=(RssSituationSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssSituationSnapshot
   *
   * \returns \c true if both RssSituationSnapshot are equal
   */
  bool operator==(const RssSituationSnapshot &other) const
  {
    return (time_index == other.time_index)
      && (default_ego_vehicle_rss_dynamics == other.default_ego_vehicle_rss_dynamics)
      && (constellations == other.constellations);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssSituationSnapshot.
   *
   * \returns \c true if both RssSituationSnapshot are different
   */
  bool operator!=(const RssSituationSnapshot &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back.
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
   * The vector of constellations at a given time within their constellation specific lane coordinate system.
   */
  ::ad::rss::core::RelativeConstellationVector constellations;
};

} // namespace core
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_RSSSITUATIONSNAPSHOT
#define GEN_GUARD_AD_RSS_CORE_RSSSITUATIONSNAPSHOT
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssSituationSnapshot value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssSituationSnapshot const &_value)
{
  os << "RssSituationSnapshot(";
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

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssSituationSnapshot
 */
inline std::string to_string(::ad::rss::core::RssSituationSnapshot const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::RssSituationSnapshot> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::core::RssSituationSnapshot const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_RSSSITUATIONSNAPSHOT
