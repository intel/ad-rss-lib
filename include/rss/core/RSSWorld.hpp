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

#include "rss/lane/Position.hpp"
#include "rss/situation/RelativePosition.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {

/*!
 * @brief namespace core
 */
namespace core {

/*!
 * @brief namespace RSSWorld
 */
namespace RSSWorld {

/*!
 * @brief calculate the relative position based on two positions
 *
 * @param[in] egoPosition                the ego position basis within the situation based coordinate system
 * @param[in] otherPosition              the other position basis within the situation based coordinate system
 * @param[in] isDrivingInOppositeDirection  flag indicating if the other vehicle is driving into the opposite direction
 */
situation::RelativePosition calcluateRelativePosition(lane::Position const &egoPosition,
                                                      lane::Position const &otherPosition,
                                                      bool const isDrivingInOppositeDirection) noexcept;

} // namespace RSSWorld
} // namespace core
} // namespace rss
