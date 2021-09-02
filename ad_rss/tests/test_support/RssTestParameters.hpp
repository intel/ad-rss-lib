// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "ad/physics/Acceleration.hpp"
#include "ad/physics/Duration.hpp"
#include "ad/physics/Speed.hpp"

/*!
 * @brief namespace rss
 */
namespace ad {
namespace rss {

const physics::Duration cResponseTimeEgoVehicle(1.);    /*!< Response time of the ego vehicle in seconds. */
const physics::Duration cResponseTimeOtherVehicles(2.); /*!< Response time of non-ego vehicles in seconds. */

const physics::Acceleration cMaximumLongitudinalAcceleration(3.5);
const physics::Acceleration cMinimumLongitudinalBrakingDeceleleration(-4);
const physics::Acceleration cMaximumLongitudinalBrakingDeceleleration(-8);
const physics::Acceleration cMinimumLongitudinalBrakingDecelelerationCorrect(-3);

const physics::Acceleration cMaximumLateralAcceleration(0.2);
const physics::Acceleration cMinimumLateralBrakingDeceleleration(-0.8);

const physics::Speed cMaxSpeedOnAcceleration(100.);

} // namespace rss
} // namespace ad
