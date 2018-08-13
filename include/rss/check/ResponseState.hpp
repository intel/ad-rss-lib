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

#include "rss/check/LateralRssState.hpp"
#include "rss/check/LongitudinalRssState.hpp"
#include "rss/lane/SituationId.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace check
 */
namespace check {

struct ResponseState
{
  ::rss::lane::SituationId situationId{0u};
  ::rss::check::LongitudinalRssState longitudinalState;
  ::rss::check::LateralRssState lateralStateRight;
  ::rss::check::LateralRssState lateralStateLeft;
};

} // namespace check
} // namespace rss
