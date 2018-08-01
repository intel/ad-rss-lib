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

#include "rss/lane/Acceleration.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace lane
 */
namespace lane {

struct LongitudinalRssAccelerationValues
{
  ::rss::lane::Acceleration accelMax{0.0};
  ::rss::lane::Acceleration brakeMax{0.0};
  ::rss::lane::Acceleration brakeMin{0.0};
  ::rss::lane::Acceleration brakeMinCorrect{0.0};
};

} // namespace lane
} // namespace rss
