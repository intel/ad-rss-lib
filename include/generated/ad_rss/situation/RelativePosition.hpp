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
#include "ad_rss/situation/LateralRelativePosition.hpp"
#include "ad_rss/situation/LongitudinalRelativePosition.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType RelativePosition
 *
 * Describes the relative position between two objects within their situation coordinate system.
 */
struct RelativePosition
{
  /*!
   * \brief standard constructor
   */
  RelativePosition() = default;

  /*!
   * \brief standard destructor
   */
  ~RelativePosition() = default;

  /*!
   * \brief standard copy constructor
   */
  RelativePosition(const RelativePosition &other) = default;

  /*!
   * \brief standard move constructor
   */
  RelativePosition(RelativePosition &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(const RelativePosition &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(RelativePosition &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns \c true if both RelativePosition are equal
   */
  bool operator==(const RelativePosition &other) const
  {
    return (longitudinalPosition == other.longitudinalPosition) && (longitudinalDistance == other.longitudinalDistance)
      && (lateralPosition == other.lateralPosition) && (lateralDistance == other.lateralDistance);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition.
   *
   * \returns \c true if both RelativePosition are different
   */
  bool operator!=(const RelativePosition &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal relative position between to objects within their situation coordinate system.
   */
  ::ad_rss::situation::LongitudinalRelativePosition longitudinalPosition{
    ::ad_rss::situation::LongitudinalRelativePosition::Overlap};

  /*!
   * The longitudinal distance between the two objects within their situation coordinate system.
   */
  ::ad_rss::physics::Distance longitudinalDistance{0.0};

  /*!
   * The lateral relative position between to objects within their situation coordinate system.
   */
  ::ad_rss::situation::LateralRelativePosition lateralPosition{::ad_rss::situation::LateralRelativePosition::Overlap};

  /*!
   * The lateral distance between the two objects within their situation coordinate system.
   */
  ::ad_rss::physics::Distance lateralDistance{0.0};
};

} // namespace situation
} // namespace ad_rss
