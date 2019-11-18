// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "ad_rss/physics/Acceleration.hpp"
#include "ad_rss/physics/Duration.hpp"

/*!
 * @brief namespace rss
 */
namespace ad_rss {

const physics::Duration cResponseTimeEgoVehicle(1.);    /*!< Response time of the ego vehicle in seconds. */
const physics::Duration cResponseTimeOtherVehicles(2.); /*!< Response time of non-ego vehicles in seconds. */

const physics::Acceleration cMaximumLongitudinalAcceleration(3.5);
const physics::Acceleration cMinimumLongitudinalBrakingDeceleleration(4);
const physics::Acceleration cMaximumLongitudinalBrakingDeceleleration(8);
const physics::Acceleration cMinimumLongitudinalBrakingDecelelerationCorrect(3);

const physics::Acceleration cMaximumLateralAcceleration(0.2);
const physics::Acceleration cMinimumLateralBrakingDeceleleration(0.8);

} // namespace ad_rss
