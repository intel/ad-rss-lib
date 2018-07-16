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
#pragma once

#include "rss_core/RSSTypes.hpp"

namespace rss_core {

const Duration cResponseTimeEgoVehicle = 1;            // seconds
const Duration cResponseTimeOtherVehicles = 2;         // seconds
const Acceleration cMaximumAcceleration = 3.5;         // m/s^2 this might need to be changed to be velocity dependent
const Acceleration cMinimumBreakingDeceleleration = 4; // m/s^2
const Acceleration cMaximumBreakingDeceleleration = 8; // m/s^2

} // namespace rss_core
