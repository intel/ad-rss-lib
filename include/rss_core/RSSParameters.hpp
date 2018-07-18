// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "rss_core/RSSTypes.hpp"

namespace rss_core {

const Duration cResponseTimeEgoVehicle = 1;            /*!< Response time of the ego vehicle in seconds. */
const Duration cResponseTimeOtherVehicles = 2;         /*!< Response time of non-ego vehicles in seconds. */
const Acceleration cMaximumAcceleration = 3.5;         /*!< Maximum allowed acceleration in m/s^2. */
                                                       /*!< This might need to be changed to be speed dependent. */
const Acceleration cMinimumBreakingDeceleleration = 4; /*!< Minimum breaking force applied in m/s^2. */
const Acceleration cMaximumBreakingDeceleleration = 8; /*!< Maximum breaking force applied in m/s^2. */
const Acceleration cMinimumBreakingDecelelerationCorrect = 3; /*!< Minimum correct breaking force applied in m/s^2. */

} // namespace rss_core
