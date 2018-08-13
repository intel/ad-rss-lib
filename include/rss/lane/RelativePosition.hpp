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

#include "rss/lane/Distance.hpp"
#include "rss/lane/LateralRelativePosition.hpp"
#include "rss/lane/LongitudinalRelativePosition.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace lane
 */
namespace lane {

struct RelativePosition
{
  ::rss::lane::LongitudinalRelativePosition longitudinalPosition{::rss::lane::LongitudinalRelativePosition::Overlap};
  ::rss::lane::Distance longitudinalDistance{0.0};
  ::rss::lane::LateralRelativePosition lateralPosition{::rss::lane::LateralRelativePosition::Overlap};
  ::rss::lane::Distance lateralDistance{0.0};
  bool isDrivingInOppositeDirection{false};

  ::rss::lane::LongitudinalRelativePosition getLongitudinalPosition() const
  {
    return longitudinalPosition;
  }

  void setLongitudinalPosition(::rss::lane::LongitudinalRelativePosition const newVal)
  {
    longitudinalPosition = newVal;
  }

  ::rss::lane::LateralRelativePosition getLateralPosition() const
  {
    return lateralPosition;
  }

  void setLateralPosition(::rss::lane::LateralRelativePosition const newVal)
  {
    lateralPosition = newVal;
  }
};

} // namespace lane
} // namespace rss
