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
 * @file
 *
 */

#pragma once
#include <limits>

#include <cstdint>
#include <memory>
#include "rss/world/LaneDrivingDirection.hpp"
#include "rss/world/LaneSegmentId.hpp"
#include "rss/world/LaneSegmentType.hpp"
#include "rss/world/MetricRange.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
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
  ::rss::world::LaneSegmentId id;                                            /*!< The id of the lane segment. */
  ::rss::world::LaneSegmentType type{::rss::world::LaneSegmentType::Normal}; /*!< The type of this lane segment in
                                                                                context of the RssArea it belongs to. */
  ::rss::world::LaneDrivingDirection drivingDirection{
    ::rss::world::LaneDrivingDirection::Bidirectional}; /*!< The nominal direction of the traffic flow of this lane
                                                           segment in context of the RssArea it belongs to. */
  ::rss::world::MetricRange length;                     /*!< The metric range of the lane segments length. */
  ::rss::world::MetricRange width;                      /*!< The metric range of the lane segments width. */
};

} // namespace world
} // namespace rss
