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

#include "rss_core/lane/RssAccelerationValues.hpp"
/*!
 * @brief namespace rss_core
 */
namespace rss_core {
/*!
 * @brief namespace lane
 */
namespace lane {

struct Dynamics
{
  ::rss_core::lane::RssAccelerationValues alphaLon;
  ::rss_core::lane::RssAccelerationValues alphaLat;
};

} // namespace lane
} // namespace rss_core
