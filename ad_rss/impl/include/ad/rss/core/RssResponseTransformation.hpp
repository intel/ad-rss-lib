// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/world/AccelerationRestriction.hpp"
#include "ad/rss/world/WorldModel.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
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
 * @param [in] response - The proper overall response to be transformed.
 * @param [out] accelerationRestriction - The restrictions on the vehicle acceleration to become RSS safe.
 *
 * @return return true if the acceleration restrictions could be calculated, false otherwise.
 */
bool transformProperResponse(state::ProperResponse const &response,
                             world::AccelerationRestriction &accelerationRestriction);

} // namespace RssResponseTransformation
} // namespace core
} // namespace rss
} // namespace ad
