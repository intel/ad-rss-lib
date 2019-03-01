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
#include "ad_rss/physics/TimeIndex.hpp"
#include "ad_rss/situation/RelativePosition.hpp"
#include "ad_rss/situation/SituationId.hpp"
#include "ad_rss/situation/SituationType.hpp"
#include "ad_rss/situation/VehicleState.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType Situation
 *
 * Describes a RSS situation.
 * A situation always considers the relative relation between two objects: the ego
 * vehicle and one other vehicle. The situation coordinate system is unique for one
 * specific situation. As a consequence the vehicle state of the ego vehicle in different
 * RSS situations cannot be compared to each other. Consists of a situation id and
 * type, the VehicleState of the ego vehicle, the VehicleState of the other vehicle
 * and the RelativePosition between ego vehicle and other vehicle.
 */
struct Situation
{
  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back.
   */
  ::ad_rss::physics::TimeIndex timeIndex;

  /*!
   * The unique id of the situation.
   * The situation id has to be constant over time for a pair of ego vehicle and specific
   * other vehicle.
   * E.g. might be filled with an id identifying the other vehicle unambiguously.
   */
  ::ad_rss::situation::SituationId situationId;

  /*!
   * The type of the current situation.
   */
  ::ad_rss::situation::SituationType situationType;

  /*!
   * The vehicle state of the ego vehicle
   */
  ::ad_rss::situation::VehicleState egoVehicleState;

  /*!
   * The vehicle state of the other vehicle within the situation.
   */
  ::ad_rss::situation::VehicleState otherVehicleState;

  /*!
   * The relative position between the ego vehicle and the other vehicle within this situation.
   */
  ::ad_rss::situation::RelativePosition relativePosition;
};

} // namespace situation
} // namespace ad_rss
