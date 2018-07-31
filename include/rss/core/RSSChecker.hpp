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

#include "rss/check/Response.hpp"
#include "rss/lane/Situation.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {

/*!
 * @brief namespace core
 */
namespace core {

/*!
 * @brief namespace RSSChecker
 */
namespace RSSChecker {

/**
 * @brief check if the current situation is safe
 *
 * @param[in] situation the Situation that should be analyzed
 * @param[out] response the response for the current situation
 *
 * @return true if situation could be analyzed, false if there was an error during evaluation
 */
bool checkSituation(lane::Situation const &situation, check::Response &response);

} // namespace RSSChecker
} // namespace core
} // namespace rss
