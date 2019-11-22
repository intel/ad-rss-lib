/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <limits>
#include <memory>
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/world/LateralRssAccelerationValues.hpp"
#include "ad_rss/world/LongitudinalRssAccelerationValues.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
      && (lateralFluctuationMargin == other.lateralFluctuationMargin) && (responseTime == other.responseTime);
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
  ::ad_rss::world::LongitudinalRssAccelerationValues alphaLon;

  /*!
   * RSS dynamics values along lateral coordinate system axis.
   */
  ::ad_rss::world::LateralRssAccelerationValues alphaLat;

  /*!
   * Defines the lateral fluctuation margin to be taken into account.
   */
  ::ad_rss::physics::Distance lateralFluctuationMargin{0.0};

  /*!
   * Defines the response time of the object to be considered.
   */
  ::ad_rss::physics::Duration responseTime;
};

} // namespace world
} // namespace ad_rss
