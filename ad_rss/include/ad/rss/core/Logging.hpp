// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
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
 * @brief namespace rss
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

/**
 * @brief get the ad::rss::core logger
 */
std::shared_ptr<spdlog::logger> getLogger();

/**
 * @brief get the log level of the ad::rss::core logger
 */
spdlog::level::level_enum getLogLevel();

/**
 * @brief set the log level of the ad::rss::core logger
 */
void setLogLevel(spdlog::level::level_enum const logLevel);

/**
 * @brief set the log level of the ad::rss::core logger from string
 *
 * uses spdlog::level::from_str() to convert to spdlog::level::level_enum
 */
void setLogLevel(std::string const &logLevel);

} // namespace core
} // namespace rss
} // namespace ad
