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

#include "rss/lane/Dynamics.hpp"
#include "rss/lane/Position.hpp"
#include "rss/lane/Velocity.hpp"
#include "rss/time/Duration.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace lane
 */
namespace lane {

struct VehicleState
{
  ::rss::lane::Position position;
  ::rss::lane::Velocity velocity;
  ::rss::lane::Dynamics dynamics;
  ::rss::time::Duration responseTime;
  bool hasPriority;
};

} // namespace lane
} // namespace rss
