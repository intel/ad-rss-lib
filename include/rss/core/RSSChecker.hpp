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

#include "rss/situation/Situation.hpp"
#include "rss/state/ResponseState.hpp"

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
 * @param[in] situation      the Situation that should be analyzed
 * @param[out] responseState the ResponseState for the current situation
 *
 * @return true if situation could be analyzed, false if there was an error during evaluation
 */
bool checkSituation(situation::Situation const &situation, state::ResponseState &responseState) noexcept;

} // namespace RSSChecker
} // namespace core
} // namespace rss
