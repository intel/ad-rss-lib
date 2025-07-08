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
#include "ad/rss/core/RelativeConstellationId.hpp"
#include "ad/rss/state/LateralRssState.hpp"
#include "ad/rss/state/LongitudinalRssState.hpp"
#include "ad/rss/state/UnstructuredConstellationRssState.hpp"
#include "ad/rss/world/ConstellationType.hpp"
#include "ad/rss/world/ObjectId.hpp"
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
 * \brief DataType RssState
 *
 * Struct defining the RSS state of a single object.
 */
struct RssState
{
  /*!
   * \brief Smart pointer on RssState
   */
  typedef std::shared_ptr<RssState> Ptr;

  /*!
   * \brief Smart pointer on constant RssState
   */
  typedef std::shared_ptr<RssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssState() = default;

  /*!
   * \brief standard destructor
   */
  ~RssState() = default;

  /*!
   * \brief standard copy constructor
   */
  RssState(const RssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssState(RssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssState
   *
   * \returns Reference to this RssState.
   */
  RssState &operator=(const RssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssState
   *
   * \returns Reference to this RssState.
   */
  RssState &operator=(RssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssState
   *
   * \returns \c true if both RssState are equal
   */
  bool operator==(const RssState &other) const
  {
    return (ego_id == other.ego_id) && (object_id == other.object_id) && (constellation_id == other.constellation_id)
      && (longitudinal_state == other.longitudinal_state) && (lateral_state_right == other.lateral_state_right)
      && (lateral_state_left == other.lateral_state_left)
      && (unstructured_constellation_state == other.unstructured_constellation_state)
      && (constellation_type == other.constellation_type);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssState.
   *
   * \returns \c true if both RssState are different
   */
  bool operator!=(const RssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Defines the unique id of the ego. This id has to be constant over time.
   */
  ::ad::rss::world::ObjectId ego_id{0};

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad::rss::world::ObjectId object_id;

  /*!
   * Id of the constellation this state refers to.
   * The id has to remain unique over time representing the constellation (ego-vehicle
   * / object pair) under investigation.
   * It is used to track the state of the ego-vehicle / object constellation i.e. at
   * point of danger threshold time.
   */
  ::ad::rss::core::RelativeConstellationId constellation_id{0u};

  /*!
   * The current longitudinal rss state.
   */
  ::ad::rss::state::LongitudinalRssState longitudinal_state;

  /*!
   * The current lateral rss state at right side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralRssState lateral_state_right;

  /*!
   * The current lateral rss state at left side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralRssState lateral_state_left;

  /*!
   * The state of the unstructured constellation.
   */
  ::ad::rss::state::UnstructuredConstellationRssState unstructured_constellation_state;

  /*!
   * This type of constellation this RssState was calculated on.
   */
  ::ad::rss::world::ConstellationType constellation_type;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATE
#define GEN_GUARD_AD_RSS_STATE_RSSSTATE
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
 * \param[in] _value RssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssState const &_value)
{
  os << "RssState(";
  os << "ego_id:";
  os << _value.ego_id;
  os << ",";
  os << "object_id:";
  os << _value.object_id;
  os << ",";
  os << "constellation_id:";
  os << _value.constellation_id;
  os << ",";
  os << "longitudinal_state:";
  os << _value.longitudinal_state;
  os << ",";
  os << "lateral_state_right:";
  os << _value.lateral_state_right;
  os << ",";
  os << "lateral_state_left:";
  os << _value.lateral_state_left;
  os << ",";
  os << "unstructured_constellation_state:";
  os << _value.unstructured_constellation_state;
  os << ",";
  os << "constellation_type:";
  os << _value.constellation_type;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssState
 */
inline std::string to_string(::ad::rss::state::RssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::RssState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::RssState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATE
