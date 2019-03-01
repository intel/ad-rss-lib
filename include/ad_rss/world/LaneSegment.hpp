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

#include <cstdint>
#include <limits>
#include <memory>
#include "ad_rss/physics/MetricRange.hpp"
#include "ad_rss/world/LaneDrivingDirection.hpp"
#include "ad_rss/world/LaneSegmentId.hpp"
#include "ad_rss/world/LaneSegmentType.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType LaneSegment
 *
 * Defines a lane segment.
 */
struct LaneSegment
{
  /*!
   * The id of the lane segment.
   */
  ::ad_rss::world::LaneSegmentId id;

  /*!
   * The type of this lane segment in context of the RssArea it belongs to.
   */
  ::ad_rss::world::LaneSegmentType type{::ad_rss::world::LaneSegmentType::Normal};

  /*!
   * The nominal direction of the traffic flow of this lane segment in context of the RssArea it belongs to.
   */
  ::ad_rss::world::LaneDrivingDirection drivingDirection{::ad_rss::world::LaneDrivingDirection::Bidirectional};

  /*!
   * The metric range of the lane segments length.
   */
  ::ad_rss::physics::MetricRange length;

  /*!
   * The metric range of the lane segments width.
   */
  ::ad_rss::physics::MetricRange width;
};

} // namespace world
} // namespace ad_rss
