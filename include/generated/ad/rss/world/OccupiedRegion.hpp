/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
#include "ad/physics/ParametricRange.hpp"
#include "ad/rss/world/LaneSegmentId.hpp"
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
 * \brief DataType OccupiedRegion
 *
 * Describes the region that an object covers within a lane segment.
 * An object on a lane is described by the parametric range it spans in each of the
 * two lane segment directions.
 */
struct OccupiedRegion
{
  using Ptr = std::shared_ptr<OccupiedRegion>;
  using ConstPtr = std::shared_ptr<OccupiedRegion const>;

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
  ::ad::rss::world::LaneSegmentId segmentId;

  /*!
   * The parametric range an object spans in longitudinal direction within a lane segment.
   */
  ::ad::physics::ParametricRange lonRange;

  /*!
   * The parametric range an object spans in lateral direction within a lane segment.
   */
  ::ad::physics::ParametricRange latRange;
};

} // namespace world
} // namespace rss
} // namespace ad
