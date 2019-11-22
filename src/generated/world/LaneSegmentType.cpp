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

#include "ad_rss/world/LaneSegmentType.hpp"
#include <stdexcept>

std::string toString(::ad_rss::world::LaneSegmentType const e)
{
  switch (e)
  {
    case ::ad_rss::world::LaneSegmentType::Normal:
      return std::string("::ad_rss::world::LaneSegmentType::Normal"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::world::LaneSegmentType::Intersection:
      return std::string("::ad_rss::world::LaneSegmentType::Intersection"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::world::LaneSegmentType fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::world::LaneSegmentType::Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::world::LaneSegmentType::Normal;
  }
  if (str == std::string("Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::world::LaneSegmentType::Normal;
  }
  if (str == std::string("::ad_rss::world::LaneSegmentType::Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::world::LaneSegmentType::Intersection;
  }
  if (str == std::string("Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::world::LaneSegmentType::Intersection;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
