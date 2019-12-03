/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/physics/Distance.hpp"
#include "ad/physics/Duration.hpp"
#include "ad/physics/Speed.hpp"
#include "ad/rss/world/LateralRssAccelerationValues.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"
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
  using Ptr = std::shared_ptr<RssDynamics>;
  using ConstPtr = std::shared_ptr<RssDynamics const>;

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
      && (maxSpeed == other.maxSpeed);
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
   * Defines the maximum speed of the object.
   */
  ::ad::physics::Speed maxSpeed{100};
};

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_WORLD_RSSDYNAMICS
#define OSTREAM_AD_RSS_WORLD_RSSDYNAMICS
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
 * \param[in] stream The output stream to write to
 * \param[in] value RssDynamics value
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
  os << "maxSpeed:";
  os << _value.maxSpeed;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_WORLD_RSSDYNAMICS
