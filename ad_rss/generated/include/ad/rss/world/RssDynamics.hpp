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
#include "ad/physics/Distance.hpp"
#include "ad/physics/Duration.hpp"
#include "ad/physics/Speed.hpp"
#include "ad/rss/world/LateralRssAccelerationValues.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"
#include "ad/rss/world/UnstructuredSettings.hpp"
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
 * \brief DataType RssDynamics
 *
 * Describes the RSS dynamics values to be applied for an object within the metric world frame. The dynamics consist of
 * a longitudinal component, a lateral component and a lateral fluctuation margin to be taken into account to compensate
 * for lateral fluctuations.
 */
struct RssDynamics
{
  /*!
   * \brief Smart pointer on RssDynamics
   */
  typedef std::shared_ptr<RssDynamics> Ptr;

  /*!
   * \brief Smart pointer on constant RssDynamics
   */
  typedef std::shared_ptr<RssDynamics const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssDynamics() = default;

  /*!
   * \brief standard destructor
   */
  ~RssDynamics() = default;

  /*!
   * \brief standard copy constructor
   */
  RssDynamics(const RssDynamics &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssDynamics(RssDynamics &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssDynamics
   *
   * \returns Reference to this RssDynamics.
   */
  RssDynamics &operator=(const RssDynamics &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssDynamics
   *
   * \returns Reference to this RssDynamics.
   */
  RssDynamics &operator=(RssDynamics &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssDynamics
   *
   * \returns \c true if both RssDynamics are equal
   */
  bool operator==(const RssDynamics &other) const
  {
    return (alpha_lon == other.alpha_lon) && (alpha_lat == other.alpha_lat)
      && (lateral_fluctuation_margin == other.lateral_fluctuation_margin) && (response_time == other.response_time)
      && (max_speed_on_acceleration == other.max_speed_on_acceleration)
      && (unstructured_settings == other.unstructured_settings)
      && (min_longitudinal_safety_distance == other.min_longitudinal_safety_distance);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssDynamics.
   *
   * \returns \c true if both RssDynamics are different
   */
  bool operator!=(const RssDynamics &other) const
  {
    return !operator==(other);
  }

  /*!
   * RSS dynamics values along longitudinal coordinate system axis.
   */
  ::ad::rss::world::LongitudinalRssAccelerationValues alpha_lon;

  /*!
   * RSS dynamics values along lateral coordinate system axis.
   */
  ::ad::rss::world::LateralRssAccelerationValues alpha_lat;

  /*!
   * Defines the lateral fluctuation margin to be taken into account.
   */
  ::ad::physics::Distance lateral_fluctuation_margin{0.0};

  /*!
   * Defines the response time of the object to be considered.
   */
  ::ad::physics::Duration response_time;

  /*!
   * Defines the maximum speed of the object to be considered while acceleration within
   * the response time. The acceleration will be stopped if this speed limit is reached.
   * In case the speed before the acceleration is already higher or equal to this value,
   * no further acceleration will take place during the response time (in this case
   * speed before response time == speed after response time).
   */
  ::ad::physics::Speed max_speed_on_acceleration{100};

  /*!
   * Settings to be considered for evaluation in unstructured mode.
   */
  ::ad::rss::world::UnstructuredSettings unstructured_settings;

  /*!
   * The minimum longitudinal safety distance to be applied (defaults 0.)
   * In structured case after the rss_longitudinal_safe_distance is calculated according
   * to RSS formulas, this parameter value is added to the resulting safe distance:
   * safe_distance += min_longitudinal_safety_distance,
   * in unstructured case the ego vehicle is expanded by that distance towards the front
   * before the trajectory sets are calculated.
   * Therefore, this parameter value ensures the ego to be able to brake and keep a distance
   * of min_longitudinal_safety_distance to the dangerous object or intersection area.
   */
  ::ad::physics::Distance min_longitudinal_safety_distance{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_RSSDYNAMICS
#define GEN_GUARD_AD_RSS_WORLD_RSSDYNAMICS
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
 * \param[in] _value RssDynamics value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssDynamics const &_value)
{
  os << "RssDynamics(";
  os << "alpha_lon:";
  os << _value.alpha_lon;
  os << ",";
  os << "alpha_lat:";
  os << _value.alpha_lat;
  os << ",";
  os << "lateral_fluctuation_margin:";
  os << _value.lateral_fluctuation_margin;
  os << ",";
  os << "response_time:";
  os << _value.response_time;
  os << ",";
  os << "max_speed_on_acceleration:";
  os << _value.max_speed_on_acceleration;
  os << ",";
  os << "unstructured_settings:";
  os << _value.unstructured_settings;
  os << ",";
  os << "min_longitudinal_safety_distance:";
  os << _value.min_longitudinal_safety_distance;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssDynamics
 */
inline std::string to_string(::ad::rss::world::RssDynamics const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::RssDynamics> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::RssDynamics const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_RSSDYNAMICS
