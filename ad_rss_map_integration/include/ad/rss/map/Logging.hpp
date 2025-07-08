// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <spdlog/logger.h>

/*!
 * @brief namespace ad
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

/**
 * @brief get the ad::rss::map logger
 */
std::shared_ptr<spdlog::logger> getLogger();

/**
 * @brief get the log level of the ad::rss::map logger
 */
spdlog::level::level_enum getLogLevel();

/**
 * @brief set the log level of the ad::rss::map logger
 */
void setLogLevel(spdlog::level::level_enum const logLevel);

/**
 * @brief set the log level of the ad::rss::map logger from string
 *
 * uses spdlog::level::from_str() to convert to spdlog::level::level_enum
 */
void setLogLevel(std::string const &logLevel);

} // namespace map
} // namespace rss
} // namespace ad
