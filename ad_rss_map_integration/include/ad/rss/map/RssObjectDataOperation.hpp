// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/route/FullRoute.hpp>
#include "ad/rss/map/RssObjectData.hpp"
#include "ad/rss/map/RssObjectDataOnRoute.hpp"

/*!
 * @brief namespace rss
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

RssObjectDataOnRoute calculateRssObjectDataOnRoute(ad::map::route::FullRoute const &route,
                                                   RssObjectData const &object_data);

} // namespace map
} // namespace rss
} // namespace ad
