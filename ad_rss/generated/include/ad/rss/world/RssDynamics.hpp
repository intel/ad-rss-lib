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
    return (alphaLon == other.alphaLon) && (alphaLat == other.alphaLat)
      && (lateralFluctuationMargin == other.lateralFluctuationMargin) && (responseTime == other.responseTime)
      && (maxSpeedOnAcceleration == other.maxSpeedOnAcceleration)
      && (unstructuredSettings == other.unstructuredSettings);
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
  ::ad::rss::world::LongitudinalRssAccelerationValues alphaLon;

  /*!
   * RSS dynamics values along lateral coordinate system axis.
   */
  ::ad::rss::world::LateralRssAccelerationValues alphaLat;

  /*!
   * Defines the lateral fluctuation margin to be taken into account.
   */
  ::ad::physics::Distance lateralFluctuationMargin{0.0};

  /*!
   * Defines the response time of the object to be considered.
   */
  ::ad::physics::Duration responseTime;

  /*!
   * Defines the maximum speed of the object to be considered while acceleration within
   * the response time. The acceleration will be stopped if this speed limit is reached.
   * In case the speed before the acceleration is already higher or equal to this value,
   * no further acceleration will take place during the response time (in this case
   * speed before response time == speed after response time).
   */
  ::ad::physics::Speed maxSpeedOnAcceleration{100};

  /*!
   * Settings to be considered for evaluation in unstructured mode.
   */
  ::ad::rss::world::UnstructuredSettings unstructuredSettings;
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
  os << "alphaLon:";
  os << _value.alphaLon;
  os << ",";
  os << "alphaLat:";
  os << _value.alphaLat;
  os << ",";
  os << "lateralFluctuationMargin:";
  os << _value.lateralFluctuationMargin;
  os << ",";
  os << "responseTime:";
  os << _value.responseTime;
  os << ",";
  os << "maxSpeedOnAcceleration:";
  os << _value.maxSpeedOnAcceleration;
  os << ",";
  os << "unstructuredSettings:";
  os << _value.unstructuredSettings;
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
#endif // GEN_GUARD_AD_RSS_WORLD_RSSDYNAMICS
