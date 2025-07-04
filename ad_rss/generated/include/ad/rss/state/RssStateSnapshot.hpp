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
#include "ad/rss/state/RssStateVector.hpp"
#include "ad/rss/state/UnstructuredConstellationStateInformation.hpp"
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
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType RssStateSnapshot
 *
 * The current snapshot of individual constellation responses RSS calculated from the ConstellationSnapshot.
 */
struct RssStateSnapshot
{
  /*!
   * \brief Smart pointer on RssStateSnapshot
   */
  typedef std::shared_ptr<RssStateSnapshot> Ptr;

  /*!
   * \brief Smart pointer on constant RssStateSnapshot
   */
  typedef std::shared_ptr<RssStateSnapshot const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssStateSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~RssStateSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  RssStateSnapshot(const RssStateSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssStateSnapshot(RssStateSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(const RssStateSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(RssStateSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns \c true if both RssStateSnapshot are equal
   */
  bool operator==(const RssStateSnapshot &other) const
  {
    return (time_index == other.time_index)
      && (default_ego_vehicle_rss_dynamics == other.default_ego_vehicle_rss_dynamics)
      && (individual_responses == other.individual_responses)
      && (unstructured_constellation_ego_information == other.unstructured_constellation_ego_information);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot.
   *
   * \returns \c true if both RssStateSnapshot are different
   */
  bool operator!=(const RssStateSnapshot &other) const
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
   * The vector holding the RSS states of the individual constellations considered.
   */
  ::ad::rss::state::RssStateVector individual_responses;

  /*!
   * Additional information on the ego vehicle unstructured constellation calculation.
   */
  ::ad::rss::state::UnstructuredConstellationStateInformation unstructured_constellation_ego_information;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
#define GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssStateSnapshot value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateSnapshot const &_value)
{
  os << "RssStateSnapshot(";
  os << "time_index:";
  os << _value.time_index;
  os << ",";
  os << "default_ego_vehicle_rss_dynamics:";
  os << _value.default_ego_vehicle_rss_dynamics;
  os << ",";
  os << "individual_responses:";
  os << _value.individual_responses;
  os << ",";
  os << "unstructured_constellation_ego_information:";
  os << _value.unstructured_constellation_ego_information;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssStateSnapshot
 */
inline std::string to_string(::ad::rss::state::RssStateSnapshot const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::RssStateSnapshot> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::RssStateSnapshot const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
