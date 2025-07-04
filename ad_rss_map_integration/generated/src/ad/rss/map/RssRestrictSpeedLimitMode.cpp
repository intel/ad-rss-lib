/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#include "ad/rss/map/RssRestrictSpeedLimitMode.hpp"
#include <stdexcept>

std::string toString(::ad::rss::map::RssRestrictSpeedLimitMode const e)
{
  switch (e)
  {
    case ::ad::rss::map::RssRestrictSpeedLimitMode::None:
      return std::string("::ad::rss::map::RssRestrictSpeedLimitMode::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit:
      return std::string("::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5:
      return std::string("::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10:
      return std::string("::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::map::RssRestrictSpeedLimitMode fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::map::RssRestrictSpeedLimitMode::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::None;
  }
  if (str == std::string("::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit;
  }
  if (str == std::string("ExactSpeedLimit")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit;
  }
  if (str == std::string("::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5;
  }
  if (str == std::string("IncreasedSpeedLimit5")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5;
  }
  if (str == std::string("::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10;
  }
  if (str == std::string("IncreasedSpeedLimit10")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
