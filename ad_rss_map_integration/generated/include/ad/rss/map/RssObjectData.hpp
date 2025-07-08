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

#include <chrono>
#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/map/match/Object.hpp"
#include "ad/physics/Angle.hpp"
#include "ad/physics/AngularVelocity.hpp"
#include "ad/physics/SpeedRange.hpp"
#include "ad/rss/map/TimePointOstream.hpp"
#include "ad/rss/world/ObjectId.hpp"
#include "ad/rss/world/ObjectType.hpp"
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
 * \brief DataType RssObjectData
 *
 * struct describing the object data relevant for RSS constellation creation
 */
struct RssObjectData
{
  /*!
   * \brief Smart pointer on RssObjectData
   */
  typedef std::shared_ptr<RssObjectData> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectData
   */
  typedef std::shared_ptr<RssObjectData const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssObjectData() = default;

  /*!
   * \brief standard destructor
   */
  ~RssObjectData() = default;

  /*!
   * \brief standard copy constructor
   */
  RssObjectData(const RssObjectData &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssObjectData(RssObjectData &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssObjectData
   *
   * \returns Reference to this RssObjectData.
   */
  RssObjectData &operator=(const RssObjectData &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssObjectData
   *
   * \returns Reference to this RssObjectData.
   */
  RssObjectData &operator=(RssObjectData &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectData
   *
   * \returns \c true if both RssObjectData are equal
   */
  bool operator==(const RssObjectData &other) const
  {
    return (last_update == other.last_update) && (id == other.id) && (type == other.type)
      && (match_object == other.match_object) && (speed_range == other.speed_range) && (yaw_rate == other.yaw_rate)
      && (steering_angle == other.steering_angle) && (rss_dynamics == other.rss_dynamics);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectData.
   *
   * \returns \c true if both RssObjectData are different
   */
  bool operator!=(const RssObjectData &other) const
  {
    return !operator==(other);
  }

  /*!
   * The point in time of the last update of this.
   */
  std::chrono::system_clock::time_point last_update;

  /*!
   * the object id
   */
  ::ad::rss::world::ObjectId id{0};

  /*!
   * the object type
   */
  ::ad::rss::world::ObjectType type{::ad::rss::world::ObjectType::Invalid};

  /*!
   * the object's position described by its map matched bounding box and position
   */
  ::ad::map::match::Object match_object;

  /*!
   * the object's speed provided as a range with min, max
   * to support use-cases like e.g. artifical objects with unknow speed
   */
  ::ad::physics::SpeedRange speed_range;

  /*!
   * the object's yaw rate
   */
  ::ad::physics::AngularVelocity yaw_rate;

  /*!
   * the vehicle's steering angle (only relevant for vehicles)
   */
  ::ad::physics::Angle steering_angle;

  /*!
   * the object's RssDynamics to be applied
   */
  ::ad::rss::world::RssDynamics rss_dynamics;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATA
#define GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATA
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
 * \param[in] _value RssObjectData value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssObjectData const &_value)
{
  os << "RssObjectData(";
  os << "last_update:";
  os << _value.last_update;
  os << ",";
  os << "id:";
  os << _value.id;
  os << ",";
  os << "type:";
  os << _value.type;
  os << ",";
  os << "match_object:";
  os << _value.match_object;
  os << ",";
  os << "speed_range:";
  os << _value.speed_range;
  os << ",";
  os << "yaw_rate:";
  os << _value.yaw_rate;
  os << ",";
  os << "steering_angle:";
  os << _value.steering_angle;
  os << ",";
  os << "rss_dynamics:";
  os << _value.rss_dynamics;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssObjectData
 */
inline std::string to_string(::ad::rss::map::RssObjectData const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssObjectData> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssObjectData const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSOBJECTDATA
