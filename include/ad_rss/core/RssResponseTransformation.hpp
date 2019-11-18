// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad_rss/state/ProperResponse.hpp"
#include "ad_rss/world/AccelerationRestriction.hpp"
#include "ad_rss/world/WorldModel.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {

/*!
 * @brief namespace core
 */
namespace core {

/*!
 * @brief namespace RssResponseTransformation
 *
 * Namespace providing functions required to transform the proper response into restrictions
 * of the acceleration for the actuator control.
 */
namespace RssResponseTransformation {

/*!
 * @brief transformProperResponse
 *
 * Transform the proper response into restrictions of the acceleration for the actuator control.
 *
 * @param [in] worldModel - The current world model information.
 * @param [in] response - The proper overall response to be transformed.
 * @param [out] accelerationRestriction - The restrictions on the vehicle acceleration to become RSS safe.
 *
 * @return return true if the acceleration restrictions could be calculated, false otherwise.
 */
bool transformProperResponse(world::WorldModel const &worldModel,
                             state::ProperResponse const &response,
                             world::AccelerationRestriction &accelerationRestriction);

} // namespace RssResponseTransformation
} // namespace core
} // namespace ad_rss
