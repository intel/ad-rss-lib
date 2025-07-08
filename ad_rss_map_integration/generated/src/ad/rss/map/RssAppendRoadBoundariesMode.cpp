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

#include "ad/rss/map/RssAppendRoadBoundariesMode.hpp"
#include <stdexcept>

std::string toString(::ad::rss::map::RssAppendRoadBoundariesMode const e)
{
  switch (e)
  {
    case ::ad::rss::map::RssAppendRoadBoundariesMode::Off:
      return std::string("::ad::rss::map::RssAppendRoadBoundariesMode::Off"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly:
      return std::string("::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes:
      return std::string(
        "::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors:
      return std::string("::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::map::RssAppendRoadBoundariesMode fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::map::RssAppendRoadBoundariesMode::Off")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::Off;
  }
  if (str == std::string("Off")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::Off;
  }
  if (str == std::string("::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly;
  }
  if (str == std::string("RouteOnly")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::RouteOnly;
  }
  if (str
      == std::string("::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes;
  }
  if (str == std::string("ExpandRouteToOppositeLanes")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes;
  }
  if (str == std::string("::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors;
  }
  if (str == std::string("ExpandRouteToAllNeighbors")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
