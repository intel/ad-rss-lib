/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * INTEL CONFIDENTIAL
 *
 * Copyright (c) 2018 Intel Corporation
 *
 * This software and the related documents are Intel copyrighted materials, and
 * your use of them is governed by the express license under which they were
 * provided to you (License). Unless the License provides otherwise, you may not
 * use, modify, copy, publish, distribute, disclose or transmit this software or
 * the related documents without Intel's prior written permission.
 *
 * This software and the related documents are provided as is, with no express or
 * implied warranties, other than those that are expressly stated in the License.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * @file
 *
 */

#pragma once

#include "rss_core/lane/Dynamics.hpp"
#include "rss_core/lane/Position.hpp"
#include "rss_core/lane/Velocity.hpp"
#include "rss_core/time/Duration.hpp"
/*!
 * @brief namespace rss_core
 */
namespace rss_core {
/*!
 * @brief namespace lane
 */
namespace lane {

struct VehicleState
{
  ::rss_core::lane::Position position;
  ::rss_core::lane::Velocity velocity;
  ::rss_core::lane::Dynamics dynamics;
  ::rss_core::time::Duration responseTime;
  bool hasPriority;
};

} // namespace lane
} // namespace rss_core
