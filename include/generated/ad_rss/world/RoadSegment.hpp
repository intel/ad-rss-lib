/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <memory>
#include <vector>
#include "ad_rss/world/LaneSegment.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType RoadSegment
 *
 * A RoadSegment is defined by lateral neighboring lane segments. The lane segments within a road segment have to be
 * ordered from left to right in respect to the driving direction defined by the road area.
 */
using RoadSegment = std::vector<::ad_rss::world::LaneSegment>;

} // namespace world
} // namespace ad_rss
