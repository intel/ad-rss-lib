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

#include <cstdint>
#include <limits>
#include <memory>
#include "ad_rss/physics/ParametricRange.hpp"
#include "ad_rss/world/LaneSegmentId.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType OccupiedRegion
 *
 * Describes the region that an object covers within a lane segment.
 * An object on a lane is described by the parametric range it spans in each of the
 * two lane segment directions.
 */
struct OccupiedRegion
{
  /*!
   * \brief standard constructor
   */
  OccupiedRegion() = default;

  /*!
   * \brief standard destructor
   */
  ~OccupiedRegion() = default;

  /*!
   * \brief standard copy constructor
   */
  OccupiedRegion(const OccupiedRegion &other) = default;

  /*!
   * \brief standard move constructor
   */
  OccupiedRegion(OccupiedRegion &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns Reference to this OccupiedRegion.
   */
  OccupiedRegion &operator=(const OccupiedRegion &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns Reference to this OccupiedRegion.
   */
  OccupiedRegion &operator=(OccupiedRegion &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns \c true if both OccupiedRegion are equal
   */
  bool operator==(const OccupiedRegion &other) const
  {
    return (segmentId == other.segmentId) && (lonRange == other.lonRange) && (latRange == other.latRange);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other OccupiedRegion.
   *
   * \returns \c true if both OccupiedRegion are different
   */
  bool operator!=(const OccupiedRegion &other) const
  {
    return !operator==(other);
  }

  /*!
   * The id of the lane segment this region refers to.
   */
  ::ad_rss::world::LaneSegmentId segmentId;

  /*!
   * The parametric range an object spans in longitudinal direction within a lane segment.
   */
  ::ad_rss::physics::ParametricRange lonRange;

  /*!
   * The parametric range an object spans in lateral direction within a lane segment.
   */
  ::ad_rss::physics::ParametricRange latRange;
};

} // namespace world
} // namespace ad_rss
