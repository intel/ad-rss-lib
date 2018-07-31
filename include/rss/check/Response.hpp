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

#include "rss/check/LateralResponse.hpp"
#include "rss/check/LongitudinalResponse.hpp"
#include "rss/object/Id.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace check
 */
namespace check {

struct Response
{
  ::rss::check::LongitudinalResponse longitudinalResponse{::rss::check::LongitudinalResponse::BrakeMin};
  ::rss::check::LateralResponse lateralResponseLeft{::rss::check::LateralResponse::None};
  ::rss::check::LateralResponse lateralResponseRight{::rss::check::LateralResponse::None};
  ::rss::object::Id id{0u};

  ::rss::check::LongitudinalResponse getLongitudinalResponse() const
  {
    return longitudinalResponse;
  }

  void setLongitudinalResponse(::rss::check::LongitudinalResponse const newVal)
  {
    longitudinalResponse = newVal;
  }

  ::rss::check::LateralResponse getLateralResponseLeft() const
  {
    return lateralResponseLeft;
  }

  void setLateralResponseLeft(::rss::check::LateralResponse const newVal)
  {
    lateralResponseLeft = newVal;
  }

  ::rss::check::LateralResponse getLateralResponseRight() const
  {
    return lateralResponseRight;
  }

  void setLateralResponseRight(::rss::check::LateralResponse const newVal)
  {
    lateralResponseRight = newVal;
  }
};

} // namespace check
} // namespace rss
