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
#include <memory>
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/world/Dynamics.hpp"
#include "ad_rss/world/Velocity.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType VehicleState
 *
 * The state of an object in a RSS situation.
 * The state consists of the following components in respect to the situation coordinate
 * system: the velocity, the distance to the intersection (if applicable), the dynamics,
 * the response time, a Right-of-Way priority flag as well as a flag stating if the
 * vehicle is driving in its correct lane.
 */
struct VehicleState
{
  /*!
   * The situation specific velocity.
   */
  ::ad_rss::world::Velocity velocity;

  /*!
   * The situation specific dynamics.
   */
  ::ad_rss::world::Dynamics dynamics;

  /*!
   * The situation specific response time.
   */
  ::ad_rss::physics::Duration responseTime{0.0};

  /*!
   * Flag indicating if the situation specific Right-of-Way relation.
   */
  bool hasPriority{false};

  /*!
   * Flag indicating if the vehicle driving in the correct lane
   */
  bool isInCorrectLane{false};

  /*!
   * The minimum distance to be covered by the vehicle to enter the intersection.
   */
  ::ad_rss::physics::Distance distanceToEnterIntersection{std::numeric_limits<::ad_rss::physics::Distance>::max()};

  /*!
   * The maximum distance to cover by the vehicle to leave the intersection completely.
   */
  ::ad_rss::physics::Distance distanceToLeaveIntersection{std::numeric_limits<::ad_rss::physics::Distance>::max()};
};

} // namespace situation
} // namespace ad_rss
