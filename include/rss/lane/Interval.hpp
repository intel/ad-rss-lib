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

#include "rss/situation/Distance.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace lane
 */
namespace lane {

struct Interval
{
  ::rss::situation::Distance minimum{0.0};
  ::rss::situation::Distance maximum{0.0};
};

} // namespace lane
} // namespace rss
