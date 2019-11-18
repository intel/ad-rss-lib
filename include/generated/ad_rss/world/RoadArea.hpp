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
#include "ad_rss/world/RoadSegment.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType RoadArea
 *
 * A RoadArea is defined by longitudinal neighboring road segments. The road segments within a road area have to be
 * ordered from start to end in respect to the driving direction.
 */
using RoadArea = std::vector<::ad_rss::world::RoadSegment>;

} // namespace world
} // namespace ad_rss
